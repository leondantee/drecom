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

// Function: entry_001acef0
// Address: 0x1acef0 - 0x1acf68
void entry_001acef0_0x1acef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acef0_0x1acef0");
#endif

    ctx->pc = 0x1acef0u;

    // 0x1acef0: 0x72e08e28  paddub      $s1, $s7, $zero
    ctx->pc = 0x1acef0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1acef4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1acef8: 0x90420d87  lbu         $v0, 0xD87($v0)
    ctx->pc = 0x1acef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3463)));
    // 0x1acefc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1acefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acf00: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x1acf04: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1acf08: 0x24021800  addiu       $v0, $zero, 0x1800
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1acf0c: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x1acf10: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1acf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1acf14: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1acf14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1acf18: 0x0  nop
    ctx->pc = 0x1acf18u;
    // NOP
    // 0x1acf1c: 0x0  nop
    ctx->pc = 0x1acf1cu;
    // NOP
    // 0x1acf20: 0x1010  mfhi        $v0
    ctx->pc = 0x1acf20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1acf24: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x1acf28: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1acf2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1acf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acf30: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1acf30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1acf34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1acf38: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1acf38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1acf3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1acf40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1acf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1acf44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ACF44u;
    {
        const bool branch_taken_0x1acf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acf44) {
            ctx->pc = 0x1ACF68u;
            return;
        }
    }
    ctx->pc = 0x1ACF4Cu;
    // 0x1acf4c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1acf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1acf50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acf54: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1acf54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acf58: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1acf58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acf5c: 0x24467d00  addiu       $a2, $v0, 0x7D00
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x1acf60: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1ACF60u;
    SET_GPR_U32(ctx, 31, 0x1ACF68u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1ACF68u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACF68u) { return; }
    ctx->pc = 0x1ACF68u;
}
