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

// Function: _nextBit
// Address: 0x107278 - 0x1073e0
void _nextBit_0x107278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextBit_0x107278");
#endif

    switch (ctx->pc) {
        case 0x1072d0u: goto label_1072d0;
        case 0x1072ecu: goto label_1072ec;
        case 0x107360u: goto label_107360;
        case 0x1073b0u: goto label_1073b0;
        default: break;
    }

    ctx->pc = 0x107278u;

    // 0x107278: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10727c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107280: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107284: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107288: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10728c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10728cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x107290: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107294: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x107294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x107298: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10729c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10729cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1072a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1072a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1072a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1072a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1072ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1072acu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1072b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1072b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1072b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1072b8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1072B8u;
    {
        const bool branch_taken_0x1072b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1072BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072B8u;
        // 0x1072bc: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072b8) {
            ctx->pc = 0x10731Cu;
            goto label_10731c;
        }
    }
    ctx->pc = 0x1072C0u;
    // 0x1072c0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1072c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1072c4: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1072c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x1072c8: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1072c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1072cc: 0x0  nop
    ctx->pc = 0x1072ccu;
    // NOP
label_1072d0:
    // 0x1072d0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1072d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072d4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1072d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1072d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1072D8u;
    {
        const bool branch_taken_0x1072d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1072DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072D8u;
        // 0x1072dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072d8) {
            ctx->pc = 0x1072F0u;
            goto label_1072f0;
        }
    }
    ctx->pc = 0x1072E0u;
    // 0x1072e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1072e4: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x1072E4u;
    SET_GPR_U32(ctx, 31, 0x1072ECu);
    ctx->pc = 0x1072E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072E4u;
    // 0x1072e8: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x1072E4u, 0x1072ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072ECu;
label_1072ec:
    // 0x1072ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1072ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1072f0:
    // 0x1072f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1072f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1072f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1072f8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1072fc: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1072fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x107300: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107300u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x107304: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x107304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x107308: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x107308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x10730c: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x10730Cu;
    {
        const bool branch_taken_0x10730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x107310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10730Cu;
        // 0x107310: 0x8e623c24  lw          $v0, 0x3C24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10730c) {
            ctx->pc = 0x1072D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1072d0;
        }
    }
    ctx->pc = 0x107314u;
    // 0x107314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x107314u;
    {
        const bool branch_taken_0x107314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107314) {
            ctx->pc = 0x10732Cu;
            goto label_10732c;
        }
    }
    ctx->pc = 0x10731Cu;
label_10731c:
    // 0x10731c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10731cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107320: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107320u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107324: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107328: 0x8e623c24  lw          $v0, 0x3C24($s3)
    ctx->pc = 0x107328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15396)));
label_10732c:
    // 0x10732c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10732Cu;
    {
        const bool branch_taken_0x10732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10732Cu;
        // 0x107330: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10732c) {
            ctx->pc = 0x107344u;
            goto label_107344;
        }
    }
    ctx->pc = 0x107334u;
    // 0x107334: 0x8e02449c  lw          $v0, 0x449C($s0)
    ctx->pc = 0x107334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17564)));
    // 0x107338: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x107338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10733c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10733Cu;
    {
        const bool branch_taken_0x10733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10733Cu;
        // 0x107340: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10733c) {
            ctx->pc = 0x10736Cu;
            goto label_10736c;
        }
    }
    ctx->pc = 0x107344u;
label_107344:
    // 0x107344: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x107344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x107348: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10734c: 0x26843a70  addiu       $a0, $s4, 0x3A70
    ctx->pc = 0x10734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14960));
    // 0x107350: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x107350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x107354: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x107354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107358: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x107358u;
    SET_GPR_U32(ctx, 31, 0x107360u);
    ctx->pc = 0x10735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107358u;
    // 0x10735c: 0xae633c24  sw          $v1, 0x3C24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x107358u, 0x107360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107360u;
label_107360:
    // 0x107360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x107360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107364: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107368: 0xae424498  sw          $v0, 0x4498($s2)
    ctx->pc = 0x107368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17560), GPR_U32(ctx, 2));
label_10736c:
    // 0x10736c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x10736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x107370: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x107370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x107374: 0xae05449c  sw          $a1, 0x449C($s0)
    ctx->pc = 0x107374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17564), GPR_U32(ctx, 5));
    // 0x107378: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10737c: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x10737cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x107380: 0x8e504498  lw          $s0, 0x4498($s2)
    ctx->pc = 0x107380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17560)));
    // 0x107384: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107388: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x107388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x10738c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10738cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x107390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x107390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107394: 0x26823a70  addiu       $v0, $s4, 0x3A70
    ctx->pc = 0x107394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 14960));
    // 0x107398: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x107398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x10739c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1073a0: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x1073a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1073a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1073a8: 0xc041b70  jal         func_106DC0
    ctx->pc = 0x1073A8u;
    SET_GPR_U32(ctx, 31, 0x1073B0u);
    ctx->pc = 0x1073ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073A8u;
    // 0x1073ac: 0xae623c24  sw          $v0, 0x3C24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 15396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DC0u, 0x1073A8u, 0x1073B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073B0u;
label_1073b0:
    // 0x1073b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1073b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1073b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1073b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1073b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1073b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1073bc: 0xae424498  sw          $v0, 0x4498($s2)
    ctx->pc = 0x1073bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17560), GPR_U32(ctx, 2));
    // 0x1073c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1073c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1073c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1073c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1073c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1073cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1073ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1073d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1073d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1073d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1073d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1073d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1073D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D8u;
        // 0x1073dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073E0u;
}
