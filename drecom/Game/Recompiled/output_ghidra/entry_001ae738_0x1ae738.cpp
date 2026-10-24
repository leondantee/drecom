#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001ae738
// Address: 0x1ae738 - 0x1ae76c
void entry_001ae738_0x1ae738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae738_0x1ae738");
#endif

    ctx->pc = 0x1ae738u;

    // 0x1ae738: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae73c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae740: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae748: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae74c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae74cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae750: 0xa422b502  sh          $v0, -0x4AFE($at)
    ctx->pc = 0x1ae750u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948098), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae754: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae758: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae75c: 0x9422b502  lhu         $v0, -0x4AFE($at)
    ctx->pc = 0x1ae75cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294948098)));
    // 0x1ae760: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE760u;
    {
        const bool branch_taken_0x1ae760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae760) {
            ctx->pc = 0x1AE76Cu;
            return;
        }
    }
    ctx->pc = 0x1AE768u;
    // 0x1ae768: 0xa2200d86  sb          $zero, 0xD86($s1)
    ctx->pc = 0x1ae768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ae76cu;
}
