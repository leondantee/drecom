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

// Function: entry_00215fec
// Address: 0x215fec - 0x215ff0
void entry_00215fec_0x215fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215fec_0x215fec");
#endif

    ctx->pc = 0x215fecu;

    // 0x215fec: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x215fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x215ff0u;
}
