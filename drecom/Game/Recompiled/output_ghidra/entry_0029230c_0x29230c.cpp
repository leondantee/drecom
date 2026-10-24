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

// Function: entry_0029230c
// Address: 0x29230c - 0x292330
void entry_0029230c_0x29230c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029230c_0x29230c");
#endif

    switch (ctx->pc) {
        case 0x292314u: goto label_292314;
        case 0x29231cu: goto label_29231c;
        case 0x292328u: goto label_292328;
        default: break;
    }

    ctx->pc = 0x29230cu;

    // 0x29230c: 0xc0a493c  jal         func_2924F0
    ctx->pc = 0x29230Cu;
    SET_GPR_U32(ctx, 31, 0x292314u);
    ctx->pc = 0x2924F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2924F0u, 0x29230Cu, 0x292314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292314u;
label_292314:
    // 0x292314: 0xc0a5640  jal         func_295900
    ctx->pc = 0x292314u;
    SET_GPR_U32(ctx, 31, 0x29231Cu);
    ctx->pc = 0x295900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295900u, 0x292314u, 0x29231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29231Cu;
label_29231c:
    // 0x29231c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292320: 0xc06750c  jal         func_19D430
    ctx->pc = 0x292320u;
    SET_GPR_U32(ctx, 31, 0x292328u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x292320u, 0x292328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292328u;
label_292328:
    // 0x292328: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x292328u;
    {
        const bool branch_taken_0x292328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292328) {
            ctx->pc = 0x2922E0u;
            return;
        }
    }
    ctx->pc = 0x292330u;
}
