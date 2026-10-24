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

// Function: entry_002e3c38
// Address: 0x2e3c38 - 0x2e3c80
void entry_002e3c38_0x2e3c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3c38_0x2e3c38");
#endif

    switch (ctx->pc) {
        case 0x2e3c74u: goto label_2e3c74;
        default: break;
    }

    ctx->pc = 0x2e3c38u;

    // 0x2e3c38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e3c3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e3c40: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x2e3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x2e3c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3c48: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2e3c48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3c4c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3c50: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2e3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2e3c54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e3c58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e3c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e3c5c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2e3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e3c60: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2e3c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3c64: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3c68: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2e3c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2e3c6c: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2E3C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C74u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2E3C6Cu, 0x2E3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C74u;
label_2e3c74:
    // 0x2e3c74: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2e3c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3c78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3c7c: 0x0  nop
    ctx->pc = 0x2e3c7cu;
    // NOP
    ctx->pc = 0x2e3c80u;
}
