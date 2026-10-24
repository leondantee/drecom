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

// Function: entry_00345ff8
// Address: 0x345ff8 - 0x346020
void entry_00345ff8_0x345ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345ff8_0x345ff8");
#endif

    ctx->pc = 0x345ff8u;

    // 0x345ff8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345ffc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x345ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346000: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x346000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x346004: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x346004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346008: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34600c: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x34600cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x346010: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x346010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346014: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x346014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x346018: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34601c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34601cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x346020u;
}
