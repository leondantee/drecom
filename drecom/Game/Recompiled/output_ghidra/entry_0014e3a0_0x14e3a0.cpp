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

// Function: entry_0014e3a0
// Address: 0x14e3a0 - 0x14e3a4
void entry_0014e3a0_0x14e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e3a0_0x14e3a0");
#endif

    ctx->pc = 0x14e3a0u;

    // 0x14e3a0: 0xa6001416  sh          $zero, 0x1416($s0)
    ctx->pc = 0x14e3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5142), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14e3a4u;
}
