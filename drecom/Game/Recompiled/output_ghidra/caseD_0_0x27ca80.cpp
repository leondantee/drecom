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

// Function: caseD_0
// Address: 0x27ca80 - 0x27caa0
void caseD_0_0x27ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x27ca80");
#endif

    ctx->pc = 0x27ca80u;

    // 0x27ca80: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27ca80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ca84: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27ca84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ca88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ca8c: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27ca8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27ca90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ca94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ca98: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27ca98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27ca9c: 0x0  nop
    ctx->pc = 0x27ca9cu;
    // NOP
    ctx->pc = 0x27caa0u;
}
