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

// Function: entry_0037932c
// Address: 0x37932c - 0x37936c
void entry_0037932c_0x37932c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037932c_0x37932c");
#endif

    switch (ctx->pc) {
        case 0x379338u: goto label_379338;
        default: break;
    }

    ctx->pc = 0x37932cu;

    // 0x37932c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379330: 0xc0de56c  jal         func_3795B0
    ctx->pc = 0x379330u;
    SET_GPR_U32(ctx, 31, 0x379338u);
    ctx->pc = 0x3795B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3795B0u, 0x379330u, 0x379338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379338u;
label_379338:
    // 0x379338: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x379338u;
    {
        const bool branch_taken_0x379338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379338) {
            ctx->pc = 0x37936Cu;
            return;
        }
    }
    ctx->pc = 0x379340u;
    // 0x379340: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x379340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379344: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379348: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x379348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37934c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379350: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x379350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x379354: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379358: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x379358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37935c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379360: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x379360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x379364: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x379364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x379368: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x379368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x37936cu;
}
