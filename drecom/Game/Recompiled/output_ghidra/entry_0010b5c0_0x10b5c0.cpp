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

// Function: entry_0010b5c0
// Address: 0x10b5c0 - 0x10b5c4
void entry_0010b5c0_0x10b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b5c0_0x10b5c0");
#endif

    ctx->pc = 0x10b5c0u;

    // 0x10b5c0: 0xada23d24  sw          $v0, 0x3D24($t5)
    ctx->pc = 0x10b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 15652), GPR_U32(ctx, 2));
    ctx->pc = 0x10b5c4u;
}
