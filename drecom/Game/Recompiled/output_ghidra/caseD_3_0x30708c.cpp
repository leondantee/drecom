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
// Address: 0x30708c - 0x3070c0
void caseD_3_0x30708c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x30708c");
#endif

    switch (ctx->pc) {
        case 0x307098u: goto label_307098;
        default: break;
    }

    ctx->pc = 0x30708cu;

    // 0x30708c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307090: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x307090u;
    SET_GPR_U32(ctx, 31, 0x307098u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307090u, 0x307098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307098u;
label_307098:
    // 0x307098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30709c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30709cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3070a0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3070A0u;
    {
        const bool branch_taken_0x3070a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070a0) {
            ctx->pc = 0x307120u;
            return;
        }
    }
    ctx->pc = 0x3070A8u;
    // 0x3070a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3070ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3070acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3070b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3070b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3070b4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3070b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3070b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3070B8u;
    {
        const bool branch_taken_0x3070b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070b8) {
            ctx->pc = 0x307120u;
            return;
        }
    }
    ctx->pc = 0x3070C0u;
}
