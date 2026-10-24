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

// Function: Em0a_set_chi
// Address: 0x367f20 - 0x3680b8
void Em0a_set_chi_0x367f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_set_chi_0x367f20");
#endif

    switch (ctx->pc) {
        case 0x367f74u: goto label_367f74;
        case 0x367f80u: goto label_367f80;
        case 0x367fa4u: goto label_367fa4;
        case 0x367fb8u: goto label_367fb8;
        case 0x367fe4u: goto label_367fe4;
        case 0x368054u: goto label_368054;
        case 0x3680a4u: goto label_3680a4;
        default: break;
    }

    ctx->pc = 0x367f20u;

    // 0x367f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x367f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x367f24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x367f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x367f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367f2c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x367f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x367f30: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x367f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x367f34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x367f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367f38: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x367f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x367f3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x367f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x367f40: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x367f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x367f44: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x367f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x367f48: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x367f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x367f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367f50: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x367f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367f54: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x367f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367f58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x367f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x367f5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x367f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367f60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x367f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x367f64: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x367f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x367f68: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x367f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x367f6c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x367F6Cu;
    SET_GPR_U32(ctx, 31, 0x367F74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x367F6Cu, 0x367F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F74u;
label_367f74:
    // 0x367f74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x367f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x367f78: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x367F78u;
    SET_GPR_U32(ctx, 31, 0x367F80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x367F78u, 0x367F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F80u;
label_367f80:
    // 0x367f80: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x367f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367f84: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x367f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367f88: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x367f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x367f8c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x367f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367f90: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x367f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367f94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x367f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x367f98: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x367f98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x367f9c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x367F9Cu;
    SET_GPR_U32(ctx, 31, 0x367FA4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x367F9Cu, 0x367FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FA4u;
label_367fa4:
    // 0x367fa4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x367fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x367fa8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x367fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x367fac: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x367facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x367fb0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x367FB0u;
    SET_GPR_U32(ctx, 31, 0x367FB8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x367FB0u, 0x367FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FB8u;
label_367fb8:
    // 0x367fb8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x367fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x367fbc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x367fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367fc0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x367fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367fc4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x367fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x367fc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x367fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x367fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367fd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x367fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x367fd4: 0x24a51200  addiu       $a1, $a1, 0x1200
    ctx->pc = 0x367fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4608));
    // 0x367fd8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x367fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x367fdc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x367FDCu;
    SET_GPR_U32(ctx, 31, 0x367FE4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x367FDCu, 0x367FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FE4u;
label_367fe4:
    // 0x367fe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x367fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x367fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367fec: 0x0  nop
    ctx->pc = 0x367fecu;
    // NOP
    // 0x367ff0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x367ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x367ff4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x367ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367ff8: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x367ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x367ffc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x367ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x368000: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x368000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368004: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x368004u;
    {
        const bool branch_taken_0x368004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x368004) {
            ctx->pc = 0x36805Cu;
            goto label_36805c;
        }
    }
    ctx->pc = 0x36800Cu;
    // 0x36800c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x36800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368010: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368014: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368018: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36801c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x368024: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36802c: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x36802cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x368030: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x368030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368034: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x368034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368038: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36803c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x36803cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368040: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x368040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368044: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x368044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368048: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x368048u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36804c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x36804Cu;
    SET_GPR_U32(ctx, 31, 0x368054u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x36804Cu, 0x368054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368054u;
label_368054:
    // 0x368054: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x368054u;
    {
        const bool branch_taken_0x368054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368054) {
            ctx->pc = 0x3680A4u;
            goto label_3680a4;
        }
    }
    ctx->pc = 0x36805Cu;
label_36805c:
    // 0x36805c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x36805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368060: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368064: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36806c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x368074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36807c: 0x34440506  ori         $a0, $v0, 0x506
    ctx->pc = 0x36807cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1286);
    // 0x368080: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x368080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368084: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x368084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368088: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36808c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x36808cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368090: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x368090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368094: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x368094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368098: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x368098u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36809c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x36809Cu;
    SET_GPR_U32(ctx, 31, 0x3680A4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x36809Cu, 0x3680A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680A4u;
label_3680a4:
    // 0x3680a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3680a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3680a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3680a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3680ac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3680acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3680b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3680B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3680B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3680B8u;
}
