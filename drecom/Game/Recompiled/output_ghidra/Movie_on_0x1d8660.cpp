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

// Function: Movie_on
// Address: 0x1d8660 - 0x1d875c
void Movie_on_0x1d8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_on_0x1d8660");
#endif

    switch (ctx->pc) {
        case 0x1d8690u: goto label_1d8690;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86f0u: goto label_1d86f0;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d8744u: goto label_1d8744;
        default: break;
    }

    ctx->pc = 0x1d8660u;

    // 0x1d8660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8664: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1d8664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d8668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d866c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8670: 0xa7a40038  sh          $a0, 0x38($sp)
    ctx->pc = 0x1d8670u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d8674: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8678: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x1d8678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1d867c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8680: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1d8680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1d8684: 0x244589a0  addiu       $a1, $v0, -0x7660
    ctx->pc = 0x1d8684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936992));
    // 0x1d8688: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x1D8688u;
    SET_GPR_U32(ctx, 31, 0x1D8690u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x1D8688u, 0x1D8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8690u;
label_1d8690:
    // 0x1d8690: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1d8690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8694: 0xa6020040  sh          $v0, 0x40($s0)
    ctx->pc = 0x1d8694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8698: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1d8698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d869c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d86a0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d86a4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d86a8: 0x24429288  addiu       $v0, $v0, -0x6D78
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939272));
    // 0x1d86ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d86b0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1d86b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d86b4: 0xa6020042  sh          $v0, 0x42($s0)
    ctx->pc = 0x1d86b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d86b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1d86b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d86bc: 0xc0d70f4  jal         func_35C3D0
    ctx->pc = 0x1D86BCu;
    SET_GPR_U32(ctx, 31, 0x1D86C4u);
    ctx->pc = 0x35C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3D0u, 0x1D86BCu, 0x1D86C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86C4u;
label_1d86c4:
    // 0x1d86c4: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1d86c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d86c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d86c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d86cc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d86d0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d86d4: 0x24429290  addiu       $v0, $v0, -0x6D70
    ctx->pc = 0x1d86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x1d86d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d86dc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x1d86dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d86e0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1d86e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d86e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d86e8: 0xc076590  jal         func_1D9640
    ctx->pc = 0x1D86E8u;
    SET_GPR_U32(ctx, 31, 0x1D86F0u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x1D86E8u, 0x1D86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86F0u;
label_1d86f0:
    // 0x1d86f0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d86f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d86f4: 0xae110228  sw          $s1, 0x228($s0)
    ctx->pc = 0x1d86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 17));
    // 0x1d86f8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1d86f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x1d86fc: 0xae020210  sw          $v0, 0x210($s0)
    ctx->pc = 0x1d86fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    // 0x1d8700: 0x97a20038  lhu         $v0, 0x38($sp)
    ctx->pc = 0x1d8700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8704: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8708: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d8708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d870c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8710: 0x24429288  addiu       $v0, $v0, -0x6D78
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939272));
    // 0x1d8714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8718: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x1d8718u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d871c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d871cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d8720: 0xc0764ac  jal         func_1D92B0
    ctx->pc = 0x1D8720u;
    SET_GPR_U32(ctx, 31, 0x1D8728u);
    ctx->pc = 0x1D92B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92B0u, 0x1D8720u, 0x1D8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8728u;
label_1d8728:
    // 0x1d8728: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d8728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d872c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d872cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8730: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x1D8730u;
    SET_GPR_U32(ctx, 31, 0x1D8738u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x1D8730u, 0x1D8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8738u;
label_1d8738:
    // 0x1d8738: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d873c: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x1D873Cu;
    SET_GPR_U32(ctx, 31, 0x1D8744u);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x1D873Cu, 0x1D8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8744u;
label_1d8744:
    // 0x1d8744: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d8744u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d874c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d874cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8750: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d8754: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D875Cu;
}
