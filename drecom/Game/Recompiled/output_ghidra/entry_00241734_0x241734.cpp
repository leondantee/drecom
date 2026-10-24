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

// Function: entry_00241734
// Address: 0x241734 - 0x241760
void entry_00241734_0x241734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241734_0x241734");
#endif

    ctx->pc = 0x241734u;

    // 0x241734: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241738: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x241738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x24173c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x24173cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x241740: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x241744: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241744u;
    {
        const bool branch_taken_0x241744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241744) {
            ctx->pc = 0x241794u;
            return;
        }
    }
    ctx->pc = 0x24174Cu;
    // 0x24174c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241750: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x241750u;
    {
        const bool branch_taken_0x241750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x241750) {
            ctx->pc = 0x241760u;
            return;
        }
    }
    ctx->pc = 0x241758u;
    // 0x241758: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x241758u;
    {
        const bool branch_taken_0x241758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241758) {
            ctx->pc = 0x241760u;
            return;
        }
    }
    ctx->pc = 0x241760u;
}
