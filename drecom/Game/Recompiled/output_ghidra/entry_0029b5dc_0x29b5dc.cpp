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

// Function: entry_0029b5dc
// Address: 0x29b5dc - 0x29b5e0
void entry_0029b5dc_0x29b5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b5dc_0x29b5dc");
#endif

    ctx->pc = 0x29b5dcu;

    // 0x29b5dc: 0xffa001b8  sd          $zero, 0x1B8($sp)
    ctx->pc = 0x29b5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 0));
    ctx->pc = 0x29b5e0u;
}
