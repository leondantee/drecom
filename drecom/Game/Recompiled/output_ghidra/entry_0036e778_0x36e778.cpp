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

// Function: entry_0036e778
// Address: 0x36e778 - 0x36e7b8
void entry_0036e778_0x36e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e778_0x36e778");
#endif

    switch (ctx->pc) {
        case 0x36e7b0u: goto label_36e7b0;
        default: break;
    }

    ctx->pc = 0x36e778u;

    // 0x36e778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e77c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36e780: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x36e780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36e784: 0x8602127a  lh          $v0, 0x127A($s0)
    ctx->pc = 0x36e784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4730)));
    // 0x36e788: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E7B8u;
            return;
        }
    }
    ctx->pc = 0x36E790u;
    // 0x36e790: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e794: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e798: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36e798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36e79c: 0x24065a0a  addiu       $a2, $zero, 0x5A0A
    ctx->pc = 0x36e79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23050));
    // 0x36e7a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e7a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36e7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36e7a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36E7A8u;
    SET_GPR_U32(ctx, 31, 0x36E7B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36E7A8u, 0x36E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E7B0u;
label_36e7b0:
    // 0x36e7b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x36E7B0u;
    {
        const bool branch_taken_0x36e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e7b0) {
            ctx->pc = 0x36E7D8u;
            return;
        }
    }
    ctx->pc = 0x36E7B8u;
}
