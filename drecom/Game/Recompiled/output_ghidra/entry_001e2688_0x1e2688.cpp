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

// Function: entry_001e2688
// Address: 0x1e2688 - 0x1e2728
void entry_001e2688_0x1e2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2688_0x1e2688");
#endif

    switch (ctx->pc) {
        case 0x1e26e8u: goto label_1e26e8;
        default: break;
    }

    ctx->pc = 0x1e2688u;

    // 0x1e2688: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e268c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e2690: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E2690u;
    {
        const bool branch_taken_0x1e2690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2690) {
            ctx->pc = 0x1E2728u;
            return;
        }
    }
    ctx->pc = 0x1E2698u;
    // 0x1e2698: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e2698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e269c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e26a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e26a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e26a4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e26a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e26a8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e26ac: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e26b0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e26b4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e26b8: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e26bc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e26c0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e26c4: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e26c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e26cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e26d0: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x1e26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x1e26d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e26d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e26d8: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e26d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e26dc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e26dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e26e0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E26E0u;
    SET_GPR_U32(ctx, 31, 0x1E26E8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E26E8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E26E8u) { return; }
    ctx->pc = 0x1E26E8u;
label_1e26e8:
    // 0x1e26e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e26ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e26ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e26f0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e26f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e26f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e26f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e26fc: 0x0  nop
    ctx->pc = 0x1e26fcu;
    // NOP
    // 0x1e2700: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2704: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e2704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e2708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e270c: 0x0  nop
    ctx->pc = 0x1e270cu;
    // NOP
    // 0x1e2710: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e2710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e271c: 0x0  nop
    ctx->pc = 0x1e271cu;
    // NOP
    // 0x1e2720: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2724: 0x0  nop
    ctx->pc = 0x1e2724u;
    // NOP
    ctx->pc = 0x1e2728u;
}
