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

// Function: entry_001762ac
// Address: 0x1762ac - 0x1762d0
void entry_001762ac_0x1762ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001762ac_0x1762ac");
#endif

    switch (ctx->pc) {
        case 0x1762bcu: goto label_1762bc;
        default: break;
    }

    ctx->pc = 0x1762acu;

    // 0x1762ac: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x1762acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1762b0: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1762b4: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x1762B4u;
    SET_GPR_U32(ctx, 31, 0x1762BCu);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x1762B4u, 0x1762BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762BCu;
label_1762bc:
    // 0x1762bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1762bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1762c0: 0x2463bd10  addiu       $v1, $v1, -0x42F0
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1762c4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1762c4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD10u));
    // 0x1762c8: 0x26a30140  addiu       $v1, $s5, 0x140
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x1762cc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1762ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x1762d0u;
}
