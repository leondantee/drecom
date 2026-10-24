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

// Function: entry_001c4efc
// Address: 0x1c4efc - 0x1c4f34
void entry_001c4efc_0x1c4efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4efc_0x1c4efc");
#endif

    switch (ctx->pc) {
        case 0x1c4f2cu: goto label_1c4f2c;
        default: break;
    }

    ctx->pc = 0x1c4efcu;

    // 0x1c4efc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c4f00: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c4f04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4F04u;
    {
        const bool branch_taken_0x1c4f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f04) {
            ctx->pc = 0x1C4F34u;
            return;
        }
    }
    ctx->pc = 0x1C4F0Cu;
    // 0x1c4f0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4f14: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4f18: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c4f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c4f1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4f20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4f24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4F24u;
    SET_GPR_U32(ctx, 31, 0x1C4F2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4F24u, 0x1C4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F2Cu;
label_1c4f2c:
    // 0x1c4f2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4F2Cu;
    {
        const bool branch_taken_0x1c4f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f2c) {
            ctx->pc = 0x1C4F54u;
            return;
        }
    }
    ctx->pc = 0x1C4F34u;
}
