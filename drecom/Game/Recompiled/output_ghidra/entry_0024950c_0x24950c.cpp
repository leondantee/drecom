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

// Function: entry_0024950c
// Address: 0x24950c - 0x249518
void entry_0024950c_0x24950c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024950c_0x24950c");
#endif

    ctx->pc = 0x24950cu;

    // 0x24950c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x249510: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249514: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x249514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x249518u;
}
