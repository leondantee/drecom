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

// Function: entry_001de560
// Address: 0x1de560 - 0x1de568
void entry_001de560_0x1de560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de560_0x1de560");
#endif

    ctx->pc = 0x1de560u;

    // 0x1de560: 0xa7b400f8  sh          $s4, 0xF8($sp)
    ctx->pc = 0x1de560u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 20));
    // 0x1de564: 0x0  nop
    ctx->pc = 0x1de564u;
    // NOP
    ctx->pc = 0x1de568u;
}
