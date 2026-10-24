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

// Function: entry_00171730
// Address: 0x171730 - 0x1717b8
void entry_00171730_0x171730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171730_0x171730");
#endif

    switch (ctx->pc) {
        case 0x1717a0u: goto label_1717a0;
        default: break;
    }

    ctx->pc = 0x171730u;

    // 0x171730: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171734: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x171734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x171738: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x171738u;
    {
        const bool branch_taken_0x171738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171738) {
            ctx->pc = 0x171660u;
            return;
        }
    }
    ctx->pc = 0x171740u;
    // 0x171740: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x171744: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171748: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x171748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x17174c: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x17174cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171750: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171754: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171758: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x171758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x17175c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17175cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171760: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x171760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171764: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x171764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171768: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x171768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17176c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171770: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171774: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x171778: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x17177c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x17177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x171780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171784: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x171784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x171788: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x171788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x17178c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171790: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x171790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171794: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x171794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x171798: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x171798u;
    SET_GPR_U32(ctx, 31, 0x1717A0u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x1717A0u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1717A0u) { return; }
    ctx->pc = 0x1717A0u;
label_1717a0:
    // 0x1717a0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1717a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1717a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1717a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1717a8: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1717a8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1717ac: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1717acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1717b0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1717b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1717b4: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x1717b4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1717b8u;
}
