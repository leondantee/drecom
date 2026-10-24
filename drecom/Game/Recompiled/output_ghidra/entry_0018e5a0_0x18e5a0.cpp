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

// Function: entry_0018e5a0
// Address: 0x18e5a0 - 0x18e5e8
void entry_0018e5a0_0x18e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e5a0_0x18e5a0");
#endif

    switch (ctx->pc) {
        case 0x18e5dcu: goto label_18e5dc;
        default: break;
    }

    ctx->pc = 0x18e5a0u;

    // 0x18e5a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18e5a8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x18E5A8u;
    {
        const bool branch_taken_0x18e5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5a8) {
            ctx->pc = 0x18E630u;
            return;
        }
    }
    ctx->pc = 0x18E5B0u;
    // 0x18e5b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5b4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18e5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18e5b8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18E5B8u;
    {
        const bool branch_taken_0x18e5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5b8) {
            ctx->pc = 0x18E630u;
            return;
        }
    }
    ctx->pc = 0x18E5C0u;
    // 0x18e5c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e5c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18e5c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E5C8u;
    {
        const bool branch_taken_0x18e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5c8) {
            ctx->pc = 0x18E5E8u;
            return;
        }
    }
    ctx->pc = 0x18E5D0u;
    // 0x18e5d0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e5d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18e5d4: 0xc063bec  jal         func_18EFB0
    ctx->pc = 0x18E5D4u;
    SET_GPR_U32(ctx, 31, 0x18E5DCu);
    ctx->pc = 0x18EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EFB0u, 0x18E5D4u, 0x18E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5DCu;
label_18e5dc:
    // 0x18e5dc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e5dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e5e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18E5E0u;
    {
        const bool branch_taken_0x18e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e5e0) {
            ctx->pc = 0x18E638u;
            return;
        }
    }
    ctx->pc = 0x18E5E8u;
}
