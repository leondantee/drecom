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

// Function: entry_00191a7c
// Address: 0x191a7c - 0x191aa0
void entry_00191a7c_0x191a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a7c_0x191a7c");
#endif

    ctx->pc = 0x191a7cu;

    // 0x191a7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191a80: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191a88: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x191a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191a8c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x191a90: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x191a94: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x191a94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x191a98: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x191A98u;
    SET_GPR_U32(ctx, 31, 0x191AA0u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x191A98u, 0x191AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AA0u;
}
