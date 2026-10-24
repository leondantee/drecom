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

// Function: entry_0031eb34
// Address: 0x31eb34 - 0x31eb88
void entry_0031eb34_0x31eb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031eb34_0x31eb34");
#endif

    switch (ctx->pc) {
        case 0x31eb50u: goto label_31eb50;
        default: break;
    }

    ctx->pc = 0x31eb34u;

    // 0x31eb34: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x31eb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x31eb38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x31eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31eb3c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x31eb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31eb40: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x31eb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31eb44: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x31eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31eb48: 0xc0c7ae4  jal         func_31EB90
    ctx->pc = 0x31EB48u;
    SET_GPR_U32(ctx, 31, 0x31EB50u);
    ctx->pc = 0x31EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB90u, 0x31EB48u, 0x31EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB50u;
label_31eb50:
    // 0x31eb50: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x31eb50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31eb54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31eb58: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x31eb58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x31eb5c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x31eb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31eb60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31eb64: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x31eb64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x31eb68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x31eb68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31eb6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31eb6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31eb70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31eb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31eb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31eb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31eb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31eb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31eb7c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31eb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31eb80: 0x3e00008  jr          $ra
    ctx->pc = 0x31EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB88u;
}
