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

// Function: entry_0026a9d0
// Address: 0x26a9d0 - 0x26aa00
void entry_0026a9d0_0x26a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a9d0_0x26a9d0");
#endif

    switch (ctx->pc) {
        case 0x26a9d8u: goto label_26a9d8;
        default: break;
    }

    ctx->pc = 0x26a9d0u;

    // 0x26a9d0: 0xc057a4c  jal         func_15E930
    ctx->pc = 0x26A9D0u;
    SET_GPR_U32(ctx, 31, 0x26A9D8u);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x26A9D0u, 0x26A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9D8u;
label_26a9d8:
    // 0x26a9d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26a9d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26a9dc: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x26a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x26a9e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a9e4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26A9E4u;
    {
        const bool branch_taken_0x26a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a9e4) {
            ctx->pc = 0x26AA5Cu;
            return;
        }
    }
    ctx->pc = 0x26A9ECu;
    // 0x26a9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a9f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A9F0u;
    {
        const bool branch_taken_0x26a9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a9f0) {
            ctx->pc = 0x26AA00u;
            return;
        }
    }
    ctx->pc = 0x26A9F8u;
    // 0x26a9f8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26A9F8u;
    {
        const bool branch_taken_0x26a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a9f8) {
            ctx->pc = 0x26AAB8u;
            return;
        }
    }
    ctx->pc = 0x26AA00u;
}
