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

// Function: entry_003507f0
// Address: 0x3507f0 - 0x3508f8
void entry_003507f0_0x3507f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003507f0_0x3507f0");
#endif

    switch (ctx->pc) {
        case 0x350800u: goto label_350800;
        case 0x35080cu: goto label_35080c;
        case 0x350820u: goto label_350820;
        case 0x35082cu: goto label_35082c;
        default: break;
    }

    ctx->pc = 0x3507f0u;

    // 0x3507f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3507f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3507f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3507f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3507F8u;
    SET_GPR_U32(ctx, 31, 0x350800u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3507F8u, 0x350800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350800u;
label_350800:
    // 0x350800: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350804: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350804u;
    SET_GPR_U32(ctx, 31, 0x35080Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350804u, 0x35080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35080Cu;
label_35080c:
    // 0x35080c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x35080cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x350810: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350814: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350818: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350818u;
    SET_GPR_U32(ctx, 31, 0x350820u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350818u, 0x350820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350820u;
label_350820:
    // 0x350820: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350824: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350824u;
    SET_GPR_U32(ctx, 31, 0x35082Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350824u, 0x35082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35082Cu;
label_35082c:
    // 0x35082c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350830: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x350830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x350834: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x350834u;
    {
        const bool branch_taken_0x350834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350834) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x35083Cu;
    // 0x35083c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350840: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x350840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350844: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x350844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x350848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x350848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35084c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350850: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x350850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x350854: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350858: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x350858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35085c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35085cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350860: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x350860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350864: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350868: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x350868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35086c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x35086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x350870: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350874: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350878: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x350878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x35087c: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x35087cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350880: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x350880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x350884: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x350884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x350888: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x350888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35088c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x35088cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x350890: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x350890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x350894: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350898: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35089c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x35089cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3508a0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3508a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3508a4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3508a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3508a8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3508a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3508ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3508b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508b4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3508b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3508b8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3508b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3508bc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3508BCu;
    {
        const bool branch_taken_0x3508bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3508bc) {
            ctx->pc = 0x3508F8u;
            return;
        }
    }
    ctx->pc = 0x3508C4u;
    // 0x3508c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508c8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3508c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508cc: 0xa0a0006e  sb          $zero, 0x6E($a1)
    ctx->pc = 0x3508ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3508d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3508d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3508d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508dc: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x3508dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x3508e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3508e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3508e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3508e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508ec: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x3508ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x3508f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3508F0u;
    {
        const bool branch_taken_0x3508f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3508f0) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x3508F8u;
}
