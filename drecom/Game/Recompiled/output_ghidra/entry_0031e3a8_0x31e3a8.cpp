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

// Function: entry_0031e3a8
// Address: 0x31e3a8 - 0x31e3e8
void entry_0031e3a8_0x31e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e3a8_0x31e3a8");
#endif

    switch (ctx->pc) {
        case 0x31e3bcu: goto label_31e3bc;
        case 0x31e3d4u: goto label_31e3d4;
        case 0x31e3e0u: goto label_31e3e0;
        default: break;
    }

    ctx->pc = 0x31e3a8u;

label_31e3a8:
    // 0x31e3a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31e3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e3ac: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e3b0: 0x8c24af50  lw          $a0, -0x50B0($at)
    ctx->pc = 0x31e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF50u));
    // 0x31e3b4: 0xc0c78fc  jal         func_31E3F0
    ctx->pc = 0x31E3B4u;
    SET_GPR_U32(ctx, 31, 0x31E3BCu);
    ctx->pc = 0x31E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3F0u, 0x31E3B4u, 0x31E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3BCu;
label_31e3bc:
    // 0x31e3bc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e3c0: 0x8c24af58  lw          $a0, -0x50A8($at)
    ctx->pc = 0x31e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF58u));
    // 0x31e3c4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x31e3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x31e3c8: 0xc42c9d70  lwc1        $f12, -0x6290($at)
    ctx->pc = 0x31e3c8u;
    { uint32_t bits = FAST_READ32(0x399D70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31e3cc: 0xc0c78fc  jal         func_31E3F0
    ctx->pc = 0x31E3CCu;
    SET_GPR_U32(ctx, 31, 0x31E3D4u);
    ctx->pc = 0x31E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3F0u, 0x31E3CCu, 0x31E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3D4u;
label_31e3d4:
    // 0x31e3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e3d8: 0xc084964  jal         func_212590
    ctx->pc = 0x31E3D8u;
    SET_GPR_U32(ctx, 31, 0x31E3E0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31E3D8u, 0x31E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3E0u;
label_31e3e0:
    // 0x31e3e0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x31E3E0u;
    {
        const bool branch_taken_0x31e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e3e0) {
            ctx->pc = 0x31E3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e3a8;
        }
    }
    ctx->pc = 0x31E3E8u;
}
