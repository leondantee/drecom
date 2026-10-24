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

// Function: entry_00282b68
// Address: 0x282b68 - 0x282b74
void entry_00282b68_0x282b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282b68_0x282b68");
#endif

    ctx->pc = 0x282b68u;

    // 0x282b68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b70: 0xa022db91  sb          $v0, -0x246F($at)
    ctx->pc = 0x282b70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB91u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDB91u, _value); } while (0);
    ctx->pc = 0x282b74u;
}
