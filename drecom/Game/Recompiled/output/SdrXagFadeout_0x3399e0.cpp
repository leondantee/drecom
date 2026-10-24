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

// Function: SdrXagFadeout
// Address: 0x3399e0 - 0x339ad0
void SdrXagFadeout_0x3399e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagFadeout_0x3399e0");
#endif

    switch (ctx->pc) {
        case 0x339a04u: goto label_339a04;
        case 0x339a40u: goto label_339a40;
        default: break;
    }

    ctx->pc = 0x3399e0u;

    // 0x3399e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3399e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3399e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3399e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3399e8: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x3399e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x3399ec: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x3399ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3399f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3399f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3399f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3399F4u;
    {
        const bool branch_taken_0x3399f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3399f4) {
            ctx->pc = 0x339A0Cu;
            goto label_339a0c;
        }
    }
    ctx->pc = 0x3399FCu;
    // 0x3399fc: 0xc0ce6b4  jal         func_339AD0
    ctx->pc = 0x3399FCu;
    SET_GPR_U32(ctx, 31, 0x339A04u);
    ctx->pc = 0x339AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AD0u, 0x3399FCu, 0x339A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339A04u;
label_339a04:
    // 0x339a04: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x339A04u;
    {
        const bool branch_taken_0x339a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a04) {
            ctx->pc = 0x339AC0u;
            goto label_339ac0;
        }
    }
    ctx->pc = 0x339A0Cu;
label_339a0c:
    // 0x339a0c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339a10: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339a10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339a14: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339a18: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339a1c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339a28: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339A28u;
    {
        const bool branch_taken_0x339a28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339a28) {
            ctx->pc = 0x339A4Cu;
            goto label_339a4c;
        }
    }
    ctx->pc = 0x339A30u;
    // 0x339a30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339a34: 0x24442610  addiu       $a0, $v0, 0x2610
    ctx->pc = 0x339a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x339a38: 0xc046760  jal         func_119D80
    ctx->pc = 0x339A38u;
    SET_GPR_U32(ctx, 31, 0x339A40u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339A40u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339A40u) { return; }
    ctx->pc = 0x339A40u;
label_339a40:
    // 0x339a40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339a44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x339A44u;
    {
        const bool branch_taken_0x339a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a44) {
            ctx->pc = 0x339AC0u;
            goto label_339ac0;
        }
    }
    ctx->pc = 0x339A4Cu;
label_339a4c:
    // 0x339a4c: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x339a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339a50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339a54: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x339a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339a58: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339a5c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339a60: 0x3c023700  lui         $v0, 0x3700
    ctx->pc = 0x339a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14080 << 16));
    // 0x339a64: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339a68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339a6c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339a70: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339a74: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339a78: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339a7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339a80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339a84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339a88: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339a88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339a8c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339a90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339a94: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339a94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339a98: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339a9c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339aa0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339AA0u;
    {
        const bool branch_taken_0x339aa0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339aa0) {
            ctx->pc = 0x339AB4u;
            goto label_339ab4;
        }
    }
    ctx->pc = 0x339AA8u;
    // 0x339aa8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339AA8u;
    {
        const bool branch_taken_0x339aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339aa8) {
            ctx->pc = 0x339AB4u;
            goto label_339ab4;
        }
    }
    ctx->pc = 0x339AB0u;
    // 0x339ab0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339ab4:
    // 0x339ab4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339ab8: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339abc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339abcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339ac0:
    // 0x339ac0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339ac0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ac4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x339ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x339AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339AD0u;
}
