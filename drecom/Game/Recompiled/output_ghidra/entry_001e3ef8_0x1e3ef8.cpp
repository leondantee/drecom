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

// Function: entry_001e3ef8
// Address: 0x1e3ef8 - 0x1e3f00
void entry_001e3ef8_0x1e3ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3ef8_0x1e3ef8");
#endif

    ctx->pc = 0x1e3ef8u;

    // 0x1e3ef8: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e3ef8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3efc: 0x0  nop
    ctx->pc = 0x1e3efcu;
    // NOP
    ctx->pc = 0x1e3f00u;
}
