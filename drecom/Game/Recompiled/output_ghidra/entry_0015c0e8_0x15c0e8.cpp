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

// Function: entry_0015c0e8
// Address: 0x15c0e8 - 0x15c0f0
void entry_0015c0e8_0x15c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c0e8_0x15c0e8");
#endif

    ctx->pc = 0x15c0e8u;

    // 0x15c0e8: 0xae6013ec  sw          $zero, 0x13EC($s3)
    ctx->pc = 0x15c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 0));
    // 0x15c0ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c0ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15c0f0u;
}
