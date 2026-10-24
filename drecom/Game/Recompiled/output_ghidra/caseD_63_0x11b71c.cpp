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

// Function: caseD_63
// Address: 0x11b71c - 0x11b73c
void caseD_63_0x11b71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_63_0x11b71c");
#endif

    ctx->pc = 0x11b71cu;

    // 0x11b71c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b720: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x11b720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11b724: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x11b724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b728: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b72c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x11b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b730: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11b730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11b734: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x11B734u;
    {
        const bool branch_taken_0x11b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B734u;
        // 0x11b738: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b734) {
            ctx->pc = 0x11BC5Cu;
            return;
        }
    }
    ctx->pc = 0x11B73Cu;
}
