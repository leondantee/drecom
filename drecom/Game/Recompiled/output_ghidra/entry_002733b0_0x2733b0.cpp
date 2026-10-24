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

// Function: entry_002733b0
// Address: 0x2733b0 - 0x2733e0
void entry_002733b0_0x2733b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002733b0_0x2733b0");
#endif

    switch (ctx->pc) {
        case 0x2733dcu: goto label_2733dc;
        default: break;
    }

    ctx->pc = 0x2733b0u;

    // 0x2733b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2733b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2733b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2733b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2733b8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2733b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2733bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2733BCu;
    {
        const bool branch_taken_0x2733bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2733bc) {
            ctx->pc = 0x2733E0u;
            return;
        }
    }
    ctx->pc = 0x2733C4u;
    // 0x2733c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2733c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2733c8: 0x8c30bb4c  lw          $s0, -0x44B4($at)
    ctx->pc = 0x2733c8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x2733cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2733ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2733d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2733d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2733d4: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x2733D4u;
    SET_GPR_U32(ctx, 31, 0x2733DCu);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x2733D4u, 0x2733DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733DCu;
label_2733dc:
    // 0x2733dc: 0x0  nop
    ctx->pc = 0x2733dcu;
    // NOP
    ctx->pc = 0x2733e0u;
}
