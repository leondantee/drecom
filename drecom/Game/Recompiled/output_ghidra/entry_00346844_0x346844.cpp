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

// Function: entry_00346844
// Address: 0x346844 - 0x346974
void entry_00346844_0x346844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346844_0x346844");
#endif

    switch (ctx->pc) {
        case 0x346858u: goto label_346858;
        case 0x346864u: goto label_346864;
        case 0x346908u: goto label_346908;
        default: break;
    }

    ctx->pc = 0x346844u;

    // 0x346844: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346848: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x346848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34684c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34684cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346850: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x346850u;
    SET_GPR_U32(ctx, 31, 0x346858u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x346850u, 0x346858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346858u;
label_346858:
    // 0x346858: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34685c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34685Cu;
    SET_GPR_U32(ctx, 31, 0x346864u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34685Cu, 0x346864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346864u;
label_346864:
    // 0x346864: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346868: 0x907009e7  lbu         $s0, 0x9E7($v1)
    ctx->pc = 0x346868u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34686c: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x34686Cu;
    {
        const bool branch_taken_0x34686c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34686c) {
            ctx->pc = 0x34699Cu;
            return;
        }
    }
    ctx->pc = 0x346874u;
    // 0x346874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346878: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34687c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x34687cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x346880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346884: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346888: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x346888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34688c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346890: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x346890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346894: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346898: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x346898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34689c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3468a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3468a4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3468a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3468a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3468a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3468acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3468b0: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x3468b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x3468b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3468b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468b8: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x3468b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3468bc: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3468bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3468c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3468c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3468c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3468c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3468c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3468c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3468cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3468ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3468d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468d4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3468d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3468d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3468d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3468dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3468dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3468e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3468e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3468e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3468e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3468e8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468ec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3468ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3468f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3468f4: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3468f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3468f8: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x3468f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3468fc: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x3468fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x346900: 0xc067694  jal         func_19DA50
    ctx->pc = 0x346900u;
    SET_GPR_U32(ctx, 31, 0x346908u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x346900u, 0x346908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346908u;
label_346908:
    // 0x346908: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x346908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34690c: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x34690cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x346910: 0x24830078  addiu       $v1, $a0, 0x78
    ctx->pc = 0x346910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x346914: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x346914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346918: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x346918u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x34691c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346920: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346924: 0xa4650034  sh          $a1, 0x34($v1)
    ctx->pc = 0x346924u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x346928: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34692c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346930: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x346930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x346934: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x346934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x346938: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x346938u;
    {
        const bool branch_taken_0x346938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346938) {
            ctx->pc = 0x346974u;
            return;
        }
    }
    ctx->pc = 0x346940u;
    // 0x346940: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346944: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346948: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x346948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34694c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346950: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346954: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346958: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x346958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34695c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346960: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346964: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346968: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x346968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x34696c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34696Cu;
    {
        const bool branch_taken_0x34696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34696c) {
            ctx->pc = 0x34699Cu;
            return;
        }
    }
    ctx->pc = 0x346974u;
}
