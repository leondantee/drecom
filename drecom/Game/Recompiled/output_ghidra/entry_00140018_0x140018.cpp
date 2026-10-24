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

// Function: entry_00140018
// Address: 0x140018 - 0x140020
void entry_00140018_0x140018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140018_0x140018");
#endif

    ctx->pc = 0x140018u;

    // 0x140018: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x14001c: 0x0  nop
    ctx->pc = 0x14001cu;
    // NOP
    ctx->pc = 0x140020u;
}
