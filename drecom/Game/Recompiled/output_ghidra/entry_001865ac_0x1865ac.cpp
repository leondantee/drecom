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

// Function: entry_001865ac
// Address: 0x1865ac - 0x1865ec
void entry_001865ac_0x1865ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001865ac_0x1865ac");
#endif

    switch (ctx->pc) {
        case 0x1865b4u: goto label_1865b4;
        default: break;
    }

    ctx->pc = 0x1865acu;

    // 0x1865ac: 0xc061b34  jal         func_186CD0
    ctx->pc = 0x1865ACu;
    SET_GPR_U32(ctx, 31, 0x1865B4u);
    ctx->pc = 0x186CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186CD0u, 0x1865ACu, 0x1865B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865B4u;
label_1865b4:
    // 0x1865b4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1865b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1865b8: 0x124001bc  beqz        $s2, . + 4 + (0x1BC << 2)
    ctx->pc = 0x1865B8u;
    {
        const bool branch_taken_0x1865b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865b8) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x1865C0u;
    // 0x1865c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1865c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1865c4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1865c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1865c8: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x1865c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x1865cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1865CCu;
    {
        const bool branch_taken_0x1865cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1865cc) {
            ctx->pc = 0x1865ECu;
            return;
        }
    }
    ctx->pc = 0x1865D4u;
    // 0x1865d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1865d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1865d8: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x1865d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x1865dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1865dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1865e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1865e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1865e4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1865E4u;
    {
        const bool branch_taken_0x1865e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1865e4) {
            ctx->pc = 0x186634u;
            return;
        }
    }
    ctx->pc = 0x1865ECu;
}
