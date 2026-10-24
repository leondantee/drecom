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

// Function: entry_002754d8
// Address: 0x2754d8 - 0x2754e0
void entry_002754d8_0x2754d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002754d8_0x2754d8");
#endif

    ctx->pc = 0x2754d8u;

    // 0x2754d8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2754dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2754dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2754e0u;
}
