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

// Function: ectrl15_move10
// Address: 0x2fe010 - 0x2fe9b8
void ectrl15_move10_0x2fe010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl15_move10_0x2fe010");
#endif

    switch (ctx->pc) {
        case 0x2fe098u: goto label_2fe098;
        case 0x2fe0ccu: goto label_2fe0cc;
        case 0x2fe108u: goto label_2fe108;
        case 0x2fe120u: goto label_2fe120;
        case 0x2fe12cu: goto label_2fe12c;
        case 0x2fe148u: goto label_2fe148;
        case 0x2fe164u: goto label_2fe164;
        case 0x2fe190u: goto label_2fe190;
        case 0x2fe254u: goto label_2fe254;
        case 0x2fe268u: goto label_2fe268;
        case 0x2fe278u: goto label_2fe278;
        case 0x2fe320u: goto label_2fe320;
        case 0x2fe33cu: goto label_2fe33c;
        case 0x2fe3ecu: goto label_2fe3ec;
        case 0x2fe3f4u: goto label_2fe3f4;
        case 0x2fe428u: goto label_2fe428;
        case 0x2fe470u: goto label_2fe470;
        case 0x2fe47cu: goto label_2fe47c;
        case 0x2fe4d8u: goto label_2fe4d8;
        case 0x2fe504u: goto label_2fe504;
        case 0x2fe520u: goto label_2fe520;
        case 0x2fe54cu: goto label_2fe54c;
        case 0x2fe630u: goto label_2fe630;
        case 0x2fe63cu: goto label_2fe63c;
        case 0x2fe6b4u: goto label_2fe6b4;
        case 0x2fe790u: goto label_2fe790;
        case 0x2fe7b8u: goto label_2fe7b8;
        case 0x2fe7e0u: goto label_2fe7e0;
        case 0x2fe828u: goto label_2fe828;
        case 0x2fe834u: goto label_2fe834;
        case 0x2fe8a4u: goto label_2fe8a4;
        case 0x2fe8c0u: goto label_2fe8c0;
        case 0x2fe8ecu: goto label_2fe8ec;
        default: break;
    }

    ctx->pc = 0x2fe010u;

    // 0x2fe010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2fe010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2fe014: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2fe014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2fe018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fe018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fe01c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fe01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fe020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe028: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2fe028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2fe02c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fe02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fe030: 0x24639130  addiu       $v1, $v1, -0x6ED0
    ctx->pc = 0x2fe030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938928));
    // 0x2fe034: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fe034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fe038: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fe038u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399130u));
    // 0x2fe03c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fe03cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fe040: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fe040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fe044: 0x24639140  addiu       $v1, $v1, -0x6EC0
    ctx->pc = 0x2fe044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938944));
    // 0x2fe048: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fe048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe04c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fe04cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399140u));
    // 0x2fe050: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fe050u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fe054: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fe054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fe058: 0x24639150  addiu       $v1, $v1, -0x6EB0
    ctx->pc = 0x2fe058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938960));
    // 0x2fe05c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2fe05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe060: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fe060u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399150u));
    // 0x2fe064: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fe064u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fe068: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe06c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe070: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x2fe070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x2fe074: 0x142000d0  bnez        $at, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2FE074u;
    {
        const bool branch_taken_0x2fe074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe074) {
            ctx->pc = 0x2FE3B8u;
            goto label_2fe3b8;
        }
    }
    ctx->pc = 0x2FE07Cu;
    // 0x2fe07c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe080: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe084: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x2fe084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2fe088: 0x102000cb  beqz        $at, . + 4 + (0xCB << 2)
    ctx->pc = 0x2FE088u;
    {
        const bool branch_taken_0x2fe088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe088) {
            ctx->pc = 0x2FE3B8u;
            goto label_2fe3b8;
        }
    }
    ctx->pc = 0x2FE090u;
    // 0x2fe090: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE090u;
    SET_GPR_U32(ctx, 31, 0x2FE098u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE090u, 0x2FE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE098u;
label_2fe098:
    // 0x2fe098: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2fe098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2fe09c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe0a0: 0x0  nop
    ctx->pc = 0x2fe0a0u;
    // NOP
    // 0x2fe0a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe0a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe0a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe0ac: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2fe0acu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe0b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe0b4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe0b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe0bc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2fe0bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe0c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe0c4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE0C4u;
    SET_GPR_U32(ctx, 31, 0x2FE0CCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE0C4u, 0x2FE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0CCu;
label_2fe0cc:
    // 0x2fe0cc: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2fe0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2fe0d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe0d4: 0x0  nop
    ctx->pc = 0x2fe0d4u;
    // NOP
    // 0x2fe0d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe0dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe0e0: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2fe0e0u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe0e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe0e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fe0ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe0f4: 0x0  nop
    ctx->pc = 0x2fe0f4u;
    // NOP
    // 0x2fe0f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fe0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe0fc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2fe0fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe100: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2FE100u;
    {
        const bool branch_taken_0x2fe100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe100) {
            ctx->pc = 0x2FE1F8u;
            goto label_2fe1f8;
        }
    }
    ctx->pc = 0x2FE108u;
label_2fe108:
    // 0x2fe108: 0x24043b00  addiu       $a0, $zero, 0x3B00
    ctx->pc = 0x2fe108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2fe10c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe110: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe114: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe114u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe118: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE118u;
    SET_GPR_U32(ctx, 31, 0x2FE120u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE118u, 0x2FE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE120u;
label_2fe120:
    // 0x2fe120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe124: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE124u;
    SET_GPR_U32(ctx, 31, 0x2FE12Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE124u, 0x2FE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE12Cu;
label_2fe12c:
    // 0x2fe12c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fe12cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe130: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2fe130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe134: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2fe134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2fe138: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FE138u;
    {
        const bool branch_taken_0x2fe138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fe138) {
            ctx->pc = 0x2FE1F0u;
            goto label_2fe1f0;
        }
    }
    ctx->pc = 0x2FE140u;
    // 0x2fe140: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE140u;
    SET_GPR_U32(ctx, 31, 0x2FE148u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE140u, 0x2FE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE148u;
label_2fe148:
    // 0x2fe148: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe14c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe150: 0x0  nop
    ctx->pc = 0x2fe150u;
    // NOP
    // 0x2fe154: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe158: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2fe15c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE15Cu;
    SET_GPR_U32(ctx, 31, 0x2FE164u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE15Cu, 0x2FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE164u;
label_2fe164:
    // 0x2fe164: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2fe164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2fe168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe16c: 0x0  nop
    ctx->pc = 0x2fe16cu;
    // NOP
    // 0x2fe170: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe174: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x2fe174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x2fe178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe17c: 0x0  nop
    ctx->pc = 0x2fe17cu;
    // NOP
    // 0x2fe180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe184: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2fe188: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE188u;
    SET_GPR_U32(ctx, 31, 0x2FE190u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE188u, 0x2FE190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE190u;
label_2fe190:
    // 0x2fe190: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe194: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe198: 0x0  nop
    ctx->pc = 0x2fe198u;
    // NOP
    // 0x2fe19c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe1a0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2fe1a4: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe1a8: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2fe1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2fe1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1b0: 0x0  nop
    ctx->pc = 0x2fe1b0u;
    // NOP
    // 0x2fe1b4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2fe1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2fe1b8: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2fe1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe1bc: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2fe1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2fe1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1c4: 0x0  nop
    ctx->pc = 0x2fe1c4u;
    // NOP
    // 0x2fe1c8: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe1cc: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2fe1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe1d0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2fe1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2fe1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1d8: 0x0  nop
    ctx->pc = 0x2fe1d8u;
    // NOP
    // 0x2fe1dc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fe1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2fe1e0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x2fe1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x2fe1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe1e8: 0x0  nop
    ctx->pc = 0x2fe1e8u;
    // NOP
    // 0x2fe1ec: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fe1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2fe1f0:
    // 0x2fe1f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fe1f4: 0x0  nop
    ctx->pc = 0x2fe1f4u;
    // NOP
label_2fe1f8:
    // 0x2fe1f8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x2fe1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fe1fc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2FE1FCu;
    {
        const bool branch_taken_0x2fe1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe1fc) {
            ctx->pc = 0x2FE108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe108;
        }
    }
    ctx->pc = 0x2FE204u;
    // 0x2fe204: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe208: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fe208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe20c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2fe20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2fe210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe214: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe218: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fe218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fe21c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fe21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe220: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe224: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fe224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fe228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe230: 0x0  nop
    ctx->pc = 0x2fe230u;
    // NOP
    // 0x2fe234: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2fe234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe238: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2fe238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2fe23c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe240: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2fe240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe244: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe248: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2fe248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe24c: 0xc0bf728  jal         func_2FDCA0
    ctx->pc = 0x2FE24Cu;
    SET_GPR_U32(ctx, 31, 0x2FE254u);
    ctx->pc = 0x2FDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDCA0u, 0x2FE24Cu, 0x2FE254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE254u;
label_2fe254:
    // 0x2fe254: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe25c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2fe25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe260: 0xc0bf6f4  jal         func_2FDBD0
    ctx->pc = 0x2FE260u;
    SET_GPR_U32(ctx, 31, 0x2FE268u);
    ctx->pc = 0x2FDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBD0u, 0x2FE260u, 0x2FE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE268u;
label_2fe268:
    // 0x2fe268: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe26c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fe26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fe270: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE270u;
    SET_GPR_U32(ctx, 31, 0x2FE278u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE270u, 0x2FE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE278u;
label_2fe278:
    // 0x2fe278: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe280: 0x0  nop
    ctx->pc = 0x2fe280u;
    // NOP
    // 0x2fe284: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2fe284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe288: 0x3c024535  lui         $v0, 0x4535
    ctx->pc = 0x2fe288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17717 << 16));
    // 0x2fe28c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2fe28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2fe290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe294: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe298: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fe298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fe29c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2fe29cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2fe2a0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fe2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fe2a4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe2a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fe2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fe2ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe2b4: 0x0  nop
    ctx->pc = 0x2fe2b4u;
    // NOP
    // 0x2fe2b8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2fe2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fe2bc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2fe2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe2c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fe2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fe2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fe2c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fe2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fe2cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fe2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fe2d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fe2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fe2d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe2d8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2fe2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2dc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fe2e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fe2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe2e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fe2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fe2e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fe2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fe2ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fe2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fe2f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fe2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fe2f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fe2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fe2f8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2fe2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2fe2fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fe2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fe300: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fe300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fe304: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2fe304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2fe308: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x2fe308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x2fe30c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2fe30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fe310: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2fe310u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe314: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2fe318: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x2FE318u;
    SET_GPR_U32(ctx, 31, 0x2FE320u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x2FE318u, 0x2FE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE320u;
label_2fe320:
    // 0x2fe320: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2fe320u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe324: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe328: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe32c: 0x12630022  beq         $s3, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FE32Cu;
    {
        const bool branch_taken_0x2fe32c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe32c) {
            ctx->pc = 0x2FE3B8u;
            goto label_2fe3b8;
        }
    }
    ctx->pc = 0x2FE334u;
    // 0x2fe334: 0xc067654  jal         func_19D950
    ctx->pc = 0x2FE334u;
    SET_GPR_U32(ctx, 31, 0x2FE33Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2FE334u, 0x2FE33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE33Cu;
label_2fe33c:
    // 0x2fe33c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2fe33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2fe340: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fe340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe344: 0x0  nop
    ctx->pc = 0x2fe344u;
    // NOP
    // 0x2fe348: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe348u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe34c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2fe34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2fe350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe354: 0x0  nop
    ctx->pc = 0x2fe354u;
    // NOP
    // 0x2fe358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe35c: 0xe6600338  swc1        $f0, 0x338($s3)
    ctx->pc = 0x2fe35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 824), bits); }
    // 0x2fe360: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe368: 0x0  nop
    ctx->pc = 0x2fe368u;
    // NOP
    // 0x2fe36c: 0xe66002d0  swc1        $f0, 0x2D0($s3)
    ctx->pc = 0x2fe36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 720), bits); }
    // 0x2fe370: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe378: 0x0  nop
    ctx->pc = 0x2fe378u;
    // NOP
    // 0x2fe37c: 0xe66002d4  swc1        $f0, 0x2D4($s3)
    ctx->pc = 0x2fe37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 724), bits); }
    // 0x2fe380: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe388: 0x0  nop
    ctx->pc = 0x2fe388u;
    // NOP
    // 0x2fe38c: 0xe66002d8  swc1        $f0, 0x2D8($s3)
    ctx->pc = 0x2fe38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 728), bits); }
    // 0x2fe390: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2fe390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2fe394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe398: 0x0  nop
    ctx->pc = 0x2fe398u;
    // NOP
    // 0x2fe39c: 0xe66002dc  swc1        $f0, 0x2DC($s3)
    ctx->pc = 0x2fe39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 732), bits); }
    // 0x2fe3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fe3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe3a4: 0xa26302a8  sb          $v1, 0x2A8($s3)
    ctx->pc = 0x2fe3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fe3a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fe3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fe3ac: 0xa263034f  sb          $v1, 0x34F($s3)
    ctx->pc = 0x2fe3acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fe3b0: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2fe3b4: 0xae630364  sw          $v1, 0x364($s3)
    ctx->pc = 0x2fe3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 3));
label_2fe3b8:
    // 0x2fe3b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe3bc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe3c0: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x2fe3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2fe3c4: 0x142000e6  bnez        $at, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2FE3C4u;
    {
        const bool branch_taken_0x2fe3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3c4) {
            ctx->pc = 0x2FE760u;
            goto label_2fe760;
        }
    }
    ctx->pc = 0x2FE3CCu;
    // 0x2fe3cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe3d0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe3d4: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x2fe3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2fe3d8: 0x102000e1  beqz        $at, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2FE3D8u;
    {
        const bool branch_taken_0x2fe3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3d8) {
            ctx->pc = 0x2FE760u;
            goto label_2fe760;
        }
    }
    ctx->pc = 0x2FE3E0u;
    // 0x2fe3e0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2fe3e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe3e4: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x2FE3E4u;
    {
        const bool branch_taken_0x2fe3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3e4) {
            ctx->pc = 0x2FE750u;
            goto label_2fe750;
        }
    }
    ctx->pc = 0x2FE3ECu;
label_2fe3ec:
    // 0x2fe3ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE3ECu;
    SET_GPR_U32(ctx, 31, 0x2FE3F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE3ECu, 0x2FE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE3F4u;
label_2fe3f4:
    // 0x2fe3f4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2fe3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2fe3f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe3fc: 0x0  nop
    ctx->pc = 0x2fe3fcu;
    // NOP
    // 0x2fe400: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe404: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe408: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2fe408u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe40c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe40cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe410: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe418: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2fe418u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe41c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe420: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE420u;
    SET_GPR_U32(ctx, 31, 0x2FE428u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE420u, 0x2FE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE428u;
label_2fe428:
    // 0x2fe428: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2fe428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2fe42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe430: 0x0  nop
    ctx->pc = 0x2fe430u;
    // NOP
    // 0x2fe434: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe438: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe43c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2fe43cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe444: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fe448: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe450: 0x0  nop
    ctx->pc = 0x2fe450u;
    // NOP
    // 0x2fe454: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fe454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe458: 0x24043300  addiu       $a0, $zero, 0x3300
    ctx->pc = 0x2fe458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13056));
    // 0x2fe45c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe45cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe460: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe464: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe464u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe468: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE468u;
    SET_GPR_U32(ctx, 31, 0x2FE470u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE468u, 0x2FE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE470u;
label_2fe470:
    // 0x2fe470: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe474: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE474u;
    SET_GPR_U32(ctx, 31, 0x2FE47Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE474u, 0x2FE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE47Cu;
label_2fe47c:
    // 0x2fe47c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fe47cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe480: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe484: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe488: 0x120300af  beq         $s0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2FE488u;
    {
        const bool branch_taken_0x2fe488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe488) {
            ctx->pc = 0x2FE748u;
            goto label_2fe748;
        }
    }
    ctx->pc = 0x2FE490u;
    // 0x2fe490: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe498: 0x0  nop
    ctx->pc = 0x2fe498u;
    // NOP
    // 0x2fe49c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fe49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fe4a0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4a8: 0x0  nop
    ctx->pc = 0x2fe4a8u;
    // NOP
    // 0x2fe4ac: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fe4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fe4b0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4b8: 0x0  nop
    ctx->pc = 0x2fe4b8u;
    // NOP
    // 0x2fe4bc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fe4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fe4c0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4c8: 0x0  nop
    ctx->pc = 0x2fe4c8u;
    // NOP
    // 0x2fe4cc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fe4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fe4d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2FE4D0u;
    SET_GPR_U32(ctx, 31, 0x2FE4D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2FE4D0u, 0x2FE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE4D8u;
label_2fe4d8:
    // 0x2fe4d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe4dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe4e0: 0x0  nop
    ctx->pc = 0x2fe4e0u;
    // NOP
    // 0x2fe4e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe4e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe4e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2fe4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2fe4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe4f0: 0x0  nop
    ctx->pc = 0x2fe4f0u;
    // NOP
    // 0x2fe4f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe4f8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fe4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fe4fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE4FCu;
    SET_GPR_U32(ctx, 31, 0x2FE504u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE4FCu, 0x2FE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE504u;
label_2fe504:
    // 0x2fe504: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe50c: 0x0  nop
    ctx->pc = 0x2fe50cu;
    // NOP
    // 0x2fe510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe514: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2fe518: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FE518u;
    SET_GPR_U32(ctx, 31, 0x2FE520u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FE518u, 0x2FE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE520u;
label_2fe520:
    // 0x2fe520: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2fe520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2fe524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe528: 0x0  nop
    ctx->pc = 0x2fe528u;
    // NOP
    // 0x2fe52c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe530: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe538: 0x0  nop
    ctx->pc = 0x2fe538u;
    // NOP
    // 0x2fe53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe540: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2fe544: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE544u;
    SET_GPR_U32(ctx, 31, 0x2FE54Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE544u, 0x2FE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE54Cu;
label_2fe54c:
    // 0x2fe54c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe554: 0x0  nop
    ctx->pc = 0x2fe554u;
    // NOP
    // 0x2fe558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe55c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2fe560: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2fe560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe564: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2fe564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2fe568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe56c: 0x0  nop
    ctx->pc = 0x2fe56cu;
    // NOP
    // 0x2fe570: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2fe570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2fe574: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2fe574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2fe578: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2fe578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2fe57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe580: 0x0  nop
    ctx->pc = 0x2fe580u;
    // NOP
    // 0x2fe584: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe588: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2fe588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe58c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2fe58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2fe590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe594: 0x0  nop
    ctx->pc = 0x2fe594u;
    // NOP
    // 0x2fe598: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fe598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2fe59c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x2fe59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x2fe5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe5a4: 0x0  nop
    ctx->pc = 0x2fe5a4u;
    // NOP
    // 0x2fe5a8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fe5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2fe5ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2fe5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2fe5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2fe5b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2fe5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fe5b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fe5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe5c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fe5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fe5c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2fe5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2fe5c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2fe5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2fe5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2fe5d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2fe5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fe5d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fe5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fe5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe5dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2fe5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2fe5e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2fe5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2fe5e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fe5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fe5e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2fe5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2fe5ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2fe5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2fe5f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fe5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fe5f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fe5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fe5f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2fe5f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2fe5fc: 0x0  nop
    ctx->pc = 0x2fe5fcu;
    // NOP
    // 0x2fe600: 0x0  nop
    ctx->pc = 0x2fe600u;
    // NOP
    // 0x2fe604: 0x1010  mfhi        $v0
    ctx->pc = 0x2fe604u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2fe608: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fe608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fe60c: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x2fe60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fe610: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2fe610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2fe614: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2fe614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2fe618: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2fe618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fe61c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe61cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe620: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe624: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe624u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe628: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE628u;
    SET_GPR_U32(ctx, 31, 0x2FE630u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE628u, 0x2FE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE630u;
label_2fe630:
    // 0x2fe630: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe634: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE634u;
    SET_GPR_U32(ctx, 31, 0x2FE63Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE634u, 0x2FE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE63Cu;
label_2fe63c:
    // 0x2fe63c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2fe63cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe640: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe644: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2fe644u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe648: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2fe648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe650: 0x0  nop
    ctx->pc = 0x2fe650u;
    // NOP
    // 0x2fe654: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fe654u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fe658: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe65c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe660: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe664: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2FE664u;
    {
        const bool branch_taken_0x2fe664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe664) {
            ctx->pc = 0x2FE748u;
            goto label_2fe748;
        }
    }
    ctx->pc = 0x2FE66Cu;
    // 0x2fe66c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe674: 0x0  nop
    ctx->pc = 0x2fe674u;
    // NOP
    // 0x2fe678: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2fe678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2fe67c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe684: 0x0  nop
    ctx->pc = 0x2fe684u;
    // NOP
    // 0x2fe688: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2fe688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2fe68c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe694: 0x0  nop
    ctx->pc = 0x2fe694u;
    // NOP
    // 0x2fe698: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x2fe698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2fe69c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe6a4: 0x0  nop
    ctx->pc = 0x2fe6a4u;
    // NOP
    // 0x2fe6a8: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2fe6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2fe6ac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2FE6ACu;
    SET_GPR_U32(ctx, 31, 0x2FE6B4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2FE6ACu, 0x2FE6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE6B4u;
label_2fe6b4:
    // 0x2fe6b4: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x2fe6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
    // 0x2fe6b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fe6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe6bc: 0x0  nop
    ctx->pc = 0x2fe6bcu;
    // NOP
    // 0x2fe6c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe6c4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2fe6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe6cc: 0x0  nop
    ctx->pc = 0x2fe6ccu;
    // NOP
    // 0x2fe6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe6d4: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2fe6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x2fe6d8: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6dc: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x2fe6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2fe6e0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6e4: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x2fe6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2fe6e8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6ec: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x2fe6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x2fe6f0: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2fe6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe6f4: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2fe6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2fe6f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe6fc: 0x0  nop
    ctx->pc = 0x2fe6fcu;
    // NOP
    // 0x2fe700: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2fe700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2fe704: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2fe704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2fe708: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2fe708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2fe70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe710: 0x0  nop
    ctx->pc = 0x2fe710u;
    // NOP
    // 0x2fe714: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x2fe714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2fe718: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2fe718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe71c: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2fe71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2fe720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe724: 0x0  nop
    ctx->pc = 0x2fe724u;
    // NOP
    // 0x2fe728: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2fe728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2fe72c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2fe72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2fe730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe734: 0x0  nop
    ctx->pc = 0x2fe734u;
    // NOP
    // 0x2fe738: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x2fe738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2fe73c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2fe73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2fe740: 0xae230100  sw          $v1, 0x100($s1)
    ctx->pc = 0x2fe740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
    // 0x2fe744: 0x0  nop
    ctx->pc = 0x2fe744u;
    // NOP
label_2fe748:
    // 0x2fe748: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fe748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fe74c: 0x0  nop
    ctx->pc = 0x2fe74cu;
    // NOP
label_2fe750:
    // 0x2fe750: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x2fe750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fe754: 0x1460ff25  bnez        $v1, . + 4 + (-0xDB << 2)
    ctx->pc = 0x2FE754u;
    {
        const bool branch_taken_0x2fe754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe754) {
            ctx->pc = 0x2FE3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fe3ec;
        }
    }
    ctx->pc = 0x2FE75Cu;
    // 0x2fe75c: 0x0  nop
    ctx->pc = 0x2fe75cu;
    // NOP
label_2fe760:
    // 0x2fe760: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe764: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe768: 0x2861002f  slti        $at, $v1, 0x2F
    ctx->pc = 0x2fe768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x2fe76c: 0x14200080  bnez        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x2FE76Cu;
    {
        const bool branch_taken_0x2fe76c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe76c) {
            ctx->pc = 0x2FE970u;
            goto label_2fe970;
        }
    }
    ctx->pc = 0x2FE774u;
    // 0x2fe774: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe778: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe77c: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x2fe77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2fe780: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x2FE780u;
    {
        const bool branch_taken_0x2fe780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe780) {
            ctx->pc = 0x2FE970u;
            goto label_2fe970;
        }
    }
    ctx->pc = 0x2FE788u;
    // 0x2fe788: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE788u;
    SET_GPR_U32(ctx, 31, 0x2FE790u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE788u, 0x2FE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE790u;
label_2fe790:
    // 0x2fe790: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe798: 0x0  nop
    ctx->pc = 0x2fe798u;
    // NOP
    // 0x2fe79c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe7a4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2fe7a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7ac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe7b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE7B0u;
    SET_GPR_U32(ctx, 31, 0x2FE7B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE7B0u, 0x2FE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7B8u;
label_2fe7b8:
    // 0x2fe7b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe7bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe7c0: 0x0  nop
    ctx->pc = 0x2fe7c0u;
    // NOP
    // 0x2fe7c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe7cc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2fe7ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe7d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE7D8u;
    SET_GPR_U32(ctx, 31, 0x2FE7E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE7D8u, 0x2FE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7E0u;
label_2fe7e0:
    // 0x2fe7e0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe7e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe7e8: 0x0  nop
    ctx->pc = 0x2fe7e8u;
    // NOP
    // 0x2fe7ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe7f4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2fe7f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7fc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fe800: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe808: 0x0  nop
    ctx->pc = 0x2fe808u;
    // NOP
    // 0x2fe80c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fe80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe810: 0x24040426  addiu       $a0, $zero, 0x426
    ctx->pc = 0x2fe810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1062));
    // 0x2fe814: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe818: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe81c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe81cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe820: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE820u;
    SET_GPR_U32(ctx, 31, 0x2FE828u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE820u, 0x2FE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE828u;
label_2fe828:
    // 0x2fe828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe82c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE82Cu;
    SET_GPR_U32(ctx, 31, 0x2FE834u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE82Cu, 0x2FE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE834u;
label_2fe834:
    // 0x2fe834: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fe834u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe838: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe83c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe840: 0x1203004b  beq         $s0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2FE840u;
    {
        const bool branch_taken_0x2fe840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe840) {
            ctx->pc = 0x2FE970u;
            goto label_2fe970;
        }
    }
    ctx->pc = 0x2FE848u;
    // 0x2fe848: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fe848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2fe84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe850: 0x0  nop
    ctx->pc = 0x2fe850u;
    // NOP
    // 0x2fe854: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fe854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fe858: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fe858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2fe85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe860: 0x0  nop
    ctx->pc = 0x2fe860u;
    // NOP
    // 0x2fe864: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fe864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fe868: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fe868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2fe86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe870: 0x0  nop
    ctx->pc = 0x2fe870u;
    // NOP
    // 0x2fe874: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fe874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fe878: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe880: 0x0  nop
    ctx->pc = 0x2fe880u;
    // NOP
    // 0x2fe884: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fe884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fe888: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2fe888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe88c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2fe88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2fe890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe894: 0x0  nop
    ctx->pc = 0x2fe894u;
    // NOP
    // 0x2fe898: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2fe898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2fe89c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE89Cu;
    SET_GPR_U32(ctx, 31, 0x2FE8A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE89Cu, 0x2FE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8A4u;
label_2fe8a4:
    // 0x2fe8a4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2fe8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2fe8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8ac: 0x0  nop
    ctx->pc = 0x2fe8acu;
    // NOP
    // 0x2fe8b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe8b4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2fe8b8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE8B8u;
    SET_GPR_U32(ctx, 31, 0x2FE8C0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE8B8u, 0x2FE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8C0u;
label_2fe8c0:
    // 0x2fe8c0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2fe8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2fe8c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8c8: 0x0  nop
    ctx->pc = 0x2fe8c8u;
    // NOP
    // 0x2fe8cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe8d0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2fe8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2fe8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe8d8: 0x0  nop
    ctx->pc = 0x2fe8d8u;
    // NOP
    // 0x2fe8dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe8e0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2fe8e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE8E4u;
    SET_GPR_U32(ctx, 31, 0x2FE8ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE8E4u, 0x2FE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8ECu;
label_2fe8ec:
    // 0x2fe8ec: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2fe8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2fe8f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fe8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8f4: 0x0  nop
    ctx->pc = 0x2fe8f4u;
    // NOP
    // 0x2fe8f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe8fc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2fe900: 0x3c033f6e  lui         $v1, 0x3F6E
    ctx->pc = 0x2fe900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe904: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x2fe904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x2fe908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe90c: 0x0  nop
    ctx->pc = 0x2fe90cu;
    // NOP
    // 0x2fe910: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2fe910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2fe914: 0x3c033f70  lui         $v1, 0x3F70
    ctx->pc = 0x2fe914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16240 << 16));
    // 0x2fe918: 0x3463a3d7  ori         $v1, $v1, 0xA3D7
    ctx->pc = 0x2fe918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41943);
    // 0x2fe91c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe920: 0x0  nop
    ctx->pc = 0x2fe920u;
    // NOP
    // 0x2fe924: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe928: 0x3c033f6e  lui         $v1, 0x3F6E
    ctx->pc = 0x2fe928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe92c: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x2fe92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x2fe930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe934: 0x0  nop
    ctx->pc = 0x2fe934u;
    // NOP
    // 0x2fe938: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fe938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2fe93c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2fe93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2fe940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe944: 0x0  nop
    ctx->pc = 0x2fe944u;
    // NOP
    // 0x2fe948: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fe948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fe94c: 0x3c033db8  lui         $v1, 0x3DB8
    ctx->pc = 0x2fe94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15800 << 16));
    // 0x2fe950: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2fe950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2fe954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe958: 0x0  nop
    ctx->pc = 0x2fe958u;
    // NOP
    // 0x2fe95c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2fe95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2fe960: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2fe960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2fe964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe968: 0x0  nop
    ctx->pc = 0x2fe968u;
    // NOP
    // 0x2fe96c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fe96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2fe970:
    // 0x2fe970: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe974: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe978: 0x286300c8  slti        $v1, $v1, 0xC8
    ctx->pc = 0x2fe978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2fe97c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE97Cu;
    {
        const bool branch_taken_0x2fe97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe97c) {
            ctx->pc = 0x2FE998u;
            goto label_2fe998;
        }
    }
    ctx->pc = 0x2FE984u;
    // 0x2fe984: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe988: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fe988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fe98c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2fe98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fe990: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe994: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fe994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2fe998:
    // 0x2fe998: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2fe998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fe99c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fe99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe9a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fe9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe9ac: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2fe9acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2fe9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE9B8u;
}
