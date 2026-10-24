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

// Function: entry_0034ae34
// Address: 0x34ae34 - 0x34ae58
void entry_0034ae34_0x34ae34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ae34_0x34ae34");
#endif

    ctx->pc = 0x34ae34u;

    // 0x34ae34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae38: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34ae3c: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34ae3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34ae40: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ae44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ae48: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34ae48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34ae4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34ae50: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x34AE50u;
    {
        const bool branch_taken_0x34ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae50) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34AE58u;
}
