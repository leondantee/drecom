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

// Function: entry_001e3f38
// Address: 0x1e3f38 - 0x1e3f40
void entry_001e3f38_0x1e3f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f38_0x1e3f38");
#endif

    ctx->pc = 0x1e3f38u;

    // 0x1e3f38: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e3f3c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e3f3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e3f40u;
}
