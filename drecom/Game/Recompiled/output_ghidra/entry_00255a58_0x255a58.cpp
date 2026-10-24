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

// Function: entry_00255a58
// Address: 0x255a58 - 0x255ab0
void entry_00255a58_0x255a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255a58_0x255a58");
#endif

    switch (ctx->pc) {
        case 0x255a6cu: goto label_255a6c;
        default: break;
    }

    ctx->pc = 0x255a58u;

    // 0x255a58: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x255a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255a5c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x255a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a60: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x255a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x255a64: 0xc095b3c  jal         func_256CF0
    ctx->pc = 0x255A64u;
    SET_GPR_U32(ctx, 31, 0x255A6Cu);
    ctx->pc = 0x256CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256CF0u, 0x255A64u, 0x255A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A6Cu;
label_255a6c:
    // 0x255a6c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255a70: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x255a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x255a74: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x255a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x255a78: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x255a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x255a7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x255a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x255a80: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x255a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x255a84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x255a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255a88: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x255a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x255a8c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x255a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x255a90: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x255a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255a94: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x255a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x255a98: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x255a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x255a9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x255a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x255aa0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x255aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255aa8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x255aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x255aac: 0x0  nop
    ctx->pc = 0x255aacu;
    // NOP
    ctx->pc = 0x255ab0u;
}
