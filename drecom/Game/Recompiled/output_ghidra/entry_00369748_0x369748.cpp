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

// Function: entry_00369748
// Address: 0x369748 - 0x36975c
void entry_00369748_0x369748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369748_0x369748");
#endif

    ctx->pc = 0x369748u;

    // 0x369748: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x369748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36974c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369750: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x369750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369754: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369758: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x36975cu;
}
