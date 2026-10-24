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

// Function: Em0f_R1_atk_missile
// Address: 0x30e6b0 - 0x30f6e0
void Em0f_R1_atk_missile_0x30e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_missile_0x30e6b0");
#endif

    switch (ctx->pc) {
        case 0x30e720u: goto label_30e720;
        case 0x30e734u: goto label_30e734;
        case 0x30e770u: goto label_30e770;
        case 0x30e790u: goto label_30e790;
        case 0x30e860u: goto label_30e860;
        case 0x30e890u: goto label_30e890;
        case 0x30e8f0u: goto label_30e8f0;
        case 0x30e904u: goto label_30e904;
        case 0x30e9c0u: goto label_30e9c0;
        case 0x30e9ccu: goto label_30e9cc;
        case 0x30ea04u: goto label_30ea04;
        case 0x30ea10u: goto label_30ea10;
        case 0x30eab0u: goto label_30eab0;
        case 0x30eac0u: goto label_30eac0;
        case 0x30eafcu: goto label_30eafc;
        case 0x30eb08u: goto label_30eb08;
        case 0x30eb1cu: goto label_30eb1c;
        case 0x30eb2cu: goto label_30eb2c;
        case 0x30eb3cu: goto label_30eb3c;
        case 0x30eb48u: goto label_30eb48;
        case 0x30ec2cu: goto label_30ec2c;
        case 0x30ec38u: goto label_30ec38;
        case 0x30ec80u: goto label_30ec80;
        case 0x30ec8cu: goto label_30ec8c;
        case 0x30ed08u: goto label_30ed08;
        case 0x30ed14u: goto label_30ed14;
        case 0x30ed20u: goto label_30ed20;
        case 0x30ed54u: goto label_30ed54;
        case 0x30eddcu: goto label_30eddc;
        case 0x30ee54u: goto label_30ee54;
        case 0x30ee68u: goto label_30ee68;
        case 0x30ee80u: goto label_30ee80;
        case 0x30ee94u: goto label_30ee94;
        case 0x30eea8u: goto label_30eea8;
        case 0x30ef00u: goto label_30ef00;
        case 0x30ef28u: goto label_30ef28;
        case 0x30ef3cu: goto label_30ef3c;
        case 0x30ef50u: goto label_30ef50;
        case 0x30ef64u: goto label_30ef64;
        case 0x30ef78u: goto label_30ef78;
        case 0x30efacu: goto label_30efac;
        case 0x30effcu: goto label_30effc;
        case 0x30f01cu: goto label_30f01c;
        case 0x30f0dcu: goto label_30f0dc;
        case 0x30f0e8u: goto label_30f0e8;
        case 0x30f134u: goto label_30f134;
        case 0x30f140u: goto label_30f140;
        case 0x30f1bcu: goto label_30f1bc;
        case 0x30f1c8u: goto label_30f1c8;
        case 0x30f1d4u: goto label_30f1d4;
        case 0x30f208u: goto label_30f208;
        case 0x30f288u: goto label_30f288;
        case 0x30f2fcu: goto label_30f2fc;
        case 0x30f314u: goto label_30f314;
        case 0x30f32cu: goto label_30f32c;
        case 0x30f340u: goto label_30f340;
        case 0x30f350u: goto label_30f350;
        case 0x30f3b0u: goto label_30f3b0;
        case 0x30f3d4u: goto label_30f3d4;
        case 0x30f3e8u: goto label_30f3e8;
        case 0x30f3f8u: goto label_30f3f8;
        case 0x30f40cu: goto label_30f40c;
        case 0x30f420u: goto label_30f420;
        case 0x30f468u: goto label_30f468;
        case 0x30f488u: goto label_30f488;
        case 0x30f570u: goto label_30f570;
        case 0x30f5b8u: goto label_30f5b8;
        case 0x30f5e4u: goto label_30f5e4;
        default: break;
    }

    ctx->pc = 0x30e6b0u;

    // 0x30e6b0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x30e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x30e6b4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x30e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x30e6b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30e6bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30e6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30e6c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30e6c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30e6c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30e6cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30e6d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e6d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e6d8: 0xafa40298  sw          $a0, 0x298($sp)
    ctx->pc = 0x30e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 4));
    // 0x30e6dc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e6e0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30e6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x30e6e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30e6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e6e8: 0x30940001  andi        $s4, $a0, 0x1
    ctx->pc = 0x30e6e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x30e6ec: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E6ECu;
    {
        const bool branch_taken_0x30e6ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e6ec) {
            ctx->pc = 0x30E73Cu;
            goto label_30e73c;
        }
    }
    ctx->pc = 0x30E6F4u;
    // 0x30e6f4: 0x8fb40298  lw          $s4, 0x298($sp)
    ctx->pc = 0x30e6f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e6f8: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e6fc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e700: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x30e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x30e704: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30e708: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e70c: 0x26840120  addiu       $a0, $s4, 0x120
    ctx->pc = 0x30e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x30e710: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30e714: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30e718: 0xc05c848  jal         func_172120
    ctx->pc = 0x30E718u;
    SET_GPR_U32(ctx, 31, 0x30E720u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30E718u, 0x30E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E720u;
label_30e720:
    // 0x30e720: 0x8fb60298  lw          $s6, 0x298($sp)
    ctx->pc = 0x30e720u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e724: 0xc6c100d4  lwc1        $f1, 0xD4($s6)
    ctx->pc = 0x30e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e728: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30e728u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e72c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30E72Cu;
    SET_GPR_U32(ctx, 31, 0x30E734u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30E72Cu, 0x30E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E734u;
label_30e734:
    // 0x30e734: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e738: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x30e738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
label_30e73c:
    // 0x30e73c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e740: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30e740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30e744: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30e744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e74c: 0x1064005d  beq         $v1, $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x30E74Cu;
    {
        const bool branch_taken_0x30e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x30e74c) {
            ctx->pc = 0x30E8C4u;
            goto label_30e8c4;
        }
    }
    ctx->pc = 0x30E754u;
    // 0x30e754: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E754u;
    {
        const bool branch_taken_0x30e754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e754) {
            ctx->pc = 0x30E764u;
            goto label_30e764;
        }
    }
    ctx->pc = 0x30E75Cu;
    // 0x30e75c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x30E75Cu;
    {
        const bool branch_taken_0x30e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e75c) {
            ctx->pc = 0x30EB88u;
            goto label_30eb88;
        }
    }
    ctx->pc = 0x30E764u;
label_30e764:
    // 0x30e764: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x30e764u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e768: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30E768u;
    {
        const bool branch_taken_0x30e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e768) {
            ctx->pc = 0x30E7D8u;
            goto label_30e7d8;
        }
    }
    ctx->pc = 0x30E770u;
label_30e770:
    // 0x30e770: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x30e770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x30e774: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e778: 0x244497b0  addiu       $a0, $v0, -0x6850
    ctx->pc = 0x30e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30e77c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e780: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e784: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30e784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30e788: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x30E788u;
    SET_GPR_U32(ctx, 31, 0x30E790u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x30E788u, 0x30E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E790u;
label_30e790:
    // 0x30e790: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x30e790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x30e794: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30e794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30e798: 0x248597d0  addiu       $a1, $a0, -0x6830
    ctx->pc = 0x30e798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940624));
    // 0x30e79c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e7a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e7a4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x30e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30e7a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e7ac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x30e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e7b0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e7b4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x30e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30e7b8: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x30e7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e7bc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x30e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x30e7c0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x30e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x30e7c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e7c8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x30e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x30e7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e7d0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x30e7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30e7d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30e7d8:
    // 0x30e7d8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x30e7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30e7dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30E7DCu;
    {
        const bool branch_taken_0x30e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e7dc) {
            ctx->pc = 0x30E770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e770;
        }
    }
    ctx->pc = 0x30E7E4u;
    // 0x30e7e4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e7e8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x30e7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e7ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30e7f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x30e7f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e7f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x30e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30e7fc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x30e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e800: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x30e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x30e804: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x30e804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x30e808: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30e808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30e80c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x30e810: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x30e810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e814: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30e814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30e818: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x30e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e81c: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x30e81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x30e820: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x30e824: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e828: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30e828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30e82c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x30e82cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x30e830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e834: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x30e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e838: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30E838u;
    {
        const bool branch_taken_0x30e838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e838) {
            ctx->pc = 0x30E870u;
            goto label_30e870;
        }
    }
    ctx->pc = 0x30E840u;
    // 0x30e840: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e844: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e848: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e84c: 0x24062832  addiu       $a2, $zero, 0x2832
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10290));
    // 0x30e850: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e854: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e858: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E858u;
    SET_GPR_U32(ctx, 31, 0x30E860u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E858u, 0x30E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E860u;
label_30e860:
    // 0x30e860: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e864: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e868: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30E868u;
    {
        const bool branch_taken_0x30e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e868) {
            ctx->pc = 0x30E8A0u;
            goto label_30e8a0;
        }
    }
    ctx->pc = 0x30E870u;
label_30e870:
    // 0x30e870: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e874: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e878: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x30e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x30e87c: 0x24062833  addiu       $a2, $zero, 0x2833
    ctx->pc = 0x30e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10291));
    // 0x30e880: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e884: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e888: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E888u;
    SET_GPR_U32(ctx, 31, 0x30E890u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E888u, 0x30E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E890u;
label_30e890:
    // 0x30e890: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30e890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30e894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e898: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e89c: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x30e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
label_30e8a0:
    // 0x30e8a0: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8a4: 0x8c851338  lw          $a1, 0x1338($a0)
    ctx->pc = 0x30e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e8a8: 0x2403fe01  addiu       $v1, $zero, -0x1FF
    ctx->pc = 0x30e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966785));
    // 0x30e8ac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x30e8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x30e8b0: 0xac851338  sw          $a1, 0x1338($a0)
    ctx->pc = 0x30e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 5));
    // 0x30e8b4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30e8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30e8bc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x30e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e8c0: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x30e8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_30e8c4:
    // 0x30e8c4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x30e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x30e8c8: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x30e8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x30e8cc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x30e8ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e8d0: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8d4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30e8dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30e8e0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x30e8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x30e8e4: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x30e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x30e8e8: 0xc05c848  jal         func_172120
    ctx->pc = 0x30E8E8u;
    SET_GPR_U32(ctx, 31, 0x30E8F0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30E8E8u, 0x30E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E8F0u;
label_30e8f0:
    // 0x30e8f0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e8f4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x30e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e8f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30e8f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e8fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30E8FCu;
    SET_GPR_U32(ctx, 31, 0x30E904u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30E8FCu, 0x30E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E904u;
label_30e904:
    // 0x30e904: 0x8fb30298  lw          $s3, 0x298($sp)
    ctx->pc = 0x30e904u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e908: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x30e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
    // 0x30e90c: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e910: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x30e910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x30e914: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x30e914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e918: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x30e918u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x30e91c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e920: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x30e920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x30e924: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x30E924u;
    {
        const bool branch_taken_0x30e924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e924) {
            ctx->pc = 0x30EA1Cu;
            goto label_30ea1c;
        }
    }
    ctx->pc = 0x30E92Cu;
    // 0x30e92c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e930: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x30e930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30e934: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x30e934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e938: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30e938u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30e93c: 0x28810083  slti        $at, $a0, 0x83
    ctx->pc = 0x30e93cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x30e940: 0x14200071  bnez        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x30E940u;
    {
        const bool branch_taken_0x30e940 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e940) {
            ctx->pc = 0x30EB08u;
            goto label_30eb08;
        }
    }
    ctx->pc = 0x30E948u;
    // 0x30e948: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x30e948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x30e94c: 0x24a399b0  addiu       $v1, $a1, -0x6650
    ctx->pc = 0x30e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941104));
    // 0x30e950: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30e950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30e954: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30e954u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3999B0u));
    // 0x30e958: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30e958u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30e95c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30e960: 0x248599c0  addiu       $a1, $a0, -0x6640
    ctx->pc = 0x30e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941120));
    // 0x30e964: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x30e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e968: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x30e968u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3999C0u));
    // 0x30e96c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30e970: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e974: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e978: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30e978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x30e97c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e980: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30E980u;
    {
        const bool branch_taken_0x30e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e980) {
            ctx->pc = 0x30E9CCu;
            goto label_30e9cc;
        }
    }
    ctx->pc = 0x30E988u;
    // 0x30e988: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e98c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x30e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x30e990: 0x24c70200  addiu       $a3, $a2, 0x200
    ctx->pc = 0x30e990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x30e994: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x30e994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30e998: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30e998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30e99c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30e99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e9a0: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x30e9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x30e9a4: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x30e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x30e9a8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x30e9a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e9ac: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30e9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e9b4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30e9b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30E9B8u;
    SET_GPR_U32(ctx, 31, 0x30E9C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30E9B8u, 0x30E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E9C0u;
label_30e9c0:
    // 0x30e9c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30e9c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e9c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30E9C4u;
    SET_GPR_U32(ctx, 31, 0x30E9CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30E9C4u, 0x30E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E9CCu;
label_30e9cc:
    // 0x30e9cc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e9d0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30e9d4: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x30e9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x30e9d8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x30e9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30e9dc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30e9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30e9e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30e9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e9e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30e9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30e9e8: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x30e9e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e9ec: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x30e9ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x30e9f0: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30e9f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e9f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e9f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x30e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e9fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30E9FCu;
    SET_GPR_U32(ctx, 31, 0x30EA04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30E9FCu, 0x30EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA04u;
label_30ea04:
    // 0x30ea04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ea04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ea08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EA08u;
    SET_GPR_U32(ctx, 31, 0x30EA10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EA08u, 0x30EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA10u;
label_30ea10:
    // 0x30ea10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ea10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ea14: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x30EA14u;
    {
        const bool branch_taken_0x30ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ea14) {
            ctx->pc = 0x30EB08u;
            goto label_30eb08;
        }
    }
    ctx->pc = 0x30EA1Cu;
label_30ea1c:
    // 0x30ea1c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ea20: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x30ea20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30ea24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30ea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30ea28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30ea28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30ea2c: 0x286100e7  slti        $at, $v1, 0xE7
    ctx->pc = 0x30ea2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)231) ? 1 : 0);
    // 0x30ea30: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x30EA30u;
    {
        const bool branch_taken_0x30ea30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ea30) {
            ctx->pc = 0x30EB08u;
            goto label_30eb08;
        }
    }
    ctx->pc = 0x30EA38u;
    // 0x30ea38: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30ea3c: 0x246499d0  addiu       $a0, $v1, -0x6630
    ctx->pc = 0x30ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941136));
    // 0x30ea40: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x30ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30ea44: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x30ea44u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3999D0u));
    // 0x30ea48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30ea4c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30ea50: 0x246399e0  addiu       $v1, $v1, -0x6620
    ctx->pc = 0x30ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941152));
    // 0x30ea54: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x30ea54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30ea58: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30ea58u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x3999E0u));
    // 0x30ea5c: 0x7e070000  sq          $a3, 0x0($s0)
    ctx->pc = 0x30ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 7));
    // 0x30ea60: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x30ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ea64: 0x8cc51338  lw          $a1, 0x1338($a2)
    ctx->pc = 0x30ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4920)));
    // 0x30ea68: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x30ea6c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x30ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30ea70: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30EA70u;
    {
        const bool branch_taken_0x30ea70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ea70) {
            ctx->pc = 0x30EAC4u;
            goto label_30eac4;
        }
    }
    ctx->pc = 0x30EA78u;
    // 0x30ea78: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ea7c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30ea80: 0x24830200  addiu       $v1, $a0, 0x200
    ctx->pc = 0x30ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x30ea84: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x30ea84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ea88: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30ea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30ea8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30ea8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ea90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30ea94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30ea94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30ea98: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x30ea98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30ea9c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30eaa0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eaa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eaa4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x30eaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30eaa8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EAA8u;
    SET_GPR_U32(ctx, 31, 0x30EAB0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EAA8u, 0x30EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAB0u;
label_30eab0:
    // 0x30eab0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30eab0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30eab4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x30eab4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30eab8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EAB8u;
    SET_GPR_U32(ctx, 31, 0x30EAC0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EAB8u, 0x30EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAC0u;
label_30eac0:
    // 0x30eac0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30eac0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30eac4:
    // 0x30eac4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eac8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x30eac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x30eacc: 0x24c202c0  addiu       $v0, $a2, 0x2C0
    ctx->pc = 0x30eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
    // 0x30ead0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30ead0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ead4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30ead8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30eadc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30eadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30eae0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30eae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30eae4: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x30eae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30eae8: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30eaec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eaecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eaf0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x30eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30eaf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EAF4u;
    SET_GPR_U32(ctx, 31, 0x30EAFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EAF4u, 0x30EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAFCu;
label_30eafc:
    // 0x30eafc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30eafcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30eb00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EB00u;
    SET_GPR_U32(ctx, 31, 0x30EB08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EB00u, 0x30EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB08u;
label_30eb08:
    // 0x30eb08: 0x8fa70298  lw          $a3, 0x298($sp)
    ctx->pc = 0x30eb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb0c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x30eb0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x30eb10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eb10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eb14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30EB14u;
    SET_GPR_U32(ctx, 31, 0x30EB1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30EB14u, 0x30EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB1Cu;
label_30eb1c:
    // 0x30eb1c: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x30eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb20: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x30eb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x30eb24: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30EB24u;
    SET_GPR_U32(ctx, 31, 0x30EB2Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30EB24u, 0x30EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB2Cu;
label_30eb2c:
    // 0x30eb2c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eb30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eb34: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30EB34u;
    SET_GPR_U32(ctx, 31, 0x30EB3Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30EB34u, 0x30EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB3Cu;
label_30eb3c:
    // 0x30eb3c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb40: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30EB40u;
    SET_GPR_U32(ctx, 31, 0x30EB48u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30EB40u, 0x30EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB48u;
label_30eb48:
    // 0x30eb48: 0x8fb50298  lw          $s5, 0x298($sp)
    ctx->pc = 0x30eb48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb4c: 0x92a309e7  lbu         $v1, 0x9E7($s5)
    ctx->pc = 0x30eb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2535)));
    // 0x30eb50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30EB50u;
    {
        const bool branch_taken_0x30eb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eb50) {
            ctx->pc = 0x30EB88u;
            goto label_30eb88;
        }
    }
    ctx->pc = 0x30EB58u;
    // 0x30eb58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30eb5c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb60: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x30eb60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x30eb64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30eb68: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb6c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x30eb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30eb70: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30eb74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30eb78: 0x8fb70298  lw          $s7, 0x298($sp)
    ctx->pc = 0x30eb78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb7c: 0xa2e00003  sb          $zero, 0x3($s7)
    ctx->pc = 0x30eb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30eb80: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb84: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_30eb88:
    // 0x30eb88: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb8c: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x30eb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x30eb90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30eb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30eb94: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x30eb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x30eb98: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x30EB98u;
    {
        const bool branch_taken_0x30eb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eb98) {
            ctx->pc = 0x30F020u;
            goto label_30f020;
        }
    }
    ctx->pc = 0x30EBA0u;
    // 0x30eba0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30eba4: 0x244499f0  addiu       $a0, $v0, -0x6610
    ctx->pc = 0x30eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
    // 0x30eba8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x30eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30ebac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x30ebacu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3999F0u));
    // 0x30ebb0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30ebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30ebb4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30ebb8: 0x24629a00  addiu       $v0, $v1, -0x6600
    ctx->pc = 0x30ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941184));
    // 0x30ebbc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x30ebbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30ebc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30ebc0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A00u));
    // 0x30ebc4: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x30ebc4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399A10u));
    // 0x30ebc8: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x30ebc8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x399A20u));
    // 0x30ebcc: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x30ebccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399A30u));
    // 0x30ebd0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x30ebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x30ebd4: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x30ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x30ebd8: 0x7cc50020  sq          $a1, 0x20($a2)
    ctx->pc = 0x30ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 5));
    // 0x30ebdc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x30ebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x30ebe0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30ebe4: 0x24449a40  addiu       $a0, $v0, -0x65C0
    ctx->pc = 0x30ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
    // 0x30ebe8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x30ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30ebec: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30ebecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A40u));
    // 0x30ebf0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30ebf4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ebf8: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x30ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30ebfc: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x30ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x30ec00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ec04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30ec04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30ec08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ec0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ec10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30ec14: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30ec14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30ec18: 0x24045504  addiu       $a0, $zero, 0x5504
    ctx->pc = 0x30ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21764));
    // 0x30ec1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ec1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ec20: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x30ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30ec24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EC24u;
    SET_GPR_U32(ctx, 31, 0x30EC2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EC24u, 0x30EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC2Cu;
label_30ec2c:
    // 0x30ec2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ec2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ec30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EC30u;
    SET_GPR_U32(ctx, 31, 0x30EC38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EC30u, 0x30EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC38u;
label_30ec38:
    // 0x30ec38: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x30ec3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ec3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ec40: 0x0  nop
    ctx->pc = 0x30ec40u;
    // NOP
    // 0x30ec44: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x30ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x30ec48: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ec4c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x30ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30ec50: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x30ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x30ec54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30ec54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ec58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30ec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30ec5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30ec5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30ec60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ec64: 0x3453ffff  ori         $s3, $v0, 0xFFFF
    ctx->pc = 0x30ec64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30ec68: 0x733824  and         $a3, $v1, $s3
    ctx->pc = 0x30ec68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x30ec6c: 0x24045503  addiu       $a0, $zero, 0x5503
    ctx->pc = 0x30ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21763));
    // 0x30ec70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ec70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ec74: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x30ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x30ec78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EC78u;
    SET_GPR_U32(ctx, 31, 0x30EC80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EC78u, 0x30EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC80u;
label_30ec80:
    // 0x30ec80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ec80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ec84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EC84u;
    SET_GPR_U32(ctx, 31, 0x30EC8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EC84u, 0x30EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC8Cu;
label_30ec8c:
    // 0x30ec8c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ec90: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30ec90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30ec94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30ec94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30ec98: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x30ec98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x30ec9c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x30ec9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x30eca0: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eca4: 0x24a31340  addiu       $v1, $a1, 0x1340
    ctx->pc = 0x30eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4928));
    // 0x30eca8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x30eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x30ecac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30ecb0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x30ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30ecb4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ecb8: 0xa4b021  addu        $s6, $a1, $a0
    ctx->pc = 0x30ecb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30ecbc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ecc0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30ecc4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30ecc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30eccc: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30ecd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ecd4: 0x2842804  sllv        $a1, $a0, $s4
    ctx->pc = 0x30ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
    // 0x30ecd8: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ecdc: 0x8c441338  lw          $a0, 0x1338($v0)
    ctx->pc = 0x30ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30ece0: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x30ece0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30ece4: 0xac451338  sw          $a1, 0x1338($v0)
    ctx->pc = 0x30ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 5));
    // 0x30ece8: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x30ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30ecec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x30ececu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x30ecf0: 0x24a297b0  addiu       $v0, $a1, -0x6850
    ctx->pc = 0x30ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940592));
    // 0x30ecf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ecf8: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ecfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ed00: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30ED00u;
    SET_GPR_U32(ctx, 31, 0x30ED08u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30ED00u, 0x30ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED08u;
label_30ed08:
    // 0x30ed08: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x30ed08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x30ed0c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30ED0Cu;
    SET_GPR_U32(ctx, 31, 0x30ED14u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30ED0Cu, 0x30ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED14u;
label_30ed14:
    // 0x30ed14: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x30ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x30ed18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30ED18u;
    SET_GPR_U32(ctx, 31, 0x30ED20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30ED18u, 0x30ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED20u;
label_30ed20:
    // 0x30ed20: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed24: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x30ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed28: 0xe6c00020  swc1        $f0, 0x20($s6)
    ctx->pc = 0x30ed28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 32), bits); }
    // 0x30ed2c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30ed34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30ed34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30ed38: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x30ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed3c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x30ed3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30ed40: 0x0  nop
    ctx->pc = 0x30ed40u;
    // NOP
    // 0x30ed44: 0x0  nop
    ctx->pc = 0x30ed44u;
    // NOP
    // 0x30ed48: 0x0  nop
    ctx->pc = 0x30ed48u;
    // NOP
    // 0x30ed4c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x30ED4Cu;
    SET_GPR_U32(ctx, 31, 0x30ED54u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x30ED4Cu, 0x30ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ED54u;
label_30ed54:
    // 0x30ed54: 0x8fb00298  lw          $s0, 0x298($sp)
    ctx->pc = 0x30ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed58: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x30ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x30ed5c: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x30ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ed60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30ed60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30ed64: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30ed68: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x30ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed6c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30ed6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30ed70: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30ed70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30ed74: 0xe6c00010  swc1        $f0, 0x10($s6)
    ctx->pc = 0x30ed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 16), bits); }
    // 0x30ed78: 0x8fb20298  lw          $s2, 0x298($sp)
    ctx->pc = 0x30ed78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ed7c: 0x8642127a  lh          $v0, 0x127A($s2)
    ctx->pc = 0x30ed7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4730)));
    // 0x30ed80: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x30ED80u;
    {
        const bool branch_taken_0x30ed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ed80) {
            ctx->pc = 0x30EEB4u;
            goto label_30eeb4;
        }
    }
    ctx->pc = 0x30ED88u;
    // 0x30ed88: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x30ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30ed8c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30ed90: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30ed94: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x30ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ed98: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30ed9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30eda0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x30eda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30eda4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30eda8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x30eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30edac: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x30edacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30edb0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30edb4: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x30edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30edb8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x30edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30edbc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x30edbcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30edc0: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x30edc4: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30edc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30edc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30edc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30edcc: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x30edccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30edd0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x30edd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30edd4: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30EDD4u;
    SET_GPR_U32(ctx, 31, 0x30EDDCu);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30EDD4u, 0x30EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EDDCu;
label_30eddc:
    // 0x30eddc: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ede0: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x30ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ede4: 0x3c06bfc8  lui         $a2, 0xBFC8
    ctx->pc = 0x30ede4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49096 << 16));
    // 0x30ede8: 0x34c5f5c3  ori         $a1, $a2, 0xF5C3
    ctx->pc = 0x30ede8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62915);
    // 0x30edec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30edecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30edf0: 0x0  nop
    ctx->pc = 0x30edf0u;
    // NOP
    // 0x30edf4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x30edf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30edf8: 0x2687fffc  addiu       $a3, $s4, -0x4
    ctx->pc = 0x30edf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x30edfc: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x30EDFCu;
    {
        const bool branch_taken_0x30edfc = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x30edfc) {
            ctx->pc = 0x30EE18u;
            goto label_30ee18;
        }
    }
    ctx->pc = 0x30EE04u;
    // 0x30ee04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x30ee04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee08: 0x0  nop
    ctx->pc = 0x30ee08u;
    // NOP
    // 0x30ee0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30ee0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ee10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30EE10u;
    {
        const bool branch_taken_0x30ee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ee10) {
            ctx->pc = 0x30EE34u;
            goto label_30ee34;
        }
    }
    ctx->pc = 0x30EE18u;
label_30ee18:
    // 0x30ee18: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x30ee18u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x30ee1c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x30ee1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x30ee20: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x30ee20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30ee24: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x30ee24u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee28: 0x0  nop
    ctx->pc = 0x30ee28u;
    // NOP
    // 0x30ee2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30ee2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ee30: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x30ee30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30ee34:
    // 0x30ee34: 0x3c053f49  lui         $a1, 0x3F49
    ctx->pc = 0x30ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16201 << 16));
    // 0x30ee38: 0x34a20fdb  ori         $v0, $a1, 0xFDB
    ctx->pc = 0x30ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x30ee3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee40: 0x0  nop
    ctx->pc = 0x30ee40u;
    // NOP
    // 0x30ee44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30ee44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30ee48: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x30ee48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30ee4c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30EE4Cu;
    SET_GPR_U32(ctx, 31, 0x30EE54u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30EE4Cu, 0x30EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EE54u;
label_30ee54:
    // 0x30ee54: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x30ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30ee58: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x30ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30ee5c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30ee5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30ee60: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30EE60u;
    SET_GPR_U32(ctx, 31, 0x30EE68u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30EE68u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EE68u) { return; }
    ctx->pc = 0x30EE68u;
label_30ee68:
    // 0x30ee68: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x30ee68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ee6c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30ee6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30ee70: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x30ee70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30ee74: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x30ee74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x30ee78: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EE78u;
    SET_GPR_U32(ctx, 31, 0x30EE80u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EE80u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EE80u) { return; }
    ctx->pc = 0x30EE80u;
label_30ee80:
    // 0x30ee80: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x30ee80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ee84: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30ee88: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x30ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30ee8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EE8Cu;
    SET_GPR_U32(ctx, 31, 0x30EE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EE94u) { return; }
    ctx->pc = 0x30EE94u;
label_30ee94:
    // 0x30ee94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ee94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ee98: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30ee9c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x30ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x30eea0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EEA0u;
    SET_GPR_U32(ctx, 31, 0x30EEA8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EEA8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EEA8u) { return; }
    ctx->pc = 0x30EEA8u;
label_30eea8:
    // 0x30eea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30eea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30eeac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30EEACu;
    {
        const bool branch_taken_0x30eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eeac) {
            ctx->pc = 0x30EF7Cu;
            goto label_30ef7c;
        }
    }
    ctx->pc = 0x30EEB4u;
label_30eeb4:
    // 0x30eeb4: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x30eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30eeb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30eebc: 0x248397b0  addiu       $v1, $a0, -0x6850
    ctx->pc = 0x30eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940592));
    // 0x30eec0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x30eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30eec4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x30eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30eec8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30eecc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30eed0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30eed4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30eed8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x30eed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30eedc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eee0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30eee4: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x30eee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30eee8: 0x3c033fc8  lui         $v1, 0x3FC8
    ctx->pc = 0x30eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16328 << 16));
    // 0x30eeec: 0x3465f5c3  ori         $a1, $v1, 0xF5C3
    ctx->pc = 0x30eeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30eef0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x30eef0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30eef4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x30eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30eef8: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30EEF8u;
    SET_GPR_U32(ctx, 31, 0x30EF00u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30EEF8u, 0x30EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF00u;
label_30ef00:
    // 0x30ef00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef04: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ef08: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x30ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ef0c: 0x3c03bfc8  lui         $v1, 0xBFC8
    ctx->pc = 0x30ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49096 << 16));
    // 0x30ef10: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x30ef10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30ef14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ef14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ef18: 0x0  nop
    ctx->pc = 0x30ef18u;
    // NOP
    // 0x30ef1c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x30ef1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30ef20: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30EF20u;
    SET_GPR_U32(ctx, 31, 0x30EF28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30EF20u, 0x30EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF28u;
label_30ef28:
    // 0x30ef28: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x30ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30ef2c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x30ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30ef30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30ef30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30ef34: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30EF34u;
    SET_GPR_U32(ctx, 31, 0x30EF3Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30EF3Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF3Cu) { return; }
    ctx->pc = 0x30EF3Cu;
label_30ef3c:
    // 0x30ef3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef40: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30ef40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30ef44: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30ef48: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EF48u;
    SET_GPR_U32(ctx, 31, 0x30EF50u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EF50u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF50u) { return; }
    ctx->pc = 0x30EF50u;
label_30ef50:
    // 0x30ef50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef54: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30ef58: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x30ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x30ef5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EF5Cu;
    SET_GPR_U32(ctx, 31, 0x30EF64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EF64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF64u) { return; }
    ctx->pc = 0x30EF64u;
label_30ef64:
    // 0x30ef64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef68: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30ef6c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x30ef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x30ef70: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EF70u;
    SET_GPR_U32(ctx, 31, 0x30EF78u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EF78u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF78u) { return; }
    ctx->pc = 0x30EF78u;
label_30ef78:
    // 0x30ef78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ef78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30ef7c:
    // 0x30ef7c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x30ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x30ef80: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30ef80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ef84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30ef88: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x30ef88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ef8c: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x30ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
    // 0x30ef90: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x30ef90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30ef94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30ef94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ef98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ef98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ef9c: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x30ef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x30efa0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30efa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30efa4: 0xc086488  jal         func_219220
    ctx->pc = 0x30EFA4u;
    SET_GPR_U32(ctx, 31, 0x30EFACu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30EFA4u, 0x30EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFACu;
label_30efac:
    // 0x30efac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30efacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30efb0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30efb4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x30efb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30efb8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30efb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30efbc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30efc0: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x30efc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x30efc4: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x30efc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x30efc8: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x30efc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30efcc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x30efccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30efd0: 0x3442020c  ori         $v0, $v0, 0x20C
    ctx->pc = 0x30efd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)524);
    // 0x30efd4: 0x2683fffc  addiu       $v1, $s4, -0x4
    ctx->pc = 0x30efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x30efd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30efdc: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x30efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x30efe0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30efe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30efe4: 0x24c500e0  addiu       $a1, $a2, 0xE0
    ctx->pc = 0x30efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x30efe8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30efe8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30efec: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x30efecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30eff0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30eff0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eff4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30EFF4u;
    SET_GPR_U32(ctx, 31, 0x30EFFCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30EFF4u, 0x30EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFFCu;
label_30effc:
    // 0x30effc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30effcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f000: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30f000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30f004: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f008: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30f008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f00c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f00cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f010: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30f010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f014: 0xc0561d4  jal         func_158750
    ctx->pc = 0x30F014u;
    SET_GPR_U32(ctx, 31, 0x30F01Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x30F014u, 0x30F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F01Cu;
label_30f01c:
    // 0x30f01c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30f01cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30f020:
    // 0x30f020: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f024: 0x8c861338  lw          $a2, 0x1338($a0)
    ctx->pc = 0x30f024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f028: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30f028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x30f02c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x30f02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x30f030: 0x14800116  bnez        $a0, . + 4 + (0x116 << 2)
    ctx->pc = 0x30F030u;
    {
        const bool branch_taken_0x30f030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f030) {
            ctx->pc = 0x30F48Cu;
            goto label_30f48c;
        }
    }
    ctx->pc = 0x30F038u;
    // 0x30f038: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f03c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30f03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30f040: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f044: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x30f044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x30f048: 0x10600110  beqz        $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x30F048u;
    {
        const bool branch_taken_0x30f048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f048) {
            ctx->pc = 0x30F48Cu;
            goto label_30f48c;
        }
    }
    ctx->pc = 0x30F050u;
    // 0x30f050: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30f050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30f054: 0x24839a50  addiu       $v1, $a0, -0x65B0
    ctx->pc = 0x30f054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941264));
    // 0x30f058: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x30f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x30f05c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30f05cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A50u));
    // 0x30f060: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30f060u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30f064: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f068: 0x24709a60  addiu       $s0, $v1, -0x65A0
    ctx->pc = 0x30f068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941280));
    // 0x30f06c: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x30f06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x30f070: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x30f070u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x399A60u));
    // 0x30f074: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x30f074u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x399A70u));
    // 0x30f078: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x30f078u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399A80u));
    // 0x30f07c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x30f07cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399A90u));
    // 0x30f080: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x30f080u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x30f084: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x30f084u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x30f088: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x30f088u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x30f08c: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x30f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x30f090: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f094: 0x24649aa0  addiu       $a0, $v1, -0x6560
    ctx->pc = 0x30f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941344));
    // 0x30f098: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x30f098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30f09c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x30f09cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x399AA0u));
    // 0x30f0a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x30f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x30f0a4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f0a8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30f0ac: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x30f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x30f0b0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x30f0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30f0b4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30f0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30f0b8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x30f0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f0bc: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x30f0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x30f0c0: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x30f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x30f0c4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x30f0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x30f0c8: 0x24045502  addiu       $a0, $zero, 0x5502
    ctx->pc = 0x30f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21762));
    // 0x30f0cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f0ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f0d0: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x30f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30f0d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30F0D4u;
    SET_GPR_U32(ctx, 31, 0x30F0DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30F0D4u, 0x30F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F0DCu;
label_30f0dc:
    // 0x30f0dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f0dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f0e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30F0E0u;
    SET_GPR_U32(ctx, 31, 0x30F0E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30F0E0u, 0x30F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F0E8u;
label_30f0e8:
    // 0x30f0e8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x30f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x30f0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30f0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f0f0: 0x0  nop
    ctx->pc = 0x30f0f0u;
    // NOP
    // 0x30f0f4: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x30f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x30f0f8: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f0fc: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30f100: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x30f104: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x30f104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30f108: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30f108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30f10c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x30f10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f110: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x30f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x30f114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30f118: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x30f118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30f11c: 0x24025501  addiu       $v0, $zero, 0x5501
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21761));
    // 0x30f120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f128: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x30f128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x30f12c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30F12Cu;
    SET_GPR_U32(ctx, 31, 0x30F134u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30F12Cu, 0x30F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F134u;
label_30f134:
    // 0x30f134: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f138: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30F138u;
    SET_GPR_U32(ctx, 31, 0x30F140u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30F138u, 0x30F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F140u;
label_30f140:
    // 0x30f140: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f140u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f144: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f148: 0x904409df  lbu         $a0, 0x9DF($v0)
    ctx->pc = 0x30f148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x30f14c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x30f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f150: 0x30550003  andi        $s5, $v0, 0x3
    ctx->pc = 0x30f150u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30f154: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f158: 0x24651340  addiu       $a1, $v1, 0x1340
    ctx->pc = 0x30f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4928));
    // 0x30f15c: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x30f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x30f160: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x30f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30f164: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f168: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30f168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30f16c: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x30f16cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f170: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f174: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30f174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30f178: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30f17c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f180: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30f180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30f184: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f188: 0x2a31004  sllv        $v0, $v1, $s5
    ctx->pc = 0x30f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x30f18c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f190: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f194: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f198: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30f198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30f19c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x30f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x30f1a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30f1a4: 0x244697b0  addiu       $a2, $v0, -0x6850
    ctx->pc = 0x30f1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30f1a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x30f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30f1ac: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f1b0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x30f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f1b4: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30F1B4u;
    SET_GPR_U32(ctx, 31, 0x30F1BCu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30F1B4u, 0x30F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1BCu;
label_30f1bc:
    // 0x30f1bc: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x30f1bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x30f1c0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30F1C0u;
    SET_GPR_U32(ctx, 31, 0x30F1C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30F1C0u, 0x30F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1C8u;
label_30f1c8:
    // 0x30f1c8: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x30f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x30f1cc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30F1CCu;
    SET_GPR_U32(ctx, 31, 0x30F1D4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30F1CCu, 0x30F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1D4u;
label_30f1d4:
    // 0x30f1d4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f1d8: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x30f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f1dc: 0xe6e00020  swc1        $f0, 0x20($s7)
    ctx->pc = 0x30f1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 32), bits); }
    // 0x30f1e0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f1e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x30f1e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f1ec: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x30f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f1f0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x30f1f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30f1f4: 0x0  nop
    ctx->pc = 0x30f1f4u;
    // NOP
    // 0x30f1f8: 0x0  nop
    ctx->pc = 0x30f1f8u;
    // NOP
    // 0x30f1fc: 0x0  nop
    ctx->pc = 0x30f1fcu;
    // NOP
    // 0x30f200: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x30F200u;
    SET_GPR_U32(ctx, 31, 0x30F208u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x30F200u, 0x30F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F208u;
label_30f208:
    // 0x30f208: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f20c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30f210: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x30f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f214: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30f218: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30f218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30f21c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x30f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f220: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30f220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30f224: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30f224u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30f228: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x30f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x30f22c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f230: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30f230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30f234: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x30F234u;
    {
        const bool branch_taken_0x30f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f234) {
            ctx->pc = 0x30F35Cu;
            goto label_30f35c;
        }
    }
    ctx->pc = 0x30F23Cu;
    // 0x30f23c: 0x153880  sll         $a3, $s5, 2
    ctx->pc = 0x30f23cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x30f240: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30f240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30f244: 0x248697b0  addiu       $a2, $a0, -0x6850
    ctx->pc = 0x30f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940592));
    // 0x30f248: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x30f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30f24c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f250: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30f250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30f258: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30f258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f25c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30f260: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30f260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f264: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f268: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30f26c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30f26cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f270: 0x3c033fc8  lui         $v1, 0x3FC8
    ctx->pc = 0x30f270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16328 << 16));
    // 0x30f274: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x30f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30f278: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30f278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f27c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x30f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f280: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30F280u;
    SET_GPR_U32(ctx, 31, 0x30F288u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30F280u, 0x30F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F288u;
label_30f288:
    // 0x30f288: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x30f288u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f28c: 0x8fb40298  lw          $s4, 0x298($sp)
    ctx->pc = 0x30f28cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f290: 0xc68100d4  lwc1        $f1, 0xD4($s4)
    ctx->pc = 0x30f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f294: 0x3c03bfc8  lui         $v1, 0xBFC8
    ctx->pc = 0x30f294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49096 << 16));
    // 0x30f298: 0x3465f5c3  ori         $a1, $v1, 0xF5C3
    ctx->pc = 0x30f298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30f29c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30f29cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f2a0: 0x0  nop
    ctx->pc = 0x30f2a0u;
    // NOP
    // 0x30f2a4: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x30f2a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f2a8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30f2ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30f2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f2b4: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x30F2B4u;
    {
        const bool branch_taken_0x30f2b4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x30f2b4) {
            ctx->pc = 0x30F2D0u;
            goto label_30f2d0;
        }
    }
    ctx->pc = 0x30F2BCu;
    // 0x30f2bc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x30f2bcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f2c0: 0x0  nop
    ctx->pc = 0x30f2c0u;
    // NOP
    // 0x30f2c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f2c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30F2C8u;
    {
        const bool branch_taken_0x30f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f2c8) {
            ctx->pc = 0x30F2ECu;
            goto label_30f2ec;
        }
    }
    ctx->pc = 0x30F2D0u;
label_30f2d0:
    // 0x30f2d0: 0x152042  srl         $a0, $s5, 1
    ctx->pc = 0x30f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x30f2d4: 0x32a50001  andi        $a1, $s5, 0x1
    ctx->pc = 0x30f2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x30f2d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30f2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30f2dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30f2dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f2e0: 0x0  nop
    ctx->pc = 0x30f2e0u;
    // NOP
    // 0x30f2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f2e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30f2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30f2ec:
    // 0x30f2ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30f2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30f2f0: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x30f2f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30f2f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30F2F4u;
    SET_GPR_U32(ctx, 31, 0x30F2FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30F2F4u, 0x30F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F2FCu;
label_30f2fc:
    // 0x30f2fc: 0x27b60210  addiu       $s6, $sp, 0x210
    ctx->pc = 0x30f2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f300: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x30f300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x30f304: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x30f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f308: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30f308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30f30c: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30F30Cu;
    SET_GPR_U32(ctx, 31, 0x30F314u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30F314u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F314u) { return; }
    ctx->pc = 0x30F314u;
label_30f314:
    // 0x30f314: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f318: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30f318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30f31c: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x30f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x30f320: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x30f320u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30f324: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F324u;
    SET_GPR_U32(ctx, 31, 0x30F32Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F32Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F32Cu) { return; }
    ctx->pc = 0x30F32Cu;
label_30f32c:
    // 0x30f32c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30f32cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f330: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30f334: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x30f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x30f338: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F338u;
    SET_GPR_U32(ctx, 31, 0x30F340u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F340u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F340u) { return; }
    ctx->pc = 0x30F340u;
label_30f340:
    // 0x30f340: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30f344: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x30f344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x30f348: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F348u;
    SET_GPR_U32(ctx, 31, 0x30F350u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F350u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F350u) { return; }
    ctx->pc = 0x30F350u;
label_30f350:
    // 0x30f350: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f354: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x30F354u;
    {
        const bool branch_taken_0x30f354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f354) {
            ctx->pc = 0x30F420u;
            goto label_30f420;
        }
    }
    ctx->pc = 0x30F35Cu;
label_30f35c:
    // 0x30f35c: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x30f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x30f360: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30f364: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30f368: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x30f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30f36c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30f370: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30f374: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30f378: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x30f378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f37c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f380: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x30f380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f384: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f388: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x30f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30f38c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x30f38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f390: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x30f390u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30f394: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30f394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x30f398: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30f39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30f39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f3a0: 0x27b20250  addiu       $s2, $sp, 0x250
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3a4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x30f3a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x30f3a8: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30F3A8u;
    SET_GPR_U32(ctx, 31, 0x30F3B0u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30F3A8u, 0x30F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3B0u;
label_30f3b0:
    // 0x30f3b0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f3b4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x30f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f3b8: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x30f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x30f3bc: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30f3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f3c4: 0x0  nop
    ctx->pc = 0x30f3c4u;
    // NOP
    // 0x30f3c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x30f3c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f3cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30F3CCu;
    SET_GPR_U32(ctx, 31, 0x30F3D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30F3CCu, 0x30F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3D4u;
label_30f3d4:
    // 0x30f3d4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x30f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3d8: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x30f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30f3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30f3e0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30F3E0u;
    SET_GPR_U32(ctx, 31, 0x30F3E8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30F3E8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F3E8u) { return; }
    ctx->pc = 0x30F3E8u;
label_30f3e8:
    // 0x30f3e8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30f3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30f3ec: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x30f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3f0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F3F0u;
    SET_GPR_U32(ctx, 31, 0x30F3F8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F3F8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F3F8u) { return; }
    ctx->pc = 0x30F3F8u;
label_30f3f8:
    // 0x30f3f8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30f3fc: 0x27a30260  addiu       $v1, $sp, 0x260
    ctx->pc = 0x30f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x30f400: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x30f400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30f404: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F404u;
    SET_GPR_U32(ctx, 31, 0x30F40Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F40Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F40Cu) { return; }
    ctx->pc = 0x30F40Cu;
label_30f40c:
    // 0x30f40c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30f410: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x30f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x30f414: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x30f414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f418: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F418u;
    SET_GPR_U32(ctx, 31, 0x30F420u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F420u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F420u) { return; }
    ctx->pc = 0x30F420u;
label_30f420:
    // 0x30f420: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f424: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30f428: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30f42c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30f430: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x30f430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x30f434: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x30f434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30f438: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x30f438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30f43c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x30f43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30f440: 0x34e8020c  ori         $t0, $a3, 0x20C
    ctx->pc = 0x30f440u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)524);
    // 0x30f444: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x30f444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x30f448: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x30f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x30f44c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x30f44cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x30f450: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x30f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x30f454: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30f454u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f458: 0x72603e28  paddub      $a3, $s3, $zero
    ctx->pc = 0x30f458u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30f45c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30f45cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f460: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30F460u;
    SET_GPR_U32(ctx, 31, 0x30F468u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30F460u, 0x30F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F468u;
label_30f468:
    // 0x30f468: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f46c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x30f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x30f470: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x30f470u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f474: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30f474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30f478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f47c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30f47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f480: 0xc0561d4  jal         func_158750
    ctx->pc = 0x30F480u;
    SET_GPR_U32(ctx, 31, 0x30F488u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x30F480u, 0x30F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F488u;
label_30f488:
    // 0x30f488: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30f488u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30f48c:
    // 0x30f48c: 0x8fa80298  lw          $t0, 0x298($sp)
    ctx->pc = 0x30f48cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f490: 0x910409df  lbu         $a0, 0x9DF($t0)
    ctx->pc = 0x30f490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2527)));
    // 0x30f494: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x30f494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f498: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x30f498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x30f49c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30F49Cu;
    {
        const bool branch_taken_0x30f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f49c) {
            ctx->pc = 0x30F4CCu;
            goto label_30f4cc;
        }
    }
    ctx->pc = 0x30F4A4u;
    // 0x30f4a4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4a8: 0x908509df  lbu         $a1, 0x9DF($a0)
    ctx->pc = 0x30f4a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x30f4ac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x30f4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x30f4b0: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x30f4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f4b4: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x30f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x30f4b8: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x30f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x30f4bc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4c0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30f4c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30f4c8: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30f4cc:
    // 0x30f4cc: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4d0: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f4d4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x30f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x30f4d8: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x30f4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30f4dc: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x30F4DCu;
    {
        const bool branch_taken_0x30f4dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f4dc) {
            ctx->pc = 0x30F524u;
            goto label_30f524;
        }
    }
    ctx->pc = 0x30F4E4u;
    // 0x30f4e4: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f4e8: 0x90a309df  lbu         $v1, 0x9DF($a1)
    ctx->pc = 0x30f4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2527)));
    // 0x30f4ec: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x30f4ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30f4f0: 0x32650020  andi        $a1, $s3, 0x20
    ctx->pc = 0x30f4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x30f4f4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x30F4F4u;
    {
        const bool branch_taken_0x30f4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f4f4) {
            ctx->pc = 0x30F524u;
            goto label_30f524;
        }
    }
    ctx->pc = 0x30F4FCu;
    // 0x30f4fc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f500: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x30f500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30f504: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x30f504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30f508: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x30f508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30f50c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x30f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30f510: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x30f510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x30f514: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f518: 0x8c851338  lw          $a1, 0x1338($a0)
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f51c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x30f51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30f520: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30f520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
label_30f524:
    // 0x30f524: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f528: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x30f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30f52c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x30f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x30f530: 0x34a4fe00  ori         $a0, $a1, 0xFE00
    ctx->pc = 0x30f530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65024);
    // 0x30f534: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30f538: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x30F538u;
    {
        const bool branch_taken_0x30f538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f538) {
            ctx->pc = 0x30F6B0u;
            goto label_30f6b0;
        }
    }
    ctx->pc = 0x30F540u;
    // 0x30f540: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f544: 0x8c851338  lw          $a1, 0x1338($a0)
    ctx->pc = 0x30f544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f548: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x30f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30f54c: 0x3464e000  ori         $a0, $v1, 0xE000
    ctx->pc = 0x30f54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x30f550: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x30f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30f554: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F554u;
    {
        const bool branch_taken_0x30f554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f554) {
            ctx->pc = 0x30F574u;
            goto label_30f574;
        }
    }
    ctx->pc = 0x30F55Cu;
    // 0x30f55c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f560: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x30f560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30f564: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x30f564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x30f568: 0xc0c44fc  jal         func_3113F0
    ctx->pc = 0x30F568u;
    SET_GPR_U32(ctx, 31, 0x30F570u);
    ctx->pc = 0x3113F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3113F0u, 0x30F568u, 0x30F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F570u;
label_30f570:
    // 0x30f570: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30f570u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30f574:
    // 0x30f574: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f578: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f57c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x30f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x30f580: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30f584: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30F584u;
    {
        const bool branch_taken_0x30f584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f584) {
            ctx->pc = 0x30F5BCu;
            goto label_30f5bc;
        }
    }
    ctx->pc = 0x30F58Cu;
    // 0x30f58c: 0x8fa70298  lw          $a3, 0x298($sp)
    ctx->pc = 0x30f58cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f590: 0x8ce41338  lw          $a0, 0x1338($a3)
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4920)));
    // 0x30f594: 0x30861e00  andi        $a2, $a0, 0x1E00
    ctx->pc = 0x30f594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7680);
    // 0x30f598: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F598u;
    {
        const bool branch_taken_0x30f598 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f598) {
            ctx->pc = 0x30F5BCu;
            goto label_30f5bc;
        }
    }
    ctx->pc = 0x30F5A0u;
    // 0x30f5a0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f5a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30f5a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f5a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30f5ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x30f5acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f5b0: 0xc0c44fc  jal         func_3113F0
    ctx->pc = 0x30F5B0u;
    SET_GPR_U32(ctx, 31, 0x30F5B8u);
    ctx->pc = 0x3113F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3113F0u, 0x30F5B0u, 0x30F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F5B8u;
label_30f5b8:
    // 0x30f5b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30f5b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_30f5bc:
    // 0x30f5bc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f5c0: 0x8c661338  lw          $a2, 0x1338($v1)
    ctx->pc = 0x30f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30f5c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x30f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30f5c8: 0x3465fe00  ori         $a1, $v1, 0xFE00
    ctx->pc = 0x30f5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65024);
    // 0x30f5cc: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x30f5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x30f5d0: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x30F5D0u;
    {
        const bool branch_taken_0x30f5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5d0) {
            ctx->pc = 0x30F6B0u;
            goto label_30f6b0;
        }
    }
    ctx->pc = 0x30F5D8u;
    // 0x30f5d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30f5d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30f5dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x30F5DCu;
    {
        const bool branch_taken_0x30f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5dc) {
            ctx->pc = 0x30F6A0u;
            goto label_30f6a0;
        }
    }
    ctx->pc = 0x30F5E4u;
label_30f5e4:
    // 0x30f5e4: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x30f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f5e8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x30f5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30f5ec: 0x2272004  sllv        $a0, $a3, $s1
    ctx->pc = 0x30f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x30f5f0: 0x8cc61338  lw          $a2, 0x1338($a2)
    ctx->pc = 0x30f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4920)));
    // 0x30f5f4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x30f5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x30f5f8: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30F5F8u;
    {
        const bool branch_taken_0x30f5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f5f8) {
            ctx->pc = 0x30F698u;
            goto label_30f698;
        }
    }
    ctx->pc = 0x30F600u;
    // 0x30f600: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30f600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30f604: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30f604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30f608: 0x246397d0  addiu       $v1, $v1, -0x6830
    ctx->pc = 0x30f608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940624));
    // 0x30f60c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f610: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f614: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x30f614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30f618: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30f61c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f620: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f624: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30f628: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30f628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f62c: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x30f62cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x30f630: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x30f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x30f634: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x30f634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x30f638: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x30f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x30f63c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x30f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x30f640: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x30f640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x30f644: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x30f644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x30f648: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x30f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x30f64c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x30f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x30f650: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x30f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x30f654: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x30f654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x30f658: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x30F658u;
    {
        const bool branch_taken_0x30f658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f658) {
            ctx->pc = 0x30F698u;
            goto label_30f698;
        }
    }
    ctx->pc = 0x30F660u;
    // 0x30f660: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x30f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x30f664: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x30f664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x30f668: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30f668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f66c: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x30f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x30f670: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f674: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x30f674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x30f678: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x30f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30f67c: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x30f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x30f680: 0x603827  not         $a3, $v1
    ctx->pc = 0x30f680u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x30f684: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f688: 0x8c861338  lw          $a2, 0x1338($a0)
    ctx->pc = 0x30f688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f68c: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x30f68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x30f690: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30f690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x30f694: 0x0  nop
    ctx->pc = 0x30f694u;
    // NOP
label_30f698:
    // 0x30f698: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x30f698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f69c: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x30f69cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_30f6a0:
    // 0x30f6a0: 0x2e240008  sltiu       $a0, $s1, 0x8
    ctx->pc = 0x30f6a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30f6a4: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x30F6A4u;
    {
        const bool branch_taken_0x30f6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f6a4) {
            ctx->pc = 0x30F5E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f5e4;
        }
    }
    ctx->pc = 0x30F6ACu;
    // 0x30f6ac: 0x0  nop
    ctx->pc = 0x30f6acu;
    // NOP
label_30f6b0:
    // 0x30f6b0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x30f6b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f6b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30f6b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f6b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30f6b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f6bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30f6bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f6c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30f6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f6c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30f6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f6d4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x30f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F6E0u;
}
