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

// Function: entry_001e29b8
// Address: 0x1e29b8 - 0x1e29f4
void entry_001e29b8_0x1e29b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e29b8_0x1e29b8");
#endif

    ctx->pc = 0x1e29b8u;

    // 0x1e29b8: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x1e29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x1e29bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e29c0: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x1e29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x1e29c4: 0x1460fe6d  bnez        $v1, . + 4 + (-0x193 << 2)
    ctx->pc = 0x1E29C4u;
    {
        const bool branch_taken_0x1e29c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e29c4) {
            ctx->pc = 0x1E237Cu;
            return;
        }
    }
    ctx->pc = 0x1E29CCu;
    // 0x1e29cc: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x1e29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x1e29d0: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e29d4: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e29d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E29D8u;
    {
        const bool branch_taken_0x1e29d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e29d8) {
            ctx->pc = 0x1E29F4u;
            return;
        }
    }
    ctx->pc = 0x1E29E0u;
    // 0x1e29e0: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1e29e4: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e29e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e29ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e29ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e29f0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e29f4u;
}
