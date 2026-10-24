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

// Function: entry_001dee74
// Address: 0x1dee74 - 0x1dee80
void entry_001dee74_0x1dee74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dee74_0x1dee74");
#endif

    ctx->pc = 0x1dee74u;

    // 0x1dee74: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x1dee74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1dee78: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1dee78u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dee7c: 0x0  nop
    ctx->pc = 0x1dee7cu;
    // NOP
    ctx->pc = 0x1dee80u;
}
