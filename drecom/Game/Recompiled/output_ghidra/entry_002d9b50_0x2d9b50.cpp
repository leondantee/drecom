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

// Function: entry_002d9b50
// Address: 0x2d9b50 - 0x2d9b98
void entry_002d9b50_0x2d9b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9b50_0x2d9b50");
#endif

    switch (ctx->pc) {
        case 0x2d9b8cu: goto label_2d9b8c;
        default: break;
    }

    ctx->pc = 0x2d9b50u;

    // 0x2d9b50: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d9b54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9b58: 0x24428ae0  addiu       $v0, $v0, -0x7520
    ctx->pc = 0x2d9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937312));
    // 0x2d9b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9b60: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d9b60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9b64: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b68: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2d9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2d9b6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d9b70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d9b74: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d9b78: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2d9b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9b7c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9b80: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2d9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9b84: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D9B84u;
    SET_GPR_U32(ctx, 31, 0x2D9B8Cu);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D9B84u, 0x2D9B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B8Cu;
label_2d9b8c:
    // 0x2d9b8c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2d9b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d9b94: 0x0  nop
    ctx->pc = 0x2d9b94u;
    // NOP
    ctx->pc = 0x2d9b98u;
}
