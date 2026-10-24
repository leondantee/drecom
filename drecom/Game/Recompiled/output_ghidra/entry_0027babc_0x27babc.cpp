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

// Function: entry_0027babc
// Address: 0x27babc - 0x27bac0
void entry_0027babc_0x27babc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027babc_0x27babc");
#endif

    ctx->pc = 0x27babcu;

    // 0x27babc: 0x2445bbe0  addiu       $a1, $v0, -0x4420
    ctx->pc = 0x27babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949856));
    ctx->pc = 0x27bac0u;
}
