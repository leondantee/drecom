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

// Function: entry_001befdc
// Address: 0x1befdc - 0x1bf014
void entry_001befdc_0x1befdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001befdc_0x1befdc");
#endif

    switch (ctx->pc) {
        case 0x1bf00cu: goto label_1bf00c;
        default: break;
    }

    ctx->pc = 0x1befdcu;

    // 0x1befdc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1befdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1befe0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1befe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1befe4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BEFE4u;
    {
        const bool branch_taken_0x1befe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1befe4) {
            ctx->pc = 0x1BF014u;
            return;
        }
    }
    ctx->pc = 0x1BEFECu;
    // 0x1befec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1beff0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1beff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1beff4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1beff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1beff8: 0x2406140d  addiu       $a2, $zero, 0x140D
    ctx->pc = 0x1beff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5133));
    // 0x1beffc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1beffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf000: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf004: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF004u;
    SET_GPR_U32(ctx, 31, 0x1BF00Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF004u, 0x1BF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF00Cu;
label_1bf00c:
    // 0x1bf00c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF00Cu;
    {
        const bool branch_taken_0x1bf00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf00c) {
            ctx->pc = 0x1BF034u;
            return;
        }
    }
    ctx->pc = 0x1BF014u;
}
