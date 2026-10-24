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

// Function: entry_001c8480
// Address: 0x1c8480 - 0x1c84ac
void entry_001c8480_0x1c8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8480_0x1c8480");
#endif

    switch (ctx->pc) {
        case 0x1c84a4u: goto label_1c84a4;
        default: break;
    }

    ctx->pc = 0x1c8480u;

    // 0x1c8480: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8484: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8488: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c8488u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c848c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1c8490: 0x24061e7e  addiu       $a2, $zero, 0x1E7E
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7806));
    // 0x1c8494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8498: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c8498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c849c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C849Cu;
    SET_GPR_U32(ctx, 31, 0x1C84A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C849Cu, 0x1C84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84A4u;
label_1c84a4:
    // 0x1c84a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C84A4u;
    {
        const bool branch_taken_0x1c84a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84a4) {
            ctx->pc = 0x1C84CCu;
            return;
        }
    }
    ctx->pc = 0x1C84ACu;
}
