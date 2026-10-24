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

// Function: entry_00117278
// Address: 0x117278 - 0x11727c
void entry_00117278_0x117278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117278_0x117278");
#endif

    ctx->pc = 0x117278u;

    // 0x117278: 0x8c44490c  lw          $a0, 0x490C($v0)
    ctx->pc = 0x117278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18700)));
    ctx->pc = 0x11727cu;
}
