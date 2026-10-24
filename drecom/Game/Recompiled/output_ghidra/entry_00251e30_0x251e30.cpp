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

// Function: entry_00251e30
// Address: 0x251e30 - 0x251e80
void entry_00251e30_0x251e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251e30_0x251e30");
#endif

    switch (ctx->pc) {
        case 0x251e6cu: goto label_251e6c;
        case 0x251e78u: goto label_251e78;
        default: break;
    }

    ctx->pc = 0x251e30u;

    // 0x251e30: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x251e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251e34: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x251e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251e38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251e3c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251e40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251e44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251e48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251e4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251e54: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251e58: 0x24041300  addiu       $a0, $zero, 0x1300
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    // 0x251e5c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x251e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x251e60: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x251e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251e64: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251E64u;
    SET_GPR_U32(ctx, 31, 0x251E6Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251E64u, 0x251E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E6Cu;
label_251e6c:
    // 0x251e6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251e70: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251E70u;
    SET_GPR_U32(ctx, 31, 0x251E78u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251E70u, 0x251E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E78u;
label_251e78:
    // 0x251e78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x251e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x251e7c: 0x0  nop
    ctx->pc = 0x251e7cu;
    // NOP
    ctx->pc = 0x251e80u;
}
