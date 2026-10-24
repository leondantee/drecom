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

// Function: entry_002583e4
// Address: 0x2583e4 - 0x2583f0
void entry_002583e4_0x2583e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002583e4_0x2583e4");
#endif

    ctx->pc = 0x2583e4u;

    // 0x2583e4: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x2583e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2583e8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2583e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2583ec: 0x0  nop
    ctx->pc = 0x2583ecu;
    // NOP
    ctx->pc = 0x2583f0u;
}
