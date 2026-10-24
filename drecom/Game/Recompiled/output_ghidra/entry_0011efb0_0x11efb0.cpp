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

// Function: entry_0011efb0
// Address: 0x11efb0 - 0x11efb4
void entry_0011efb0_0x11efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011efb0_0x11efb0");
#endif

    ctx->pc = 0x11efb0u;

    // 0x11efb0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x11efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    ctx->pc = 0x11efb4u;
}
