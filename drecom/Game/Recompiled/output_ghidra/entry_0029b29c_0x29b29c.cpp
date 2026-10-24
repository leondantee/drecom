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

// Function: entry_0029b29c
// Address: 0x29b29c - 0x29b2a4
void entry_0029b29c_0x29b29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b29c_0x29b29c");
#endif

    ctx->pc = 0x29b29cu;

    // 0x29b29c: 0x36220040  ori         $v0, $s1, 0x40
    ctx->pc = 0x29b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64);
    // 0x29b2a0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x29b2a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x29b2a4u;
}
