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

// Function: SdrXagSetCore
// Address: 0x339c60 - 0x339d4c
void SdrXagSetCore_0x339c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagSetCore_0x339c60");
#endif

    switch (ctx->pc) {
        case 0x339ca4u: goto label_339ca4;
        default: break;
    }

    ctx->pc = 0x339c60u;

    // 0x339c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339c64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x339c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x339c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339c6c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x339c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x339c70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339c74: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339c74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339c78: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339c7c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339c80: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339c88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339c8c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339C8Cu;
    {
        const bool branch_taken_0x339c8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339c8c) {
            ctx->pc = 0x339CB0u;
            goto label_339cb0;
        }
    }
    ctx->pc = 0x339C94u;
    // 0x339c94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339c98: 0x244426a0  addiu       $a0, $v0, 0x26A0
    ctx->pc = 0x339c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9888));
    // 0x339c9c: 0xc046760  jal         func_119D80
    ctx->pc = 0x339C9Cu;
    SET_GPR_U32(ctx, 31, 0x339CA4u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339CA4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339CA4u) { return; }
    ctx->pc = 0x339CA4u;
label_339ca4:
    // 0x339ca4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339ca8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x339CA8u;
    {
        const bool branch_taken_0x339ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ca8) {
            ctx->pc = 0x339D38u;
            goto label_339d38;
        }
    }
    ctx->pc = 0x339CB0u;
label_339cb0:
    // 0x339cb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339cb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339CB4u;
    {
        const bool branch_taken_0x339cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cb4) {
            ctx->pc = 0x339CC8u;
            goto label_339cc8;
        }
    }
    ctx->pc = 0x339CBCu;
    // 0x339cbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x339cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339cc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339CC0u;
    {
        const bool branch_taken_0x339cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cc0) {
            ctx->pc = 0x339CCCu;
            goto label_339ccc;
        }
    }
    ctx->pc = 0x339CC8u;
label_339cc8:
    // 0x339cc8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x339cc8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339ccc:
    // 0x339ccc: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x339cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x339cd0: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339cd4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339cd8: 0x3c027300  lui         $v0, 0x7300
    ctx->pc = 0x339cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29440 << 16));
    // 0x339cdc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339ce0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339ce4: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339ce8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339cec: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339cf0: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339cf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339cfc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339d00: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339d00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339d04: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339d08: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339d0c: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339d10: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339d14: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339d18: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339D18u;
    {
        const bool branch_taken_0x339d18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339d18) {
            ctx->pc = 0x339D2Cu;
            goto label_339d2c;
        }
    }
    ctx->pc = 0x339D20u;
    // 0x339d20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339D20u;
    {
        const bool branch_taken_0x339d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d20) {
            ctx->pc = 0x339D2Cu;
            goto label_339d2c;
        }
    }
    ctx->pc = 0x339D28u;
    // 0x339d28: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339d2c:
    // 0x339d2c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339d30: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339d34: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339d34u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339d38:
    // 0x339d38: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x339d38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339d40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x339d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x339d44: 0x3e00008  jr          $ra
    ctx->pc = 0x339D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339D4Cu;
}
