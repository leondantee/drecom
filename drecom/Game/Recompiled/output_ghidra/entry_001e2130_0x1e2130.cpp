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

// Function: entry_001e2130
// Address: 0x1e2130 - 0x1e2138
void entry_001e2130_0x1e2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2130_0x1e2130");
#endif

    ctx->pc = 0x1e2130u;

    // 0x1e2130: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e2130u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e2134: 0x0  nop
    ctx->pc = 0x1e2134u;
    // NOP
    ctx->pc = 0x1e2138u;
}
