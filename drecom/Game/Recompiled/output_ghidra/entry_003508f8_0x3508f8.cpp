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

// Function: entry_003508f8
// Address: 0x3508f8 - 0x350920
void entry_003508f8_0x3508f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003508f8_0x3508f8");
#endif

    ctx->pc = 0x3508f8u;

    // 0x3508f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3508f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508fc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3508fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x350900: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x350900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x350904: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350908: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x350908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35090c: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x35090cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x350910: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350914: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350918: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35091c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x35091cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x350920u;
}
