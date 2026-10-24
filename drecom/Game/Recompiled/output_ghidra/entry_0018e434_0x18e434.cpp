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

// Function: entry_0018e434
// Address: 0x18e434 - 0x18e46c
void entry_0018e434_0x18e434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e434_0x18e434");
#endif

    switch (ctx->pc) {
        case 0x18e460u: goto label_18e460;
        default: break;
    }

    ctx->pc = 0x18e434u;

    // 0x18e434: 0x8e630b18  lw          $v1, 0xB18($s3)
    ctx->pc = 0x18e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
    // 0x18e438: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18e43c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x18E43Cu;
    {
        const bool branch_taken_0x18e43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e43c) {
            ctx->pc = 0x18E520u;
            return;
        }
    }
    ctx->pc = 0x18E444u;
    // 0x18e444: 0x8e620b18  lw          $v0, 0xB18($s3)
    ctx->pc = 0x18e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
    // 0x18e448: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18e44c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E44Cu;
    {
        const bool branch_taken_0x18e44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e44c) {
            ctx->pc = 0x18E46Cu;
            return;
        }
    }
    ctx->pc = 0x18E454u;
    // 0x18e454: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x18e458: 0xc063b9c  jal         func_18EE70
    ctx->pc = 0x18E458u;
    SET_GPR_U32(ctx, 31, 0x18E460u);
    ctx->pc = 0x18EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EE70u, 0x18E458u, 0x18E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E460u;
label_18e460:
    // 0x18e460: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x18e460u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e464: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18E464u;
    {
        const bool branch_taken_0x18e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e464) {
            ctx->pc = 0x18E528u;
            return;
        }
    }
    ctx->pc = 0x18E46Cu;
}
