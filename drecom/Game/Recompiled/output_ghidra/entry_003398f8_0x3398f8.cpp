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

// Function: entry_003398f8
// Address: 0x3398f8 - 0x339900
void entry_003398f8_0x3398f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003398f8_0x3398f8");
#endif

    ctx->pc = 0x3398f8u;

    // 0x3398f8: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x3398f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21560), GPR_U32(ctx, 2));
    // 0x3398fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3398fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x339900u;
}
