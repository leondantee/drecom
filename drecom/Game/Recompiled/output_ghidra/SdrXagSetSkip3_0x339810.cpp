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

// Function: SdrXagSetSkip3
// Address: 0x339810 - 0x339914
void SdrXagSetSkip3_0x339810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagSetSkip3_0x339810");
#endif

    switch (ctx->pc) {
        case 0x339858u: goto label_339858;
        default: break;
    }

    ctx->pc = 0x339810u;

    // 0x339810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339814: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x339814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x339818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33981c: 0xa7a40020  sh          $a0, 0x20($sp)
    ctx->pc = 0x33981cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x339820: 0xa7a50028  sh          $a1, 0x28($sp)
    ctx->pc = 0x339820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x339824: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339828: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33982c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33982cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339830: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339834: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33983c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339840: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339840u;
    {
        const bool branch_taken_0x339840 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339840) {
            ctx->pc = 0x339864u;
            goto label_339864;
        }
    }
    ctx->pc = 0x339848u;
    // 0x339848: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33984c: 0x244425b0  addiu       $a0, $v0, 0x25B0
    ctx->pc = 0x33984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9648));
    // 0x339850: 0xc046760  jal         func_119D80
    ctx->pc = 0x339850u;
    SET_GPR_U32(ctx, 31, 0x339858u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339858u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339858u) { return; }
    ctx->pc = 0x339858u;
label_339858:
    // 0x339858: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33985c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33985Cu;
    {
        const bool branch_taken_0x33985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33985c) {
            ctx->pc = 0x339900u;
            goto label_339900;
        }
    }
    ctx->pc = 0x339864u;
label_339864:
    // 0x339864: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339868: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x33986c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33986cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339870: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339874: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339878: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x339878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33987c: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x33987cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339880: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339884: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x339884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339888: 0x97a20028  lhu         $v0, 0x28($sp)
    ctx->pc = 0x339888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33988c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339890: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x339894: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x339894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339898: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x33989c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x33989cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3398a0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x3398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x3398a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3398a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3398a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3398a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3398ac: 0x97a20028  lhu         $v0, 0x28($sp)
    ctx->pc = 0x3398acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3398b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3398b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3398b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3398b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3398b8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3398b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3398bc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3398bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3398c0: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3398c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3398c4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3398c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3398c8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3398c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3398cc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3398ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3398d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3398d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3398d4: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3398d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3398d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3398d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3398dc: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3398dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3398e0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3398E0u;
    {
        const bool branch_taken_0x3398e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3398e0) {
            ctx->pc = 0x3398F4u;
            goto label_3398f4;
        }
    }
    ctx->pc = 0x3398E8u;
    // 0x3398e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3398E8u;
    {
        const bool branch_taken_0x3398e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3398e8) {
            ctx->pc = 0x3398F4u;
            goto label_3398f4;
        }
    }
    ctx->pc = 0x3398F0u;
    // 0x3398f0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3398f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3398f4:
    // 0x3398f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3398f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3398f8: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x3398f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3398fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3398fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339900:
    // 0x339900: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x339900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x339908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33990c: 0x3e00008  jr          $ra
    ctx->pc = 0x33990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339914u;
}
