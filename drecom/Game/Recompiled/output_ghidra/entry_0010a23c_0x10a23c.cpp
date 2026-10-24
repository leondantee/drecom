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

// Function: entry_0010a23c
// Address: 0x10a23c - 0x10a240
void entry_0010a23c_0x10a23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a23c_0x10a23c");
#endif

    ctx->pc = 0x10a23cu;

    // 0x10a23c: 0xac463d00  sw          $a2, 0x3D00($v0)
    ctx->pc = 0x10a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15616), GPR_U32(ctx, 6));
    ctx->pc = 0x10a240u;
}
