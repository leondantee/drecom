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

// Function: entry_0029adc4
// Address: 0x29adc4 - 0x29add0
void entry_0029adc4_0x29adc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029adc4_0x29adc4");
#endif

    ctx->pc = 0x29adc4u;

    // 0x29adc4: 0x36250004  ori         $a1, $s1, 0x4
    ctx->pc = 0x29adc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x29adc8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x29adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29adcc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29adccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29add0u;
}
