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

// Function: SdrXagStandby2
// Address: 0x339640 - 0x33974c
void SdrXagStandby2_0x339640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagStandby2_0x339640");
#endif

    switch (ctx->pc) {
        case 0x339670u: goto label_339670;
        case 0x3396b0u: goto label_3396b0;
        default: break;
    }

    ctx->pc = 0x339640u;

    // 0x339640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339644: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x339648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x33964c: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x33964cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x339650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x339650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339654: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x339654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x339658: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x339658u;
    {
        const bool branch_taken_0x339658 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x339658) {
            ctx->pc = 0x33967Cu;
            goto label_33967c;
        }
    }
    ctx->pc = 0x339660u;
    // 0x339660: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339664: 0x24442520  addiu       $a0, $v0, 0x2520
    ctx->pc = 0x339664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
    // 0x339668: 0xc046760  jal         func_119D80
    ctx->pc = 0x339668u;
    SET_GPR_U32(ctx, 31, 0x339670u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339670u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339670u) { return; }
    ctx->pc = 0x339670u;
label_339670:
    // 0x339670: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x339670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x339674: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x339674u;
    {
        const bool branch_taken_0x339674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339674) {
            ctx->pc = 0x33973Cu;
            goto label_33973c;
        }
    }
    ctx->pc = 0x33967Cu;
label_33967c:
    // 0x33967c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339680: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339684: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339688: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33968c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339698: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339698u;
    {
        const bool branch_taken_0x339698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339698) {
            ctx->pc = 0x3396BCu;
            goto label_3396bc;
        }
    }
    ctx->pc = 0x3396A0u;
    // 0x3396a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3396a4: 0x24442550  addiu       $a0, $v0, 0x2550
    ctx->pc = 0x3396a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
    // 0x3396a8: 0xc046760  jal         func_119D80
    ctx->pc = 0x3396A8u;
    SET_GPR_U32(ctx, 31, 0x3396B0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x3396B0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3396B0u) { return; }
    ctx->pc = 0x3396B0u;
label_3396b0:
    // 0x3396b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3396b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3396b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3396B4u;
    {
        const bool branch_taken_0x3396b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3396b4) {
            ctx->pc = 0x33973Cu;
            goto label_33973c;
        }
    }
    ctx->pc = 0x3396BCu;
label_3396bc:
    // 0x3396bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3396bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3396c0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3396c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3396c4: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x3396c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3396c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3396c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3396cc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3396ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3396d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3396d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3396d4: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x3396d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3396d8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x3396d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3396dc: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x3396dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x3396e0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x3396e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3396e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3396e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3396e8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3396e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3396ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3396ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3396f0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3396f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3396f4: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3396f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3396f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3396fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3396fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339700: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339704: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339708: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33970c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33970cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339710: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339714: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339718: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x33971c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33971Cu;
    {
        const bool branch_taken_0x33971c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x33971c) {
            ctx->pc = 0x339730u;
            goto label_339730;
        }
    }
    ctx->pc = 0x339724u;
    // 0x339724: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339724u;
    {
        const bool branch_taken_0x339724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339724) {
            ctx->pc = 0x339730u;
            goto label_339730;
        }
    }
    ctx->pc = 0x33972Cu;
    // 0x33972c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x33972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339730:
    // 0x339730: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339734: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339738: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339738u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33973c:
    // 0x33973c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x33973cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339740: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x339740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339744: 0x3e00008  jr          $ra
    ctx->pc = 0x339744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33974Cu;
}
