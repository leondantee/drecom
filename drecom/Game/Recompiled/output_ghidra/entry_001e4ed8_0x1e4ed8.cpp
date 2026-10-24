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

// Function: entry_001e4ed8
// Address: 0x1e4ed8 - 0x1e4f10
void entry_001e4ed8_0x1e4ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ed8_0x1e4ed8");
#endif

    ctx->pc = 0x1e4ed8u;

    // 0x1e4ed8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4edc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4ee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4ee4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4ee8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4ef0: 0x8c4701f0  lw          $a3, 0x1F0($v0)
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e4ef4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1e4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1e4ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e4ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4efc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4f00: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4f04: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e4f04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e4f08: 0xc079d58  jal         func_1E7560
    ctx->pc = 0x1E4F08u;
    SET_GPR_U32(ctx, 31, 0x1E4F10u);
    ctx->pc = 0x1E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7560u, 0x1E4F08u, 0x1E4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F10u;
}
