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

// Function: entry_002d320c
// Address: 0x2d320c - 0x2d3244
void entry_002d320c_0x2d320c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d320c_0x2d320c");
#endif

    switch (ctx->pc) {
        case 0x2d323cu: goto label_2d323c;
        default: break;
    }

    ctx->pc = 0x2d320cu;

    // 0x2d320c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3210: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d3210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d3214: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D3214u;
    {
        const bool branch_taken_0x2d3214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3214) {
            ctx->pc = 0x2D3244u;
            return;
        }
    }
    ctx->pc = 0x2D321Cu;
    // 0x2d321c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3220: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3224: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3228: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x2d3228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x2d322c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d322cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3230: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3234: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3234u;
    SET_GPR_U32(ctx, 31, 0x2D323Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3234u, 0x2D323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D323Cu;
label_2d323c:
    // 0x2d323c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D323Cu;
    {
        const bool branch_taken_0x2d323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d323c) {
            ctx->pc = 0x2D3264u;
            return;
        }
    }
    ctx->pc = 0x2D3244u;
}
