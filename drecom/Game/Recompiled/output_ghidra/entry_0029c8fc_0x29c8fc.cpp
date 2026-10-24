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

// Function: entry_0029c8fc
// Address: 0x29c8fc - 0x29c900
void entry_0029c8fc_0x29c8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c8fc_0x29c8fc");
#endif

    ctx->pc = 0x29c8fcu;

    // 0x29c8fc: 0x24446a50  addiu       $a0, $v0, 0x6A50
    ctx->pc = 0x29c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
    ctx->pc = 0x29c900u;
}
