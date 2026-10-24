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

// Function: entry_0029b650
// Address: 0x29b650 - 0x29b654
void entry_0029b650_0x29b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b650_0x29b650");
#endif

    ctx->pc = 0x29b650u;

    // 0x29b650: 0xffa001c0  sd          $zero, 0x1C0($sp)
    ctx->pc = 0x29b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 0));
    ctx->pc = 0x29b654u;
}
