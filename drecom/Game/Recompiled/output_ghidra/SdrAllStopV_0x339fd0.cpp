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

// Function: SdrAllStopV
// Address: 0x339fd0 - 0x33a084
void SdrAllStopV_0x339fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrAllStopV_0x339fd0");
#endif

    switch (ctx->pc) {
        case 0x33a00cu: goto label_33a00c;
        default: break;
    }

    ctx->pc = 0x339fd0u;

    // 0x339fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339fd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339fd8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339fdc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339fe0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339fe4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339fe8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339ff0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339ff4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339FF4u;
    {
        const bool branch_taken_0x339ff4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339ff4) {
            ctx->pc = 0x33A018u;
            goto label_33a018;
        }
    }
    ctx->pc = 0x339FFCu;
    // 0x339ffc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a000: 0x24442760  addiu       $a0, $v0, 0x2760
    ctx->pc = 0x33a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10080));
    // 0x33a004: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A004u;
    SET_GPR_U32(ctx, 31, 0x33A00Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A00Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A00Cu) { return; }
    ctx->pc = 0x33A00Cu;
label_33a00c:
    // 0x33a00c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a010: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33A010u;
    {
        const bool branch_taken_0x33a010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a010) {
            ctx->pc = 0x33A074u;
            goto label_33a074;
        }
    }
    ctx->pc = 0x33A018u;
label_33a018:
    // 0x33a018: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x33a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x33a01c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a020: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33a020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33a024: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33a024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33a028: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a02c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33a030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a034: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33a034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33a038: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a03c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33a040: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a044: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a048: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x33a048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33a04c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33a050: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x33a050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x33a054: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A054u;
    {
        const bool branch_taken_0x33a054 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x33a054) {
            ctx->pc = 0x33A068u;
            goto label_33a068;
        }
    }
    ctx->pc = 0x33A05Cu;
    // 0x33a05c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33A05Cu;
    {
        const bool branch_taken_0x33a05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a05c) {
            ctx->pc = 0x33A068u;
            goto label_33a068;
        }
    }
    ctx->pc = 0x33A064u;
    // 0x33a064: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_33a068:
    // 0x33a068: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a06c: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x33a06cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33a070: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a070u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33a074:
    // 0x33a074: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33a074u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a078: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A084u;
}
