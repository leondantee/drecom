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

// Function: Em1b_R1_atk_wave_s
// Address: 0x36c7d0 - 0x36c968
void Em1b_R1_atk_wave_s_0x36c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_atk_wave_s_0x36c7d0");
#endif

    switch (ctx->pc) {
        case 0x36c824u: goto label_36c824;
        case 0x36c858u: goto label_36c858;
        case 0x36c874u: goto label_36c874;
        case 0x36c890u: goto label_36c890;
        case 0x36c8e0u: goto label_36c8e0;
        case 0x36c8f0u: goto label_36c8f0;
        case 0x36c8fcu: goto label_36c8fc;
        case 0x36c90cu: goto label_36c90c;
        case 0x36c918u: goto label_36c918;
        default: break;
    }

    ctx->pc = 0x36c7d0u;

    // 0x36c7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c7d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36c7d8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x36c7dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c7e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36c7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c7e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36c7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36c7e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c7ec: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36C7ECu;
    {
        const bool branch_taken_0x36c7ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36c7ec) {
            ctx->pc = 0x36C834u;
            goto label_36c834;
        }
    }
    ctx->pc = 0x36C7F4u;
    // 0x36c7f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C7F4u;
    {
        const bool branch_taken_0x36c7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c7f4) {
            ctx->pc = 0x36C804u;
            goto label_36c804;
        }
    }
    ctx->pc = 0x36C7FCu;
    // 0x36c7fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x36C7FCu;
    {
        const bool branch_taken_0x36c7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c7fc) {
            ctx->pc = 0x36C958u;
            goto label_36c958;
        }
    }
    ctx->pc = 0x36C804u;
label_36c804:
    // 0x36c804: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c808: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c80c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c810: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x36c810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x36c814: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c818: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c81c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36C81Cu;
    SET_GPR_U32(ctx, 31, 0x36C824u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36C81Cu, 0x36C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C824u;
label_36c824:
    // 0x36c824: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c828: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36c828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c82c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c830: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36c830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36c834:
    // 0x36c834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c838: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c83c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c840: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36c844: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x36C844u;
    {
        const bool branch_taken_0x36c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c844) {
            ctx->pc = 0x36C8E0u;
            goto label_36c8e0;
        }
    }
    ctx->pc = 0x36C84Cu;
    // 0x36c84c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36c850: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36C850u;
    SET_GPR_U32(ctx, 31, 0x36C858u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36C850u, 0x36C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C858u;
label_36c858:
    // 0x36c858: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x36c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x36c85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c860: 0x0  nop
    ctx->pc = 0x36c860u;
    // NOP
    // 0x36c864: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36c864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36c868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x36c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c86c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36C86Cu;
    SET_GPR_U32(ctx, 31, 0x36C874u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36C86Cu, 0x36C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C874u;
label_36c874:
    // 0x36c874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c878: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c87c: 0x244404b0  addiu       $a0, $v0, 0x4B0
    ctx->pc = 0x36c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36c880: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36c884: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36c884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36c888: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36C888u;
    SET_GPR_U32(ctx, 31, 0x36C890u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36C888u, 0x36C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C890u;
label_36c890:
    // 0x36c890: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36c890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36c894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c89c: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x36c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x36c8a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36c8a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36c8a8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36c8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c8b0: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x36c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36c8b4: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x36c8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x36c8b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c8c4: 0x8c641348  lw          $a0, 0x1348($v1)
    ctx->pc = 0x36c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x36c8c8: 0x244504b0  addiu       $a1, $v0, 0x4B0
    ctx->pc = 0x36c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36c8cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36c8ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c8d0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x36c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c8d4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x36c8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36c8d8: 0xc0df26c  jal         func_37C9B0
    ctx->pc = 0x36C8D8u;
    SET_GPR_U32(ctx, 31, 0x36C8E0u);
    ctx->pc = 0x37C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C9B0u, 0x36C8D8u, 0x36C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8E0u;
label_36c8e0:
    // 0x36c8e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c8e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c8e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C8E8u;
    SET_GPR_U32(ctx, 31, 0x36C8F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C8E8u, 0x36C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8F0u;
label_36c8f0:
    // 0x36c8f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c8f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C8F4u;
    SET_GPR_U32(ctx, 31, 0x36C8FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C8F4u, 0x36C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8FCu;
label_36c8fc:
    // 0x36c8fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c900: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c904: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36C904u;
    SET_GPR_U32(ctx, 31, 0x36C90Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36C904u, 0x36C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C90Cu;
label_36c90c:
    // 0x36c90c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c910: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C910u;
    SET_GPR_U32(ctx, 31, 0x36C918u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C910u, 0x36C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C918u;
label_36c918:
    // 0x36c918: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c91c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c920: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C920u;
    {
        const bool branch_taken_0x36c920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c920) {
            ctx->pc = 0x36C958u;
            goto label_36c958;
        }
    }
    ctx->pc = 0x36C928u;
    // 0x36c928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c92c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c930: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c934: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36c934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c938: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c93c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c944: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c944u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c94c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c950: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c954: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36c958:
    // 0x36c958: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36c958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c95c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36c95cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36c960: 0x3e00008  jr          $ra
    ctx->pc = 0x36C960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C968u;
}
