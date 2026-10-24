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

// Function: entry_0015e9bc
// Address: 0x15e9bc - 0x15e9c0
void entry_0015e9bc_0x15e9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e9bc_0x15e9bc");
#endif

    ctx->pc = 0x15e9bcu;

    // 0x15e9bc: 0x36310004  ori         $s1, $s1, 0x4
    ctx->pc = 0x15e9bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    ctx->pc = 0x15e9c0u;
}
