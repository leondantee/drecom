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

// Function: entry_00257834
// Address: 0x257834 - 0x2578b4
void entry_00257834_0x257834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257834_0x257834");
#endif

    ctx->pc = 0x257834u;

    // 0x257834: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257838: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x25783c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257844: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25784c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257850: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x257850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x257854: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x257854u;
    {
        const bool branch_taken_0x257854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257854) {
            ctx->pc = 0x2578B4u;
            return;
        }
    }
    ctx->pc = 0x25785Cu;
    // 0x25785c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257860: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257864: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25786c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25786cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257870: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257874: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x257874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257878: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25787c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x25787cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257880: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257888: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25788c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x25788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257890: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x257890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257898: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x257898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x25789c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x25789cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2578a0: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x2578a4: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x2578a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x2578a8: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x2578a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2578ac: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x2578ACu;
    SET_GPR_U32(ctx, 31, 0x2578B4u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x2578ACu, 0x2578B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2578B4u;
}
