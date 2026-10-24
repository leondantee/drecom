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

// Function: entry_0018e4b0
// Address: 0x18e4b0 - 0x18e4dc
void entry_0018e4b0_0x18e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e4b0_0x18e4b0");
#endif

    switch (ctx->pc) {
        case 0x18e4d4u: goto label_18e4d4;
        default: break;
    }

    ctx->pc = 0x18e4b0u;

    // 0x18e4b0: 0x8e620ac0  lw          $v0, 0xAC0($s3)
    ctx->pc = 0x18e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2752)));
    // 0x18e4b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18e4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e4b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e4bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18e4c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E4C0u;
    {
        const bool branch_taken_0x18e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4c0) {
            ctx->pc = 0x18E4DCu;
            return;
        }
    }
    ctx->pc = 0x18E4C8u;
    // 0x18e4c8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e4c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x18e4cc: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x18E4CCu;
    SET_GPR_U32(ctx, 31, 0x18E4D4u);
    ctx->pc = 0x326B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B90u, 0x18E4CCu, 0x18E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4D4u;
label_18e4d4:
    // 0x18e4d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18E4D4u;
    {
        const bool branch_taken_0x18e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4d4) {
            ctx->pc = 0x18E4E8u;
            return;
        }
    }
    ctx->pc = 0x18E4DCu;
}
