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

// Function: entry_0010aaec
// Address: 0x10aaec - 0x10aaf0
void entry_0010aaec_0x10aaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aaec_0x10aaec");
#endif

    ctx->pc = 0x10aaecu;

    // 0x10aaec: 0xac4044b0  sw          $zero, 0x44B0($v0)
    ctx->pc = 0x10aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17584), GPR_U32(ctx, 0));
    ctx->pc = 0x10aaf0u;
}
