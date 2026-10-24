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

// Function: default
// Address: 0x27c39c - 0x27c400
void ps2_default_0x27c39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x27c39c");
#endif

    switch (ctx->pc) {
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3f8u: goto label_27c3f8;
        default: break;
    }

    ctx->pc = 0x27c39cu;

    // 0x27c39c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x27c39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27c3a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c3a4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27c3a8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x27c3a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27c3ac: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27c3acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27c3b0: 0xc096234  jal         func_2588D0
    ctx->pc = 0x27C3B0u;
    SET_GPR_U32(ctx, 31, 0x27C3B8u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x27C3B0u, 0x27C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3B8u;
label_27c3b8:
    // 0x27c3b8: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x27c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c3bc: 0x3c023b8e  lui         $v0, 0x3B8E
    ctx->pc = 0x27c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15246 << 16));
    // 0x27c3c0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27c3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c3c8: 0x0  nop
    ctx->pc = 0x27c3c8u;
    // NOP
    // 0x27c3cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c3d0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x27c3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x27c3d4: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x27c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27c3d8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27C3D8u;
    SET_GPR_U32(ctx, 31, 0x27C3E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27C3D8u, 0x27C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3E0u;
label_27c3e0:
    // 0x27c3e0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x27c3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x27c3e4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c3e8: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x27c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x27c3ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c3f0: 0xc084964  jal         func_212590
    ctx->pc = 0x27C3F0u;
    SET_GPR_U32(ctx, 31, 0x27C3F8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C3F0u, 0x27C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3F8u;
label_27c3f8:
    // 0x27c3f8: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
    ctx->pc = 0x27C3F8u;
    {
        const bool branch_taken_0x27c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3f8) {
            ctx->pc = 0x27C158u;
            return;
        }
    }
    ctx->pc = 0x27C400u;
}
