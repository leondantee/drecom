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

// Function: entry_001c09ac
// Address: 0x1c09ac - 0x1c09e4
void entry_001c09ac_0x1c09ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c09ac_0x1c09ac");
#endif

    switch (ctx->pc) {
        case 0x1c09dcu: goto label_1c09dc;
        default: break;
    }

    ctx->pc = 0x1c09acu;

    // 0x1c09ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c09b0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c09b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C09B4u;
    {
        const bool branch_taken_0x1c09b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09b4) {
            ctx->pc = 0x1C09E4u;
            return;
        }
    }
    ctx->pc = 0x1C09BCu;
    // 0x1c09bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c09c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c09c4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c09c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c09c8: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c09c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c09cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c09ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c09d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c09d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C09D4u;
    SET_GPR_U32(ctx, 31, 0x1C09DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C09D4u, 0x1C09DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09DCu;
label_1c09dc:
    // 0x1c09dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C0A04u;
            return;
        }
    }
    ctx->pc = 0x1C09E4u;
}
