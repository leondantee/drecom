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

// Function: entry_00192a9c
// Address: 0x192a9c - 0x192aa4
void entry_00192a9c_0x192a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a9c_0x192a9c");
#endif

    ctx->pc = 0x192a9cu;

    // 0x192a9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x192a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x192aa0: 0x245ee550  addiu       $fp, $v0, -0x1AB0
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    ctx->pc = 0x192aa4u;
}
