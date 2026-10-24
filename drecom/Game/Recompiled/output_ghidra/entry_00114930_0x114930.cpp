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

// Function: entry_00114930
// Address: 0x114930 - 0x114938
void entry_00114930_0x114930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114930_0x114930");
#endif

    ctx->pc = 0x114930u;

    // 0x114930: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x114930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x114934: 0x0  nop
    ctx->pc = 0x114934u;
    // NOP
    ctx->pc = 0x114938u;
}
