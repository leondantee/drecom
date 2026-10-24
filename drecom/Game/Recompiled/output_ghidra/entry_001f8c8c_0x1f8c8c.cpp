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

// Function: entry_001f8c8c
// Address: 0x1f8c8c - 0x1f8cdc
void entry_001f8c8c_0x1f8c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8c8c_0x1f8c8c");
#endif

    ctx->pc = 0x1f8c8cu;

    // 0x1f8c8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c94: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f8c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8c98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c9c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8ca0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f8ca4: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f8ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f8ca8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f8cac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f8cb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cb4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8cb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cbc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f8cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f8cc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f8cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f8cc4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f8cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8CC8u;
    {
        const bool branch_taken_0x1f8cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8cc8) {
            ctx->pc = 0x1F8CDCu;
            return;
        }
    }
    ctx->pc = 0x1F8CD0u;
    // 0x1f8cd0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f8cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cd8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f8cdcu;
}
