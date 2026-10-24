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

// Function: entry_003757fc
// Address: 0x3757fc - 0x3758a4
void entry_003757fc_0x3757fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003757fc_0x3757fc");
#endif

    switch (ctx->pc) {
        case 0x37580cu: goto label_37580c;
        case 0x375818u: goto label_375818;
        case 0x375828u: goto label_375828;
        case 0x375834u: goto label_375834;
        case 0x375898u: goto label_375898;
        default: break;
    }

    ctx->pc = 0x3757fcu;

    // 0x3757fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3757fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375800: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375804: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375804u;
    SET_GPR_U32(ctx, 31, 0x37580Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375804u, 0x37580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37580Cu;
label_37580c:
    // 0x37580c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375810: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375810u;
    SET_GPR_U32(ctx, 31, 0x375818u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375810u, 0x375818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375818u;
label_375818:
    // 0x375818: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37581c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37581cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375820: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375820u;
    SET_GPR_U32(ctx, 31, 0x375828u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375820u, 0x375828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375828u;
label_375828:
    // 0x375828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37582c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37582Cu;
    SET_GPR_U32(ctx, 31, 0x375834u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37582Cu, 0x375834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375834u;
label_375834:
    // 0x375834: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375838: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x375838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x37583c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x375840: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x375840u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x375844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375848: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37584c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x37584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375850: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x375850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x375854: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x375854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x375858: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x375858u;
    {
        const bool branch_taken_0x375858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375858) {
            ctx->pc = 0x3758A4u;
            return;
        }
    }
    ctx->pc = 0x375860u;
    // 0x375860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375864: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x375864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375868: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x375868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x37586c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37586cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x375870: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x375870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x375874: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x375874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x375878: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x375878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37587c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x375880: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x375880u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x375884: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x375884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x375888: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37588c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37588cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375890: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x375890u;
    SET_GPR_U32(ctx, 31, 0x375898u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x375890u, 0x375898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375898u;
label_375898:
    // 0x375898: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x375898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37589c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x37589Cu;
    SET_GPR_U32(ctx, 31, 0x3758A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x37589Cu, 0x3758A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3758A4u;
}
