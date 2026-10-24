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

// Function: entry_00338b6c
// Address: 0x338b6c - 0x338bc4
void entry_00338b6c_0x338b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338b6c_0x338b6c");
#endif

    switch (ctx->pc) {
        case 0x338b9cu: goto label_338b9c;
        case 0x338bb8u: goto label_338bb8;
        default: break;
    }

    ctx->pc = 0x338b6cu;

    // 0x338b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b70: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x338b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x338b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338b78: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x338b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x338b7c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x338b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x338b80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x338b84: 0x8c229a10  lw          $v0, -0x65F0($at)
    ctx->pc = 0x338b84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A9A10u));
    // 0x338b88: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x338B88u;
    {
        const bool branch_taken_0x338b88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338b88) {
            ctx->pc = 0x338BCCu;
            return;
        }
    }
    ctx->pc = 0x338B90u;
    // 0x338b90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x338b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x338b94: 0xc084a88  jal         func_212A20
    ctx->pc = 0x338B94u;
    SET_GPR_U32(ctx, 31, 0x338B9Cu);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x338B9Cu;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338B9Cu) { return; }
    ctx->pc = 0x338B9Cu;
label_338b9c:
    // 0x338b9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x338b9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x338ba0: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x338BA0u;
    {
        const bool branch_taken_0x338ba0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x338ba0) {
            ctx->pc = 0x338BC4u;
            return;
        }
    }
    ctx->pc = 0x338BA8u;
    // 0x338ba8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338bac: 0x244422b0  addiu       $a0, $v0, 0x22B0
    ctx->pc = 0x338bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
    // 0x338bb0: 0xc046760  jal         func_119D80
    ctx->pc = 0x338BB0u;
    SET_GPR_U32(ctx, 31, 0x338BB8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338BB8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338BB8u) { return; }
    ctx->pc = 0x338BB8u;
label_338bb8:
    // 0x338bb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338bbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x338BBCu;
    {
        const bool branch_taken_0x338bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338bbc) {
            ctx->pc = 0x338C40u;
            return;
        }
    }
    ctx->pc = 0x338BC4u;
}
