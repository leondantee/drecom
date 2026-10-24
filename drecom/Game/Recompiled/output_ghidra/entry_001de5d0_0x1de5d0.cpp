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

// Function: entry_001de5d0
// Address: 0x1de5d0 - 0x1de5d8
void entry_001de5d0_0x1de5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de5d0_0x1de5d0");
#endif

    ctx->pc = 0x1de5d0u;

    // 0x1de5d0: 0xa7b300fc  sh          $s3, 0xFC($sp)
    ctx->pc = 0x1de5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 252), (uint16_t)GPR_U32(ctx, 19));
    // 0x1de5d4: 0x0  nop
    ctx->pc = 0x1de5d4u;
    // NOP
    ctx->pc = 0x1de5d8u;
}
