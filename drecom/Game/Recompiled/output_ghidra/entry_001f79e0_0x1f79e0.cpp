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

// Function: entry_001f79e0
// Address: 0x1f79e0 - 0x1f79f0
void entry_001f79e0_0x1f79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f79e0_0x1f79e0");
#endif

    ctx->pc = 0x1f79e0u;

    // 0x1f79e0: 0x7280b628  paddub      $s6, $s4, $zero
    ctx->pc = 0x1f79e0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1f79e4: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x1f79e4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1f79e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f79ec: 0x0  nop
    ctx->pc = 0x1f79ecu;
    // NOP
    ctx->pc = 0x1f79f0u;
}
