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

// Function: entry_0010678c
// Address: 0x10678c - 0x106790
void entry_0010678c_0x10678c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010678c_0x10678c");
#endif

    ctx->pc = 0x10678cu;

    // 0x10678c: 0x8fc23d08  lw          $v0, 0x3D08($fp)
    ctx->pc = 0x10678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
    ctx->pc = 0x106790u;
}
