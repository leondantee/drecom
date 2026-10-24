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

// Function: entry_003391d8
// Address: 0x3391d8 - 0x3391e0
void entry_003391d8_0x3391d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003391d8_0x3391d8");
#endif

    ctx->pc = 0x3391d8u;

    // 0x3391d8: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x3391d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21560), GPR_U32(ctx, 2));
    // 0x3391dc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3391dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3391e0u;
}
