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

// Function: entry_0015f3b0
// Address: 0x15f3b0 - 0x15f3ec
void entry_0015f3b0_0x15f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f3b0_0x15f3b0");
#endif

    switch (ctx->pc) {
        case 0x15f3d8u: goto label_15f3d8;
        default: break;
    }

    ctx->pc = 0x15f3b0u;

    // 0x15f3b0: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x15f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f3b4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x15f3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f3bc: 0x0  nop
    ctx->pc = 0x15f3bcu;
    // NOP
    // 0x15f3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f3c4: 0x0  nop
    ctx->pc = 0x15f3c4u;
    // NOP
    // 0x15f3c8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15F3C8u;
    {
        const bool branch_taken_0x15f3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f3c8) {
            ctx->pc = 0x15F3ECu;
            return;
        }
    }
    ctx->pc = 0x15F3D0u;
    // 0x15f3d0: 0xc057c40  jal         func_15F100
    ctx->pc = 0x15F3D0u;
    SET_GPR_U32(ctx, 31, 0x15F3D8u);
    ctx->pc = 0x15F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F100u, 0x15F3D0u, 0x15F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3D8u;
label_15f3d8:
    // 0x15f3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F3D8u;
    {
        const bool branch_taken_0x15f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3d8) {
            ctx->pc = 0x15F3ECu;
            return;
        }
    }
    ctx->pc = 0x15F3E0u;
    // 0x15f3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f3e4: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x15F3E4u;
    {
        const bool branch_taken_0x15f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3e4) {
            ctx->pc = 0x15F8E4u;
            return;
        }
    }
    ctx->pc = 0x15F3ECu;
}
