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

// Function: entry_00271f7c
// Address: 0x271f7c - 0x271f80
void entry_00271f7c_0x271f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271f7c_0x271f7c");
#endif

    ctx->pc = 0x271f7cu;

    // 0x271f7c: 0xa423d41c  sh          $v1, -0x2BE4($at)
    ctx->pc = 0x271f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956060), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x271f80u;
}
