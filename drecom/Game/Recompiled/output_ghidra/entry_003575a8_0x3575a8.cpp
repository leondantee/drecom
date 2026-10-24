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

// Function: entry_003575a8
// Address: 0x3575a8 - 0x3575e8
void entry_003575a8_0x3575a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003575a8_0x3575a8");
#endif

    switch (ctx->pc) {
        case 0x3575bcu: goto label_3575bc;
        case 0x3575d4u: goto label_3575d4;
        case 0x3575e0u: goto label_3575e0;
        default: break;
    }

    ctx->pc = 0x3575a8u;

label_3575a8:
    // 0x3575a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3575a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3575ac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3575acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3575b0: 0x8c245e50  lw          $a0, 0x5E50($at)
    ctx->pc = 0x3575b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x895E50u));
    // 0x3575b4: 0xc0d5d7c  jal         func_3575F0
    ctx->pc = 0x3575B4u;
    SET_GPR_U32(ctx, 31, 0x3575BCu);
    ctx->pc = 0x3575F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3575F0u, 0x3575B4u, 0x3575BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575BCu;
label_3575bc:
    // 0x3575bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3575bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3575c0: 0x8c245e58  lw          $a0, 0x5E58($at)
    ctx->pc = 0x3575c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x895E58u));
    // 0x3575c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x3575c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x3575c8: 0xc42ca6c0  lwc1        $f12, -0x5940($at)
    ctx->pc = 0x3575c8u;
    { uint32_t bits = FAST_READ32(0x3AA6C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3575cc: 0xc0d5d7c  jal         func_3575F0
    ctx->pc = 0x3575CCu;
    SET_GPR_U32(ctx, 31, 0x3575D4u);
    ctx->pc = 0x3575F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3575F0u, 0x3575CCu, 0x3575D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575D4u;
label_3575d4:
    // 0x3575d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3575d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3575d8: 0xc084964  jal         func_212590
    ctx->pc = 0x3575D8u;
    SET_GPR_U32(ctx, 31, 0x3575E0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x3575D8u, 0x3575E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3575E0u;
label_3575e0:
    // 0x3575e0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3575E0u;
    {
        const bool branch_taken_0x3575e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3575e0) {
            ctx->pc = 0x3575A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3575a8;
        }
    }
    ctx->pc = 0x3575E8u;
}
