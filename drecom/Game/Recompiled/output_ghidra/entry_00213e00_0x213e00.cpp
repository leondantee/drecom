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

// Function: entry_00213e00
// Address: 0x213e00 - 0x213e04
void entry_00213e00_0x213e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213e00_0x213e00");
#endif

    ctx->pc = 0x213e00u;

    // 0x213e00: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x213e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x213e04u;
}
