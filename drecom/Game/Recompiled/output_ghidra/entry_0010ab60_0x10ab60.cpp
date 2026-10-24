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

// Function: entry_0010ab60
// Address: 0x10ab60 - 0x10ab64
void entry_0010ab60_0x10ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab60_0x10ab60");
#endif

    ctx->pc = 0x10ab60u;

    // 0x10ab60: 0xae003d1c  sw          $zero, 0x3D1C($s0)
    ctx->pc = 0x10ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
    ctx->pc = 0x10ab64u;
}
