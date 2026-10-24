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

// Function: entry_00211da8
// Address: 0x211da8 - 0x211db4
void entry_00211da8_0x211da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211da8_0x211da8");
#endif

    ctx->pc = 0x211da8u;

    // 0x211da8: 0x24441a6c  addiu       $a0, $v0, 0x1A6C
    ctx->pc = 0x211da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6764));
    // 0x211dac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x211dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x211db0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x211db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x211db4u;
}
