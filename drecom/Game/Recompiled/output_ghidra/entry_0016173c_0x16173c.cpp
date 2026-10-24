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

// Function: entry_0016173c
// Address: 0x16173c - 0x161744
void entry_0016173c_0x16173c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016173c_0x16173c");
#endif

    ctx->pc = 0x16173cu;

    // 0x16173c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161740: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x161744u;
}
