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

// Function: entry_002d3274
// Address: 0x2d3274 - 0x2d32a0
void entry_002d3274_0x2d3274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3274_0x2d3274");
#endif

    switch (ctx->pc) {
        case 0x2d3280u: goto label_2d3280;
        default: break;
    }

    ctx->pc = 0x2d3274u;

    // 0x2d3274: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3278: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3278u;
    SET_GPR_U32(ctx, 31, 0x2D3280u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3278u, 0x2D3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3280u;
label_2d3280:
    // 0x2d3280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3284: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2d3284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2d3288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3288u;
    {
        const bool branch_taken_0x2d3288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3288) {
            ctx->pc = 0x2D32A0u;
            return;
        }
    }
    ctx->pc = 0x2D3290u;
    // 0x2d3290: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3294: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d329c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d329cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d32a0u;
}
