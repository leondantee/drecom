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

// Function: entry_0027787c
// Address: 0x27787c - 0x277880
void entry_0027787c_0x27787c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027787c_0x27787c");
#endif

    ctx->pc = 0x27787cu;

    // 0x27787c: 0xa423d4bc  sh          $v1, -0x2B44($at)
    ctx->pc = 0x27787cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956220), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x277880u;
}
