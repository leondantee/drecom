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

// Function: entry_001f3bf8
// Address: 0x1f3bf8 - 0x1f3c38
void entry_001f3bf8_0x1f3bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3bf8_0x1f3bf8");
#endif

    switch (ctx->pc) {
        case 0x1f3c30u: goto label_1f3c30;
        default: break;
    }

    ctx->pc = 0x1f3bf8u;

    // 0x1f3bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bfc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3c00: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3c04: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f3c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f3c08: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3C08u;
    {
        const bool branch_taken_0x1f3c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c08) {
            ctx->pc = 0x1F3C38u;
            return;
        }
    }
    ctx->pc = 0x1F3C10u;
    // 0x1f3c10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3c1c: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1f3c20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3c24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3c28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3C28u;
    SET_GPR_U32(ctx, 31, 0x1F3C30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3C28u, 0x1F3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C30u;
label_1f3c30:
    // 0x1f3c30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3C30u;
    {
        const bool branch_taken_0x1f3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c30) {
            ctx->pc = 0x1F3C58u;
            return;
        }
    }
    ctx->pc = 0x1F3C38u;
}
