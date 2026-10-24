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

// Function: Em10_wep_move
// Address: 0x135680 - 0x135cb0
void Em10_wep_move_0x135680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_wep_move_0x135680");
#endif

    switch (ctx->pc) {
        case 0x1356d8u: goto label_1356d8;
        case 0x1356f4u: goto label_1356f4;
        case 0x13574cu: goto label_13574c;
        case 0x135758u: goto label_135758;
        case 0x135798u: goto label_135798;
        case 0x1357d4u: goto label_1357d4;
        case 0x1357e8u: goto label_1357e8;
        case 0x13581cu: goto label_13581c;
        case 0x135878u: goto label_135878;
        case 0x1358d0u: goto label_1358d0;
        case 0x13592cu: goto label_13592c;
        case 0x135954u: goto label_135954;
        case 0x135984u: goto label_135984;
        case 0x135998u: goto label_135998;
        case 0x1359dcu: goto label_1359dc;
        case 0x135a04u: goto label_135a04;
        case 0x135a30u: goto label_135a30;
        case 0x135a44u: goto label_135a44;
        case 0x135a88u: goto label_135a88;
        case 0x135ab0u: goto label_135ab0;
        case 0x135aecu: goto label_135aec;
        case 0x135b10u: goto label_135b10;
        case 0x135b1cu: goto label_135b1c;
        case 0x135b54u: goto label_135b54;
        case 0x135b9cu: goto label_135b9c;
        default: break;
    }

    ctx->pc = 0x135680u;

    // 0x135680: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x135680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x135684: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x135684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x135688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13568c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135694: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x135694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x135698: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x135698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x13569c: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x13569cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x1356a0: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x1356a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x1356a4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1356a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1356a8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1356a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1356ac: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1356acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1356b0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1356b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1356b4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1356b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1356b8: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1356b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1356bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1356bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1356c0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1356c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1356c4: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1356C4u;
    {
        const bool branch_taken_0x1356c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1356c4) {
            ctx->pc = 0x13589Cu;
            goto label_13589c;
        }
    }
    ctx->pc = 0x1356CCu;
    // 0x1356cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1356ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1356d0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1356D0u;
    SET_GPR_U32(ctx, 31, 0x1356D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1356D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1356D8u) { return; }
    ctx->pc = 0x1356D8u;
label_1356d8:
    // 0x1356d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1356d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1356dc: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x1356dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x1356e0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1356e0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1356e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1356e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1356e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1356e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1356ec: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1356ECu;
    SET_GPR_U32(ctx, 31, 0x1356F4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1356F4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1356F4u) { return; }
    ctx->pc = 0x1356F4u;
label_1356f4:
    // 0x1356f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1356f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1356f8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1356f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1356fc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1356fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135700: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x135700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x135704: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x135704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x135708: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x135708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13570c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x13570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135710: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x135710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x135714: 0x8cc302d0  lw          $v1, 0x2D0($a2)
    ctx->pc = 0x135714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x135718: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x135718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13571c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x13571cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135720: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x135720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135724: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x135724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x135728: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x135728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13572c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13572cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135730: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x135730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x135734: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x135734u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x135738: 0x8d0302d0  lw          $v1, 0x2D0($t0)
    ctx->pc = 0x135738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 720)));
    // 0x13573c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x13573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x135740: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x135740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135744: 0xc040c00  jal         func_103000
    ctx->pc = 0x135744u;
    SET_GPR_U32(ctx, 31, 0x13574Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x13574Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13574Cu) { return; }
    ctx->pc = 0x13574Cu;
label_13574c:
    // 0x13574c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135750: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x135750u;
    SET_GPR_U32(ctx, 31, 0x135758u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x135758u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135758u) { return; }
    ctx->pc = 0x135758u;
label_135758:
    // 0x135758: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x135758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13575c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13575Cu;
    {
        const bool branch_taken_0x13575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13575c) {
            ctx->pc = 0x1357A0u;
            goto label_1357a0;
        }
    }
    ctx->pc = 0x135764u;
    // 0x135764: 0x86020086  lh          $v0, 0x86($s0)
    ctx->pc = 0x135764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135768: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x135768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13576c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13576cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x135770: 0x2841008d  slti        $at, $v0, 0x8D
    ctx->pc = 0x135770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)141) ? 1 : 0);
    // 0x135774: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x135774u;
    {
        const bool branch_taken_0x135774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x135774) {
            ctx->pc = 0x1357D4u;
            goto label_1357d4;
        }
    }
    ctx->pc = 0x13577Cu;
    // 0x13577c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x13577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x135780: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x135780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x135784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135788: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13578c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x13578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135790: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x135790u;
    SET_GPR_U32(ctx, 31, 0x135798u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x135798u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135798u) { return; }
    ctx->pc = 0x135798u;
label_135798:
    // 0x135798: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x135798u;
    {
        const bool branch_taken_0x135798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135798) {
            ctx->pc = 0x1357D4u;
            goto label_1357d4;
        }
    }
    ctx->pc = 0x1357A0u;
label_1357a0:
    // 0x1357a0: 0x86020088  lh          $v0, 0x88($s0)
    ctx->pc = 0x1357a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1357a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1357a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1357a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1357a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1357ac: 0x2841008d  slti        $at, $v0, 0x8D
    ctx->pc = 0x1357acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)141) ? 1 : 0);
    // 0x1357b0: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1357B0u;
    {
        const bool branch_taken_0x1357b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1357b0) {
            ctx->pc = 0x1357D4u;
            goto label_1357d4;
        }
    }
    ctx->pc = 0x1357B8u;
    // 0x1357b8: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1357bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1357bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1357c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1357c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1357c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1357c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1357c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357cc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1357CCu;
    SET_GPR_U32(ctx, 31, 0x1357D4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1357D4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1357D4u) { return; }
    ctx->pc = 0x1357D4u;
label_1357d4:
    // 0x1357d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1357d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1357d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1357d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357dc: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1357dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1357e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1357E0u;
    SET_GPR_U32(ctx, 31, 0x1357E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1357E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1357E8u) { return; }
    ctx->pc = 0x1357E8u;
label_1357e8:
    // 0x1357e8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1357e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1357ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1357ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1357f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1357f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1357f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1357f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1357f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1357fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1357fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135800: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135804: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13580c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135810: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x135810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135814: 0xc040c9e  jal         func_103278
    ctx->pc = 0x135814u;
    SET_GPR_U32(ctx, 31, 0x13581Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13581Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13581Cu) { return; }
    ctx->pc = 0x13581Cu;
label_13581c:
    // 0x13581c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x13581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135820: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135824: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135828: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13582c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13582cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135834: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135838: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x13583c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x13583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135840: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135844: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135848: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13584c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135850: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135854: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135858: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13585c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x13585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135864: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x135864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x135868: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x135868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13586c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x13586cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135870: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x135870u;
    SET_GPR_U32(ctx, 31, 0x135878u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x135870u, 0x135878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135878u;
label_135878:
    // 0x135878: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x135878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13587c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x13587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135880: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x135884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135888: 0x0  nop
    ctx->pc = 0x135888u;
    // NOP
    // 0x13588c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13588cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135890: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x135890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x135894: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x135894u;
    {
        const bool branch_taken_0x135894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135894) {
            ctx->pc = 0x135948u;
            goto label_135948;
        }
    }
    ctx->pc = 0x13589Cu;
label_13589c:
    // 0x13589c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x13589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1358a0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1358a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1358a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1358a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1358b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1358b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1358b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1358b8: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1358b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1358bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1358bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1358c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1358c4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1358c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1358c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1358C8u;
    SET_GPR_U32(ctx, 31, 0x1358D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1358D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1358D0u) { return; }
    ctx->pc = 0x1358D0u;
label_1358d0:
    // 0x1358d0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1358d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1358d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1358d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1358d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1358dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1358e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1358e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1358e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1358ec: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1358f0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1358f4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1358f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1358f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1358f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1358fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1358fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135904: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135908: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13590c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13590cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135910: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135918: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x135918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13591c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135920: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x135920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135924: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x135924u;
    SET_GPR_U32(ctx, 31, 0x13592Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x135924u, 0x13592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13592Cu;
label_13592c:
    // 0x13592c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x13592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135930: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x135930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x135934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x135938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13593c: 0x0  nop
    ctx->pc = 0x13593cu;
    // NOP
    // 0x135940: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135944: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x135944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_135948:
    // 0x135948: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x135948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13594c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x13594Cu;
    SET_GPR_U32(ctx, 31, 0x135954u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x13594Cu, 0x135954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x135954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135958: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x135958u;
    {
        const bool branch_taken_0x135958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135958) {
            ctx->pc = 0x135A0Cu;
            goto label_135a0c;
        }
    }
    ctx->pc = 0x135960u;
    // 0x135960: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135964: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135968: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13596c: 0x24450580  addiu       $a1, $v0, 0x580
    ctx->pc = 0x13596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x135970: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135974: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x135978: 0x24478da4  addiu       $a3, $v0, -0x725C
    ctx->pc = 0x135978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938020));
    // 0x13597c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x13597Cu;
    SET_GPR_U32(ctx, 31, 0x135984u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x13597Cu, 0x135984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135984u;
label_135984:
    // 0x135984: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x135984u;
    {
        const bool branch_taken_0x135984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135984) {
            ctx->pc = 0x135AB0u;
            goto label_135ab0;
        }
    }
    ctx->pc = 0x13598Cu;
    // 0x13598c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135990: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x135990u;
    SET_GPR_U32(ctx, 31, 0x135998u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x135990u, 0x135998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135998u;
label_135998:
    // 0x135998: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13599c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1359a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1359a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1359a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1359a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1359a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1359a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1359ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1359acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1359b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1359b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1359b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1359b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1359b8: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x1359b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x1359bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1359c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1359c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1359c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1359c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1359c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1359c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1359cc: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1359d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1359d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1359d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1359D4u, 0x1359DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359DCu;
label_1359dc:
    // 0x1359dc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1359dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1359e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1359e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1359e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1359e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1359e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1359e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1359ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1359ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1359f0: 0x24040523  addiu       $a0, $zero, 0x523
    ctx->pc = 0x1359f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1315));
    // 0x1359f4: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x1359f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x1359f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1359f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1359fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1359FCu;
    SET_GPR_U32(ctx, 31, 0x135A04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1359FCu, 0x135A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A04u;
label_135a04:
    // 0x135a04: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x135A04u;
    {
        const bool branch_taken_0x135a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a04) {
            ctx->pc = 0x135AB0u;
            goto label_135ab0;
        }
    }
    ctx->pc = 0x135A0Cu;
label_135a0c:
    // 0x135a0c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135a14: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a18: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x135a1c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x135a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135a20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x135a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x135a24: 0x24478da4  addiu       $a3, $v0, -0x725C
    ctx->pc = 0x135a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938020));
    // 0x135a28: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x135A28u;
    SET_GPR_U32(ctx, 31, 0x135A30u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x135A28u, 0x135A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A30u;
label_135a30:
    // 0x135a30: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x135A30u;
    {
        const bool branch_taken_0x135a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a30) {
            ctx->pc = 0x135AB0u;
            goto label_135ab0;
        }
    }
    ctx->pc = 0x135A38u;
    // 0x135a38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135a3c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x135A3Cu;
    SET_GPR_U32(ctx, 31, 0x135A44u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x135A3Cu, 0x135A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A44u;
label_135a44:
    // 0x135a44: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x135a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x135a4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x135a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x135a50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x135a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x135a54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x135a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x135a58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x135a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x135a5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x135a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x135a60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x135a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x135a64: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x135a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x135a68: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135a70: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x135a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135a74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135a74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135a78: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x135a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x135a7c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x135a7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135a80: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x135A80u;
    SET_GPR_U32(ctx, 31, 0x135A88u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x135A80u, 0x135A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A88u;
label_135a88:
    // 0x135a88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135a8c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135a90: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135a94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135a98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135a9c: 0x24040523  addiu       $a0, $zero, 0x523
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1315));
    // 0x135aa0: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x135aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x135aa4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135aa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135aa8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135AA8u;
    SET_GPR_U32(ctx, 31, 0x135AB0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135AA8u, 0x135AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AB0u;
label_135ab0:
    // 0x135ab0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135ab4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135ab8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135abc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135ac0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135ac4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135ac8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135acc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135ad4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x135ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135ad8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x135ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135adc: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135ae0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x135ae4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x135AE4u;
    SET_GPR_U32(ctx, 31, 0x135AECu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x135AE4u, 0x135AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AECu;
label_135aec:
    // 0x135aec: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x135aecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x135af0: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x135AF0u;
    {
        const bool branch_taken_0x135af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x135af0) {
            ctx->pc = 0x135BB0u;
            goto label_135bb0;
        }
    }
    ctx->pc = 0x135AF8u;
    // 0x135af8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x135afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x135afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b00: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x135b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135b04: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x135b04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b08: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x135B08u;
    SET_GPR_U32(ctx, 31, 0x135B10u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x135B08u, 0x135B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B10u;
label_135b10:
    // 0x135b10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x135b10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x135b14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x135B14u;
    SET_GPR_U32(ctx, 31, 0x135B1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x135B14u, 0x135B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B1Cu;
label_135b1c:
    // 0x135b1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135b20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x135b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135b24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x135B24u;
    {
        const bool branch_taken_0x135b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b24) {
            ctx->pc = 0x135B74u;
            goto label_135b74;
        }
    }
    ctx->pc = 0x135B2Cu;
    // 0x135b2c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135b30: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135b34: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135b38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135b3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135b40: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135b44: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x135b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x135b48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135b48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b4c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135B4Cu;
    SET_GPR_U32(ctx, 31, 0x135B54u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135B4Cu, 0x135B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B54u;
label_135b54:
    // 0x135b54: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x135b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135b58: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135b5c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135b60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135b64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135b68: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135b6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135B6Cu;
    {
        const bool branch_taken_0x135b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b6c) {
            ctx->pc = 0x135BB0u;
            goto label_135bb0;
        }
    }
    ctx->pc = 0x135B74u;
label_135b74:
    // 0x135b74: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135b78: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135b7c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135b80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135b88: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135b8c: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x135b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x135b90: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135b90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b94: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135B94u;
    SET_GPR_U32(ctx, 31, 0x135B9Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135B94u, 0x135B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B9Cu;
label_135b9c:
    // 0x135b9c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135ba0: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x135ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x135ba4: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x135ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x135ba8: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135bac: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x135bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
label_135bb0:
    // 0x135bb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x135bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135bb4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x135BB4u;
    {
        const bool branch_taken_0x135bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bb4) {
            ctx->pc = 0x135C04u;
            goto label_135c04;
        }
    }
    ctx->pc = 0x135BBCu;
    // 0x135bbc: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135bc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135BC0u;
    {
        const bool branch_taken_0x135bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bc0) {
            ctx->pc = 0x135BDCu;
            goto label_135bdc;
        }
    }
    ctx->pc = 0x135BC8u;
    // 0x135bc8: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135bcc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x135bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135bd0: 0xa6040086  sh          $a0, 0x86($s0)
    ctx->pc = 0x135bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 4));
    // 0x135bd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x135BD4u;
    {
        const bool branch_taken_0x135bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bd4) {
            ctx->pc = 0x135C40u;
            goto label_135c40;
        }
    }
    ctx->pc = 0x135BDCu;
label_135bdc:
    // 0x135bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135be0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x135be0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x135be4: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x135be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135be8: 0x8ce4121c  lw          $a0, 0x121C($a3)
    ctx->pc = 0x135be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4636)));
    // 0x135bec: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135bf0: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x135bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135bf4: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x135bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x135bf8: 0xace6121c  sw          $a2, 0x121C($a3)
    ctx->pc = 0x135bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4636), GPR_U32(ctx, 6));
    // 0x135bfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135BFCu;
    {
        const bool branch_taken_0x135bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bfc) {
            ctx->pc = 0x135C40u;
            goto label_135c40;
        }
    }
    ctx->pc = 0x135C04u;
label_135c04:
    // 0x135c04: 0x86040088  lh          $a0, 0x88($s0)
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135c08: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135C08u;
    {
        const bool branch_taken_0x135c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c08) {
            ctx->pc = 0x135C24u;
            goto label_135c24;
        }
    }
    ctx->pc = 0x135C10u;
    // 0x135c10: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x135c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135c14: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x135c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135c18: 0xa6040088  sh          $a0, 0x88($s0)
    ctx->pc = 0x135c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 4));
    // 0x135c1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135C1Cu;
    {
        const bool branch_taken_0x135c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c1c) {
            ctx->pc = 0x135C40u;
            goto label_135c40;
        }
    }
    ctx->pc = 0x135C24u;
label_135c24:
    // 0x135c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135c28: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x135c28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x135c2c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135c30: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135c34: 0x4187c  dsll32      $v1, $a0, 1
    ctx->pc = 0x135c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 1));
    // 0x135c38: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135c3c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_135c40:
    // 0x135c40: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135C40u;
    {
        const bool branch_taken_0x135c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c40) {
            ctx->pc = 0x135C94u;
            goto label_135c94;
        }
    }
    ctx->pc = 0x135C48u;
    // 0x135c48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x135c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135c4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x135C4Cu;
    {
        const bool branch_taken_0x135c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c4c) {
            ctx->pc = 0x135C78u;
            goto label_135c78;
        }
    }
    ctx->pc = 0x135C54u;
    // 0x135c54: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x135c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135c58: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x135c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x135c5c: 0x3c05fdff  lui         $a1, 0xFDFF
    ctx->pc = 0x135c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65023 << 16));
    // 0x135c60: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x135c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x135c64: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x135c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x135c68: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x135c68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x135c6c: 0xa2000097  sb          $zero, 0x97($s0)
    ctx->pc = 0x135c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x135c70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135C70u;
    {
        const bool branch_taken_0x135c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c70) {
            ctx->pc = 0x135C94u;
            goto label_135c94;
        }
    }
    ctx->pc = 0x135C78u;
label_135c78:
    // 0x135c78: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x135c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135c7c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x135c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x135c80: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x135c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
    // 0x135c84: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x135c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x135c88: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x135c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x135c8c: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x135c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x135c90: 0xa2000098  sb          $zero, 0x98($s0)
    ctx->pc = 0x135c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_135c94:
    // 0x135c94: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x135c94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135c98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ca4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x135ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x135ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x135CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135CB0u;
}
