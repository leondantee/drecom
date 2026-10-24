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

// Function: entry_002d3150
// Address: 0x2d3150 - 0x2d3198
void entry_002d3150_0x2d3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3150_0x2d3150");
#endif

    switch (ctx->pc) {
        case 0x2d315cu: goto label_2d315c;
        default: break;
    }

    ctx->pc = 0x2d3150u;

    // 0x2d3150: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3154: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3154u;
    SET_GPR_U32(ctx, 31, 0x2D315Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3154u, 0x2D315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D315Cu;
label_2d315c:
    // 0x2d315c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3160: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3164: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3164u;
    {
        const bool branch_taken_0x2d3164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3164) {
            ctx->pc = 0x2D3198u;
            return;
        }
    }
    ctx->pc = 0x2D316Cu;
    // 0x2d316c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3170: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3174: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3178: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d317c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d317cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3184: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3188: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d318c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d318cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3190: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3194: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d3198u;
}
