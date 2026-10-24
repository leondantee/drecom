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

// Function: entry_0022e0f4
// Address: 0x22e0f4 - 0x22e140
void entry_0022e0f4_0x22e0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e0f4_0x22e0f4");
#endif

    ctx->pc = 0x22e0f4u;

    // 0x22e0f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e0f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e0fc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22e0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e104: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e108: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22e10c: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x22e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x22e110: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22e110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22e114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e118: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e11c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e120: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22e124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e128: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e12c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x22e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22e130: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e134: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e134u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e138: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e13c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22e13cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22e140u;
}
