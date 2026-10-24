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

// Function: entry_001de598
// Address: 0x1de598 - 0x1de5a0
void entry_001de598_0x1de598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de598_0x1de598");
#endif

    ctx->pc = 0x1de598u;

    // 0x1de598: 0xa7b100fa  sh          $s1, 0xFA($sp)
    ctx->pc = 0x1de598u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 17));
    // 0x1de59c: 0x0  nop
    ctx->pc = 0x1de59cu;
    // NOP
    ctx->pc = 0x1de5a0u;
}
