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

// Function: entry_00369f68
// Address: 0x369f68 - 0x369f7c
void entry_00369f68_0x369f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369f68_0x369f68");
#endif

    ctx->pc = 0x369f68u;

    // 0x369f68: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x369f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x369f6c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f70: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x369f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369f74: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f78: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x369f7cu;
}
