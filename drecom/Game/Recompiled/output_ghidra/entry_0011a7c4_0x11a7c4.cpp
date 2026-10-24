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

// Function: entry_0011a7c4
// Address: 0x11a7c4 - 0x11a7c8
void entry_0011a7c4_0x11a7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a7c4_0x11a7c4");
#endif

    ctx->pc = 0x11a7c4u;

    // 0x11a7c4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x11a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->pc = 0x11a7c8u;
}
