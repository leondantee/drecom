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

// Function: entry_0018e04c
// Address: 0x18e04c - 0x18e098
void entry_0018e04c_0x18e04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e04c_0x18e04c");
#endif

    switch (ctx->pc) {
        case 0x18e08cu: goto label_18e08c;
        default: break;
    }

    ctx->pc = 0x18e04cu;

    // 0x18e04c: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18e050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18e054: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x18E054u;
    {
        const bool branch_taken_0x18e054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e054) {
            ctx->pc = 0x18E190u;
            return;
        }
    }
    ctx->pc = 0x18E05Cu;
    // 0x18e05c: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x18e05cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x18e060: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18e064: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x18e068: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E068u;
    {
        const bool branch_taken_0x18e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e068) {
            ctx->pc = 0x18E098u;
            return;
        }
    }
    ctx->pc = 0x18E070u;
    // 0x18e070: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x18e074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e078: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E078u;
    {
        const bool branch_taken_0x18e078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e078) {
            ctx->pc = 0x18E098u;
            return;
        }
    }
    ctx->pc = 0x18E080u;
    // 0x18e080: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e080u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18e084: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E084u;
    SET_GPR_U32(ctx, 31, 0x18E08Cu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E084u, 0x18E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E08Cu;
label_18e08c:
    // 0x18e08c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18e08cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e090: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x18E090u;
    {
        const bool branch_taken_0x18e090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e090) {
            ctx->pc = 0x18E198u;
            return;
        }
    }
    ctx->pc = 0x18E098u;
}
