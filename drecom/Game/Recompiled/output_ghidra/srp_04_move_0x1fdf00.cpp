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

// Function: srp_04_move
// Address: 0x1fdf00 - 0x1fe92c
void srp_04_move_0x1fdf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_04_move_0x1fdf00");
#endif

    switch (ctx->pc) {
        case 0x1fdf40u: goto label_1fdf40;
        case 0x1fdf64u: goto label_1fdf64;
        case 0x1fdfd4u: goto label_1fdfd4;
        case 0x1fdffcu: goto label_1fdffc;
        case 0x1fe020u: goto label_1fe020;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0c0u: goto label_1fe0c0;
        case 0x1fe100u: goto label_1fe100;
        case 0x1fe124u: goto label_1fe124;
        case 0x1fe158u: goto label_1fe158;
        case 0x1fe1bcu: goto label_1fe1bc;
        case 0x1fe33cu: goto label_1fe33c;
        case 0x1fe43cu: goto label_1fe43c;
        case 0x1fe504u: goto label_1fe504;
        case 0x1fe6c4u: goto label_1fe6c4;
        case 0x1fe79cu: goto label_1fe79c;
        case 0x1fe844u: goto label_1fe844;
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe884u: goto label_1fe884;
        case 0x1fe8bcu: goto label_1fe8bc;
        default: break;
    }

    ctx->pc = 0x1fdf00u;

    // 0x1fdf00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fdf04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1fdf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1fdf08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fdf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fdf0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fdf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fdf10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdf14: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1fdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1fdf18: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1fdf18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fdf1c: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1fdf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf20: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x1fdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x1fdf24: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FDF24u;
    {
        const bool branch_taken_0x1fdf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf24) {
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDF2Cu;
    // 0x1fdf2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf30: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdf30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdf34: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fdf34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdf38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FDF38u;
    {
        const bool branch_taken_0x1fdf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf38) {
            ctx->pc = 0x1FDF98u;
            goto label_1fdf98;
        }
    }
    ctx->pc = 0x1FDF40u;
label_1fdf40:
    // 0x1fdf40: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdf44: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fdf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf48: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1fdf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fdf4c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1fdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdf50: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1fdf50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdf54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf58: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1fdf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fdf5c: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x1FDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF64u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x1FDF64u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDF64u) { return; }
    ctx->pc = 0x1FDF64u;
label_1fdf64:
    // 0x1fdf64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fdf64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fdf68: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdf6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdf70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fdf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdf74: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fdf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdf78: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1fdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1fdf7c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fdf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdf84: 0x0  nop
    ctx->pc = 0x1fdf84u;
    // NOP
    // 0x1fdf88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fdf88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fdf8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fdf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fdf90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fdf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdf94: 0x0  nop
    ctx->pc = 0x1fdf94u;
    // NOP
label_1fdf98:
    // 0x1fdf98: 0x1600ffe9  bnez        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1FDF98u;
    {
        const bool branch_taken_0x1fdf98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf98) {
            ctx->pc = 0x1FDF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdf40;
        }
    }
    ctx->pc = 0x1FDFA0u;
    // 0x1fdfa0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1FDFA0u;
    {
        const bool branch_taken_0x1fdfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfa0) {
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FDFA8u;
label_1fdfa8:
    // 0x1fdfa8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fdfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfac: 0x8ca40354  lw          $a0, 0x354($a1)
    ctx->pc = 0x1fdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x1fdfb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdfb4: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDFB4u;
    {
        const bool branch_taken_0x1fdfb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fdfb4) {
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FDFBCu;
    // 0x1fdfbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfc0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdfc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdfc8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fdfc8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fdfcc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FDFCCu;
    {
        const bool branch_taken_0x1fdfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfcc) {
            ctx->pc = 0x1FE050u;
            goto label_1fe050;
        }
    }
    ctx->pc = 0x1FDFD4u;
label_1fdfd4:
    // 0x1fdfd4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdfd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfdc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fdfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdfe0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1fdfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdfe4: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1fdfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdfe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fdfec: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fdff0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fdff4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1FDFF4u;
    SET_GPR_U32(ctx, 31, 0x1FDFFCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1FDFFCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDFFCu) { return; }
    ctx->pc = 0x1FDFFCu;
label_1fdffc:
    // 0x1fdffc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fdffcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe000: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1fe000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1fe004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1fe004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fe008: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe00c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe010: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe014: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fe014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe018: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1FE018u;
    SET_GPR_U32(ctx, 31, 0x1FE020u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1FE020u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FE020u) { return; }
    ctx->pc = 0x1FE020u;
label_1fe020:
    // 0x1fe020: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe020u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe024: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe028: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe02c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fe02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe030: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fe030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe034: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1fe034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1fe038: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fe038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fe03c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fe03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe040: 0x0  nop
    ctx->pc = 0x1fe040u;
    // NOP
    // 0x1fe044: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe048: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fe048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fe04c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fe050:
    // 0x1fe050: 0x1600ffe0  bnez        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1FE050u;
    {
        const bool branch_taken_0x1fe050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe050) {
            ctx->pc = 0x1FDFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdfd4;
        }
    }
    ctx->pc = 0x1FE058u;
label_1fe058:
    // 0x1fe058: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe05c: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1fe05cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1fe060: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe064: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1fe064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1fe068: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FE068u;
    {
        const bool branch_taken_0x1fe068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe068) {
            ctx->pc = 0x1FE0E0u;
            goto label_1fe0e0;
        }
    }
    ctx->pc = 0x1FE070u;
    // 0x1fe070: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe074: 0x94640340  lhu         $a0, 0x340($v1)
    ctx->pc = 0x1fe074u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fe078: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1fe078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fe07c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fe07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fe080: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FE080u;
    {
        const bool branch_taken_0x1fe080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe080) {
            ctx->pc = 0x1FE14Cu;
            goto label_1fe14c;
        }
    }
    ctx->pc = 0x1FE088u;
    // 0x1fe088: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe08c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe090: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1fe094: 0x8c650320  lw          $a1, 0x320($v1)
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x1fe098: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FE098u;
    SET_GPR_U32(ctx, 31, 0x1FE0A0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FE0A0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FE0A0u) { return; }
    ctx->pc = 0x1FE0A0u;
label_1fe0a0:
    // 0x1fe0a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe0a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe0a4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0b0: 0x24a50380  addiu       $a1, $a1, 0x380
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x1fe0b4: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fe0b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FE0B8u;
    SET_GPR_U32(ctx, 31, 0x1FE0C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FE0C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FE0C0u) { return; }
    ctx->pc = 0x1FE0C0u;
label_1fe0c0:
    // 0x1fe0c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1fe0c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe0c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fe0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fe0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe0cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0d0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fe0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fe0d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fe0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe0d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FE0D8u;
    {
        const bool branch_taken_0x1fe0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0d8) {
            ctx->pc = 0x1FE14Cu;
            goto label_1fe14c;
        }
    }
    ctx->pc = 0x1FE0E0u;
label_1fe0e0:
    // 0x1fe0e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0e4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe0ec: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x1fe0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x1fe0f0: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x1fe0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x1fe0f4: 0x24660300  addiu       $a2, $v1, 0x300
    ctx->pc = 0x1fe0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x1fe0f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FE0F8u;
    SET_GPR_U32(ctx, 31, 0x1FE100u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FE0F8u, 0x1FE100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE100u;
label_1fe100:
    // 0x1fe100: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe100u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe104: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe108: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe10c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe110: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x1fe110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x1fe114: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x1fe114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x1fe118: 0x246602b0  addiu       $a2, $v1, 0x2B0
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fe11c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FE11Cu;
    SET_GPR_U32(ctx, 31, 0x1FE124u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FE11Cu, 0x1FE124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE124u;
label_1fe124:
    // 0x1fe124: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fe124u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe128: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1fe128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe12c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fe12cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe130: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe134: 0xe46002bc  swc1        $f0, 0x2BC($v1)
    ctx->pc = 0x1fe134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 700), bits); }
    // 0x1fe138: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe13c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x1fe140: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1fe140u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe144: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe148: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1fe148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1fe14c:
    // 0x1fe14c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe14cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe150: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE198u;
            goto label_1fe198;
        }
    }
    ctx->pc = 0x1FE158u;
label_1fe158:
    // 0x1fe158: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe15c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe15cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe160: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe164: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1fe164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fe168: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe16c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe174: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe174u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe178: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe17c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe184: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe188: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe188u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe18c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe190: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe190u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fe194: 0x0  nop
    ctx->pc = 0x1fe194u;
    // NOP
label_1fe198:
    // 0x1fe198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe19c: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe19cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe1a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe1a4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe1a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe1a8: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FE1A8u;
    {
        const bool branch_taken_0x1fe1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1a8) {
            ctx->pc = 0x1FE158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe158;
        }
    }
    ctx->pc = 0x1FE1B0u;
    // 0x1fe1b0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fe1b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe1b4: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x1FE1B4u;
    {
        const bool branch_taken_0x1fe1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1b4) {
            ctx->pc = 0x1FE820u;
            goto label_1fe820;
        }
    }
    ctx->pc = 0x1FE1BCu;
label_1fe1bc:
    // 0x1fe1bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe1c0: 0x90650347  lbu         $a1, 0x347($v1)
    ctx->pc = 0x1fe1c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fe1c4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fe1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe1c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe1cc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fe1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe1d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe1d4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fe1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe1d8: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
    ctx->pc = 0x1FE1D8u;
    {
        const bool branch_taken_0x1fe1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1d8) {
            ctx->pc = 0x1FE580u;
            goto label_1fe580;
        }
    }
    ctx->pc = 0x1FE1E0u;
    // 0x1fe1e0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe1e4: 0x92030abc  lbu         $v1, 0xABC($s0)
    ctx->pc = 0x1fe1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2748)));
    // 0x1fe1e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe1ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe1f0: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1FE1F0u;
    {
        const bool branch_taken_0x1fe1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe1f0) {
            ctx->pc = 0x1FE4B8u;
            goto label_1fe4b8;
        }
    }
    ctx->pc = 0x1FE1F8u;
    // 0x1fe1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe1fc: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FE1FCu;
    {
        const bool branch_taken_0x1fe1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe1fc) {
            ctx->pc = 0x1FE2C8u;
            goto label_1fe2c8;
        }
    }
    ctx->pc = 0x1FE204u;
    // 0x1fe204: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE204u;
    {
        const bool branch_taken_0x1fe204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe204) {
            ctx->pc = 0x1FE214u;
            goto label_1fe214;
        }
    }
    ctx->pc = 0x1FE20Cu;
    // 0x1fe20c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x1FE20Cu;
    {
        const bool branch_taken_0x1fe20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe20c) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE214u;
label_1fe214:
    // 0x1fe214: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe218: 0x90a40346  lbu         $a0, 0x346($a1)
    ctx->pc = 0x1fe218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1fe21c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe220: 0xa0a30346  sb          $v1, 0x346($a1)
    ctx->pc = 0x1fe220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe224: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe228: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x1fe228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fe22c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe230: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x1fe230u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe234: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe238: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe23c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe240: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fe240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe244: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe248: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe24c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe250: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe254: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe258: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe25c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe260: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1fe260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe264: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe268: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe26c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe26cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe270: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe274: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe278: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe27c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1fe27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe280: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe284: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe288: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe28c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe28cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe290: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe294: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x1fe294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1fe298: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe29c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2a0: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe2a4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fe2a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe2a8: 0x204082a  slt         $at, $s0, $a0
    ctx->pc = 0x1fe2a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe2ac: 0x1420015a  bnez        $at, . + 4 + (0x15A << 2)
    ctx->pc = 0x1FE2ACu;
    {
        const bool branch_taken_0x1fe2ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2ac) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE2B4u;
    // 0x1fe2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe2b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2bc: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe2c0: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1FE2C0u;
    {
        const bool branch_taken_0x1fe2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2c0) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE2C8u;
label_1fe2c8:
    // 0x1fe2c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2cc: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fe2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fe2d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe2d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fe2d8: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FE2D8u;
    {
        const bool branch_taken_0x1fe2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fe2d8) {
            ctx->pc = 0x1FE3BCu;
            goto label_1fe3bc;
        }
    }
    ctx->pc = 0x1FE2E0u;
    // 0x1fe2e0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2e4: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fe2e8: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FE2E8u;
    {
        const bool branch_taken_0x1fe2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2e8) {
            ctx->pc = 0x1FE3A4u;
            goto label_1fe3a4;
        }
    }
    ctx->pc = 0x1FE2F0u;
    // 0x1fe2f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe2f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe2f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe2fc: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe300: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe304: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe308: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fe308u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe30c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1fe310: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe314: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe318: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe31c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe320: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe324: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fe324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fe328: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe32c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1fe32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe330: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe334: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE334u;
    {
        const bool branch_taken_0x1fe334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe334) {
            ctx->pc = 0x1FE378u;
            goto label_1fe378;
        }
    }
    ctx->pc = 0x1FE33Cu;
label_1fe33c:
    // 0x1fe33c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe340: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1fe340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe344: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe348: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe34c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe350: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe358: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe358u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe35c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe360: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe368: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x1fe368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe36c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1fe36cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1fe370: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe374: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe374u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1fe378:
    // 0x1fe378: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe37c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe380: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe384: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe388: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE388u;
    {
        const bool branch_taken_0x1fe388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe388) {
            ctx->pc = 0x1FE33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe33c;
        }
    }
    ctx->pc = 0x1FE390u;
    // 0x1fe390: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe398: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe39c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1FE39Cu;
    {
        const bool branch_taken_0x1fe39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe39c) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE3A4u;
label_1fe3a4:
    // 0x1fe3a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3a8: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x1fe3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x1fe3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe3b0: 0xac830364  sw          $v1, 0x364($a0)
    ctx->pc = 0x1fe3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 3));
    // 0x1fe3b4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1FE3B4u;
    {
        const bool branch_taken_0x1fe3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3b4) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE3BCu;
label_1fe3bc:
    // 0x1fe3bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3c0: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fe3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fe3c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe3c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3cc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fe3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe3d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe3d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe3d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3dc: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x1fe3dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fe3e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe3e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1fe3e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe3e8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FE3E8u;
    {
        const bool branch_taken_0x1fe3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3e8) {
            ctx->pc = 0x1FE4A0u;
            goto label_1fe4a0;
        }
    }
    ctx->pc = 0x1FE3F0u;
    // 0x1fe3f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe3f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe3fc: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe404: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe40c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe410: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe414: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe418: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe41c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe420: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe424: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fe424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fe428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe42c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1fe42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe430: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe430u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe434: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE434u;
    {
        const bool branch_taken_0x1fe434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe434) {
            ctx->pc = 0x1FE478u;
            goto label_1fe478;
        }
    }
    ctx->pc = 0x1FE43Cu;
label_1fe43c:
    // 0x1fe43c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe440: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe444: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe448: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe44c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe450: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe458: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe458u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe45c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe460: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe468: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe46c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe46cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe474: 0x0  nop
    ctx->pc = 0x1fe474u;
    // NOP
label_1fe478:
    // 0x1fe478: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe47c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe47cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe484: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe484u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe488: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE488u;
    {
        const bool branch_taken_0x1fe488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe488) {
            ctx->pc = 0x1FE43Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe43c;
        }
    }
    ctx->pc = 0x1FE490u;
    // 0x1fe490: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe494: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe498: 0xa0700abc  sb          $s0, 0xABC($v1)
    ctx->pc = 0x1fe498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 16));
    // 0x1fe49c: 0x0  nop
    ctx->pc = 0x1fe49cu;
    // NOP
label_1fe4a0:
    // 0x1fe4a0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4a4: 0x90a4034f  lbu         $a0, 0x34F($a1)
    ctx->pc = 0x1fe4a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 847)));
    // 0x1fe4a8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe4ac: 0xa0a3034f  sb          $v1, 0x34F($a1)
    ctx->pc = 0x1fe4acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe4b0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1FE4B0u;
    {
        const bool branch_taken_0x1fe4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4b0) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE4B8u;
label_1fe4b8:
    // 0x1fe4b8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4bc: 0x90c30348  lbu         $v1, 0x348($a2)
    ctx->pc = 0x1fe4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1fe4c0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe4c4: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x1fe4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe4c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4cc: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe4ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe4d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe4d4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1fe4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe4d8: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x1fe4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fe4dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe4e0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1fe4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4e4: 0xa203034b  sb          $v1, 0x34B($s0)
    ctx->pc = 0x1fe4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe4e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4ec: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1fe4ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fe4f0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe4f4: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1fe4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe4f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe4f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe4fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE4FCu;
    {
        const bool branch_taken_0x1fe4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4fc) {
            ctx->pc = 0x1FE540u;
            goto label_1fe540;
        }
    }
    ctx->pc = 0x1FE504u;
label_1fe504:
    // 0x1fe504: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe508: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe50c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe510: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1fe510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe514: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1fe514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe518: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe51c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1fe51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fe520: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x1fe520u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe524: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fe524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe528: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fe528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe52c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1fe52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fe530: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fe534: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1fe534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1fe538: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe53c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe53cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1fe540:
    // 0x1fe540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe544: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe54c: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1fe54cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe550: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE550u;
    {
        const bool branch_taken_0x1fe550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe550) {
            ctx->pc = 0x1FE504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe504;
        }
    }
    ctx->pc = 0x1FE558u;
    // 0x1fe558: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe55c: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x1fe55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fe560: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe564: 0x148000ac  bnez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1FE564u;
    {
        const bool branch_taken_0x1fe564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe564) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE56Cu;
    // 0x1fe56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe570: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe574: 0xac830358  sw          $v1, 0x358($a0)
    ctx->pc = 0x1fe574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 3));
    // 0x1fe578: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1FE578u;
    {
        const bool branch_taken_0x1fe578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe578) {
            ctx->pc = 0x1FE838u;
            goto label_1fe838;
        }
    }
    ctx->pc = 0x1FE580u;
label_1fe580:
    // 0x1fe580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe584: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x1fe584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1fe588: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fe588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe58c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe590: 0x1203006f  beq         $s0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1FE590u;
    {
        const bool branch_taken_0x1fe590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe590) {
            ctx->pc = 0x1FE750u;
            goto label_1fe750;
        }
    }
    ctx->pc = 0x1FE598u;
    // 0x1fe598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe59c: 0x1203003e  beq         $s0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FE59Cu;
    {
        const bool branch_taken_0x1fe59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe59c) {
            ctx->pc = 0x1FE698u;
            goto label_1fe698;
        }
    }
    ctx->pc = 0x1FE5A4u;
    // 0x1fe5a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5A4u;
    {
        const bool branch_taken_0x1fe5a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe5a4) {
            ctx->pc = 0x1FE5B4u;
            goto label_1fe5b4;
        }
    }
    ctx->pc = 0x1FE5ACu;
    // 0x1fe5ac: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1FE5ACu;
    {
        const bool branch_taken_0x1fe5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe5ac) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE5B4u;
label_1fe5b4:
    // 0x1fe5b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5b8: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1fe5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe5bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe5c0: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x1fe5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe5c4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5c8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe5cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe5d0: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe5d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5d8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe5dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe5e0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fe5e4: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1fe5e8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fe5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe5ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5f0: 0xa065034b  sb          $a1, 0x34B($v1)
    ctx->pc = 0x1fe5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe5f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5f8: 0x90850346  lbu         $a1, 0x346($a0)
    ctx->pc = 0x1fe5f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe5fc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1fe5fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe600: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1fe600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1fe604: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe60c: 0x78720000  lq          $s2, 0x0($v1)
    ctx->pc = 0x1fe60cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe610: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe614: 0x90850346  lbu         $a1, 0x346($a0)
    ctx->pc = 0x1fe614u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe618: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fe618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe61c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe620: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe624: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1fe624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fe628: 0x24c30480  addiu       $v1, $a2, 0x480
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
    // 0x1fe62c: 0x7c720000  sq          $s2, 0x0($v1)
    ctx->pc = 0x1fe62cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 18));
    // 0x1fe630: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe634: 0x90850348  lbu         $a1, 0x348($a0)
    ctx->pc = 0x1fe634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe638: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fe638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe63c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe640: 0x90850347  lbu         $a1, 0x347($a0)
    ctx->pc = 0x1fe640u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 839)));
    // 0x1fe644: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1fe644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe648: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1fe648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fe64c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE64Cu;
    {
        const bool branch_taken_0x1fe64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe64c) {
            ctx->pc = 0x1FE660u;
            goto label_1fe660;
        }
    }
    ctx->pc = 0x1FE654u;
    // 0x1fe654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fe654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe65c: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe65cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
label_1fe660:
    // 0x1fe660: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe664: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fe664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe668: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe66c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe670: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe674: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe678: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fe678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe67c: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x1FE67Cu;
    {
        const bool branch_taken_0x1fe67c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe67c) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE684u;
    // 0x1fe684: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe688: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe68c: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe690: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1FE690u;
    {
        const bool branch_taken_0x1fe690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe690) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE698u;
label_1fe698:
    // 0x1fe698: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe69c: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1fe69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe6a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe6a4: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x1fe6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe6a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe6ac: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1fe6acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fe6b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe6b4: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1fe6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe6b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe6b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe6bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE6BCu;
    {
        const bool branch_taken_0x1fe6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe6bc) {
            ctx->pc = 0x1FE700u;
            goto label_1fe700;
        }
    }
    ctx->pc = 0x1FE6C4u;
label_1fe6c4:
    // 0x1fe6c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe6c8: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe6cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe6d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe6d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe6d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe6dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe6e0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe6e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe6e4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe6e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe6f0: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe6f4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe6f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe6fc: 0x0  nop
    ctx->pc = 0x1fe6fcu;
    // NOP
label_1fe700:
    // 0x1fe700: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe704: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe708: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe70c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe710: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE710u;
    {
        const bool branch_taken_0x1fe710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe710) {
            ctx->pc = 0x1FE6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe6c4;
        }
    }
    ctx->pc = 0x1FE718u;
    // 0x1fe718: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe71c: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1fe71cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe720: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fe720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe724: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe728: 0x90650346  lbu         $a1, 0x346($v1)
    ctx->pc = 0x1fe728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe72c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fe72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe730: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fe730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe734: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FE734u;
    {
        const bool branch_taken_0x1fe734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe734) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE73Cu;
    // 0x1fe73c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe740: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe744: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe748: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1FE748u;
    {
        const bool branch_taken_0x1fe748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe748) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE750u;
label_1fe750:
    // 0x1fe750: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe754: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe758: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe75c: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe75cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe760: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe764: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe768: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe76c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe770: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe778: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe77c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe77cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe780: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe784: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fe784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fe788: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe78c: 0xa0850345  sb          $a1, 0x345($a0)
    ctx->pc = 0x1fe78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe790: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe790u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe794: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE794u;
    {
        const bool branch_taken_0x1fe794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe794) {
            ctx->pc = 0x1FE7D8u;
            goto label_1fe7d8;
        }
    }
    ctx->pc = 0x1FE79Cu;
label_1fe79c:
    // 0x1fe79c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7a0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe7a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe7a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe7ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe7b8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe7b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe7bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fe7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe7c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe7c8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe7cc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe7d4: 0x0  nop
    ctx->pc = 0x1fe7d4u;
    // NOP
label_1fe7d8:
    // 0x1fe7d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7dc: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe7e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe7e4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe7e8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE7E8u;
    {
        const bool branch_taken_0x1fe7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7e8) {
            ctx->pc = 0x1FE79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe79c;
        }
    }
    ctx->pc = 0x1FE7F0u;
    // 0x1fe7f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7f4: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe7f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe7f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe7fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE7FCu;
    {
        const bool branch_taken_0x1fe7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7fc) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE804u;
    // 0x1fe804: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe808: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe80c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fe80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fe810: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE810u;
    {
        const bool branch_taken_0x1fe810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe810) {
            ctx->pc = 0x1FE838u;
            goto label_1fe838;
        }
    }
    ctx->pc = 0x1FE818u;
label_1fe818:
    // 0x1fe818: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1fe818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fe81c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1fe81cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1fe820:
    // 0x1fe820: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe824: 0x906302a8  lbu         $v1, 0x2A8($v1)
    ctx->pc = 0x1fe824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x1fe828: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe82c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1fe82cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe830: 0x1460fe62  bnez        $v1, . + 4 + (-0x19E << 2)
    ctx->pc = 0x1FE830u;
    {
        const bool branch_taken_0x1fe830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe830) {
            ctx->pc = 0x1FE1BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe1bc;
        }
    }
    ctx->pc = 0x1FE838u;
label_1fe838:
    // 0x1fe838: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe83c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1FE83Cu;
    {
        const bool branch_taken_0x1fe83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe83c) {
            ctx->pc = 0x1FE8F8u;
            goto label_1fe8f8;
        }
    }
    ctx->pc = 0x1FE844u;
label_1fe844:
    // 0x1fe844: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FE844u;
    SET_GPR_U32(ctx, 31, 0x1FE84Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FE844u, 0x1FE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE84Cu;
label_1fe84c:
    // 0x1fe84c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe850: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fe850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe854: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fe854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fe858: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fe858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe85c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe864: 0xc4600480  lwc1        $f0, 0x480($v1)
    ctx->pc = 0x1fe864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fe868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fe86c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe870: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe878: 0xe4600480  swc1        $f0, 0x480($v1)
    ctx->pc = 0x1fe878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1152), bits); }
    // 0x1fe87c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FE87Cu;
    SET_GPR_U32(ctx, 31, 0x1FE884u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FE87Cu, 0x1FE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE884u;
label_1fe884:
    // 0x1fe884: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe888: 0xc46102a4  lwc1        $f1, 0x2A4($v1)
    ctx->pc = 0x1fe888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe88c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fe88cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fe890: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe894: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe89c: 0xc4600484  lwc1        $f0, 0x484($v1)
    ctx->pc = 0x1fe89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe8a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fe8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fe8a4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe8a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe8b0: 0xe4600484  swc1        $f0, 0x484($v1)
    ctx->pc = 0x1fe8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1156), bits); }
    // 0x1fe8b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FE8B4u;
    SET_GPR_U32(ctx, 31, 0x1FE8BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FE8B4u, 0x1FE8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8BCu;
label_1fe8bc:
    // 0x1fe8bc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8c0: 0xc4a102a4  lwc1        $f1, 0x2A4($a1)
    ctx->pc = 0x1fe8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe8c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fe8c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fe8c8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe8cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe8d4: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x1fe8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe8d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fe8d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fe8dc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe8e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe8e8: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x1fe8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x1fe8ec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe8f0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe8f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fe8f4: 0x0  nop
    ctx->pc = 0x1fe8f4u;
    // NOP
label_1fe8f8:
    // 0x1fe8f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe8fc: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe900: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe904: 0x203202b  sltu        $a0, $s0, $v1
    ctx->pc = 0x1fe904u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe908: 0x1480ffce  bnez        $a0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1FE908u;
    {
        const bool branch_taken_0x1fe908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe908) {
            ctx->pc = 0x1FE844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe844;
        }
    }
    ctx->pc = 0x1FE910u;
    // 0x1fe910: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1fe910u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe920: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1fe920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fe924: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE92Cu;
}
