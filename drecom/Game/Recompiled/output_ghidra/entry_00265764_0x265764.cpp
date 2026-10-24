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

// Function: entry_00265764
// Address: 0x265764 - 0x2657b0
void entry_00265764_0x265764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265764_0x265764");
#endif

    switch (ctx->pc) {
        case 0x265788u: goto label_265788;
        case 0x2657a8u: goto label_2657a8;
        default: break;
    }

    ctx->pc = 0x265764u;

    // 0x265764: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x265764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x265768: 0xa20211ec  sb          $v0, 0x11EC($s0)
    ctx->pc = 0x265768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x26576c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x265770: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265774: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x265774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265778: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26577c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x265780: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x265780u;
    SET_GPR_U32(ctx, 31, 0x265788u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x265780u, 0x265788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265788u;
label_265788:
    // 0x265788: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x265788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26578c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x26578cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x265790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x265794: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x265794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x265798: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26579c: 0x920511ec  lbu         $a1, 0x11EC($s0)
    ctx->pc = 0x26579cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4588)));
    // 0x2657a0: 0xc096234  jal         func_2588D0
    ctx->pc = 0x2657A0u;
    SET_GPR_U32(ctx, 31, 0x2657A8u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x2657A0u, 0x2657A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2657A8u;
label_2657a8:
    // 0x2657a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2657A8u;
    {
        const bool branch_taken_0x2657a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2657a8) {
            ctx->pc = 0x2657C0u;
            return;
        }
    }
    ctx->pc = 0x2657B0u;
}
