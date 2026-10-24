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

// Function: entry_0015e994
// Address: 0x15e994 - 0x15e998
void entry_0015e994_0x15e994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e994_0x15e994");
#endif

    ctx->pc = 0x15e994u;

    // 0x15e994: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x15e994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x15e998u;
}
