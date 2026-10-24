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

// Function: entry_0016d4b8
// Address: 0x16d4b8 - 0x16d500
void entry_0016d4b8_0x16d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d4b8_0x16d4b8");
#endif

    switch (ctx->pc) {
        case 0x16d4c8u: goto label_16d4c8;
        default: break;
    }

    ctx->pc = 0x16d4b8u;

    // 0x16d4b8: 0x2610ffb0  addiu       $s0, $s0, -0x50
    ctx->pc = 0x16d4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x16d4bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16d4bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16d4c0: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x16D4C0u;
    SET_GPR_U32(ctx, 31, 0x16D4C8u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x16D4C0u, 0x16D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4C8u;
label_16d4c8:
    // 0x16d4c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16d4cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x16d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d4d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D4D0u;
    {
        const bool branch_taken_0x16d4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4d0) {
            ctx->pc = 0x16D500u;
            return;
        }
    }
    ctx->pc = 0x16D4D8u;
    // 0x16d4d8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d4dc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16d4e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16d4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16d4e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D4E8u;
    {
        const bool branch_taken_0x16d4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d4e8) {
            ctx->pc = 0x16D500u;
            return;
        }
    }
    ctx->pc = 0x16D4F0u;
    // 0x16d4f0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16d4f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16d4f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d4fc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x16d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x16d500u;
}
