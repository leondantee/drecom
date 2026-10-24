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

// Function: SdrXagSetBuff
// Address: 0x339d50 - 0x339e64
void SdrXagSetBuff_0x339d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagSetBuff_0x339d50");
#endif

    switch (ctx->pc) {
        case 0x339d98u: goto label_339d98;
        default: break;
    }

    ctx->pc = 0x339d50u;

    // 0x339d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339d54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x339d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x339d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339d5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x339d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x339d60: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x339d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x339d64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339d68: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339d6c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339d70: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339d74: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339d80: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339D80u;
    {
        const bool branch_taken_0x339d80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339d80) {
            ctx->pc = 0x339DA4u;
            goto label_339da4;
        }
    }
    ctx->pc = 0x339D88u;
    // 0x339d88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339d8c: 0x244426d0  addiu       $a0, $v0, 0x26D0
    ctx->pc = 0x339d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
    // 0x339d90: 0xc046760  jal         func_119D80
    ctx->pc = 0x339D90u;
    SET_GPR_U32(ctx, 31, 0x339D98u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339D98u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339D98u) { return; }
    ctx->pc = 0x339D98u;
label_339d98:
    // 0x339d98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339d9c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x339D9Cu;
    {
        const bool branch_taken_0x339d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d9c) {
            ctx->pc = 0x339E50u;
            goto label_339e50;
        }
    }
    ctx->pc = 0x339DA4u;
label_339da4:
    // 0x339da4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339da8: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x339da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x339dac: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x339dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x339db0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x339db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x339db4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339db8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339dbc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x339dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x339dc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x339dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339dc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339DC4u;
    {
        const bool branch_taken_0x339dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339dc4) {
            ctx->pc = 0x339DD8u;
            goto label_339dd8;
        }
    }
    ctx->pc = 0x339DCCu;
    // 0x339dcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x339dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339DD0u;
    {
        const bool branch_taken_0x339dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339dd0) {
            ctx->pc = 0x339DDCu;
            goto label_339ddc;
        }
    }
    ctx->pc = 0x339DD8u;
label_339dd8:
    // 0x339dd8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x339dd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339ddc:
    // 0x339ddc: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x339de0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339de4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x339de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x339de8: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339dec: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339df0: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x339df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x339df4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339df8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339dfc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339e00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339e04: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339e08: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339e10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339e14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339e18: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339e1c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339e20: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339e24: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339e28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339e2c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339e30: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339E30u;
    {
        const bool branch_taken_0x339e30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339e30) {
            ctx->pc = 0x339E44u;
            goto label_339e44;
        }
    }
    ctx->pc = 0x339E38u;
    // 0x339e38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339E38u;
    {
        const bool branch_taken_0x339e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e38) {
            ctx->pc = 0x339E44u;
            goto label_339e44;
        }
    }
    ctx->pc = 0x339E40u;
    // 0x339e40: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339e44:
    // 0x339e44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339e48: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339e4c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339e4cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339e50:
    // 0x339e50: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x339e50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x339e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x339e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x339E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339E64u;
}
