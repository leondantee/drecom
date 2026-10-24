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

// Function: entry_00209290
// Address: 0x209290 - 0x2092c0
void entry_00209290_0x209290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209290_0x209290");
#endif

    switch (ctx->pc) {
        case 0x20929cu: goto label_20929c;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b8u: goto label_2092b8;
        default: break;
    }

    ctx->pc = 0x209290u;

    // 0x209290: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209294: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x209294u;
    SET_GPR_U32(ctx, 31, 0x20929Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x209294u, 0x20929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20929Cu;
label_20929c:
    // 0x20929c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2092a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2092a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2092a4: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2092A4u;
    SET_GPR_U32(ctx, 31, 0x2092ACu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2092A4u, 0x2092ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092ACu;
label_2092ac:
    // 0x2092ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2092acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2092b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2092B0u;
    SET_GPR_U32(ctx, 31, 0x2092B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2092B0u, 0x2092B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092B8u;
label_2092b8:
    // 0x2092b8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2092B8u;
    {
        const bool branch_taken_0x2092b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092b8) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x2092C0u;
}
