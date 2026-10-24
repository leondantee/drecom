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

// Function: entry_002f3cb0
// Address: 0x2f3cb0 - 0x2f3d38
void entry_002f3cb0_0x2f3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3cb0_0x2f3cb0");
#endif

    switch (ctx->pc) {
        case 0x2f3d24u: goto label_2f3d24;
        default: break;
    }

    ctx->pc = 0x2f3cb0u;

    // 0x2f3cb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3cb4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f3cb4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3cb8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f3cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f3cbc: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2f3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2f3cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3cc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3cc8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f3cc8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ccc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f3cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f3cd0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f3cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f3cd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3cd8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f3cd8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3cdc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f3cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f3ce0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3ce8: 0x0  nop
    ctx->pc = 0x2f3ce8u;
    // NOP
    // 0x2f3cec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f3cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f3cf0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2f3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2f3cf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3cf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3cfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f3cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f3d00: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x2f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x2f3d04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2f3d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2f3d08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3d0c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f3d0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f3d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3d14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f3d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f3d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3d1c: 0xc086488  jal         func_219220
    ctx->pc = 0x2F3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D24u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F3D1Cu, 0x2F3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D24u;
label_2f3d24:
    // 0x2f3d24: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f3d24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3d28: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f3d2c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2f3d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f3d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3D38u;
}
