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

// Function: entry_0027869c
// Address: 0x27869c - 0x2786a4
void entry_0027869c_0x27869c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027869c_0x27869c");
#endif

    ctx->pc = 0x27869cu;

    // 0x27869c: 0x8c231a80  lw          $v1, 0x1A80($at)
    ctx->pc = 0x27869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6784)));
    // 0x2786a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2786a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x2786a4u;
}
