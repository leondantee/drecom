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

// Function: entry_002799e8
// Address: 0x2799e8 - 0x279a1c
void entry_002799e8_0x2799e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002799e8_0x2799e8");
#endif

    ctx->pc = 0x2799e8u;

    // 0x2799e8: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2799e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2799ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2799ECu;
    {
        const bool branch_taken_0x2799ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2799ec) {
            ctx->pc = 0x2799A8u;
            return;
        }
    }
    ctx->pc = 0x2799F4u;
    // 0x2799f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2799f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2799f8: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x2799f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2799fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2799fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x279a00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x279a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x279a04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279A04u;
    {
        const bool branch_taken_0x279a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a04) {
            ctx->pc = 0x279A1Cu;
            return;
        }
    }
    ctx->pc = 0x279A0Cu;
    // 0x279a0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279a10: 0x2444ff18  addiu       $a0, $v0, -0xE8
    ctx->pc = 0x279a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967064));
    // 0x279a14: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x279A14u;
    SET_GPR_U32(ctx, 31, 0x279A1Cu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x279A14u, 0x279A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A1Cu;
}
