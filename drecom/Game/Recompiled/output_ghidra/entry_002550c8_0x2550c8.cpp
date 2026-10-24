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

// Function: entry_002550c8
// Address: 0x2550c8 - 0x255120
void entry_002550c8_0x2550c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002550c8_0x2550c8");
#endif

    switch (ctx->pc) {
        case 0x2550dcu: goto label_2550dc;
        default: break;
    }

    ctx->pc = 0x2550c8u;

    // 0x2550c8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2550c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2550cc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2550ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2550d0: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x2550d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2550d4: 0xc095a8c  jal         func_256A30
    ctx->pc = 0x2550D4u;
    SET_GPR_U32(ctx, 31, 0x2550DCu);
    ctx->pc = 0x256A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A30u, 0x2550D4u, 0x2550DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550DCu;
label_2550dc:
    // 0x2550dc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2550dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2550e0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2550e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2550e4: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x2550e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x2550e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2550e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2550ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2550ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2550f0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2550f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2550f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2550f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2550f8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2550f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2550fc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2550fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x255100: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x255100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255104: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x255104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255108: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x255108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25510c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x25510cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x255110: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x255114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255118: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x255118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x25511c: 0x0  nop
    ctx->pc = 0x25511cu;
    // NOP
    ctx->pc = 0x255120u;
}
