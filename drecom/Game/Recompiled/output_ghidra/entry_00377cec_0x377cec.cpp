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

// Function: entry_00377cec
// Address: 0x377cec - 0x377cf0
void entry_00377cec_0x377cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377cec_0x377cec");
#endif

    ctx->pc = 0x377cecu;

    // 0x377cec: 0xac300330  sw          $s0, 0x330($at)
    ctx->pc = 0x377cecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 816), GPR_U32(ctx, 16));
    ctx->pc = 0x377cf0u;
}
