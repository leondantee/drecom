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

// Function: ectrl0a_move10
// Address: 0x2f6840 - 0x2f7d70
void ectrl0a_move10_0x2f6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl0a_move10_0x2f6840");
#endif

    switch (ctx->pc) {
        case 0x2f6934u: goto label_2f6934;
        case 0x2f69a4u: goto label_2f69a4;
        case 0x2f6a34u: goto label_2f6a34;
        case 0x2f6a94u: goto label_2f6a94;
        case 0x2f6ac4u: goto label_2f6ac4;
        case 0x2f6b34u: goto label_2f6b34;
        case 0x2f6b64u: goto label_2f6b64;
        case 0x2f6bdcu: goto label_2f6bdc;
        case 0x2f6c08u: goto label_2f6c08;
        case 0x2f6c68u: goto label_2f6c68;
        case 0x2f6d28u: goto label_2f6d28;
        case 0x2f6da0u: goto label_2f6da0;
        case 0x2f6e30u: goto label_2f6e30;
        case 0x2f6e90u: goto label_2f6e90;
        case 0x2f6ebcu: goto label_2f6ebc;
        case 0x2f6f1cu: goto label_2f6f1c;
        case 0x2f6f44u: goto label_2f6f44;
        case 0x2f6fa8u: goto label_2f6fa8;
        case 0x2f6fd4u: goto label_2f6fd4;
        case 0x2f7034u: goto label_2f7034;
        case 0x2f7104u: goto label_2f7104;
        case 0x2f7164u: goto label_2f7164;
        case 0x2f7258u: goto label_2f7258;
        case 0x2f72c0u: goto label_2f72c0;
        case 0x2f72ecu: goto label_2f72ec;
        case 0x2f7350u: goto label_2f7350;
        case 0x2f7444u: goto label_2f7444;
        case 0x2f74acu: goto label_2f74ac;
        case 0x2f7544u: goto label_2f7544;
        case 0x2f75c0u: goto label_2f75c0;
        case 0x2f75ecu: goto label_2f75ec;
        case 0x2f7660u: goto label_2f7660;
        case 0x2f7728u: goto label_2f7728;
        case 0x2f7790u: goto label_2f7790;
        case 0x2f7884u: goto label_2f7884;
        case 0x2f78ecu: goto label_2f78ec;
        case 0x2f7924u: goto label_2f7924;
        case 0x2f79a0u: goto label_2f79a0;
        case 0x2f7a94u: goto label_2f7a94;
        case 0x2f7af8u: goto label_2f7af8;
        case 0x2f7b94u: goto label_2f7b94;
        case 0x2f7c14u: goto label_2f7c14;
        case 0x2f7c40u: goto label_2f7c40;
        case 0x2f7cbcu: goto label_2f7cbc;
        default: break;
    }

    ctx->pc = 0x2f6840u;

    // 0x2f6840: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2f6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2f6844: 0x7fbf00b0  sq          $ra, 0xB0($sp)
    ctx->pc = 0x2f6844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 31));
    // 0x2f6848: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2f6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2f684c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2f684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2f6850: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2f6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2f6854: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2f6854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2f6858: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2f6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2f685c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2f685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2f6860: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2f6864: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f6864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2f6868: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f686c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f686cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f6870: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x2f6874: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2f6874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2f6878: 0x24838fa0  addiu       $v1, $a0, -0x7060
    ctx->pc = 0x2f6878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938528));
    // 0x2f687c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6880: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2f6880u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398FA0u));
    // 0x2f6884: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f6884u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2f6888: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f6888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f688c: 0x24648fb0  addiu       $a0, $v1, -0x7050
    ctx->pc = 0x2f688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938544));
    // 0x2f6890: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2f6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f6894: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2f6894u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x398FB0u));
    // 0x2f6898: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2f6898u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2f689c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f689cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f68a0: 0x24648fc0  addiu       $a0, $v1, -0x7040
    ctx->pc = 0x2f68a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938560));
    // 0x2f68a4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2f68a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f68a8: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2f68a8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x398FC0u));
    // 0x2f68ac: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2f68acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2f68b0: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f68b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f68b4: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2f68b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2f68b8: 0x31090001  andi        $t1, $t0, 0x1
    ctx->pc = 0x2f68b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2f68bc: 0x112000f8  beqz        $t1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2F68BCu;
    {
        const bool branch_taken_0x2f68bc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f68bc) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F68C4u;
    // 0x2f68c4: 0x8faa00f8  lw          $t2, 0xF8($sp)
    ctx->pc = 0x2f68c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f68c8: 0x91430101  lbu         $v1, 0x101($t2)
    ctx->pc = 0x2f68c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 257)));
    // 0x2f68cc: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2F68CCu;
    {
        const bool branch_taken_0x2f68cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f68cc) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F68D4u;
    // 0x2f68d4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f68d8: 0x90830100  lbu         $v1, 0x100($a0)
    ctx->pc = 0x2f68d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2f68dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f68dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f68e0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2f68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f68e4: 0x10a300e9  beq         $a1, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2F68E4u;
    {
        const bool branch_taken_0x2f68e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f68e4) {
            ctx->pc = 0x2F6C8Cu;
            goto label_2f6c8c;
        }
    }
    ctx->pc = 0x2F68ECu;
    // 0x2f68ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f68f0: 0x10a300c3  beq         $a1, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2F68F0u;
    {
        const bool branch_taken_0x2f68f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f68f0) {
            ctx->pc = 0x2F6C00u;
            goto label_2f6c00;
        }
    }
    ctx->pc = 0x2F68F8u;
    // 0x2f68f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f68fc: 0x10a30096  beq         $a1, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2F68FCu;
    {
        const bool branch_taken_0x2f68fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f68fc) {
            ctx->pc = 0x2F6B58u;
            goto label_2f6b58;
        }
    }
    ctx->pc = 0x2F6904u;
    // 0x2f6904: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6908: 0x10a4006b  beq         $a1, $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2F6908u;
    {
        const bool branch_taken_0x2f6908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f6908) {
            ctx->pc = 0x2F6AB8u;
            goto label_2f6ab8;
        }
    }
    ctx->pc = 0x2F6910u;
    // 0x2f6910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6914: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2F6914u;
    {
        const bool branch_taken_0x2f6914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6914) {
            ctx->pc = 0x2F6A2Cu;
            goto label_2f6a2c;
        }
    }
    ctx->pc = 0x2F691Cu;
    // 0x2f691c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F691Cu;
    {
        const bool branch_taken_0x2f691c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f691c) {
            ctx->pc = 0x2F692Cu;
            goto label_2f692c;
        }
    }
    ctx->pc = 0x2F6924u;
    // 0x2f6924: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2F6924u;
    {
        const bool branch_taken_0x2f6924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6924) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F692Cu;
label_2f692c:
    // 0x2f692c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F692Cu;
    SET_GPR_U32(ctx, 31, 0x2F6934u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F692Cu, 0x2F6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6934u;
label_2f6934:
    // 0x2f6934: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6938: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f693c: 0x0  nop
    ctx->pc = 0x2f693cu;
    // NOP
    // 0x2f6940: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6944: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f6944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6948: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f6948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f694c: 0x0  nop
    ctx->pc = 0x2f694cu;
    // NOP
    // 0x2f6950: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6950u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6954: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6958: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f695c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6960: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6964: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6968: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2f6968u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f696c: 0x8c8700c4  lw          $a3, 0xC4($a0)
    ctx->pc = 0x2f696cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6970: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2f6970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6974: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x2f6974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f6978: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2f6978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f697c: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x2f697cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6980: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2f6980u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2f6984: 0x8c6a00c4  lw          $t2, 0xC4($v1)
    ctx->pc = 0x2f6984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6988: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2f6988u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f698c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6990: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6994: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6998: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6998u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f699c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F699Cu;
    SET_GPR_U32(ctx, 31, 0x2F69A4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F699Cu, 0x2F69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F69A4u;
label_2f69a4:
    // 0x2f69a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f69a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f69a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f69a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f69ac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f69acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f69b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f69b4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2f69b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f69b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2f69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f69bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f69bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f69c0: 0x34a00  sll         $t1, $v1, 8
    ctx->pc = 0x2f69c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f69c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f69c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f69c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f69cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f69ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f69d0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2f69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f69d4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2f69d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f69d8: 0x30c7ff00  andi        $a3, $a2, 0xFF00
    ctx->pc = 0x2f69d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x2f69dc: 0x74202  srl         $t0, $a3, 8
    ctx->pc = 0x2f69dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2f69e0: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f69e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f69e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f69e8: 0xac297508  sw          $t1, 0x7508($at)
    ctx->pc = 0x2f69e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f69ec: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x2f69ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2f69f0: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x2f69f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2f69f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F69F4u;
    {
        const bool branch_taken_0x2f69f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f69f4) {
            ctx->pc = 0x2F6A08u;
            goto label_2f6a08;
        }
    }
    ctx->pc = 0x2F69FCu;
    // 0x2f69fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f69fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6A00u;
    {
        const bool branch_taken_0x2f6a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a00) {
            ctx->pc = 0x2F6A0Cu;
            goto label_2f6a0c;
        }
    }
    ctx->pc = 0x2F6A08u;
label_2f6a08:
    // 0x2f6a08: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f6a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f6a0c:
    // 0x2f6a0c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2f6a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2f6a10: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a14: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6a18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6a1c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a20: 0xa0a30101  sb          $v1, 0x101($a1)
    ctx->pc = 0x2f6a20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6a24: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2F6A24u;
    {
        const bool branch_taken_0x2f6a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a24) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F6A2Cu;
label_2f6a2c:
    // 0x2f6a2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6A2Cu, 0x2F6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A34u;
label_2f6a34:
    // 0x2f6a34: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6a38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6a3c: 0x0  nop
    ctx->pc = 0x2f6a3cu;
    // NOP
    // 0x2f6a40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6a44: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6a4c: 0x0  nop
    ctx->pc = 0x2f6a4cu;
    // NOP
    // 0x2f6a50: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6a50u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6a54: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x2f6a54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6a58: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x2f6a58u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6a5c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6a60: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a64: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6a68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6a6c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6a70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2f6a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6a74: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6a78: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f6a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6a7c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f6a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6a80: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6a84: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6a88: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6a88u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6a8c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A94u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6A8Cu, 0x2F6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A94u;
label_2f6a94:
    // 0x2f6a94: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f6a94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6a98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6a9c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6aa0: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6aa4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6aa8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6aac: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6ab0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2F6AB0u;
    {
        const bool branch_taken_0x2f6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ab0) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F6AB8u;
label_2f6ab8:
    // 0x2f6ab8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f6ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6abc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6ABCu;
    SET_GPR_U32(ctx, 31, 0x2F6AC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6ABCu, 0x2F6AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AC4u;
label_2f6ac4:
    // 0x2f6ac4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6acc: 0x0  nop
    ctx->pc = 0x2f6accu;
    // NOP
    // 0x2f6ad0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6ad4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6adc: 0x0  nop
    ctx->pc = 0x2f6adcu;
    // NOP
    // 0x2f6ae0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6ae0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6ae4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6ae8: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f6ae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6aec: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6af0: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6af4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6af8: 0x8ca700c4  lw          $a3, 0xC4($a1)
    ctx->pc = 0x2f6af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2f6afc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2f6afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6b00: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f6b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6b04: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2f6b04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f6b08: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6b0c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2f6b0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f6b10: 0x8c4a00c4  lw          $t2, 0xC4($v0)
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f6b14: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2f6b14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f6b18: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x2f6b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6b1c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6b20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f6b20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f6b24: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6b28: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6b28u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6b2c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B34u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6B2Cu, 0x2F6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B34u;
label_2f6b34:
    // 0x2f6b34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6b34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6b38: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2f6b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6b3c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b40: 0xa0700100  sb          $s0, 0x100($v1)
    ctx->pc = 0x2f6b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 16));
    // 0x2f6b44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6b48: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b4c: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f6b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6b50: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2F6B50u;
    {
        const bool branch_taken_0x2f6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6b50) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F6B58u;
label_2f6b58:
    // 0x2f6b58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f6b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6b5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6B5Cu, 0x2F6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B64u;
label_2f6b64:
    // 0x2f6b64: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x2f6b64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6b68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2f6b68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6b6c: 0x0  nop
    ctx->pc = 0x2f6b6cu;
    // NOP
    // 0x2f6b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6b74: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6b7c: 0x0  nop
    ctx->pc = 0x2f6b7cu;
    // NOP
    // 0x2f6b80: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6b80u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6b84: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6b88: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6b8c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6b90: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b94: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6b98: 0x8c8600c4  lw          $a2, 0xC4($a0)
    ctx->pc = 0x2f6b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6b9c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f6b9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f6ba0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6ba4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2f6ba4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6ba8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2f6ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6bac: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f6bacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f6bb0: 0x8c4900c4  lw          $t1, 0xC4($v0)
    ctx->pc = 0x2f6bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f6bb4: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f6bb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f6bb8: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6bbc: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f6bbcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f6bc0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6bc4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2f6bc4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6bc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f6bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f6bcc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6bd0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6bd0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6bd4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6BD4u;
    SET_GPR_U32(ctx, 31, 0x2F6BDCu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6BD4u, 0x2F6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BDCu;
label_2f6bdc:
    // 0x2f6bdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6bdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6be0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6be4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6be8: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6bec: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6bf0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6bf4: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6bf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6BF8u;
    {
        const bool branch_taken_0x2f6bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6bf8) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F6C00u;
label_2f6c00:
    // 0x2f6c00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6C00u;
    SET_GPR_U32(ctx, 31, 0x2F6C08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6C00u, 0x2F6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C08u;
label_2f6c08:
    // 0x2f6c08: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6c0c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f6c0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6c10: 0x0  nop
    ctx->pc = 0x2f6c10u;
    // NOP
    // 0x2f6c14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6c18: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6c1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f6c1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6c20: 0x0  nop
    ctx->pc = 0x2f6c20u;
    // NOP
    // 0x2f6c24: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6c24u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6c28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6c2c: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f6c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c30: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6c38: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6c3c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6c40: 0x8d0400c4  lw          $a0, 0xC4($t0)
    ctx->pc = 0x2f6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f6c44: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2f6c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6c48: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6c4c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f6c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f6c50: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2f6c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f6c54: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6c58: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6c5c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6c5cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6c60: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6C60u;
    SET_GPR_U32(ctx, 31, 0x2F6C68u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6C60u, 0x2F6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C68u;
label_2f6c68:
    // 0x2f6c68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6c68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6c6c: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f6c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f6c70: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c74: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6c78: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6c7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c80: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6c84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6C84u;
    {
        const bool branch_taken_0x2f6c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c84) {
            ctx->pc = 0x2F6CA0u;
            goto label_2f6ca0;
        }
    }
    ctx->pc = 0x2F6C8Cu;
label_2f6c8c:
    // 0x2f6c8c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c90: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6c94: 0x38c40010  xori        $a0, $a2, 0x10
    ctx->pc = 0x2f6c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)16);
    // 0x2f6c98: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f6c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f6ca0:
    // 0x2f6ca0: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ca4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2f6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f6ca8: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x2f6ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f6cac: 0x108000ef  beqz        $a0, . + 4 + (0xEF << 2)
    ctx->pc = 0x2F6CACu;
    {
        const bool branch_taken_0x2f6cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cac) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6CB4u;
    // 0x2f6cb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6cb8: 0x90630101  lbu         $v1, 0x101($v1)
    ctx->pc = 0x2f6cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
    // 0x2f6cbc: 0x146000eb  bnez        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x2F6CBCu;
    {
        const bool branch_taken_0x2f6cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cbc) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6CC4u;
    // 0x2f6cc4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6cc8: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2f6cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f6ccc: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x2f6cccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f6cd0: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f6cd4: 0x128400e0  beq         $s4, $a0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2F6CD4u;
    {
        const bool branch_taken_0x2f6cd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f6cd4) {
            ctx->pc = 0x2F7058u;
            goto label_2f7058;
        }
    }
    ctx->pc = 0x2F6CDCu;
    // 0x2f6cdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6ce0: 0x128300ba  beq         $s4, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x2F6CE0u;
    {
        const bool branch_taken_0x2f6ce0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6ce0) {
            ctx->pc = 0x2F6FCCu;
            goto label_2f6fcc;
        }
    }
    ctx->pc = 0x2F6CE8u;
    // 0x2f6ce8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f6ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6cec: 0x12900093  beq         $s4, $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2F6CECu;
    {
        const bool branch_taken_0x2f6cec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f6cec) {
            ctx->pc = 0x2F6F3Cu;
            goto label_2f6f3c;
        }
    }
    ctx->pc = 0x2F6CF4u;
    // 0x2f6cf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6cf8: 0x1284006e  beq         $s4, $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2F6CF8u;
    {
        const bool branch_taken_0x2f6cf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f6cf8) {
            ctx->pc = 0x2F6EB4u;
            goto label_2f6eb4;
        }
    }
    ctx->pc = 0x2F6D00u;
    // 0x2f6d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6d04: 0x12830048  beq         $s4, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F6D04u;
    {
        const bool branch_taken_0x2f6d04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6d04) {
            ctx->pc = 0x2F6E28u;
            goto label_2f6e28;
        }
    }
    ctx->pc = 0x2F6D0Cu;
    // 0x2f6d0c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6D0Cu;
    {
        const bool branch_taken_0x2f6d0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d0c) {
            ctx->pc = 0x2F6D1Cu;
            goto label_2f6d1c;
        }
    }
    ctx->pc = 0x2F6D14u;
    // 0x2f6d14: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2F6D14u;
    {
        const bool branch_taken_0x2f6d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d14) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6D1Cu;
label_2f6d1c:
    // 0x2f6d1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f6d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6d20: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6D20u;
    SET_GPR_U32(ctx, 31, 0x2F6D28u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6D20u, 0x2F6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D28u;
label_2f6d28:
    // 0x2f6d28: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6d2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f6d2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6d30: 0x0  nop
    ctx->pc = 0x2f6d30u;
    // NOP
    // 0x2f6d34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6d38: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f6d38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6d3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f6d3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6d40: 0x0  nop
    ctx->pc = 0x2f6d40u;
    // NOP
    // 0x2f6d44: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6d44u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6d48: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6d4c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6d50: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6d54: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6d58: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f6d58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6d5c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x2f6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6d60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2f6d60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2f6d64: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2f6d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f6d68: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f6d68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f6d6c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2f6d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6d70: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2f6d70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6d74: 0x8c4800c4  lw          $t0, 0xC4($v0)
    ctx->pc = 0x2f6d74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f6d78: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f6d78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f6d7c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2f6d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6d80: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f6d80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f6d84: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6d84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6d88: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2f6d88u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f6d8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f6d8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f6d90: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6d94: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6d94u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6d98: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6D98u;
    SET_GPR_U32(ctx, 31, 0x2F6DA0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6D98u, 0x2F6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DA0u;
label_2f6da0:
    // 0x2f6da0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6da0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f6da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f6da8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f6dac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f6dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f6db0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f6db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f6db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6db8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2f6db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f6dbc: 0x64200  sll         $t0, $a2, 8
    ctx->pc = 0x2f6dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2f6dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f6dc4: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x2f6dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x2f6dc8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x2f6dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f6dcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f6dd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6dd4: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x2f6dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2f6dd8: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x2f6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2f6ddc: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x2f6ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2f6de0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f6de4: 0xac277508  sw          $a3, 0x7508($at)
    ctx->pc = 0x2f6de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f6de8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2f6de8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f6dec: 0x31090003  andi        $t1, $t0, 0x3
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2f6df0: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6DF0u;
    {
        const bool branch_taken_0x2f6df0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6df0) {
            ctx->pc = 0x2F6E04u;
            goto label_2f6e04;
        }
    }
    ctx->pc = 0x2F6DF8u;
    // 0x2f6df8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f6df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6DFCu;
    {
        const bool branch_taken_0x2f6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6dfc) {
            ctx->pc = 0x2F6E08u;
            goto label_2f6e08;
        }
    }
    ctx->pc = 0x2F6E04u;
label_2f6e04:
    // 0x2f6e04: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2f6e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f6e08:
    // 0x2f6e08: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x2f6e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2f6e0c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e10: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6e14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6e18: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e1c: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6e20: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2F6E20u;
    {
        const bool branch_taken_0x2f6e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6e20) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6E28u;
label_2f6e28:
    // 0x2f6e28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6E28u;
    SET_GPR_U32(ctx, 31, 0x2F6E30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6E28u, 0x2F6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E30u;
label_2f6e30:
    // 0x2f6e30: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6e34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6e38: 0x0  nop
    ctx->pc = 0x2f6e38u;
    // NOP
    // 0x2f6e3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6e40: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f6e40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6e44: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f6e44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6e48: 0x0  nop
    ctx->pc = 0x2f6e48u;
    // NOP
    // 0x2f6e4c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6e4cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6e50: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6e54: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e58: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f6e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6e60: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6e64: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6e68: 0x8ca400c4  lw          $a0, 0xC4($a1)
    ctx->pc = 0x2f6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2f6e6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f6e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6e70: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6e74: 0x8d0700c4  lw          $a3, 0xC4($t0)
    ctx->pc = 0x2f6e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f6e78: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2f6e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6e7c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6e80: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6e84: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6e84u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6e88: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6E88u;
    SET_GPR_U32(ctx, 31, 0x2F6E90u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6E88u, 0x2F6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E90u;
label_2f6e90:
    // 0x2f6e90: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x2f6e90u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6e94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6e98: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e9c: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f6e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6ea0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6ea4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ea8: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f6ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6eac: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2F6EACu;
    {
        const bool branch_taken_0x2f6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6eac) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6EB4u;
label_2f6eb4:
    // 0x2f6eb4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6EB4u;
    SET_GPR_U32(ctx, 31, 0x2F6EBCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6EB4u, 0x2F6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EBCu;
label_2f6ebc:
    // 0x2f6ebc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6ec0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6ec4: 0x0  nop
    ctx->pc = 0x2f6ec4u;
    // NOP
    // 0x2f6ec8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6ecc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6ed4: 0x0  nop
    ctx->pc = 0x2f6ed4u;
    // NOP
    // 0x2f6ed8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6ed8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6edc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6ee0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ee4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6eec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6ef0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f6ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6ef4: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6ef8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f6ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6efc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f00: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f6f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6f04: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2f6f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6f08: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f0c: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6f0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f10: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6f10u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6f14: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6F14u;
    SET_GPR_U32(ctx, 31, 0x2F6F1Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6F14u, 0x2F6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F1Cu;
label_2f6f1c:
    // 0x2f6f1c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f6f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6f20: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f24: 0xa06a0100  sb          $t2, 0x100($v1)
    ctx->pc = 0x2f6f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f6f28: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6f2c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f30: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6f34: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2F6F34u;
    {
        const bool branch_taken_0x2f6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f34) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6F3Cu;
label_2f6f3c:
    // 0x2f6f3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6F3Cu, 0x2F6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F44u;
label_2f6f44:
    // 0x2f6f44: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6f48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f6f48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6f4c: 0x0  nop
    ctx->pc = 0x2f6f4cu;
    // NOP
    // 0x2f6f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6f54: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f6f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f6f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6f5c: 0x0  nop
    ctx->pc = 0x2f6f5cu;
    // NOP
    // 0x2f6f60: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6f60u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6f64: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6f68: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f6c: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6f70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6f74: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6f78: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6f7c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6f80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2f6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6f84: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f6f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f6f88: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f8c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f6f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f6f90: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2f6f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f6f94: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f98: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6f9c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6f9cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6fa0: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6FA0u;
    SET_GPR_U32(ctx, 31, 0x2F6FA8u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6FA0u, 0x2F6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FA8u;
label_2f6fa8:
    // 0x2f6fa8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f6fa8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6fac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6fb0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6fb4: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6fb8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6fbc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6fc0: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6fc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F6FC4u;
    {
        const bool branch_taken_0x2f6fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6fc4) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F6FCCu;
label_2f6fcc:
    // 0x2f6fcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6FCCu;
    SET_GPR_U32(ctx, 31, 0x2F6FD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6FCCu, 0x2F6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FD4u;
label_2f6fd4:
    // 0x2f6fd4: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6fd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6fdc: 0x0  nop
    ctx->pc = 0x2f6fdcu;
    // NOP
    // 0x2f6fe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6fe4: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6fe8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f6fe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6fec: 0x0  nop
    ctx->pc = 0x2f6fecu;
    // NOP
    // 0x2f6ff0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6ff0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6ff4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6ff8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6ffc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7000: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7004: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f7008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f700c: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f700cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f7010: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f7010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f7014: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7018: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f7018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f701c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2f701cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f7020: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7024: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7028: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7028u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f702c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F702Cu;
    SET_GPR_U32(ctx, 31, 0x2F7034u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F702Cu, 0x2F7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7034u;
label_2f7034:
    // 0x2f7034: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7034u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7038: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f703c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7040: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f7040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7044: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7048: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f704c: 0xa0650101  sb          $a1, 0x101($v1)
    ctx->pc = 0x2f704cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f7050: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7050u;
    {
        const bool branch_taken_0x2f7050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7050) {
            ctx->pc = 0x2F706Cu;
            goto label_2f706c;
        }
    }
    ctx->pc = 0x2F7058u;
label_2f7058:
    // 0x2f7058: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f705c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7060: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f7060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f7064: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7068: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f7068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f706c:
    // 0x2f706c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7070: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2f7070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f7074: 0x30e40004  andi        $a0, $a3, 0x4
    ctx->pc = 0x2f7074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2f7078: 0x10800185  beqz        $a0, . + 4 + (0x185 << 2)
    ctx->pc = 0x2F7078u;
    {
        const bool branch_taken_0x2f7078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7078) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F7080u;
    // 0x2f7080: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7084: 0x90660101  lbu         $a2, 0x101($v1)
    ctx->pc = 0x2f7084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
    // 0x2f7088: 0x14c00181  bnez        $a2, . + 4 + (0x181 << 2)
    ctx->pc = 0x2F7088u;
    {
        const bool branch_taken_0x2f7088 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7088) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F7090u;
    // 0x2f7090: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7094: 0x90e80100  lbu         $t0, 0x100($a3)
    ctx->pc = 0x2f7094u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x2f7098: 0x310b00ff  andi        $t3, $t0, 0xFF
    ctx->pc = 0x2f7098u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f709c: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x2f709cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f70a0: 0x116a0176  beq         $t3, $t2, . + 4 + (0x176 << 2)
    ctx->pc = 0x2F70A0u;
    {
        const bool branch_taken_0x2f70a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x2f70a0) {
            ctx->pc = 0x2F767Cu;
            goto label_2f767c;
        }
    }
    ctx->pc = 0x2F70A8u;
    // 0x2f70a8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2f70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f70ac: 0x1168014d  beq         $t3, $t0, . + 4 + (0x14D << 2)
    ctx->pc = 0x2F70ACu;
    {
        const bool branch_taken_0x2f70ac = (GPR_U64(ctx, 11) == GPR_U64(ctx, 8));
        if (branch_taken_0x2f70ac) {
            ctx->pc = 0x2F75E4u;
            goto label_2f75e4;
        }
    }
    ctx->pc = 0x2F70B4u;
    // 0x2f70b4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f70b8: 0x11690120  beq         $t3, $t1, . + 4 + (0x120 << 2)
    ctx->pc = 0x2F70B8u;
    {
        const bool branch_taken_0x2f70b8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 9));
        if (branch_taken_0x2f70b8) {
            ctx->pc = 0x2F753Cu;
            goto label_2f753c;
        }
    }
    ctx->pc = 0x2F70C0u;
    // 0x2f70c0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2f70c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f70c4: 0x116a00c5  beq         $t3, $t2, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2F70C4u;
    {
        const bool branch_taken_0x2f70c4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        if (branch_taken_0x2f70c4) {
            ctx->pc = 0x2F73DCu;
            goto label_2f73dc;
        }
    }
    ctx->pc = 0x2F70CCu;
    // 0x2f70cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f70d0: 0x11630084  beq         $t3, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2F70D0u;
    {
        const bool branch_taken_0x2f70d0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f70d0) {
            ctx->pc = 0x2F72E4u;
            goto label_2f72e4;
        }
    }
    ctx->pc = 0x2F70D8u;
    // 0x2f70d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f70dc: 0x11630045  beq         $t3, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2F70DCu;
    {
        const bool branch_taken_0x2f70dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f70dc) {
            ctx->pc = 0x2F71F4u;
            goto label_2f71f4;
        }
    }
    ctx->pc = 0x2F70E4u;
    // 0x2f70e4: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F70E4u;
    {
        const bool branch_taken_0x2f70e4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70e4) {
            ctx->pc = 0x2F70F4u;
            goto label_2f70f4;
        }
    }
    ctx->pc = 0x2F70ECu;
    // 0x2f70ec: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x2F70ECu;
    {
        const bool branch_taken_0x2f70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70ec) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F70F4u;
label_2f70f4:
    // 0x2f70f4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f70f8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f70f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f70fc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F70FCu;
    SET_GPR_U32(ctx, 31, 0x2F7104u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F70FCu, 0x2F7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7104u;
label_2f7104:
    // 0x2f7104: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f7104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7108: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f7108u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f710c: 0x0  nop
    ctx->pc = 0x2f710cu;
    // NOP
    // 0x2f7110: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7114: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f711c: 0x0  nop
    ctx->pc = 0x2f711cu;
    // NOP
    // 0x2f7120: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7120u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7124: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7128: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f712c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7130: 0x8fa900f8  lw          $t1, 0xF8($sp)
    ctx->pc = 0x2f7130u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7134: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7138: 0x8d2400c4  lw          $a0, 0xC4($t1)
    ctx->pc = 0x2f7138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x2f713c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2f713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f7140: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7144: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f7144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7148: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2f7148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f714c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f714cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7150: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f7154: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7158: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7158u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f715c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F715Cu;
    SET_GPR_U32(ctx, 31, 0x2F7164u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F715Cu, 0x2F7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7164u;
label_2f7164:
    // 0x2f7164: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7164u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7168: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f716c: 0x8c317508  lw          $s1, 0x7508($at)
    ctx->pc = 0x2f716cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7170: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x2f7170u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2f7174: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2f7174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2f7178: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x2f7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2f717c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7180: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2f7180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7184: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7188: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f718c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7190: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x2f7190u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7194: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x2f7194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2f7198: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2f7198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2f719c: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x2f719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2f71a0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2f71a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f71a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f71a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f71a8: 0xac257508  sw          $a1, 0x7508($at)
    ctx->pc = 0x2f71a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f71ac: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2f71acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f71b0: 0x30c70003  andi        $a3, $a2, 0x3
    ctx->pc = 0x2f71b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2f71b4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F71B4u;
    {
        const bool branch_taken_0x2f71b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71b4) {
            ctx->pc = 0x2F71CCu;
            goto label_2f71cc;
        }
    }
    ctx->pc = 0x2F71BCu;
    // 0x2f71bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f71bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f71c0: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x2f71c0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f71c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F71C4u;
    {
        const bool branch_taken_0x2f71c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71c4) {
            ctx->pc = 0x2F71D4u;
            goto label_2f71d4;
        }
    }
    ctx->pc = 0x2F71CCu;
label_2f71cc:
    // 0x2f71cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f71ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f71d0: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x2f71d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_2f71d4:
    // 0x2f71d4: 0x326a00ff  andi        $t2, $s3, 0xFF
    ctx->pc = 0x2f71d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2f71d8: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f71dc: 0xa20a0100  sb          $t2, 0x100($s0)
    ctx->pc = 0x2f71dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f71e0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f71e4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f71e8: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f71e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f71ec: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2F71ECu;
    {
        const bool branch_taken_0x2f71ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71ec) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F71F4u;
label_2f71f4:
    // 0x2f71f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f71f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f71f8: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f71fc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f71fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f7200: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f7200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7208: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f7208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f720c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x2f720cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2f7210: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7214: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f7214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7218: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x2f7218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f721c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2f721cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f7220: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2f7224: 0x312aff00  andi        $t2, $t1, 0xFF00
    ctx->pc = 0x2f7224u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x2f7228: 0xa4202  srl         $t0, $t2, 8
    ctx->pc = 0x2f7228u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x2f722c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x2f722cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2f7230: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7234: 0xac297508  sw          $t1, 0x7508($at)
    ctx->pc = 0x2f7234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7238: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x2f7238u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2f723c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7240: 0x143001b  divu        $zero, $t2, $v1
    ctx->pc = 0x2f7240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2f7244: 0x0  nop
    ctx->pc = 0x2f7244u;
    // NOP
    // 0x2f7248: 0x0  nop
    ctx->pc = 0x2f7248u;
    // NOP
    // 0x2f724c: 0x8010  mfhi        $s0
    ctx->pc = 0x2f724cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2f7250: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7250u;
    SET_GPR_U32(ctx, 31, 0x2F7258u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7250u, 0x2F7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7258u;
label_2f7258:
    // 0x2f7258: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f725c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f725cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7260: 0x0  nop
    ctx->pc = 0x2f7260u;
    // NOP
    // 0x2f7264: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7268: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f726c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f726cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7270: 0x0  nop
    ctx->pc = 0x2f7270u;
    // NOP
    // 0x2f7274: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7274u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f727c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7280: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7284: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f728c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7290: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7294: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f7294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f7298: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2f7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f729c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f729cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f72a0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f72a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f72a4: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f72a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f72a8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2f72a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f72ac: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f72acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f72b0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f72b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f72b4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f72b4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f72b8: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F72B8u;
    SET_GPR_U32(ctx, 31, 0x2F72C0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F72B8u, 0x2F72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72C0u;
label_2f72c0:
    // 0x2f72c0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f72c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f72c4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f72c8: 0xa06a0100  sb          $t2, 0x100($v1)
    ctx->pc = 0x2f72c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f72cc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2f72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f72d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2f72d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f72d4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f72d8: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f72d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f72dc: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x2F72DCu;
    {
        const bool branch_taken_0x2f72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f72dc) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F72E4u;
label_2f72e4:
    // 0x2f72e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F72E4u;
    SET_GPR_U32(ctx, 31, 0x2F72ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F72E4u, 0x2F72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72ECu;
label_2f72ec:
    // 0x2f72ec: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f72f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f72f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f72f4: 0x0  nop
    ctx->pc = 0x2f72f4u;
    // NOP
    // 0x2f72f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f72f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f72fc: 0x3c064234  lui         $a2, 0x4234
    ctx->pc = 0x2f72fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7300: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f7300u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7304: 0x0  nop
    ctx->pc = 0x2f7304u;
    // NOP
    // 0x2f7308: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7308u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f730c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7310: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7314: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f7314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7318: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x2f7318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x2f731c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2f731cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7320: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7324: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7328: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f7328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f732c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2f732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f7330: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7334: 0x8d0700c4  lw          $a3, 0xC4($t0)
    ctx->pc = 0x2f7334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f7338: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2f7338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f733c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f733cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7340: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7344: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7344u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7348: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7348u;
    SET_GPR_U32(ctx, 31, 0x2F7350u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7348u, 0x2F7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7350u;
label_2f7350:
    // 0x2f7350: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7350u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7354: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7358: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f7358u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f735c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f7360: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f7360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7364: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7368: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f736c: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f736cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7374: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f7374u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7378: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f7378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f737c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f737cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7380: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f7380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7384: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f7384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f7388: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x2f7388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f738c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2f738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f7390: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7394: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2f7394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7398: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f739c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2f739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2f73a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F73A0u;
    {
        const bool branch_taken_0x2f73a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f73a0) {
            ctx->pc = 0x2F73B4u;
            goto label_2f73b4;
        }
    }
    ctx->pc = 0x2F73A8u;
    // 0x2f73a8: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2f73a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f73ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F73ACu;
    {
        const bool branch_taken_0x2f73ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f73ac) {
            ctx->pc = 0x2F73BCu;
            goto label_2f73bc;
        }
    }
    ctx->pc = 0x2F73B4u;
label_2f73b4:
    // 0x2f73b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f73b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f73b8: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x2f73b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2f73bc:
    // 0x2f73bc: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2f73bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2f73c0: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x2f73c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f73c4: 0xa2030100  sb          $v1, 0x100($s0)
    ctx->pc = 0x2f73c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f73c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f73cc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f73d0: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f73d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f73d4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2F73D4u;
    {
        const bool branch_taken_0x2f73d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f73d4) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F73DCu;
label_2f73dc:
    // 0x2f73dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f73dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f73e0: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f73e4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2f73e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f73e8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2f73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f73ec: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2f73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f73f0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f73f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f73f4: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x2f73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2f73f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f73fc: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x2f73fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7400: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x2f7400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2f7404: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2f7404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f7408: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2f7408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2f740c: 0x312aff00  andi        $t2, $t1, 0xFF00
    ctx->pc = 0x2f740cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x2f7410: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x2f7410u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x2f7414: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x2f7414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2f7418: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f741c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2f741cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7420: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7424: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2f7424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7428: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2f7428u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f742c: 0x0  nop
    ctx->pc = 0x2f742cu;
    // NOP
    // 0x2f7430: 0x0  nop
    ctx->pc = 0x2f7430u;
    // NOP
    // 0x2f7434: 0x1810  mfhi        $v1
    ctx->pc = 0x2f7434u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f7438: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2f7438u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f743c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F743Cu;
    SET_GPR_U32(ctx, 31, 0x2F7444u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F743Cu, 0x2F7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7444u;
label_2f7444:
    // 0x2f7444: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7448: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f744c: 0x0  nop
    ctx->pc = 0x2f744cu;
    // NOP
    // 0x2f7450: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7454: 0x3c064234  lui         $a2, 0x4234
    ctx->pc = 0x2f7454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7458: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f7458u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f745c: 0x0  nop
    ctx->pc = 0x2f745cu;
    // NOP
    // 0x2f7460: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7460u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7468: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f7468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f746c: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7470: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7474: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f7474u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7478: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2f7478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2f747c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f747cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7480: 0x8d0400c4  lw          $a0, 0xC4($t0)
    ctx->pc = 0x2f7480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f7484: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7488: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f748c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f748cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f7490: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2f7490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7494: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7498: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x2f7498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f749c: 0x72405628  paddub      $t2, $s2, $zero
    ctx->pc = 0x2f749cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2f74a0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f74a0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f74a4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F74A4u;
    SET_GPR_U32(ctx, 31, 0x2F74ACu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F74A4u, 0x2F74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74ACu;
label_2f74ac:
    // 0x2f74ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2f74acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f74b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f74b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f74b4: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f74b8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f74b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f74bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f74c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f74c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f74c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f74c8: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2f74c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f74cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f74ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f74d0: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2f74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2f74d4: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x2f74d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f74d8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2f74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2f74dc: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x2f74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2f74e0: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x2f74e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2f74e4: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x2f74e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2f74e8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2f74e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2f74ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f74ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f74f0: 0xac277508  sw          $a3, 0x7508($at)
    ctx->pc = 0x2f74f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f74f4: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2f74f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f74f8: 0x31090003  andi        $t1, $t0, 0x3
    ctx->pc = 0x2f74f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2f74fc: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F74FCu;
    {
        const bool branch_taken_0x2f74fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f74fc) {
            ctx->pc = 0x2F7514u;
            goto label_2f7514;
        }
    }
    ctx->pc = 0x2F7504u;
    // 0x2f7504: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f7504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f7508: 0x7140ae28  paddub      $s5, $t2, $zero
    ctx->pc = 0x2f7508u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f750c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F750Cu;
    {
        const bool branch_taken_0x2f750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f750c) {
            ctx->pc = 0x2F7518u;
            goto label_2f7518;
        }
    }
    ctx->pc = 0x2F7514u;
label_2f7514:
    // 0x2f7514: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x2f7514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f7518:
    // 0x2f7518: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x2f7518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2f751c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7520: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f7520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7524: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f7524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7528: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f7528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f752c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7530: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f7530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7534: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2F7534u;
    {
        const bool branch_taken_0x2f7534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7534) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F753Cu;
label_2f753c:
    // 0x2f753c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F753Cu;
    SET_GPR_U32(ctx, 31, 0x2F7544u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F753Cu, 0x2F7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7544u;
label_2f7544:
    // 0x2f7544: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f754c: 0x0  nop
    ctx->pc = 0x2f754cu;
    // NOP
    // 0x2f7550: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7554: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7558: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f755c: 0x0  nop
    ctx->pc = 0x2f755cu;
    // NOP
    // 0x2f7560: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7560u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7564: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7568: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f756c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7570: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7574: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f7574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7578: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x2f7578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x2f757c: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x2f757cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7580: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x2f7580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7584: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f7584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7588: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x2f7588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f758c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2f758cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7590: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2f7590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7594: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f7594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7598: 0x8c4900c4  lw          $t1, 0xC4($v0)
    ctx->pc = 0x2f7598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f759c: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f759cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f75a0: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x2f75a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f75a4: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f75a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f75a8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f75ac: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2f75acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f75b0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f75b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f75b4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f75b4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f75b8: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F75B8u;
    SET_GPR_U32(ctx, 31, 0x2F75C0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F75B8u, 0x2F75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75C0u;
label_2f75c0:
    // 0x2f75c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f75c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f75c4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f75c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f75c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f75cc: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f75ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f75d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f75d4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f75d8: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f75d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f75dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F75DCu;
    {
        const bool branch_taken_0x2f75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f75dc) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F75E4u;
label_2f75e4:
    // 0x2f75e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F75E4u;
    SET_GPR_U32(ctx, 31, 0x2F75ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F75E4u, 0x2F75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75ECu;
label_2f75ec:
    // 0x2f75ec: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f75f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f75f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f75f4: 0x0  nop
    ctx->pc = 0x2f75f4u;
    // NOP
    // 0x2f75f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f75f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f75fc: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f75fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7600: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f7600u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7604: 0x0  nop
    ctx->pc = 0x2f7604u;
    // NOP
    // 0x2f7608: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7608u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f760c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7610: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7614: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7618: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f761c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7620: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f7620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7624: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2f7624u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7628: 0x8c8700c4  lw          $a3, 0xC4($a0)
    ctx->pc = 0x2f7628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f762c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2f762cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7630: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2f7630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7634: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2f7634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7638: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f763c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2f763cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7640: 0x8c6a00c4  lw          $t2, 0xC4($v1)
    ctx->pc = 0x2f7640u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7644: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2f7644u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7648: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x2f7648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f764c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f764cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7650: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7654: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7654u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7658: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7658u;
    SET_GPR_U32(ctx, 31, 0x2F7660u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7658u, 0x2F7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7660u;
label_2f7660:
    // 0x2f7660: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7664: 0xa0800100  sb          $zero, 0x100($a0)
    ctx->pc = 0x2f7664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7668: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f766c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7670: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f7670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7674u;
    {
        const bool branch_taken_0x2f7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7674) {
            ctx->pc = 0x2F7690u;
            goto label_2f7690;
        }
    }
    ctx->pc = 0x2F767Cu;
label_2f767c:
    // 0x2f767c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7680: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7684: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f7684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f7688: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f768c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f768cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f7690:
    // 0x2f7690: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7694: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2f7694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f7698: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x2f7698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2f769c: 0x10800194  beqz        $a0, . + 4 + (0x194 << 2)
    ctx->pc = 0x2F769Cu;
    {
        const bool branch_taken_0x2f769c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f769c) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F76A4u;
    // 0x2f76a4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f76a8: 0x90a60101  lbu         $a2, 0x101($a1)
    ctx->pc = 0x2f76a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 257)));
    // 0x2f76ac: 0x14c00190  bnez        $a2, . + 4 + (0x190 << 2)
    ctx->pc = 0x2F76ACu;
    {
        const bool branch_taken_0x2f76ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f76ac) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F76B4u;
    // 0x2f76b4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f76b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f76b8: 0x90e80100  lbu         $t0, 0x100($a3)
    ctx->pc = 0x2f76b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x2f76bc: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f76bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f76c0: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f76c4: 0x112a0185  beq         $t1, $t2, . + 4 + (0x185 << 2)
    ctx->pc = 0x2F76C4u;
    {
        const bool branch_taken_0x2f76c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x2f76c4) {
            ctx->pc = 0x2F7CDCu;
            goto label_2f7cdc;
        }
    }
    ctx->pc = 0x2F76CCu;
    // 0x2f76cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f76d0: 0x11230159  beq         $t1, $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x2F76D0u;
    {
        const bool branch_taken_0x2f76d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f76d0) {
            ctx->pc = 0x2F7C38u;
            goto label_2f7c38;
        }
    }
    ctx->pc = 0x2F76D8u;
    // 0x2f76d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f76dc: 0x1124012b  beq         $t1, $a0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2F76DCu;
    {
        const bool branch_taken_0x2f76dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f76dc) {
            ctx->pc = 0x2F7B8Cu;
            goto label_2f7b8c;
        }
    }
    ctx->pc = 0x2F76E4u;
    // 0x2f76e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f76e8: 0x112300d1  beq         $t1, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x2F76E8u;
    {
        const bool branch_taken_0x2f76e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f76e8) {
            ctx->pc = 0x2F7A30u;
            goto label_2f7a30;
        }
    }
    ctx->pc = 0x2F76F0u;
    // 0x2f76f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f76f4: 0x11250087  beq         $t1, $a1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2F76F4u;
    {
        const bool branch_taken_0x2f76f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f76f4) {
            ctx->pc = 0x2F7914u;
            goto label_2f7914;
        }
    }
    ctx->pc = 0x2F76FCu;
    // 0x2f76fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7700: 0x11230047  beq         $t1, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F7700u;
    {
        const bool branch_taken_0x2f7700 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f7700) {
            ctx->pc = 0x2F7820u;
            goto label_2f7820;
        }
    }
    ctx->pc = 0x2F7708u;
    // 0x2f7708: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7708u;
    {
        const bool branch_taken_0x2f7708 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7708) {
            ctx->pc = 0x2F7718u;
            goto label_2f7718;
        }
    }
    ctx->pc = 0x2F7710u;
    // 0x2f7710: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x2F7710u;
    {
        const bool branch_taken_0x2f7710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7710) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7718u;
label_2f7718:
    // 0x2f7718: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f7718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f771c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f771cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f7720: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7720u;
    SET_GPR_U32(ctx, 31, 0x2F7728u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7720u, 0x2F7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7728u;
label_2f7728:
    // 0x2f7728: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f772c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f772cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7730: 0x0  nop
    ctx->pc = 0x2f7730u;
    // NOP
    // 0x2f7734: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7738: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f773c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f773cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7740: 0x0  nop
    ctx->pc = 0x2f7740u;
    // NOP
    // 0x2f7744: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7744u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7748: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f774c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7750: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7754: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7758: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f775c: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2f775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7760: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2f7760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f7764: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f7764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f7768: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f776c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f776cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f7770: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2f7770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f7774: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x2f7774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7778: 0x71604e28  paddub      $t1, $t3, $zero
    ctx->pc = 0x2f7778u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2f777c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f777cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f7780: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7784: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7784u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7788: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7788u;
    SET_GPR_U32(ctx, 31, 0x2F7790u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7788u, 0x2F7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7790u;
label_2f7790:
    // 0x2f7790: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f7790u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7798: 0x8c297508  lw          $t1, 0x7508($at)
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x387508u));
    // 0x2f779c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x2f779cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2f77a0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2f77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2f77a4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2f77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f77a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f77ac: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f77acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f77b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f77b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f77b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f77b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f77b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f77bc: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x2f77bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f77c0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2f77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2f77c4: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f77c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f77c8: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f77cc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f77ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f77d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f77d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f77d4: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f77d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f77d8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2f77d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f77dc: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2f77dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2f77e0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F77E0u;
    {
        const bool branch_taken_0x2f77e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77e0) {
            ctx->pc = 0x2F77F8u;
            goto label_2f77f8;
        }
    }
    ctx->pc = 0x2F77E8u;
    // 0x2f77e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f77e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f77ec: 0x7120b628  paddub      $s6, $t1, $zero
    ctx->pc = 0x2f77ecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f77f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F77F0u;
    {
        const bool branch_taken_0x2f77f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77f0) {
            ctx->pc = 0x2F7800u;
            goto label_2f7800;
        }
    }
    ctx->pc = 0x2F77F8u;
label_2f77f8:
    // 0x2f77f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2f77f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f77fc: 0x7140b628  paddub      $s6, $t2, $zero
    ctx->pc = 0x2f77fcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f7800:
    // 0x2f7800: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2f7800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2f7804: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x2f7804u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7808: 0xa2230100  sb          $v1, 0x100($s1)
    ctx->pc = 0x2f7808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f780c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2f780cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7810: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7814: 0xa0910101  sb          $s1, 0x101($a0)
    ctx->pc = 0x2f7814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f7818: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x2F7818u;
    {
        const bool branch_taken_0x2f7818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7818) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7820u;
label_2f7820:
    // 0x2f7820: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7824: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7828: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f7828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f782c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f782cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7830: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f7830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7838: 0x34200  sll         $t0, $v1, 8
    ctx->pc = 0x2f7838u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f783c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f783cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7840: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7844: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f7844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f7848: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f7848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f784c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2f784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7850: 0x30a6ff00  andi        $a2, $a1, 0xFF00
    ctx->pc = 0x2f7850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2f7854: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x2f7854u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2f7858: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2f7858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2f785c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7860: 0xac287508  sw          $t0, 0x7508($at)
    ctx->pc = 0x2f7860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7864: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f7864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f7868: 0x240a0016  addiu       $t2, $zero, 0x16
    ctx->pc = 0x2f7868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f786c: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x2f786cu;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x2f7870: 0x0  nop
    ctx->pc = 0x2f7870u;
    // NOP
    // 0x2f7874: 0x0  nop
    ctx->pc = 0x2f7874u;
    // NOP
    // 0x2f7878: 0x8010  mfhi        $s0
    ctx->pc = 0x2f7878u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2f787c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F787Cu;
    SET_GPR_U32(ctx, 31, 0x2F7884u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F787Cu, 0x2F7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7884u;
label_2f7884:
    // 0x2f7884: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f7884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7888: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f7888u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f788c: 0x0  nop
    ctx->pc = 0x2f788cu;
    // NOP
    // 0x2f7890: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7894: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f789c: 0x0  nop
    ctx->pc = 0x2f789cu;
    // NOP
    // 0x2f78a0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f78a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f78a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f78a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f78a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f78ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f78b0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f78b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f78b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f78b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f78bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f78bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f78c0: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f78c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2f78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f78c8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f78cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f78ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f78d0: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f78d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f78d4: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2f78d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f78d8: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f78d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f78dc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f78dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f78e0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f78e0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f78e4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F78E4u;
    SET_GPR_U32(ctx, 31, 0x2F78ECu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F78E4u, 0x2F78ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78ECu;
label_2f78ec:
    // 0x2f78ec: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f78ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f78f0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f78f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f78f4: 0x8faa00f8  lw          $t2, 0xF8($sp)
    ctx->pc = 0x2f78f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f78f8: 0xa1490100  sb          $t1, 0x100($t2)
    ctx->pc = 0x2f78f8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 256), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f78fc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7900: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2f7900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7904: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7908: 0xa0700101  sb          $s0, 0x101($v1)
    ctx->pc = 0x2f7908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 16));
    // 0x2f790c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2F790Cu;
    {
        const bool branch_taken_0x2f790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f790c) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7914u;
label_2f7914:
    // 0x2f7914: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f7914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7918: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f7918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f791c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F791Cu;
    SET_GPR_U32(ctx, 31, 0x2F7924u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F791Cu, 0x2F7924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7924u;
label_2f7924:
    // 0x2f7924: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f7924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7928: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f7928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f792c: 0x0  nop
    ctx->pc = 0x2f792cu;
    // NOP
    // 0x2f7930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7934: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f7934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7938: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f7938u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f793c: 0x0  nop
    ctx->pc = 0x2f793cu;
    // NOP
    // 0x2f7940: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7940u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7944: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7948: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f794c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7950: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2f7950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7954: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f7954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7958: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2f7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f795c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f795cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7960: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2f7960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f7964: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f7964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7968: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f796c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2f796cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7970: 0x8c6800c4  lw          $t0, 0xC4($v1)
    ctx->pc = 0x2f7970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7974: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f7974u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7978: 0x24090015  addiu       $t1, $zero, 0x15
    ctx->pc = 0x2f7978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f797c: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f797cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7980: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7984: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2f7984u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7988: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f798c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7990: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2f7990u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7994: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7994u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7998: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7998u;
    SET_GPR_U32(ctx, 31, 0x2F79A0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7998u, 0x2F79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79A0u;
label_2f79a0:
    // 0x2f79a0: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2f79a0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f79a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f79a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f79a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f79ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f79acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f79b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f79b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f79b8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2f79b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f79bc: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f79bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f79c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f79c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f79c4: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f79c8: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x2f79c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f79cc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2f79ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2f79d0: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2f79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2f79d4: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f79d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f79d8: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x2f79d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f79dc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f79dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f79e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f79e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f79e4: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f79e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f79e8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2f79e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f79ec: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2f79ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2f79f0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F79F0u;
    {
        const bool branch_taken_0x2f79f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f79f0) {
            ctx->pc = 0x2F7A08u;
            goto label_2f7a08;
        }
    }
    ctx->pc = 0x2F79F8u;
    // 0x2f79f8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2f79f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f79fc: 0x7120be28  paddub      $s7, $t1, $zero
    ctx->pc = 0x2f79fcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7A00u;
    {
        const bool branch_taken_0x2f7a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7a00) {
            ctx->pc = 0x2F7A10u;
            goto label_2f7a10;
        }
    }
    ctx->pc = 0x2F7A08u;
label_2f7a08:
    // 0x2f7a08: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f7a08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7a0c: 0x7140be28  paddub      $s7, $t2, $zero
    ctx->pc = 0x2f7a0cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_2f7a10:
    // 0x2f7a10: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2f7a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2f7a14: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7a18: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f7a18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7a1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7a20: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7a24: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f7a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7a28: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2F7A28u;
    {
        const bool branch_taken_0x2f7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7a28) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7A30u;
label_2f7a30:
    // 0x2f7a30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7a34: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7a38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f7a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7a3c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2f7a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7a40: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2f7a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f7a44: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2f7a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f7a48: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2f7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7a4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7a50: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7a54: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f7a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7a58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f7a5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f7a60: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2f7a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f7a64: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2f7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2f7a68: 0xa3a021  addu        $s4, $a1, $v1
    ctx->pc = 0x2f7a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7a6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7a70: 0xac347508  sw          $s4, 0x7508($at)
    ctx->pc = 0x2f7a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7a74: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x2f7a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2f7a78: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7a7c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2f7a7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f7a80: 0x0  nop
    ctx->pc = 0x2f7a80u;
    // NOP
    // 0x2f7a84: 0x0  nop
    ctx->pc = 0x2f7a84u;
    // NOP
    // 0x2f7a88: 0x8010  mfhi        $s0
    ctx->pc = 0x2f7a88u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2f7a8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F7A94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7A8Cu, 0x2F7A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A94u;
label_2f7a94:
    // 0x2f7a94: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7a98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f7a98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7a9c: 0x0  nop
    ctx->pc = 0x2f7a9cu;
    // NOP
    // 0x2f7aa0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7aa4: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7aac: 0x0  nop
    ctx->pc = 0x2f7aacu;
    // NOP
    // 0x2f7ab0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7ab0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7ab8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7abc: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7ac0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7ac4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f7ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7ac8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7acc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f7accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7ad0: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f7ad4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2f7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7ad8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7adc: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f7adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f7ae0: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2f7ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7ae4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7ae8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7aec: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7aecu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7af0: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7AF0u;
    SET_GPR_U32(ctx, 31, 0x2F7AF8u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7AF0u, 0x2F7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7AF8u;
label_2f7af8:
    // 0x2f7af8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2f7af8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7afc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7b00: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7b04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f7b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f7b08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7b0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7b10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7b14: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f7b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f7b18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7b1c: 0x8c287508  lw          $t0, 0x7508($at)
    ctx->pc = 0x2f7b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7b20: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x2f7b20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f7b24: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x2f7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f7b28: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2f7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f7b2c: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f7b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f7b30: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x2f7b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f7b34: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f7b38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7b3c: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f7b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7b40: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2f7b40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f7b44: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2f7b44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2f7b48: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7B48u;
    {
        const bool branch_taken_0x2f7b48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b48) {
            ctx->pc = 0x2F7B60u;
            goto label_2f7b60;
        }
    }
    ctx->pc = 0x2F7B50u;
    // 0x2f7b50: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2f7b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f7b54: 0x7120f628  paddub      $fp, $t1, $zero
    ctx->pc = 0x2f7b54u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7B58u;
    {
        const bool branch_taken_0x2f7b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b58) {
            ctx->pc = 0x2F7B68u;
            goto label_2f7b68;
        }
    }
    ctx->pc = 0x2F7B60u;
label_2f7b60:
    // 0x2f7b60: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x2f7b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f7b64: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x2f7b64u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_2f7b68:
    // 0x2f7b68: 0x33d200ff  andi        $s2, $fp, 0xFF
    ctx->pc = 0x2f7b68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2f7b6c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7b70: 0xa0920100  sb          $s2, 0x100($a0)
    ctx->pc = 0x2f7b70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 18));
    // 0x2f7b74: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7b78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f7b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7b7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7b80: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f7b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7b84: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2F7B84u;
    {
        const bool branch_taken_0x2f7b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b84) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7B8Cu;
label_2f7b8c:
    // 0x2f7b8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7B8Cu, 0x2F7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B94u;
label_2f7b94:
    // 0x2f7b94: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7b98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7b9c: 0x0  nop
    ctx->pc = 0x2f7b9cu;
    // NOP
    // 0x2f7ba0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7ba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7ba4: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f7ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7ba8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f7ba8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7bac: 0x0  nop
    ctx->pc = 0x2f7bacu;
    // NOP
    // 0x2f7bb0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7bb0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7bb4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7bb8: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7bbc: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f7bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7bc0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7bc4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f7bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7bc8: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2f7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7bcc: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f7bccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7bd0: 0x8ca500c4  lw          $a1, 0xC4($a1)
    ctx->pc = 0x2f7bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2f7bd4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2f7bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2f7bd8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2f7bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7bdc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f7bdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7be0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2f7be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7be4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2f7be4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7be8: 0x8d0800c4  lw          $t0, 0xC4($t0)
    ctx->pc = 0x2f7be8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f7bec: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f7becu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7bf0: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x2f7bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7bf4: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f7bf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7bf8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7bf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7bfc: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2f7bfcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7c00: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x2f7c00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7c04: 0x72a05628  paddub      $t2, $s5, $zero
    ctx->pc = 0x2f7c04u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2f7c08: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7c08u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7c0c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F7C14u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7C0Cu, 0x2F7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C14u;
label_2f7c14:
    // 0x2f7c14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7c14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7c18: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f7c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f7c1c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c20: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f7c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7c24: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7c28: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c2c: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f7c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7c30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F7C30u;
    {
        const bool branch_taken_0x2f7c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c30) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7C38u;
label_2f7c38:
    // 0x2f7c38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7C38u;
    SET_GPR_U32(ctx, 31, 0x2F7C40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7C38u, 0x2F7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C40u;
label_2f7c40:
    // 0x2f7c40: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7c48: 0x0  nop
    ctx->pc = 0x2f7c48u;
    // NOP
    // 0x2f7c4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7c4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7c50: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7c54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7c58: 0x0  nop
    ctx->pc = 0x2f7c58u;
    // NOP
    // 0x2f7c5c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7c5cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7c60: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7c64: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7c6c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7c70: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f7c70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7c74: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x2f7c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7c78: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x2f7c78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7c7c: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x2f7c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7c80: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f7c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7c84: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2f7c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f7c88: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2f7c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7c8c: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2f7c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7c90: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2f7c90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7c94: 0x8c4900c4  lw          $t1, 0xC4($v0)
    ctx->pc = 0x2f7c94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f7c98: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2f7c98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7c9c: 0x240a0021  addiu       $t2, $zero, 0x21
    ctx->pc = 0x2f7c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f7ca0: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f7ca0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7ca4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7ca8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2f7ca8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7cac: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7cb0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7cb0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7cb4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7CB4u;
    SET_GPR_U32(ctx, 31, 0x2F7CBCu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7CB4u, 0x2F7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CBCu;
label_2f7cbc:
    // 0x2f7cbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f7cbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7cc0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cc4: 0xa0800100  sb          $zero, 0x100($a0)
    ctx->pc = 0x2f7cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7cc8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7ccc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cd0: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f7cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7CD4u;
    {
        const bool branch_taken_0x2f7cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7cd4) {
            ctx->pc = 0x2F7CF0u;
            goto label_2f7cf0;
        }
    }
    ctx->pc = 0x2F7CDCu;
label_2f7cdc:
    // 0x2f7cdc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7ce0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7ce4: 0x38870010  xori        $a3, $a0, 0x10
    ctx->pc = 0x2f7ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x2f7ce8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cec: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2f7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_2f7cf0:
    // 0x2f7cf0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cf4: 0x90830101  lbu         $v1, 0x101($a0)
    ctx->pc = 0x2f7cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 257)));
    // 0x2f7cf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7CF8u;
    {
        const bool branch_taken_0x2f7cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7cf8) {
            ctx->pc = 0x2F7D10u;
            goto label_2f7d10;
        }
    }
    ctx->pc = 0x2F7D00u;
    // 0x2f7d00: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x2f7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d04: 0x90c70101  lbu         $a3, 0x101($a2)
    ctx->pc = 0x2f7d04u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 257)));
    // 0x2f7d08: 0x24e8ffff  addiu       $t0, $a3, -0x1
    ctx->pc = 0x2f7d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f7d0c: 0xa0c80101  sb          $t0, 0x101($a2)
    ctx->pc = 0x2f7d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 8));
label_2f7d10:
    // 0x2f7d10: 0x8fa900f8  lw          $t1, 0xF8($sp)
    ctx->pc = 0x2f7d10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d14: 0x8d2a00d4  lw          $t2, 0xD4($t1)
    ctx->pc = 0x2f7d14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x2f7d18: 0x29480190  slti        $t0, $t2, 0x190
    ctx->pc = 0x2f7d18u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x2f7d1c: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7D1Cu;
    {
        const bool branch_taken_0x2f7d1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d1c) {
            ctx->pc = 0x2F7D38u;
            goto label_2f7d38;
        }
    }
    ctx->pc = 0x2F7D24u;
    // 0x2f7d24: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7d2c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f7d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f7d30: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2f7d38:
    // 0x2f7d38: 0x7bbf00b0  lq          $ra, 0xB0($sp)
    ctx->pc = 0x2f7d38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f7d3c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2f7d3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7d40: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2f7d40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7d44: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2f7d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7d48: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2f7d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7d4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f7d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7d50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2f7d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7d54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f7d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7d58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f7d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7d5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f7d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7d60: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7d64: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2f7d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2f7d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7D70u;
}
