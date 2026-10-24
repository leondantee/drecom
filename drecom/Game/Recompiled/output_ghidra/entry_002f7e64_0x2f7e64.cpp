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

// Function: entry_002f7e64
// Address: 0x2f7e64 - 0x2f7e98
void entry_002f7e64_0x2f7e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7e64_0x2f7e64");
#endif

    ctx->pc = 0x2f7e64u;

    // 0x2f7e64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2f7e64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7e68: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2f7e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x2f7e6c: 0x24e81aa0  addiu       $t0, $a3, 0x1AA0
    ctx->pc = 0x2f7e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 6816));
    // 0x2f7e70: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x2f7e70u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3B1AA0u));
    // 0x2f7e74: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f7e78: 0x24641af0  addiu       $a0, $v1, 0x1AF0
    ctx->pc = 0x2f7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6896));
    // 0x2f7e7c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2f7e7cu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x3B1AF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x3B1AF0u, _value); } while (0);
    // 0x2f7e80: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2f7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2f7e84: 0x24a31ac0  addiu       $v1, $a1, 0x1AC0
    ctx->pc = 0x2f7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6848));
    // 0x2f7e88: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2f7e88u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x3B1AC0u));
    // 0x2f7e8c: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x2f7e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x2f7e90: 0x24e31b00  addiu       $v1, $a3, 0x1B00
    ctx->pc = 0x2f7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6912));
    // 0x2f7e94: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2f7e94u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x3B1B00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x3B1B00u, _value); } while (0);
    ctx->pc = 0x2f7e98u;
}
