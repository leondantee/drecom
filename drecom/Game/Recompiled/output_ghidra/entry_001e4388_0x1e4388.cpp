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

// Function: entry_001e4388
// Address: 0x1e4388 - 0x1e4390
void entry_001e4388_0x1e4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4388_0x1e4388");
#endif

    ctx->pc = 0x1e4388u;

    // 0x1e4388: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e4388u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e438c: 0x0  nop
    ctx->pc = 0x1e438cu;
    // NOP
    ctx->pc = 0x1e4390u;
}
