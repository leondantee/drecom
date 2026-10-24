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

// Function: entry_0010a86c
// Address: 0x10a86c - 0x10a870
void entry_0010a86c_0x10a86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a86c_0x10a86c");
#endif

    ctx->pc = 0x10a86cu;

    // 0x10a86c: 0x8e643d04  lw          $a0, 0x3D04($s3)
    ctx->pc = 0x10a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15620)));
    ctx->pc = 0x10a870u;
}
