#include<gazebo/gazebo.hh>

namespace gazebo{
   class WorldPluginMyBot : public WorldPlugin()
         {
           public:WorldPluginMyBot(): WorldPlugin()
                  {
                    printf("Welcome to Salabson World of ROS");
                  }
          public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
                  {
                  
                  }
         };
         GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyBot)

}
