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

// Function: _decodeOrSkipField
// Address: 0x10a900 - 0x10aa70
void _decodeOrSkipField_0x10a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipField_0x10a900");
#endif

    switch (ctx->pc) {
        case 0x10a96cu: goto label_10a96c;
        case 0x10a98cu: goto label_10a98c;
        case 0x10a998u: goto label_10a998;
        case 0x10a9a8u: goto label_10a9a8;
        case 0x10a9dcu: goto label_10a9dc;
        case 0x10aa00u: goto label_10aa00;
        case 0x10aa10u: goto label_10aa10;
        case 0x10aa44u: goto label_10aa44;
        default: break;
    }

    ctx->pc = 0x10a900u;

    // 0x10a900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10a904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a908: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10a90c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a910: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x10a910u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x10a914: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a918: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10a918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a91c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10a920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a924: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10a928: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a92c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a934: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x10a934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x10a938: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A938u;
    {
        const bool branch_taken_0x10a938 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A938u;
        // 0x10a93c: 0xaea03d1c  sw          $zero, 0x3D1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 15644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a938) {
            ctx->pc = 0x10A94Cu;
            goto label_10a94c;
        }
    }
    ctx->pc = 0x10A940u;
    // 0x10a940: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10a940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10a944: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A944u;
    {
        const bool branch_taken_0x10a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a944) {
            ctx->pc = 0x10A948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A944u;
            // 0x10a948: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A954u;
            goto label_10a954;
        }
    }
    ctx->pc = 0x10A94Cu;
label_10a94c:
    // 0x10a94c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10a94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a950: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10a954:
    // 0x10a954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A954u;
    {
        const bool branch_taken_0x10a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A954u;
        // 0x10a958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a954) {
            ctx->pc = 0x10A964u;
            goto label_10a964;
        }
    }
    ctx->pc = 0x10A95Cu;
    // 0x10a95c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x10a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x10a960: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10a964:
    // 0x10a964: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A964u;
    SET_GPR_U32(ctx, 31, 0x10A96Cu);
    ctx->pc = 0x10A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A964u;
    // 0x10a968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A964u, 0x10A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A96Cu;
label_10a96c:
    // 0x10a96c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A96Cu;
    {
        const bool branch_taken_0x10a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A96Cu;
        // 0x10a970: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a96c) {
            ctx->pc = 0x10A990u;
            goto label_10a990;
        }
    }
    ctx->pc = 0x10A974u;
    // 0x10a974: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A974u;
    {
        const bool branch_taken_0x10a974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a974) {
            ctx->pc = 0x10A990u;
            goto label_10a990;
        }
    }
    ctx->pc = 0x10A97Cu;
    // 0x10a97c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x10a97cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10a980: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a984: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10A984u;
    SET_GPR_U32(ctx, 31, 0x10A98Cu);
    ctx->pc = 0x10A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A984u;
    // 0x10a988: 0x8e843d04  lw          $a0, 0x3D04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DE0u, 0x10A984u, 0x10A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A98Cu;
label_10a98c:
    // 0x10a98c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10a98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a990:
    // 0x10a990: 0xc041d2e  jal         func_1074B8
    ctx->pc = 0x10A990u;
    SET_GPR_U32(ctx, 31, 0x10A998u);
    ctx->pc = 0x10A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A990u;
    // 0x10a994: 0xaeb13d1c  sw          $s1, 0x3D1C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 15644), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074B8u, 0x10A990u, 0x10A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A998u;
label_10a998:
    // 0x10a998: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A998u;
    {
        const bool branch_taken_0x10a998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a998) {
            ctx->pc = 0x10A99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A998u;
            // 0x10a99c: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A9B4u;
            goto label_10a9b4;
        }
    }
    ctx->pc = 0x10A9A0u;
    // 0x10a9a0: 0xc042a9c  jal         func_10AA70
    ctx->pc = 0x10A9A0u;
    SET_GPR_U32(ctx, 31, 0x10A9A8u);
    ctx->pc = 0x10A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9A0u;
    // 0x10a9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA70u, 0x10A9A0u, 0x10A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9A8u;
label_10a9a8:
    // 0x10a9a8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x10a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x10a9ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10A9ACu;
    {
        const bool branch_taken_0x10a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9ACu;
        // 0x10a9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9ac) {
            ctx->pc = 0x10AA48u;
            goto label_10aa48;
        }
    }
    ctx->pc = 0x10A9B4u;
label_10a9b4:
    // 0x10a9b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10a9b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a9bc: 0x8c653dac  lw          $a1, 0x3DAC($v1)
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383DACu));
    // 0x10a9c0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x10a9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x10a9c4: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x10a9c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x10a9c8: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10A9C8u;
    {
        const bool branch_taken_0x10a9c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9C8u;
        // 0x10a9cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9c8) {
            ctx->pc = 0x10AA48u;
            goto label_10aa48;
        }
    }
    ctx->pc = 0x10A9D0u;
    // 0x10a9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9d4: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A9D4u;
    SET_GPR_U32(ctx, 31, 0x10A9DCu);
    ctx->pc = 0x10A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9D4u;
    // 0x10a9d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A9D4u, 0x10A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9DCu;
label_10a9dc:
    // 0x10a9dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10a9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9e0: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x10a9e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x10a9e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A9E4u;
    {
        const bool branch_taken_0x10a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9E4u;
        // 0x10a9e8: 0x3c140038  lui         $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9e4) {
            ctx->pc = 0x10AA04u;
            goto label_10aa04;
        }
    }
    ctx->pc = 0x10A9ECu;
    // 0x10a9ec: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A9ECu;
    {
        const bool branch_taken_0x10a9ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9ECu;
        // 0x10a9f0: 0x8e843d04  lw          $a0, 0x3D04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9ec) {
            ctx->pc = 0x10AA08u;
            goto label_10aa08;
        }
    }
    ctx->pc = 0x10A9F4u;
    // 0x10a9f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a9f8: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10A9F8u;
    SET_GPR_U32(ctx, 31, 0x10AA00u);
    ctx->pc = 0x10A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9F8u;
    // 0x10a9fc: 0x8e843d04  lw          $a0, 0x3D04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DE0u, 0x10A9F8u, 0x10AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA00u;
label_10aa00:
    // 0x10aa00: 0x222b00b  movn        $s6, $s1, $v0
    ctx->pc = 0x10aa00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 17));
label_10aa04:
    // 0x10aa04: 0x8e843d04  lw          $a0, 0x3D04($s4)
    ctx->pc = 0x10aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
label_10aa08:
    // 0x10aa08: 0xc041fb0  jal         func_107EC0
    ctx->pc = 0x10AA08u;
    SET_GPR_U32(ctx, 31, 0x10AA10u);
    ctx->pc = 0x10AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA08u;
    // 0x10aa0c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107EC0u, 0x10AA08u, 0x10AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA10u;
label_10aa10:
    // 0x10aa10: 0x8e823d04  lw          $v0, 0x3D04($s4)
    ctx->pc = 0x10aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    // 0x10aa14: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x10aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10aa18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x10aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10aa1c: 0xaea03d1c  sw          $zero, 0x3D1C($s5)
    ctx->pc = 0x10aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15644), GPR_U32(ctx, 0));
    // 0x10aa20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10aa24: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x10aa28: 0xae843d04  sw          $a0, 0x3D04($s4)
    ctx->pc = 0x10aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15620), GPR_U32(ctx, 4));
    // 0x10aa2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10aa30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10aa34: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AA34u;
    {
        const bool branch_taken_0x10aa34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA34u;
        // 0x10aa38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa34) {
            ctx->pc = 0x10AA44u;
            goto label_10aa44;
        }
    }
    ctx->pc = 0x10AA3Cu;
    // 0x10aa3c: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x10AA3Cu;
    SET_GPR_U32(ctx, 31, 0x10AA44u);
    ctx->pc = 0x10AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA3Cu;
    // 0x10aa40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x10AA3Cu, 0x10AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA44u;
label_10aa44:
    // 0x10aa44: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x10aa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10aa48:
    // 0x10aa48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10aa4c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10aa4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10aa50: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10aa50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10aa54: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10aa54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10aa58: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10aa58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10aa5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10aa5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aa60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10aa60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aa64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10aa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA68u;
        // 0x10aa6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AA70u;
}
