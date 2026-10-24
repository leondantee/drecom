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

// Function: Em0a_R1_escape_L
// Address: 0x3669e0 - 0x366b50
void Em0a_R1_escape_L_0x3669e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_escape_L_0x3669e0");
#endif

    switch (ctx->pc) {
        case 0x366a34u: goto label_366a34;
        case 0x366a88u: goto label_366a88;
        case 0x366a94u: goto label_366a94;
        case 0x366aecu: goto label_366aec;
        case 0x366af8u: goto label_366af8;
        default: break;
    }

    ctx->pc = 0x3669e0u;

    // 0x3669e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3669e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3669e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3669e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3669e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3669e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3669ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3669ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3669f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3669f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3669f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3669f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3669f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3669f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3669fc: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3669FCu;
    {
        const bool branch_taken_0x3669fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3669fc) {
            ctx->pc = 0x366A78u;
            goto label_366a78;
        }
    }
    ctx->pc = 0x366A04u;
    // 0x366a04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366A04u;
    {
        const bool branch_taken_0x366a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366a04) {
            ctx->pc = 0x366A14u;
            goto label_366a14;
        }
    }
    ctx->pc = 0x366A0Cu;
    // 0x366a0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x366A0Cu;
    {
        const bool branch_taken_0x366a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366a0c) {
            ctx->pc = 0x366B40u;
            goto label_366b40;
        }
    }
    ctx->pc = 0x366A14u;
label_366a14:
    // 0x366a14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366a20: 0x2406051c  addiu       $a2, $zero, 0x51C
    ctx->pc = 0x366a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x366a24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366a28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366a2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366A2Cu;
    SET_GPR_U32(ctx, 31, 0x366A34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366A2Cu, 0x366A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A34u;
label_366a34:
    // 0x366a34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x366a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366a38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a3c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a40: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x366a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x366a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a4c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x366a50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366a54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a58: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x366a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x366a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366a60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a64: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x366a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x366a68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a6c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366a74: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366a78:
    // 0x366a78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a7c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x366a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366a80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366A80u;
    SET_GPR_U32(ctx, 31, 0x366A88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366A80u, 0x366A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A88u;
label_366a88:
    // 0x366a88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a8c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366A8Cu;
    SET_GPR_U32(ctx, 31, 0x366A94u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366A8Cu, 0x366A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A94u;
label_366a94:
    // 0x366a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a98: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x366a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366a9c: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x366a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
    // 0x366aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366aa4: 0x0  nop
    ctx->pc = 0x366aa4u;
    // NOP
    // 0x366aa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x366aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x366aac: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x366aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x366ab0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ab4: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x366ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366abc: 0x0  nop
    ctx->pc = 0x366abcu;
    // NOP
    // 0x366ac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x366ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366ac4: 0x0  nop
    ctx->pc = 0x366ac4u;
    // NOP
    // 0x366ac8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x366AC8u;
    {
        const bool branch_taken_0x366ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x366ac8) {
            ctx->pc = 0x366ADCu;
            goto label_366adc;
        }
    }
    ctx->pc = 0x366AD0u;
    // 0x366ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366ad4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ad8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_366adc:
    // 0x366adc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ae0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366ae4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366AE4u;
    SET_GPR_U32(ctx, 31, 0x366AECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366AE4u, 0x366AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AECu;
label_366aec:
    // 0x366aec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366af0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366AF0u;
    SET_GPR_U32(ctx, 31, 0x366AF8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366AF0u, 0x366AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AF8u;
label_366af8:
    // 0x366af8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366afc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366b00: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x366B00u;
    {
        const bool branch_taken_0x366b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b00) {
            ctx->pc = 0x366B40u;
            goto label_366b40;
        }
    }
    ctx->pc = 0x366B08u;
    // 0x366b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366b20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x366b28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x366b30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x366b38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b3c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x366b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_366b40:
    // 0x366b40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x366b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366b44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x366b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366b48: 0x3e00008  jr          $ra
    ctx->pc = 0x366B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366B50u;
}
