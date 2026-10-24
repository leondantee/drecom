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

// Function: entry_002d3474
// Address: 0x2d3474 - 0x2d34bc
void entry_002d3474_0x2d3474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3474_0x2d3474");
#endif

    switch (ctx->pc) {
        case 0x2d3480u: goto label_2d3480;
        default: break;
    }

    ctx->pc = 0x2d3474u;

    // 0x2d3474: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3478: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3478u;
    SET_GPR_U32(ctx, 31, 0x2D3480u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3478u, 0x2D3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3480u;
label_2d3480:
    // 0x2d3480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3484: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3488: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3488u;
    {
        const bool branch_taken_0x2d3488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3488) {
            ctx->pc = 0x2D34BCu;
            return;
        }
    }
    ctx->pc = 0x2D3490u;
    // 0x2d3490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3498: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d349c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d34a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d34a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d34b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d34b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d34b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d34bcu;
}
