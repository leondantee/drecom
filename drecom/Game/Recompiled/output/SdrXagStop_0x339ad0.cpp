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

// Function: SdrXagStop
// Address: 0x339ad0 - 0x339b84
void SdrXagStop_0x339ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagStop_0x339ad0");
#endif

    switch (ctx->pc) {
        case 0x339b0cu: goto label_339b0c;
        default: break;
    }

    ctx->pc = 0x339ad0u;

    // 0x339ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339ad4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339ad8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339adc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339ae0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339ae4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339ae8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339af0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339af4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339AF4u;
    {
        const bool branch_taken_0x339af4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339af4) {
            ctx->pc = 0x339B18u;
            goto label_339b18;
        }
    }
    ctx->pc = 0x339AFCu;
    // 0x339afc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339b00: 0x24442640  addiu       $a0, $v0, 0x2640
    ctx->pc = 0x339b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
    // 0x339b04: 0xc046760  jal         func_119D80
    ctx->pc = 0x339B04u;
    SET_GPR_U32(ctx, 31, 0x339B0Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339B0Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339B0Cu) { return; }
    ctx->pc = 0x339B0Cu;
label_339b0c:
    // 0x339b0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339b10: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x339B10u;
    {
        const bool branch_taken_0x339b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b10) {
            ctx->pc = 0x339B74u;
            goto label_339b74;
        }
    }
    ctx->pc = 0x339B18u;
label_339b18:
    // 0x339b18: 0x3c043300  lui         $a0, 0x3300
    ctx->pc = 0x339b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13056 << 16));
    // 0x339b1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b20: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339b20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339b24: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339b28: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339b2c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339b34: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339b38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b3c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339b40: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339b44: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b48: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339b4c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339b50: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339b54: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339B54u;
    {
        const bool branch_taken_0x339b54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339b54) {
            ctx->pc = 0x339B68u;
            goto label_339b68;
        }
    }
    ctx->pc = 0x339B5Cu;
    // 0x339b5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339B5Cu;
    {
        const bool branch_taken_0x339b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b5c) {
            ctx->pc = 0x339B68u;
            goto label_339b68;
        }
    }
    ctx->pc = 0x339B64u;
    // 0x339b64: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339b68:
    // 0x339b68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339b6c: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339b6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339b70: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339b70u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339b74:
    // 0x339b74: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339b74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339b78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x339b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x339b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x339B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339B84u;
}
