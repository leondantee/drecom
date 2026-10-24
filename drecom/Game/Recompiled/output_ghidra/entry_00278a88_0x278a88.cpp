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

// Function: entry_00278a88
// Address: 0x278a88 - 0x278ac8
void entry_00278a88_0x278a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278a88_0x278a88");
#endif

    switch (ctx->pc) {
        case 0x278a9cu: goto label_278a9c;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ac0u: goto label_278ac0;
        default: break;
    }

    ctx->pc = 0x278a88u;

label_278a88:
    // 0x278a88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278a8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278a90: 0x8c241a88  lw          $a0, 0x1A88($at)
    ctx->pc = 0x278a90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621A88u));
    // 0x278a94: 0xc09e2b4  jal         func_278AD0
    ctx->pc = 0x278A94u;
    SET_GPR_U32(ctx, 31, 0x278A9Cu);
    ctx->pc = 0x278AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278AD0u, 0x278A94u, 0x278A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A9Cu;
label_278a9c:
    // 0x278a9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278aa0: 0x8c241a90  lw          $a0, 0x1A90($at)
    ctx->pc = 0x278aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621A90u));
    // 0x278aa4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x278aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x278aa8: 0xc42ce5d0  lwc1        $f12, -0x1A30($at)
    ctx->pc = 0x278aa8u;
    { uint32_t bits = FAST_READ32(0x38E5D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278aac: 0xc09e2b4  jal         func_278AD0
    ctx->pc = 0x278AACu;
    SET_GPR_U32(ctx, 31, 0x278AB4u);
    ctx->pc = 0x278AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278AD0u, 0x278AACu, 0x278AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AB4u;
label_278ab4:
    // 0x278ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x278ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278ab8: 0xc084964  jal         func_212590
    ctx->pc = 0x278AB8u;
    SET_GPR_U32(ctx, 31, 0x278AC0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x278AB8u, 0x278AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AC0u;
label_278ac0:
    // 0x278ac0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x278AC0u;
    {
        const bool branch_taken_0x278ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ac0) {
            ctx->pc = 0x278A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278a88;
        }
    }
    ctx->pc = 0x278AC8u;
}
