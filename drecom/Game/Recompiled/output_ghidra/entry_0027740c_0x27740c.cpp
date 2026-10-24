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

// Function: entry_0027740c
// Address: 0x27740c - 0x277410
void entry_0027740c_0x27740c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027740c_0x27740c");
#endif

    ctx->pc = 0x27740cu;

    // 0x27740c: 0x24457520  addiu       $a1, $v0, 0x7520
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    ctx->pc = 0x277410u;
}
