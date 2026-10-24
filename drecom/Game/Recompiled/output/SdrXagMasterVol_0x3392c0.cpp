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

// Function: SdrXagMasterVol
// Address: 0x3392c0 - 0x339390
void SdrXagMasterVol_0x3392c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagMasterVol_0x3392c0");
#endif

    switch (ctx->pc) {
        case 0x339300u: goto label_339300;
        default: break;
    }

    ctx->pc = 0x3392c0u;

    // 0x3392c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3392c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3392c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3392c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3392c8: 0xa7a40018  sh          $a0, 0x18($sp)
    ctx->pc = 0x3392c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x3392cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3392ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3392d0: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3392d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3392d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3392d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3392d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3392dc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3392dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3392e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3392e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3392e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3392e8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3392E8u;
    {
        const bool branch_taken_0x3392e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3392e8) {
            ctx->pc = 0x33930Cu;
            goto label_33930c;
        }
    }
    ctx->pc = 0x3392F0u;
    // 0x3392f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3392f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3392f4: 0x24442450  addiu       $a0, $v0, 0x2450
    ctx->pc = 0x3392f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x3392f8: 0xc046760  jal         func_119D80
    ctx->pc = 0x3392F8u;
    SET_GPR_U32(ctx, 31, 0x339300u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339300u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339300u) { return; }
    ctx->pc = 0x339300u;
label_339300:
    // 0x339300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339304: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x339304u;
    {
        const bool branch_taken_0x339304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339304) {
            ctx->pc = 0x339380u;
            goto label_339380;
        }
    }
    ctx->pc = 0x33930Cu;
label_33930c:
    // 0x33930c: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x33930cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339310: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339314: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x339314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339318: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x33931c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x33931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339320: 0x3c027200  lui         $v0, 0x7200
    ctx->pc = 0x339320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29184 << 16));
    // 0x339324: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339328: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33932c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33932cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339330: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339334: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339338: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33933c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339340: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339344: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339348: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33934c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x33934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339350: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339354: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339358: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33935c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x33935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339360: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339360u;
    {
        const bool branch_taken_0x339360 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339360) {
            ctx->pc = 0x339374u;
            goto label_339374;
        }
    }
    ctx->pc = 0x339368u;
    // 0x339368: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339368u;
    {
        const bool branch_taken_0x339368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339368) {
            ctx->pc = 0x339374u;
            goto label_339374;
        }
    }
    ctx->pc = 0x339370u;
    // 0x339370: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339374:
    // 0x339374: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339378: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33937c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33937cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339380:
    // 0x339380: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339380u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339384: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x339384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339388: 0x3e00008  jr          $ra
    ctx->pc = 0x339388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339390u;
}
