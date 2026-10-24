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

// Function: entry_003787d8
// Address: 0x3787d8 - 0x378818
void entry_003787d8_0x3787d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003787d8_0x3787d8");
#endif

    ctx->pc = 0x3787d8u;

    // 0x3787d8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3787d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3787dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3787e0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3787e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3787e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3787e8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3787e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3787ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3787f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3787f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3787f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3787f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3787f8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3787f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3787fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3787fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x378800: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x378800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x378804: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x378804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x378808: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x378808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37880c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x37880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x378810: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x378810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x378814: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x378814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x378818u;
}
