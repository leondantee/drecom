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

// Function: entry_00190fa4
// Address: 0x190fa4 - 0x190fd8
void entry_00190fa4_0x190fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190fa4_0x190fa4");
#endif

    switch (ctx->pc) {
        case 0x190fb8u: goto label_190fb8;
        default: break;
    }

    ctx->pc = 0x190fa4u;

    // 0x190fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190fa8: 0x8c24a600  lw          $a0, -0x5A00($at)
    ctx->pc = 0x190fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A600u));
    // 0x190fac: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x190facu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x190fb0: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x190FB0u;
    SET_GPR_U32(ctx, 31, 0x190FB8u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x190FB0u, 0x190FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190FB8u;
label_190fb8:
    // 0x190fb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190fbc: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x190fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x190fc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190fc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190fc8: 0xac22a600  sw          $v0, -0x5A00($at)
    ctx->pc = 0x190fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x190fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190fd0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x190FD0u;
    {
        const bool branch_taken_0x190fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190fd0) {
            ctx->pc = 0x1910D8u;
            return;
        }
    }
    ctx->pc = 0x190FD8u;
}
