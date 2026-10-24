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

// Function: entry_0014dd7c
// Address: 0x14dd7c - 0x14dd80
void entry_0014dd7c_0x14dd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd7c_0x14dd7c");
#endif

    ctx->pc = 0x14dd7cu;

    // 0x14dd7c: 0xa60013a8  sh          $zero, 0x13A8($s0)
    ctx->pc = 0x14dd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14dd80u;
}
