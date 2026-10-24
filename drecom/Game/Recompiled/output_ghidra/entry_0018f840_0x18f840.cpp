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

// Function: entry_0018f840
// Address: 0x18f840 - 0x18f920
void entry_0018f840_0x18f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f840_0x18f840");
#endif

    switch (ctx->pc) {
        case 0x18f864u: goto label_18f864;
        case 0x18f878u: goto label_18f878;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8bcu: goto label_18f8bc;
        default: break;
    }

    ctx->pc = 0x18f840u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x18F920u;
}
