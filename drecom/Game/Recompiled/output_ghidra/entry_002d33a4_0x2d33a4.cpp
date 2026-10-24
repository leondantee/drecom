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

// Function: entry_002d33a4
// Address: 0x2d33a4 - 0x2d33f0
void entry_002d33a4_0x2d33a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d33a4_0x2d33a4");
#endif

    switch (ctx->pc) {
        case 0x2d33b0u: goto label_2d33b0;
        default: break;
    }

    ctx->pc = 0x2d33a4u;

    // 0x2d33a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33a8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D33A8u;
    SET_GPR_U32(ctx, 31, 0x2D33B0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D33A8u, 0x2D33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D33B0u;
label_2d33b0:
    // 0x2d33b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d33b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d33b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D33B8u;
    {
        const bool branch_taken_0x2d33b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33b8) {
            ctx->pc = 0x2D33F0u;
            return;
        }
    }
    ctx->pc = 0x2D33C0u;
    // 0x2d33c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d33c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d33c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d33cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d33d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d33d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d33d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d33dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d33e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d33e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d33e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d33ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d33f0u;
}
