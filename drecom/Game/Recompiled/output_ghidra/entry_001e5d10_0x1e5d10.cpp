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

// Function: entry_001e5d10
// Address: 0x1e5d10 - 0x1e5d18
void entry_001e5d10_0x1e5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d10_0x1e5d10");
#endif

    ctx->pc = 0x1e5d10u;

    // 0x1e5d10: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5d14: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5d14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e5d18u;
}
