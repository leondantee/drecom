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

// Function: entry_00348e10
// Address: 0x348e10 - 0x348e38
void entry_00348e10_0x348e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348e10_0x348e10");
#endif

    ctx->pc = 0x348e10u;

    // 0x348e10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e18: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x348e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e1c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e20: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e24: 0xa080006f  sb          $zero, 0x6F($a0)
    ctx->pc = 0x348e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x348e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348e2c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e30: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x348e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348e34: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x348e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x348e38u;
}
