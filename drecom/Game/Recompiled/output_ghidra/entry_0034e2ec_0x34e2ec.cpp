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

// Function: entry_0034e2ec
// Address: 0x34e2ec - 0x34e314
void entry_0034e2ec_0x34e2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e2ec_0x34e2ec");
#endif

    ctx->pc = 0x34e2ecu;

    // 0x34e2ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e2f4: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34e2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e2f8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e2fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e300: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34e300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e304: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34e308: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e30c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e310: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34e310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34e314u;
}
