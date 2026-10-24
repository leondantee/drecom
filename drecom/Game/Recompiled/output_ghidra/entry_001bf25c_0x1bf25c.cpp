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

// Function: entry_001bf25c
// Address: 0x1bf25c - 0x1bf294
void entry_001bf25c_0x1bf25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf25c_0x1bf25c");
#endif

    switch (ctx->pc) {
        case 0x1bf28cu: goto label_1bf28c;
        default: break;
    }

    ctx->pc = 0x1bf25cu;

    // 0x1bf25c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf260: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf264: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF264u;
    {
        const bool branch_taken_0x1bf264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf264) {
            ctx->pc = 0x1BF294u;
            return;
        }
    }
    ctx->pc = 0x1BF26Cu;
    // 0x1bf26c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf270: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf274: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf278: 0x2406140d  addiu       $a2, $zero, 0x140D
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5133));
    // 0x1bf27c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf280: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf284: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF284u;
    SET_GPR_U32(ctx, 31, 0x1BF28Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF284u, 0x1BF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF28Cu;
label_1bf28c:
    // 0x1bf28c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF28Cu;
    {
        const bool branch_taken_0x1bf28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf28c) {
            ctx->pc = 0x1BF2B4u;
            return;
        }
    }
    ctx->pc = 0x1BF294u;
}
