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

// Function: SdrBgmVol
// Address: 0x339550 - 0x339634
void SdrBgmVol_0x339550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrBgmVol_0x339550");
#endif

    switch (ctx->pc) {
        case 0x339594u: goto label_339594;
        default: break;
    }

    ctx->pc = 0x339550u;

    // 0x339550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339554: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339558: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x339558u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x33955c: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x33955cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x339560: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339564: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339568: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33956c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339570: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33957c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33957Cu;
    {
        const bool branch_taken_0x33957c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33957c) {
            ctx->pc = 0x3395A0u;
            goto label_3395a0;
        }
    }
    ctx->pc = 0x339584u;
    // 0x339584: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339588: 0x244424f0  addiu       $a0, $v0, 0x24F0
    ctx->pc = 0x339588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    // 0x33958c: 0xc046760  jal         func_119D80
    ctx->pc = 0x33958Cu;
    SET_GPR_U32(ctx, 31, 0x339594u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339594u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339594u) { return; }
    ctx->pc = 0x339594u;
label_339594:
    // 0x339594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339598: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x339598u;
    {
        const bool branch_taken_0x339598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339598) {
            ctx->pc = 0x339624u;
            goto label_339624;
        }
    }
    ctx->pc = 0x3395A0u;
label_3395a0:
    // 0x3395a0: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3395a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3395a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3395a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3395a8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3395a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3395ac: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x3395acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3395b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3395b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3395b4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3395b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3395b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3395b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3395bc: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x3395bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x3395c0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x3395c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3395c4: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x3395c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x3395c8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x3395c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3395cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3395ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3395d0: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3395d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3395d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3395d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3395dc: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3395dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3395e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3395e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3395e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3395e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3395e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3395e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3395ec: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3395ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3395f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3395f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3395f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3395f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3395f8: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3395f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3395fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3395fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339600: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339604: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339604u;
    {
        const bool branch_taken_0x339604 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339604) {
            ctx->pc = 0x339618u;
            goto label_339618;
        }
    }
    ctx->pc = 0x33960Cu;
    // 0x33960c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33960Cu;
    {
        const bool branch_taken_0x33960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33960c) {
            ctx->pc = 0x339618u;
            goto label_339618;
        }
    }
    ctx->pc = 0x339614u;
    // 0x339614: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339618:
    // 0x339618: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33961c: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x33961cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339620: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339620u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339624:
    // 0x339624: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339628: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x339628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33962c: 0x3e00008  jr          $ra
    ctx->pc = 0x33962Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33962Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339634u;
}
