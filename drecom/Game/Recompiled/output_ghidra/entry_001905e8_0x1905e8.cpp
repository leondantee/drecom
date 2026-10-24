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

// Function: entry_001905e8
// Address: 0x1905e8 - 0x190610
void entry_001905e8_0x1905e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001905e8_0x1905e8");
#endif

    ctx->pc = 0x1905e8u;

    // 0x1905e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1905e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1905ec: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1905f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1905f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1905f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1905f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1905f8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1905fc: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x190600: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x190600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x190604: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x190604u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190608: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x190608u;
    SET_GPR_U32(ctx, 31, 0x190610u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x190608u, 0x190610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190610u;
}
