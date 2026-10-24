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

// Function: entry_00198a04
// Address: 0x198a04 - 0x198a30
void entry_00198a04_0x198a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a04_0x198a04");
#endif

    switch (ctx->pc) {
        case 0x198a10u: goto label_198a10;
        default: break;
    }

    ctx->pc = 0x198a04u;

    // 0x198a04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a08: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x198A08u;
    SET_GPR_U32(ctx, 31, 0x198A10u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x198A08u, 0x198A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A10u;
label_198a10:
    // 0x198a10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a14: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x198a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x198a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198A18u;
    {
        const bool branch_taken_0x198a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a18) {
            ctx->pc = 0x198A30u;
            return;
        }
    }
    ctx->pc = 0x198A20u;
    // 0x198a20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x198a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198a2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x198a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x198a30u;
}
