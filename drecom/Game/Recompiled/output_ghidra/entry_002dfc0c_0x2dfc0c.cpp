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

// Function: entry_002dfc0c
// Address: 0x2dfc0c - 0x2dfc40
void entry_002dfc0c_0x2dfc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfc0c_0x2dfc0c");
#endif

    switch (ctx->pc) {
        case 0x2dfc18u: goto label_2dfc18;
        default: break;
    }

    ctx->pc = 0x2dfc0cu;

    // 0x2dfc0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfc10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DFC10u;
    SET_GPR_U32(ctx, 31, 0x2DFC18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DFC10u, 0x2DFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC18u;
label_2dfc18:
    // 0x2dfc18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfc1c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dfc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dfc20: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2DFC20u;
    {
        const bool branch_taken_0x2dfc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc20) {
            ctx->pc = 0x2DFFACu;
            return;
        }
    }
    ctx->pc = 0x2DFC28u;
    // 0x2dfc28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfc2c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dfc2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2dfc30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfc34: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dfc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dfc38: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2DFC38u;
    {
        const bool branch_taken_0x2dfc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc38) {
            ctx->pc = 0x2DFFACu;
            return;
        }
    }
    ctx->pc = 0x2DFC40u;
}
