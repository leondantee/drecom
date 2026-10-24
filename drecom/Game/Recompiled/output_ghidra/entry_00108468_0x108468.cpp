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

// Function: entry_00108468
// Address: 0x108468 - 0x10846c
void entry_00108468_0x108468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108468_0x108468");
#endif

    ctx->pc = 0x108468u;

    // 0x108468: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x108468u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10846cu;
}
