#include "student1drawgraph.h"


const char* nameOfStudent1(){
    return  "Ahmed Elhasan";
}


void studentsDrawGraph(QPainter& painter,  const std::vector<Node>& graph){


//    for (const Node& node : graph) {
//        painter.setBrush(Qt::white);
//        painter.setPen(Qt::black);
//        painter.drawEllipse(node._point, 1, 1);
//    }


//    for (const Node& node : graph) {
//        for (const Arc& arc : node._outputs) {
//            if (arc.m_isVisible) {
//                const Node& destNode = graph[arc.m_ixDestination];
//                painter.setPen(Qt::red);
//                painter.drawLine(node._point, destNode._point);
//            }
//            }
//        }

    for(const Node &node : graph){
        painter.fillRect(node._point.x(),node._point.y(),1,1,Qt::black);
        for(const Arc &output : node._outputs){
            if(output.m_isVisible)
                painter.drawLine(node._point,graph[ output.m_ixDestination]._point);
        }
    }



    //    for (Ixnode ix=0; ix<graph.size() ; ix+=1){
    //        const Node& node = graph[ix];
    //        painter.fillRect(node._point.x(), node._point.y(),1,1, Qt::black);


    //        for(Ixnode j =0 ; j< node._outputs.size(); j++ ){

    //            Arc output = node._outputs[ix];
    //            Node ddd= graph[output.m_ixDestination];
    //            if(output.m_isVisible){
    //                painter.drawLine(node._point,ddd._point );
    //            }
    //        }
    //    }




    //TODO

}


