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

// Function: entry_001f4c24
// Address: 0x1f4c24 - 0x1f4c74
void entry_001f4c24_0x1f4c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4c24_0x1f4c24");
#endif

    ctx->pc = 0x1f4c24u;

    // 0x1f4c24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4c28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c2c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f4c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4c30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c34: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4c38: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f4c3c: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f4c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f4c40: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f4c44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f4c48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c4c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4c50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c54: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f4c54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f4c58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f4c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4c5c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f4c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f4c60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4C60u;
    {
        const bool branch_taken_0x1f4c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c60) {
            ctx->pc = 0x1F4C74u;
            return;
        }
    }
    ctx->pc = 0x1F4C68u;
    // 0x1f4c68: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4c6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4c70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f4c74u;
}
