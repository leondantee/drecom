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

// Function: entry_00265658
// Address: 0x265658 - 0x2656bc
void entry_00265658_0x265658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265658_0x265658");
#endif

    switch (ctx->pc) {
        case 0x265694u: goto label_265694;
        case 0x2656b4u: goto label_2656b4;
        default: break;
    }

    ctx->pc = 0x265658u;

    // 0x265658: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x265658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26565c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265660: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x265660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x265664: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x265664u;
    {
        const bool branch_taken_0x265664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265664) {
            ctx->pc = 0x265810u;
            return;
        }
    }
    ctx->pc = 0x26566Cu;
    // 0x26566c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x265670: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x265670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x265674: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x265674u;
    {
        const bool branch_taken_0x265674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265674) {
            ctx->pc = 0x2657D4u;
            return;
        }
    }
    ctx->pc = 0x26567Cu;
    // 0x26567c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265680: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x265680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265684: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x265684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x265688: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x265688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x26568c: 0xc095c94  jal         func_257250
    ctx->pc = 0x26568Cu;
    SET_GPR_U32(ctx, 31, 0x265694u);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x26568Cu, 0x265694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265694u;
label_265694:
    // 0x265694: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x265694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x265698: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x265698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26569c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x26569cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2656a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656A0u;
    {
        const bool branch_taken_0x2656a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656a0) {
            ctx->pc = 0x2656BCu;
            return;
        }
    }
    ctx->pc = 0x2656A8u;
    // 0x2656a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2656a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2656ac: 0xc0771a0  jal         func_1DC680
    ctx->pc = 0x2656ACu;
    SET_GPR_U32(ctx, 31, 0x2656B4u);
    ctx->pc = 0x1DC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC680u, 0x2656ACu, 0x2656B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656B4u;
label_2656b4:
    // 0x2656b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2656B4u;
    {
        const bool branch_taken_0x2656b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656b4) {
            ctx->pc = 0x265718u;
            return;
        }
    }
    ctx->pc = 0x2656BCu;
}
