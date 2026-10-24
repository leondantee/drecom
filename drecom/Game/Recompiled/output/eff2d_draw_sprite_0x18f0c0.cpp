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

// Function: eff2d_draw_sprite
// Address: 0x18f0c0 - 0x18fa90
void eff2d_draw_sprite_0x18f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_draw_sprite_0x18f0c0");
#endif

    switch (ctx->pc) {
        case 0x18f1e8u: goto label_18f1e8;
        case 0x18f238u: goto label_18f238;
        case 0x18f270u: goto label_18f270;
        case 0x18f4f0u: goto label_18f4f0;
        case 0x18f864u: goto label_18f864;
        case 0x18f878u: goto label_18f878;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8bcu: goto label_18f8bc;
        case 0x18f938u: goto label_18f938;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa44u: goto label_18fa44;
        default: break;
    }

    ctx->pc = 0x18f0c0u;

    // 0x18f0c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x18f0c4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x18f0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x18f0c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18f0cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18f0d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18f0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18f0d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f0d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f0dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f0e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f0e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f0e8: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x18f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x18f0ec: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x18f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x18f0f0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18f0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18f0f4: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x18f0f8: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x18f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x18f0fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f100: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x18f100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18f104: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x18f104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18f108: 0x101c80  sll         $v1, $s0, 18
    ctx->pc = 0x18f108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 18));
    // 0x18f10c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x18f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x18f110: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x18f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x18f114: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x18f114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f118: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x18f118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x18f11c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x18f11cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x18f120: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x18f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x18f124: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x18f124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f128: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F128u;
    {
        const bool branch_taken_0x18f128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f128) {
            ctx->pc = 0x18F13Cu;
            goto label_18f13c;
        }
    }
    ctx->pc = 0x18F130u;
    // 0x18f130: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f130u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f134: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x18F134u;
    {
        const bool branch_taken_0x18f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f134) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F13Cu;
label_18f13c:
    // 0x18f13c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f140: 0x8c360af0  lw          $s6, 0xAF0($at)
    ctx->pc = 0x18f140u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18f144: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x18f148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F148u;
    {
        const bool branch_taken_0x18f148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f148) {
            ctx->pc = 0x18F160u;
            goto label_18f160;
        }
    }
    ctx->pc = 0x18F150u;
    // 0x18f150: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18f154: 0x2455df50  addiu       $s5, $v0, -0x20B0
    ctx->pc = 0x18f154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x18f158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18F158u;
    {
        const bool branch_taken_0x18f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f158) {
            ctx->pc = 0x18F168u;
            goto label_18f168;
        }
    }
    ctx->pc = 0x18F160u;
label_18f160:
    // 0x18f160: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18f164: 0x2455e550  addiu       $s5, $v0, -0x1AB0
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
label_18f168:
    // 0x18f168: 0x8fb20130  lw          $s2, 0x130($sp)
    ctx->pc = 0x18f168u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f16c: 0x8e5701fc  lw          $s7, 0x1FC($s2)
    ctx->pc = 0x18f16cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 508)));
    // 0x18f170: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f174: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f178: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x18f178u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18f17c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f180: 0x90620210  lbu         $v0, 0x210($v1)
    ctx->pc = 0x18f180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x18f184: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f188: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f18c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x18f18cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18f190: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f194: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x18f198: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f198u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f19c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f1a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18f1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18f1a4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f1a8: 0x94520118  lhu         $s2, 0x118($v0)
    ctx->pc = 0x18f1a8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f1ac: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x18f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18f1b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f1b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F1B4u;
    {
        const bool branch_taken_0x18f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1b4) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F1BCu;
    // 0x18f1bc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f1c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x18f1c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f1c4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x18f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f1c8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18f1cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F1CCu;
    {
        const bool branch_taken_0x18f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1cc) {
            ctx->pc = 0x18F1E8u;
            goto label_18f1e8;
        }
    }
    ctx->pc = 0x18F1D4u;
label_18f1d4:
    // 0x18f1d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f1d8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x18f1d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x18f1dc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f1e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18F1E0u;
    SET_GPR_U32(ctx, 31, 0x18F1E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18F1E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F1E8u) { return; }
    ctx->pc = 0x18F1E8u;
label_18f1e8:
    // 0x18f1e8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x18f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f1ec: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x18f1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x18f1f0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f1f4: 0x94630118  lhu         $v1, 0x118($v1)
    ctx->pc = 0x18f1f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x18f1f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18f1fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F200u;
    {
        const bool branch_taken_0x18f200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f200) {
            ctx->pc = 0x18F214u;
            goto label_18f214;
        }
    }
    ctx->pc = 0x18F208u;
    // 0x18f208: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x18f208u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f20c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18F20Cu;
    {
        const bool branch_taken_0x18f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f20c) {
            ctx->pc = 0x18F294u;
            goto label_18f294;
        }
    }
    ctx->pc = 0x18F214u;
label_18f214:
    // 0x18f214: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f218: 0x94540118  lhu         $s4, 0x118($v0)
    ctx->pc = 0x18f218u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f21c: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x18f21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x18f220: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x18f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18f224: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F224u;
    {
        const bool branch_taken_0x18f224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f224) {
            ctx->pc = 0x18F264u;
            goto label_18f264;
        }
    }
    ctx->pc = 0x18F22Cu;
    // 0x18f22c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x18f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f230: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18F230u;
    SET_GPR_U32(ctx, 31, 0x18F238u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18F230u, 0x18F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F238u;
label_18f238:
    // 0x18f238: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f238u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f23c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18f23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f240: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x18f240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18f244: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F254u;
            goto label_18f254;
        }
    }
    ctx->pc = 0x18F24Cu;
    // 0x18f24c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f250: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f250u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18f254:
    // 0x18f254: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x18f258: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f258u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f25c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F294u;
            goto label_18f294;
        }
    }
    ctx->pc = 0x18F264u;
label_18f264:
    // 0x18f264: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x18f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f268: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18F268u;
    SET_GPR_U32(ctx, 31, 0x18F270u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18F268u, 0x18F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F270u;
label_18f270:
    // 0x18f270: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f270u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f274: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f278: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18f278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F27Cu;
    {
        const bool branch_taken_0x18f27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f27c) {
            ctx->pc = 0x18F28Cu;
            goto label_18f28c;
        }
    }
    ctx->pc = 0x18F284u;
    // 0x18f284: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f288: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f288u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18f28c:
    // 0x18f28c: 0x113182  srl         $a2, $s1, 6
    ctx->pc = 0x18f28cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x18f290: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x18f290u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_18f294:
    // 0x18f294: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f298: 0x94820118  lhu         $v0, 0x118($a0)
    ctx->pc = 0x18f298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x18f29c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f2a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f2a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F2A4u;
    {
        const bool branch_taken_0x18f2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f2a4) {
            ctx->pc = 0x18F2F0u;
            goto label_18f2f0;
        }
    }
    ctx->pc = 0x18F2ACu;
    // 0x18f2ac: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x18f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x18f2b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x18f2b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f2b4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x18f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f2bc: 0x0  nop
    ctx->pc = 0x18f2bcu;
    // NOP
    // 0x18f2c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18F2C0u;
    {
        const bool branch_taken_0x18f2c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f2c0) {
            ctx->pc = 0x18F2E4u;
            goto label_18f2e4;
        }
    }
    ctx->pc = 0x18F2C8u;
    // 0x18f2c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f2cc: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x18f2ccu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f2d0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x18f2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f2d8: 0x0  nop
    ctx->pc = 0x18f2d8u;
    // NOP
    // 0x18f2dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F2DCu;
    {
        const bool branch_taken_0x18f2dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f2dc) {
            ctx->pc = 0x18F2F0u;
            goto label_18f2f0;
        }
    }
    ctx->pc = 0x18F2E4u;
label_18f2e4:
    // 0x18f2e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f2e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f2e8: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x18F2E8u;
    {
        const bool branch_taken_0x18f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2e8) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F2F0u;
label_18f2f0:
    // 0x18f2f0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x18f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f2f4: 0x94820118  lhu         $v0, 0x118($a0)
    ctx->pc = 0x18f2f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x18f2f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f2fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x18f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x18f300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F300u;
    {
        const bool branch_taken_0x18f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f300) {
            ctx->pc = 0x18F318u;
            goto label_18f318;
        }
    }
    ctx->pc = 0x18F308u;
    // 0x18f308: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f30c: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x18f30cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F310u;
    {
        const bool branch_taken_0x18f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f310) {
            ctx->pc = 0x18F324u;
            goto label_18f324;
        }
    }
    ctx->pc = 0x18F318u;
label_18f318:
    // 0x18f318: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18f31c: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x18f320: 0x0  nop
    ctx->pc = 0x18f320u;
    // NOP
label_18f324:
    // 0x18f324: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x18f328: 0x3443000f  ori         $v1, $v0, 0xF
    ctx->pc = 0x18f328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x18f32c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f32cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f330: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f334: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f334u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f338: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x18f338u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f33c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f33cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f340: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f344: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x18f344u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x18f348: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x18f34c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18f350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f354: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f358: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f358u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f35c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f360: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f360u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f364: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x18f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x18f368: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x18f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x18f36c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f36cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f370: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f374: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f374u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f378: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f37c: 0xdc4301d0  ld          $v1, 0x1D0($v0)
    ctx->pc = 0x18f37cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x18f380: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f380u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f384: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f388: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f388u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f38c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18f390: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f390u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f394: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f398: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f398u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f3a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18f3a4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x18f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x18f3a8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x18f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x18f3ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18f3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f3b0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3b4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3bc: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18f3c0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3c4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18f3d0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3d4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f3e0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3e4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3e8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f3ec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f3f0: 0xdc4301e8  ld          $v1, 0x1E8($v0)
    ctx->pc = 0x18f3f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x18f3f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f3f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f3f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f3fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f400: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18f404: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f408: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f40c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f410: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f414: 0xdc4301e0  ld          $v1, 0x1E0($v0)
    ctx->pc = 0x18f414u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x18f418: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f418u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f41c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f420: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f420u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f424: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18f428: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f428u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f42c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f430: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f430u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f434: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f438: 0xdc4301d8  ld          $v1, 0x1D8($v0)
    ctx->pc = 0x18f438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x18f43c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f43cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f440: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f444: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f444u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f448: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18f44c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f44cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f450: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f454: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f454u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f458: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f45c: 0xdc4301f0  ld          $v1, 0x1F0($v0)
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x18f460: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f460u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f464: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f468: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f468u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f46c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18f470: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f470u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f474: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f478: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f478u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f47c: 0x3c02602b  lui         $v0, 0x602B
    ctx->pc = 0x18f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24619 << 16));
    // 0x18f480: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18f480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18f484: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18f488: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x18f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x18f48c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f490: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f490u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f494: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f498: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f498u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f49c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18f4a0: 0x34432412  ori         $v1, $v0, 0x2412
    ctx->pc = 0x18f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x18f4a4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18f4a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f4a8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18f4ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18f4acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18f4b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f4b4: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18f4b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f4b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f4bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f4c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18F4C0u;
    {
        const bool branch_taken_0x18f4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f4c0) {
            ctx->pc = 0x18F4F8u;
            goto label_18f4f8;
        }
    }
    ctx->pc = 0x18F4C8u;
    // 0x18f4c8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f4cc: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x18f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f4d0: 0xc6c001b4  lwc1        $f0, 0x1B4($s6)
    ctx->pc = 0x18f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f4d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f4d8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x18f4dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f4e0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x18f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f4e4: 0xc7ac0124  lwc1        $f12, 0x124($sp)
    ctx->pc = 0x18f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f4e8: 0xc040c60  jal         func_103180
    ctx->pc = 0x18F4E8u;
    SET_GPR_U32(ctx, 31, 0x18F4F0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x18F4F0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F4F0u) { return; }
    ctx->pc = 0x18F4F0u;
label_18f4f0:
    // 0x18f4f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F4F0u;
    {
        const bool branch_taken_0x18f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f4f0) {
            ctx->pc = 0x18F504u;
            goto label_18f504;
        }
    }
    ctx->pc = 0x18F4F8u;
label_18f4f8:
    // 0x18f4f8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f4fc: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x18f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f500: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18f500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_18f504:
    // 0x18f504: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x18f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f508: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x18f50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f510: 0x0  nop
    ctx->pc = 0x18f510u;
    // NOP
    // 0x18f514: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18f514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f518: 0x0  nop
    ctx->pc = 0x18f518u;
    // NOP
    // 0x18f51c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18F51Cu;
    {
        const bool branch_taken_0x18f51c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f51c) {
            ctx->pc = 0x18F548u;
            goto label_18f548;
        }
    }
    ctx->pc = 0x18F524u;
    // 0x18f524: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x18f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f528: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x18f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x18f52c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18f530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f534: 0x0  nop
    ctx->pc = 0x18f534u;
    // NOP
    // 0x18f538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f53c: 0x0  nop
    ctx->pc = 0x18f53cu;
    // NOP
    // 0x18f540: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F540u;
    {
        const bool branch_taken_0x18f540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f540) {
            ctx->pc = 0x18F554u;
            goto label_18f554;
        }
    }
    ctx->pc = 0x18F548u;
label_18f548:
    // 0x18f548: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f548u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f54c: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x18F54Cu;
    {
        const bool branch_taken_0x18f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f54c) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F554u;
label_18f554:
    // 0x18f554: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x18f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f558: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x18f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x18f55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f560: 0x0  nop
    ctx->pc = 0x18f560u;
    // NOP
    // 0x18f564: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18f564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f568: 0x0  nop
    ctx->pc = 0x18f568u;
    // NOP
    // 0x18f56c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18F56Cu;
    {
        const bool branch_taken_0x18f56c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f56c) {
            ctx->pc = 0x18F598u;
            goto label_18f598;
        }
    }
    ctx->pc = 0x18F574u;
    // 0x18f574: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x18f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f578: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x18f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x18f57c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18f580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f584: 0x0  nop
    ctx->pc = 0x18f584u;
    // NOP
    // 0x18f588: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f58c: 0x0  nop
    ctx->pc = 0x18f58cu;
    // NOP
    // 0x18f590: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F590u;
    {
        const bool branch_taken_0x18f590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f590) {
            ctx->pc = 0x18F5A4u;
            goto label_18f5a4;
        }
    }
    ctx->pc = 0x18F598u;
label_18f598:
    // 0x18f598: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f598u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f59c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x18F59Cu;
    {
        const bool branch_taken_0x18f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f59c) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F5A4u;
label_18f5a4:
    // 0x18f5a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f5ac: 0x0  nop
    ctx->pc = 0x18f5acu;
    // NOP
    // 0x18f5b0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x18f5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x18f5b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f5bc: 0x0  nop
    ctx->pc = 0x18f5bcu;
    // NOP
    // 0x18f5c0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x18f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x18f5c4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f5c8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x18f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x18f5cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18f5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x18f5d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f5d4: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x18f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f5d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f5dc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x18f5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x18f5e0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f5e4: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x18f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x18f5e8: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x18f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x18f5ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f5f0: 0xc46000f0  lwc1        $f0, 0xF0($v1)
    ctx->pc = 0x18f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f5f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f5f8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x18f5fc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f600: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x18f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f604: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x18f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f60c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x18f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f610: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f614: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x18f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f618: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f61c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x18f61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x18f620: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f624: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x18f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f628: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x18f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f62c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f62cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f630: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x18f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f634: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f638: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f63c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f640: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x18f644: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f64c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f650: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18f650u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18f654: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18f658: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18f658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f65c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18f660: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18f660u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18f664: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f668: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f66c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x18f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f670: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f674: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f678: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x18f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f67c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18f67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f680: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x18f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x18f684: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f688: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f68c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x18f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f690: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f694: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18f694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18f698: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x18f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f69c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18f69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f6a0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18f6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18f6a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6ac: 0x0  nop
    ctx->pc = 0x18f6acu;
    // NOP
    // 0x18f6b0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18f6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18f6b4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f6b8: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f6bc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x18f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f6c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18f6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6c8: 0x0  nop
    ctx->pc = 0x18f6c8u;
    // NOP
    // 0x18f6cc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18f6ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f6d0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x18f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f6d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f6d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f6d8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x18f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f6dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18f6e0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x18f6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x18f6e4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f6e8: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18f6ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f6f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18f6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f6f8: 0x0  nop
    ctx->pc = 0x18f6f8u;
    // NOP
    // 0x18f6fc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18f6fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18f700: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x18f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f704: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18f704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f708: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x18f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f70c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18f710: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x18f710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18f714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18f718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f71c: 0x0  nop
    ctx->pc = 0x18f71cu;
    // NOP
    // 0x18f720: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x18f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18f724: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f728: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x18f728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x18f72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f730: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F730u;
    {
        const bool branch_taken_0x18f730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f730) {
            ctx->pc = 0x18F770u;
            goto label_18f770;
        }
    }
    ctx->pc = 0x18F738u;
    // 0x18f738: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f73c: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f740: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f744: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f748: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f74c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f750: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f754: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f758: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f75c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f760: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f764: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x18f768: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18F768u;
    {
        const bool branch_taken_0x18f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f768) {
            ctx->pc = 0x18F840u;
            goto label_18f840;
        }
    }
    ctx->pc = 0x18F770u;
label_18f770:
    // 0x18f770: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f774: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x18f774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x18f778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18f778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f77c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f780: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F780u;
    {
        const bool branch_taken_0x18f780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f780) {
            ctx->pc = 0x18F7C0u;
            goto label_18f7c0;
        }
    }
    ctx->pc = 0x18F788u;
    // 0x18f788: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f78c: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f790: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f794: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f798: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f79c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f7a0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7a4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7a8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f7ac: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7b0: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7b4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x18f7b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18F7B8u;
    {
        const bool branch_taken_0x18f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f7b8) {
            ctx->pc = 0x18F840u;
            goto label_18f840;
        }
    }
    ctx->pc = 0x18F7C0u;
label_18f7c0:
    // 0x18f7c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7c4: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x18f7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x18f7c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f7cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f7d0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F7D0u;
    {
        const bool branch_taken_0x18f7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f7d0) {
            ctx->pc = 0x18F810u;
            goto label_18f810;
        }
    }
    ctx->pc = 0x18F7D8u;
    // 0x18f7d8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7dc: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f7e4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7e8: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7ec: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f7f0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f7f4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f7f8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f7fc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f800: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f804: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x18f808: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F808u;
    {
        const bool branch_taken_0x18f808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f808) {
            ctx->pc = 0x18F840u;
            goto label_18f840;
        }
    }
    ctx->pc = 0x18F810u;
label_18f810:
    // 0x18f810: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f814: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x18f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f818: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x18f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x18f81c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f820: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x18f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f824: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x18f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x18f828: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f82c: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x18f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f830: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x18f830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x18f834: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f838: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x18f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f83c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x18f83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_18f840:
    // 0x18f840: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x18f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x18f844: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18f844u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f848: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18f848u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18f84c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18f84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18f850: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f854: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18f854u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f858: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x18f858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x18f85c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x18F85Cu;
    SET_GPR_U32(ctx, 31, 0x18F864u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x18F864u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F864u) { return; }
    ctx->pc = 0x18F864u;
label_18f864:
    // 0x18f864: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18f864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18f868: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18f868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f86c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18f870: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x18F870u;
    SET_GPR_U32(ctx, 31, 0x18F878u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x18F878u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F878u) { return; }
    ctx->pc = 0x18F878u;
label_18f878:
    // 0x18f878: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18f878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18f87c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x18f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18f880: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x18f880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f884: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18f884u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18f888: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18f888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18f88c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f890: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18f890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f894: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x18f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x18f898: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x18f898u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f89c: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x18F89Cu;
    SET_GPR_U32(ctx, 31, 0x18F8A4u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x18F8A4u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F8A4u) { return; }
    ctx->pc = 0x18F8A4u;
label_18f8a4:
    // 0x18f8a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18f8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18f8a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18f8a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18f8ac: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18f8b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x18f8b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f8b4: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x18F8B4u;
    SET_GPR_U32(ctx, 31, 0x18F8BCu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x18F8BCu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18F8BCu) { return; }
    ctx->pc = 0x18F8BCu;
label_18f8bc:
    // 0x18f8bc: 0x26160010  addiu       $s6, $s0, 0x10
    ctx->pc = 0x18f8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18f8c0: 0x72c08628  paddub      $s0, $s6, $zero
    ctx->pc = 0x18f8c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x18f8c4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f8c8: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18f8c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f8cc: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x18f8ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f8d0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x18f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x18f8d4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18F8D4u;
    {
        const bool branch_taken_0x18f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f8d4) {
            ctx->pc = 0x18F958u;
            goto label_18f958;
        }
    }
    ctx->pc = 0x18F8DCu;
    // 0x18f8dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f8e0: 0x8c35a600  lw          $s5, -0x5A00($at)
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f8e4: 0x2159023  subu        $s2, $s0, $s5
    ctx->pc = 0x18f8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x18f8e8: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x18f8e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f8ec: 0x121082  srl         $v0, $s2, 2
    ctx->pc = 0x18f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x18f8f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f8f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f8f8: 0x8c33a600  lw          $s3, -0x5A00($at)
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f8fc: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x18f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18f900: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x18f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x18f904: 0x244225fc  addiu       $v0, $v0, 0x25FC
    ctx->pc = 0x18f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x18f908: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x18f908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f90c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F90Cu;
    {
        const bool branch_taken_0x18f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f90c) {
            ctx->pc = 0x18F920u;
            goto label_18f920;
        }
    }
    ctx->pc = 0x18F914u;
    // 0x18f914: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f914u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f918: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x18F918u;
    {
        const bool branch_taken_0x18f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f918) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F920u;
label_18f920:
    // 0x18f920: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f924: 0x8c33a600  lw          $s3, -0x5A00($at)
    ctx->pc = 0x18f924u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f928: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18f928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x18f92c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x18f92cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18f930: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x18F930u;
    SET_GPR_U32(ctx, 31, 0x18F938u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x18F930u, 0x18F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F938u;
label_18f938:
    // 0x18f938: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f93c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x18f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f940: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18f944: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f948: 0xac23a600  sw          $v1, -0x5A00($at)
    ctx->pc = 0x18f948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x18f94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f950: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x18F950u;
    {
        const bool branch_taken_0x18f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f950) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F958u;
label_18f958:
    // 0x18f958: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18f95c: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18f960: 0x2029023  subu        $s2, $s0, $v0
    ctx->pc = 0x18f960u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18f964: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18f968: 0x121082  srl         $v0, $s2, 2
    ctx->pc = 0x18f968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x18f96c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f970: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18f974: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18f974u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18f978: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x18f978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f97c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f980: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x18f980u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18f984: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x18f984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x18f988: 0x61480  sll         $v0, $a2, 18
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 18));
    // 0x18f98c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x18f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x18f990: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x18f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x18f994: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f998: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x18f998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x18f99c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x18f99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x18f9a0: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x18f9a4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x18f9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f9a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F9A8u;
    {
        const bool branch_taken_0x18f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f9a8) {
            ctx->pc = 0x18F9BCu;
            goto label_18f9bc;
        }
    }
    ctx->pc = 0x18F9B0u;
    // 0x18f9b0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f9b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f9b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18F9B4u;
    {
        const bool branch_taken_0x18f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9b4) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18F9BCu;
label_18f9bc:
    // 0x18f9bc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x18f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x18f9c0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x18f9c4: 0x2643fff0  addiu       $v1, $s2, -0x10
    ctx->pc = 0x18f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x18f9c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18f9cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18f9d0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x18f9d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f9d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x18f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x18f9dc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f9e0: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18f9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f9e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f9e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x18f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x18f9ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F9ECu;
    {
        const bool branch_taken_0x18f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9ec) {
            ctx->pc = 0x18FA20u;
            goto label_18fa20;
        }
    }
    ctx->pc = 0x18F9F4u;
    // 0x18f9f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f9f8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x18f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18f9fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18fa00: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x18fa00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18fa04: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa08: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x18fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x18fa0c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x18fa0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18fa10: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x18FA10u;
    SET_GPR_U32(ctx, 31, 0x18FA18u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x18FA10u, 0x18FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA18u;
label_18fa18:
    // 0x18fa18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18FA18u;
    {
        const bool branch_taken_0x18fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa18) {
            ctx->pc = 0x18FA44u;
            goto label_18fa44;
        }
    }
    ctx->pc = 0x18FA20u;
label_18fa20:
    // 0x18fa20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18fa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18fa24: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x18fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18fa28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18fa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18fa2c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x18fa2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18fa30: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa34: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x18fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x18fa38: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x18fa38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18fa3c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x18FA3Cu;
    SET_GPR_U32(ctx, 31, 0x18FA44u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x18FA3Cu, 0x18FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FA44u;
label_18fa44:
    // 0x18fa44: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa48: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18fa4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18fa50: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fa54: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x18fa54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x18fa58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fa5c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fa5cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18fa60:
    // 0x18fa60: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18fa60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18fa64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18fa64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18fa68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18fa68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18fa6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18fa6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18fa70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18fa70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fa74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18fa74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fa78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18fa78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fa7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18fa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fa80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fa84: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x18fa84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x18fa88: 0x3e00008  jr          $ra
    ctx->pc = 0x18FA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FA90u;
}
