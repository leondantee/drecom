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

// Function: entry_001e7764
// Address: 0x1e7764 - 0x1e7888
void entry_001e7764_0x1e7764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7764_0x1e7764");
#endif

    switch (ctx->pc) {
        case 0x1e7788u: goto label_1e7788;
        case 0x1e77b0u: goto label_1e77b0;
        case 0x1e77d4u: goto label_1e77d4;
        case 0x1e77f8u: goto label_1e77f8;
        case 0x1e781cu: goto label_1e781c;
        case 0x1e7840u: goto label_1e7840;
        default: break;
    }

    ctx->pc = 0x1e7764u;

    // 0x1e7764: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1e7764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7768: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1e7768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e776c: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e7770: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1e7774: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1e7774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7778: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e777c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e777cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7780: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7780u;
    SET_GPR_U32(ctx, 31, 0x1E7788u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7788u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7788u) { return; }
    ctx->pc = 0x1E7788u;
label_1e7788:
    // 0x1e7788: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7788u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e778c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x1e778cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e7790: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e7790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e7794: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7798: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e779c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e77a0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e77a4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e77a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e77a8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E77A8u;
    SET_GPR_U32(ctx, 31, 0x1E77B0u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E77B0u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E77B0u) { return; }
    ctx->pc = 0x1E77B0u;
label_1e77b0:
    // 0x1e77b0: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e77b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e77b4: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x1e77b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e77b8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1e77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1e77bc: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e77bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e77c0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e77c4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e77c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e77c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e77cc: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E77CCu;
    SET_GPR_U32(ctx, 31, 0x1E77D4u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E77D4u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E77D4u) { return; }
    ctx->pc = 0x1E77D4u;
label_1e77d4:
    // 0x1e77d4: 0x96360000  lhu         $s6, 0x0($s1)
    ctx->pc = 0x1e77d4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e77d8: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1e77d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1e77dc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e77e0: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e77e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e77e4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1e77e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e77e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e77ec: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e77ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e77f0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E77F0u;
    SET_GPR_U32(ctx, 31, 0x1E77F8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E77F8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E77F8u) { return; }
    ctx->pc = 0x1E77F8u;
label_1e77f8:
    // 0x1e77f8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e77f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e77fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1e77fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7800: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1e7800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e7804: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1e7804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e7808: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1e7808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e780c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e780cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7810: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7810u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7814: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7814u;
    SET_GPR_U32(ctx, 31, 0x1E781Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E781Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E781Cu) { return; }
    ctx->pc = 0x1E781Cu;
label_1e781c:
    // 0x1e781c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1e781cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7820: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e7824: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1e7824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7828: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x1e7828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1e782c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7830: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7834: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e7834u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e7838: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E7838u;
    SET_GPR_U32(ctx, 31, 0x1E7840u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E7840u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7840u) { return; }
    ctx->pc = 0x1E7840u;
label_1e7840:
    // 0x1e7840: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x1e7840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1e7844: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E7844u;
    {
        const bool branch_taken_0x1e7844 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e7844) {
            ctx->pc = 0x1E7888u;
            return;
        }
    }
    ctx->pc = 0x1E784Cu;
    // 0x1e784c: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x1e784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1e7850: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7850u;
    {
        const bool branch_taken_0x1e7850 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e7850) {
            ctx->pc = 0x1E7888u;
            return;
        }
    }
    ctx->pc = 0x1E7858u;
    // 0x1e7858: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e785c: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E785Cu;
    {
        const bool branch_taken_0x1e785c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e785c) {
            ctx->pc = 0x1E7888u;
            return;
        }
    }
    ctx->pc = 0x1E7864u;
    // 0x1e7864: 0x8fb001f8  lw          $s0, 0x1F8($sp)
    ctx->pc = 0x1e7864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e7868: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7868u;
    {
        const bool branch_taken_0x1e7868 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1e7868) {
            ctx->pc = 0x1E7888u;
            return;
        }
    }
    ctx->pc = 0x1E7870u;
    // 0x1e7870: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e7874: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7874u;
    {
        const bool branch_taken_0x1e7874 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e7874) {
            ctx->pc = 0x1E7888u;
            return;
        }
    }
    ctx->pc = 0x1E787Cu;
    // 0x1e787c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x1e787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1e7880: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7880u;
    {
        const bool branch_taken_0x1e7880 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e7880) {
            ctx->pc = 0x1E78A0u;
            return;
        }
    }
    ctx->pc = 0x1E7888u;
}
