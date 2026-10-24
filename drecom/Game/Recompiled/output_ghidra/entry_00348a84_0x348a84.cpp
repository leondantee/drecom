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

// Function: entry_00348a84
// Address: 0x348a84 - 0x348b20
void entry_00348a84_0x348a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348a84_0x348a84");
#endif

    switch (ctx->pc) {
        case 0x348ad4u: goto label_348ad4;
        case 0x348ae4u: goto label_348ae4;
        case 0x348af8u: goto label_348af8;
        case 0x348b08u: goto label_348b08;
        default: break;
    }

    ctx->pc = 0x348a84u;

    // 0x348a84: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x348a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348a88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x348a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348a8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x348a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x348a90: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348a94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x348a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348a98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x348a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x348a9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x348a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348aa0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x348aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x348aa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x348aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x348aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x348aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x348aac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x348aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348ab0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x348ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x348ab4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ab8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x348ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348abc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x348abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x348ac0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x348ac0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348ac4: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x348ac8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x348ac8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348acc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x348ACCu;
    SET_GPR_U32(ctx, 31, 0x348AD4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x348ACCu, 0x348AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AD4u;
label_348ad4:
    // 0x348ad4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x348ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x348ad8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x348ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x348adc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348ADCu;
    SET_GPR_U32(ctx, 31, 0x348AE4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348ADCu, 0x348AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AE4u;
label_348ae4:
    // 0x348ae4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x348ae8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x348ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x348aec: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x348aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x348af0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348AF0u;
    SET_GPR_U32(ctx, 31, 0x348AF8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348AF0u, 0x348AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AF8u;
label_348af8:
    // 0x348af8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x348af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x348afc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x348afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x348b00: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348B00u;
    SET_GPR_U32(ctx, 31, 0x348B08u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348B00u, 0x348B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B08u;
label_348b08:
    // 0x348b08: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b0c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x348b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x348b10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348b14: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x348b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348b18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348b1c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x348b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    ctx->pc = 0x348b20u;
}
