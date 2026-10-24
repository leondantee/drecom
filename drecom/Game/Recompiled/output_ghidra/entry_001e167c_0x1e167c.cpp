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

// Function: entry_001e167c
// Address: 0x1e167c - 0x1e1700
void entry_001e167c_0x1e167c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e167c_0x1e167c");
#endif

    switch (ctx->pc) {
        case 0x1e16d4u: goto label_1e16d4;
        case 0x1e16e8u: goto label_1e16e8;
        default: break;
    }

    ctx->pc = 0x1e167cu;

    // 0x1e167c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1680: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e1680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e1684: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E1684u;
    {
        const bool branch_taken_0x1e1684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1684) {
            ctx->pc = 0x1E1700u;
            return;
        }
    }
    ctx->pc = 0x1E168Cu;
    // 0x1e168c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1690: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e1694: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e1694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e1698: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e1698u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e169c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e16a0: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e16a4: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e16a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e16ac: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e16b0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e16b4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e16b8: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e16bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e16c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e16c4: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e16c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e16c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e16cc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E16CCu;
    SET_GPR_U32(ctx, 31, 0x1E16D4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E16D4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E16D4u) { return; }
    ctx->pc = 0x1E16D4u;
label_1e16d4:
    // 0x1e16d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e16d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e16d8: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1e16d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1e16dc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e16dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e16e0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E16E0u;
    SET_GPR_U32(ctx, 31, 0x1E16E8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E16E8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E16E8u) { return; }
    ctx->pc = 0x1E16E8u;
label_1e16e8:
    // 0x1e16e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e16e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e16ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e16ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e16f0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e16f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e16f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e16f8: 0x0  nop
    ctx->pc = 0x1e16f8u;
    // NOP
    // 0x1e16fc: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e16fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    ctx->pc = 0x1e1700u;
}
