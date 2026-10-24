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

// Function: entry_001c55cc
// Address: 0x1c55cc - 0x1c5604
void entry_001c55cc_0x1c55cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c55cc_0x1c55cc");
#endif

    switch (ctx->pc) {
        case 0x1c55fcu: goto label_1c55fc;
        default: break;
    }

    ctx->pc = 0x1c55ccu;

    // 0x1c55cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c55ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c55d0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c55d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C55D4u;
    {
        const bool branch_taken_0x1c55d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55d4) {
            ctx->pc = 0x1C5604u;
            return;
        }
    }
    ctx->pc = 0x1C55DCu;
    // 0x1c55dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c55e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c55e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c55e4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c55e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c55e8: 0x24061411  addiu       $a2, $zero, 0x1411
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5137));
    // 0x1c55ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c55ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c55f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c55f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c55f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C55F4u;
    SET_GPR_U32(ctx, 31, 0x1C55FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C55F4u, 0x1C55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55FCu;
label_1c55fc:
    // 0x1c55fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C55FCu;
    {
        const bool branch_taken_0x1c55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55fc) {
            ctx->pc = 0x1C5624u;
            return;
        }
    }
    ctx->pc = 0x1C5604u;
}
