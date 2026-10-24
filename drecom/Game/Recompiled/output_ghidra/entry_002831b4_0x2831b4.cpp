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

// Function: entry_002831b4
// Address: 0x2831b4 - 0x2831e8
void entry_002831b4_0x2831b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002831b4_0x2831b4");
#endif

    switch (ctx->pc) {
        case 0x2831d8u: goto label_2831d8;
        case 0x2831e4u: goto label_2831e4;
        default: break;
    }

    ctx->pc = 0x2831b4u;

    // 0x2831b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2831b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2831b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2831bc: 0x24424e30  addiu       $v0, $v0, 0x4E30
    ctx->pc = 0x2831bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20016));
    // 0x2831c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2831c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2831c4: 0x24047403  addiu       $a0, $zero, 0x7403
    ctx->pc = 0x2831c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29699));
    // 0x2831c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2831c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2831cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2831ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2831d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2831D0u;
    SET_GPR_U32(ctx, 31, 0x2831D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2831D0u, 0x2831D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831D8u;
label_2831d8:
    // 0x2831d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2831d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2831dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2831DCu;
    SET_GPR_U32(ctx, 31, 0x2831E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2831DCu, 0x2831E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831E4u;
label_2831e4:
    // 0x2831e4: 0x0  nop
    ctx->pc = 0x2831e4u;
    // NOP
    ctx->pc = 0x2831e8u;
}
