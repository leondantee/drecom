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

// Function: entry_0021d4dc
// Address: 0x21d4dc - 0x21d4e0
void entry_0021d4dc_0x21d4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d4dc_0x21d4dc");
#endif

    ctx->pc = 0x21d4dcu;

    // 0x21d4dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21d4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21d4e0u;
}
