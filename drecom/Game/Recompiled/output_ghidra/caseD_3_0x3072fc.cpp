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

// Function: caseD_3
// Address: 0x3072fc - 0x307330
void caseD_3_0x3072fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x3072fc");
#endif

    switch (ctx->pc) {
        case 0x307308u: goto label_307308;
        default: break;
    }

    ctx->pc = 0x3072fcu;

    // 0x3072fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307300: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x307300u;
    SET_GPR_U32(ctx, 31, 0x307308u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307300u, 0x307308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307308u;
label_307308:
    // 0x307308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30730c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30730cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x307310: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x307310u;
    {
        const bool branch_taken_0x307310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307310) {
            ctx->pc = 0x307390u;
            return;
        }
    }
    ctx->pc = 0x307318u;
    // 0x307318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30731c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30731cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x307320: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x307320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x307324: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x307324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x307328: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x307328u;
    {
        const bool branch_taken_0x307328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307328) {
            ctx->pc = 0x307390u;
            return;
        }
    }
    ctx->pc = 0x307330u;
}
