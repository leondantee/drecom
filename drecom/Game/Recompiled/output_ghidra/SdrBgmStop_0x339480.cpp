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

// Function: SdrBgmStop
// Address: 0x339480 - 0x339550
void SdrBgmStop_0x339480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrBgmStop_0x339480");
#endif

    switch (ctx->pc) {
        case 0x3394c0u: goto label_3394c0;
        default: break;
    }

    ctx->pc = 0x339480u;

    // 0x339480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339484: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339488: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x339488u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x33948c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339490: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339494: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339498: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33949c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3394a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3394a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3394a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3394a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3394a8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3394A8u;
    {
        const bool branch_taken_0x3394a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3394a8) {
            ctx->pc = 0x3394CCu;
            goto label_3394cc;
        }
    }
    ctx->pc = 0x3394B0u;
    // 0x3394b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3394b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3394b4: 0x244424c0  addiu       $a0, $v0, 0x24C0
    ctx->pc = 0x3394b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9408));
    // 0x3394b8: 0xc046760  jal         func_119D80
    ctx->pc = 0x3394B8u;
    SET_GPR_U32(ctx, 31, 0x3394C0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x3394C0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3394C0u) { return; }
    ctx->pc = 0x3394C0u;
label_3394c0:
    // 0x3394c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3394c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3394c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3394C4u;
    {
        const bool branch_taken_0x3394c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3394c4) {
            ctx->pc = 0x339540u;
            goto label_339540;
        }
    }
    ctx->pc = 0x3394CCu;
label_3394cc:
    // 0x3394cc: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x3394ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3394d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3394d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3394d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3394d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3394d8: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x3394d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3394dc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x3394dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3394e0: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3394e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3394e4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x3394e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3394e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3394e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3394ec: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3394ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3394f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3394f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3394f4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3394f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3394f8: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3394fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339500: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339504: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339508: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33950c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339510: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339514: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339518: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33951c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x33951cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339520: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339520u;
    {
        const bool branch_taken_0x339520 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339520) {
            ctx->pc = 0x339534u;
            goto label_339534;
        }
    }
    ctx->pc = 0x339528u;
    // 0x339528: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339528u;
    {
        const bool branch_taken_0x339528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339528) {
            ctx->pc = 0x339534u;
            goto label_339534;
        }
    }
    ctx->pc = 0x339530u;
    // 0x339530: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339534:
    // 0x339534: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339538: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33953c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33953cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339540:
    // 0x339540: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339540u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339544: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x339544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339548: 0x3e00008  jr          $ra
    ctx->pc = 0x339548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339550u;
}
