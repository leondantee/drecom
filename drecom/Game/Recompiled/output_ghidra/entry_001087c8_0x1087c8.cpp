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

// Function: entry_001087c8
// Address: 0x1087c8 - 0x108898
void entry_001087c8_0x1087c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001087c8_0x1087c8");
#endif

    switch (ctx->pc) {
        case 0x1087ecu: goto label_1087ec;
        case 0x108868u: goto label_108868;
        case 0x108890u: goto label_108890;
        default: break;
    }

    ctx->pc = 0x1087c8u;

    // 0x1087c8: 0x8e063bf4  lw          $a2, 0x3BF4($s0)
    ctx->pc = 0x1087c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15348)));
    // 0x1087cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1087ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1087d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1087d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1087d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1087d8: 0x24c70020  addiu       $a3, $a2, 0x20
    ctx->pc = 0x1087d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1087dc: 0x8cd10040  lw          $s1, 0x40($a2)
    ctx->pc = 0x1087dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1087e0: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1087e4: 0xc042188  jal         func_108620
    ctx->pc = 0x1087E4u;
    SET_GPR_U32(ctx, 31, 0x1087ECu);
    ctx->pc = 0x1087E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087E4u;
    // 0x1087e8: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108620u, 0x1087E4u, 0x1087ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087ECu;
label_1087ec:
    // 0x1087ec: 0x8e063bf4  lw          $a2, 0x3BF4($s0)
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15348)));
    // 0x1087f0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1087f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1087f4: 0x24a53ae0  addiu       $a1, $a1, 0x3AE0
    ctx->pc = 0x1087f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15072));
    // 0x1087f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1087f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087fc: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1087fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x108800: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x108800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x108804: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x108804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x108808: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x108808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10880c: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x10880cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x108810: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x108810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x108814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108818: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x108818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x10881c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x108820: 0x9c450000  lwu         $a1, 0x0($v0)
    ctx->pc = 0x108820u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108824: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x108824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    // 0x108828: 0xfe250088  sd          $a1, 0x88($s1)
    ctx->pc = 0x108828u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 5));
    // 0x10882c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x10882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x108830: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x108830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x108834: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x108834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x108838: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x108838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x10883c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x10883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x108840: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x108840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x108844: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x108844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x108848: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x108848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x10884c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x10884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x108850: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x108850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x108854: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x108854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x108858: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x108858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x10885c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x10885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x108860: 0xc0420d6  jal         func_108358
    ctx->pc = 0x108860u;
    SET_GPR_U32(ctx, 31, 0x108868u);
    ctx->pc = 0x108864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108860u;
    // 0x108864: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108358u, 0x108860u, 0x108868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108868u;
label_108868:
    // 0x108868: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x108868u;
    {
        const bool branch_taken_0x108868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108868u;
        // 0x10886c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108868) {
            ctx->pc = 0x1088B8u;
            return;
        }
    }
    ctx->pc = 0x108870u;
    // 0x108870: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x108870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x108874: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x108874u;
    {
        const bool branch_taken_0x108874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108874u;
        // 0x108878: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108874) {
            ctx->pc = 0x1088BCu;
            return;
        }
    }
    ctx->pc = 0x10887Cu;
    // 0x10887c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x10887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x108880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108880u;
    {
        const bool branch_taken_0x108880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108880) {
            ctx->pc = 0x108898u;
            return;
        }
    }
    ctx->pc = 0x108888u;
    // 0x108888: 0xc042378  jal         func_108DE0
    ctx->pc = 0x108888u;
    SET_GPR_U32(ctx, 31, 0x108890u);
    ctx->pc = 0x10888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108888u;
    // 0x10888c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DE0u, 0x108888u, 0x108890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108890u;
label_108890:
    // 0x108890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108890u;
    {
        const bool branch_taken_0x108890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108890u;
        // 0x108894: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108890) {
            ctx->pc = 0x1088A4u;
            return;
        }
    }
    ctx->pc = 0x108898u;
}
