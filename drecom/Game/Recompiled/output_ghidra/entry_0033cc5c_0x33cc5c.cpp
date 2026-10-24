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

// Function: entry_0033cc5c
// Address: 0x33cc5c - 0x33cc90
void entry_0033cc5c_0x33cc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cc5c_0x33cc5c");
#endif

    ctx->pc = 0x33cc5cu;

    // 0x33cc5c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x33cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33cc60: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x33cc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x33cc64: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x33cc64u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x33cc68: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x33cc68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33cc6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33cc6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33cc70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33cc70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33cc74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33cc74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33cc78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33cc78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33cc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cc84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x33cc84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x33cc88: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC90u;
}
