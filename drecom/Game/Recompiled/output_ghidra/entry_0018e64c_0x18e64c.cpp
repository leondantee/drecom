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

// Function: entry_0018e64c
// Address: 0x18e64c - 0x18e6a8
void entry_0018e64c_0x18e64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e64c_0x18e64c");
#endif

    switch (ctx->pc) {
        case 0x18e69cu: goto label_18e69c;
        default: break;
    }

    ctx->pc = 0x18e64cu;

    // 0x18e64c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e650: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18e654: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x18E654u;
    {
        const bool branch_taken_0x18e654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e654) {
            ctx->pc = 0x18E778u;
            return;
        }
    }
    ctx->pc = 0x18E65Cu;
    // 0x18e65c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18e660: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18e664: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x18E664u;
    {
        const bool branch_taken_0x18e664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e664) {
            ctx->pc = 0x18E778u;
            return;
        }
    }
    ctx->pc = 0x18E66Cu;
    // 0x18e66c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18e66cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18e670: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18e674: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x18e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x18e678: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E678u;
    {
        const bool branch_taken_0x18e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e678) {
            ctx->pc = 0x18E6A8u;
            return;
        }
    }
    ctx->pc = 0x18E680u;
    // 0x18e680: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18e684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e688: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E688u;
    {
        const bool branch_taken_0x18e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e688) {
            ctx->pc = 0x18E6A8u;
            return;
        }
    }
    ctx->pc = 0x18E690u;
    // 0x18e690: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e694: 0xc063ab8  jal         func_18EAE0
    ctx->pc = 0x18E694u;
    SET_GPR_U32(ctx, 31, 0x18E69Cu);
    ctx->pc = 0x18EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EAE0u, 0x18E694u, 0x18E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E69Cu;
label_18e69c:
    // 0x18e69c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e69cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e6a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18E6A0u;
    {
        const bool branch_taken_0x18e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e6a0) {
            ctx->pc = 0x18E780u;
            return;
        }
    }
    ctx->pc = 0x18E6A8u;
}
