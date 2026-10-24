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

// Function: _decMB0
// Address: 0x106478 - 0x10699c
void _decMB0_0x106478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decMB0_0x106478");
#endif

    switch (ctx->pc) {
        case 0x1064f0u: goto label_1064f0;
        case 0x106508u: goto label_106508;
        case 0x106514u: goto label_106514;
        case 0x10654cu: goto label_10654c;
        case 0x106624u: goto label_106624;
        case 0x106650u: goto label_106650;
        case 0x1066c0u: goto label_1066c0;
        case 0x1066f4u: goto label_1066f4;
        case 0x106758u: goto label_106758;
        case 0x10678cu: goto label_10678c;
        case 0x1067bcu: goto label_1067bc;
        case 0x10682cu: goto label_10682c;
        case 0x106870u: goto label_106870;
        default: break;
    }

    ctx->pc = 0x106478u;

    // 0x106478: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x106478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10647c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10647cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106480: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x106480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x106484: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x106484u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x106488: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x106488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10648c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x10648cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x106490: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x106490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x106494: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x106494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106498: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x106498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10649c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10649cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064a0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1064a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1064a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1064a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064a8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1064a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1064ac: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1064acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064b0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1064b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1064b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1064b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1064b8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1064b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1064bc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1064bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1064c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1064c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1064c4: 0x8c4a3d7c  lw          $t2, 0x3D7C($v0)
    ctx->pc = 0x1064c4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1064c8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1064c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1064cc: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x1064ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x1064d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1064d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1064d4: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1064d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1064d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1064d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1064dc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1064dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1064e0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1064e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1064e4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1064e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1064e8: 0xc041b9c  jal         func_106E70
    ctx->pc = 0x1064E8u;
    SET_GPR_U32(ctx, 31, 0x1064F0u);
    ctx->pc = 0x1064ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064E8u;
    // 0x1064ec: 0xafa80014  sw          $t0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x1064E8u, 0x1064F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064F0u;
label_1064f0:
    // 0x1064f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1064f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064f4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1064F4u;
    {
        const bool branch_taken_0x1064f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1064F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064F4u;
        // 0x1064f8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064f4) {
            ctx->pc = 0x10651Cu;
            goto label_10651c;
        }
    }
    ctx->pc = 0x1064FCu;
    // 0x1064fc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1064fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x106500: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x106500u;
    SET_GPR_U32(ctx, 31, 0x106508u);
    ctx->pc = 0x106504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106500u;
    // 0x106504: 0x2484c770  addiu       $a0, $a0, -0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x106500u, 0x106508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106508u;
label_106508:
    // 0x106508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10650c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x106510: 0xac623d08  sw          $v0, 0x3D08($v1)
    ctx->pc = 0x106510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D08u, _value); } while (0);
label_106514:
    // 0x106514: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x106514u;
    {
        const bool branch_taken_0x106514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106514u;
        // 0x106518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106514) {
            ctx->pc = 0x10696Cu;
            goto label_10696c;
        }
    }
    ctx->pc = 0x10651Cu;
label_10651c:
    // 0x10651c: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x10651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x106520: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106520u;
    {
        const bool branch_taken_0x106520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106520u;
        // 0x106524: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106520) {
            ctx->pc = 0x106554u;
            goto label_106554;
        }
    }
    ctx->pc = 0x106528u;
    // 0x106528: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10652c: 0x8c823dac  lw          $v0, 0x3DAC($a0)
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15788)));
    // 0x106530: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106530u;
    {
        const bool branch_taken_0x106530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x106534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106530u;
        // 0x106534: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106530) {
            ctx->pc = 0x106544u;
            goto label_106544;
        }
    }
    ctx->pc = 0x106538u;
    // 0x106538: 0x8c433db4  lw          $v1, 0x3DB4($v0)
    ctx->pc = 0x106538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15796)));
    // 0x10653c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10653Cu;
    {
        const bool branch_taken_0x10653c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10653Cu;
        // 0x106540: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10653c) {
            ctx->pc = 0x106580u;
            goto label_106580;
        }
    }
    ctx->pc = 0x106544u;
label_106544:
    // 0x106544: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106544u;
    SET_GPR_U32(ctx, 31, 0x10654Cu);
    ctx->pc = 0x106548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106544u;
    // 0x106548: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106544u, 0x10654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10654Cu;
label_10654c:
    // 0x10654c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10654Cu;
    {
        const bool branch_taken_0x10654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10654Cu;
        // 0x106550: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10654c) {
            ctx->pc = 0x106584u;
            goto label_106584;
        }
    }
    ctx->pc = 0x106554u;
label_106554:
    // 0x106554: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x106554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x106558: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106558u;
    {
        const bool branch_taken_0x106558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106558u;
        // 0x10655c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106558) {
            ctx->pc = 0x106584u;
            goto label_106584;
        }
    }
    ctx->pc = 0x106560u;
    // 0x106560: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x106560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x106564: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x106564u;
    {
        const bool branch_taken_0x106564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106564u;
        // 0x106568: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106564) {
            ctx->pc = 0x106584u;
            goto label_106584;
        }
    }
    ctx->pc = 0x10656Cu;
    // 0x10656c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106570: 0x8ca33dac  lw          $v1, 0x3DAC($a1)
    ctx->pc = 0x106570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15788)));
    // 0x106574: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106578: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x10657c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x10657cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_106580:
    // 0x106580: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x106580u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_106584:
    // 0x106584: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x106584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x106588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10658c: 0x8cc33dac  lw          $v1, 0x3DAC($a2)
    ctx->pc = 0x10658cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x106590: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106590u;
    {
        const bool branch_taken_0x106590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106590u;
        // 0x106594: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106590) {
            ctx->pc = 0x1065B4u;
            goto label_1065b4;
        }
    }
    ctx->pc = 0x106598u;
    // 0x106598: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x106598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10659c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1065a0: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x1065a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1065a4: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x1065a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1065a8: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x1065a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x1065ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1065ACu;
    {
        const bool branch_taken_0x1065ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065ACu;
        // 0x1065b0: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065ac) {
            ctx->pc = 0x1065C8u;
            goto label_1065c8;
        }
    }
    ctx->pc = 0x1065B4u;
label_1065b4:
    // 0x1065b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1065b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1065b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1065b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1065bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1065bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065c0: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x1065c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1065c4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1065c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1065c8:
    // 0x1065c8: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x1065c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x1065cc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1065ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1065d0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1065D0u;
    {
        const bool branch_taken_0x1065d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1065D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065D0u;
        // 0x1065d4: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065d0) {
            ctx->pc = 0x1065E8u;
            goto label_1065e8;
        }
    }
    ctx->pc = 0x1065D8u;
    // 0x1065d8: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1065d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1065dc: 0x8ce23dac  lw          $v0, 0x3DAC($a3)
    ctx->pc = 0x1065dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x1065e0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1065e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1065e4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1065e4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1065e8:
    // 0x1065e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1065e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1065ec: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x1065ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x1065f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1065f4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1065F4u;
    {
        const bool branch_taken_0x1065f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1065F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065F4u;
        // 0x1065f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065f4) {
            ctx->pc = 0x10662Cu;
            goto label_10662c;
        }
    }
    ctx->pc = 0x1065FCu;
    // 0x1065fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106600: 0x8c433db4  lw          $v1, 0x3DB4($v0)
    ctx->pc = 0x106600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DB4u));
    // 0x106604: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x106604u;
    {
        const bool branch_taken_0x106604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106604u;
        // 0x106608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106604) {
            ctx->pc = 0x10662Cu;
            goto label_10662c;
        }
    }
    ctx->pc = 0x10660Cu;
    // 0x10660c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106610: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x106610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x106614: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106614u;
    {
        const bool branch_taken_0x106614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106614u;
        // 0x106618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106614) {
            ctx->pc = 0x10662Cu;
            goto label_10662c;
        }
    }
    ctx->pc = 0x10661Cu;
    // 0x10661c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10661Cu;
    SET_GPR_U32(ctx, 31, 0x106624u);
    ctx->pc = 0x106620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10661Cu;
    // 0x106620: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10661Cu, 0x106624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106624u;
label_106624:
    // 0x106624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106624u;
    {
        const bool branch_taken_0x106624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106624u;
        // 0x106628: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106624) {
            ctx->pc = 0x106630u;
            goto label_106630;
        }
    }
    ctx->pc = 0x10662Cu;
label_10662c:
    // 0x10662c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106630:
    // 0x106630: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x106630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x106634: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106638: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x106638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x10663c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10663Cu;
    {
        const bool branch_taken_0x10663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10663Cu;
        // 0x106640: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10663c) {
            ctx->pc = 0x10665Cu;
            goto label_10665c;
        }
    }
    ctx->pc = 0x106644u;
    // 0x106644: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x106644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x106648: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106648u;
    SET_GPR_U32(ctx, 31, 0x106650u);
    ctx->pc = 0x10664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106648u;
    // 0x10664c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106648u, 0x106650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106650u;
label_106650:
    // 0x106650: 0xae023e40  sw          $v0, 0x3E40($s0)
    ctx->pc = 0x106650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15936), GPR_U32(ctx, 2));
    // 0x106654: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106658: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x106658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_10665c:
    // 0x10665c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10665Cu;
    {
        const bool branch_taken_0x10665c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10665Cu;
        // 0x106660: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10665c) {
            ctx->pc = 0x10667Cu;
            goto label_10667c;
        }
    }
    ctx->pc = 0x106664u;
    // 0x106664: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x106664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x106668: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x106668u;
    {
        const bool branch_taken_0x106668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106668u;
        // 0x10666c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106668) {
            ctx->pc = 0x1066F4u;
            goto label_1066f4;
        }
    }
    ctx->pc = 0x106670u;
    // 0x106670: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x106670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x106674: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x106674u;
    {
        const bool branch_taken_0x106674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106674u;
        // 0x106678: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106674) {
            ctx->pc = 0x1066F4u;
            goto label_1066f4;
        }
    }
    ctx->pc = 0x10667Cu;
label_10667c:
    // 0x10667c: 0x8c4344b0  lw          $v1, 0x44B0($v0)
    ctx->pc = 0x10667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17584)));
    // 0x106680: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x106680u;
    {
        const bool branch_taken_0x106680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106680u;
        // 0x106684: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106680) {
            ctx->pc = 0x1066C8u;
            goto label_1066c8;
        }
    }
    ctx->pc = 0x106688u;
    // 0x106688: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x106688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x10668c: 0x24433d98  addiu       $v1, $v0, 0x3D98
    ctx->pc = 0x10668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
    // 0x106690: 0x8c4a3d98  lw          $t2, 0x3D98($v0)
    ctx->pc = 0x106690u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15768)));
    // 0x106694: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x106694u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x106698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10669c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x10669cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1066a0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1066a4: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1066a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1066a8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1066ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b8: 0xc041a8a  jal         func_106A28
    ctx->pc = 0x1066B8u;
    SET_GPR_U32(ctx, 31, 0x1066C0u);
    ctx->pc = 0x1066BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066B8u;
    // 0x1066bc: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A28u, 0x1066B8u, 0x1066C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066C0u;
label_1066c0:
    // 0x1066c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1066C0u;
    {
        const bool branch_taken_0x1066c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066C0u;
        // 0x1066c4: 0x3c1e0038  lui         $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066c0) {
            ctx->pc = 0x1066F8u;
            goto label_1066f8;
        }
    }
    ctx->pc = 0x1066C8u;
label_1066c8:
    // 0x1066c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1066cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1066ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1066d0: 0x8c463d88  lw          $a2, 0x3D88($v0)
    ctx->pc = 0x1066d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D88u));
    // 0x1066d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1066d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066d8: 0x8c6a3d84  lw          $t2, 0x3D84($v1)
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D84u));
    // 0x1066dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1066e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1066e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1066e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066ec: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x1066ECu;
    SET_GPR_U32(ctx, 31, 0x1066F4u);
    ctx->pc = 0x1066F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066ECu;
    // 0x1066f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x1066ECu, 0x1066F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066F4u;
label_1066f4:
    // 0x1066f4: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x1066f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
label_1066f8:
    // 0x1066f8: 0x8fc23d08  lw          $v0, 0x3D08($fp)
    ctx->pc = 0x1066f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
    // 0x1066fc: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1066FCu;
    {
        const bool branch_taken_0x1066fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066FCu;
        // 0x106700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066fc) {
            ctx->pc = 0x10696Cu;
            goto label_10696c;
        }
    }
    ctx->pc = 0x106704u;
    // 0x106704: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106708: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x106708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10670c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10670Cu;
    {
        const bool branch_taken_0x10670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10670Cu;
        // 0x106710: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10670c) {
            ctx->pc = 0x10678Cu;
            goto label_10678c;
        }
    }
    ctx->pc = 0x106714u;
    // 0x106714: 0x8c4344b0  lw          $v1, 0x44B0($v0)
    ctx->pc = 0x106714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17584)));
    // 0x106718: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x106718u;
    {
        const bool branch_taken_0x106718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106718u;
        // 0x10671c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106718) {
            ctx->pc = 0x106760u;
            goto label_106760;
        }
    }
    ctx->pc = 0x106720u;
    // 0x106720: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x106720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x106724: 0x24423d98  addiu       $v0, $v0, 0x3D98
    ctx->pc = 0x106724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
    // 0x106728: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x106728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10672c: 0x8c4b000c  lw          $t3, 0xC($v0)
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x106730: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x106730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106734: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x106734u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106738: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x106738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10673c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10673cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106740: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x106744: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x106744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x106748: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x106748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x10674c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106750: 0xc041a8a  jal         func_106A28
    ctx->pc = 0x106750u;
    SET_GPR_U32(ctx, 31, 0x106758u);
    ctx->pc = 0x106754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106750u;
    // 0x106754: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A28u, 0x106750u, 0x106758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106758u;
label_106758:
    // 0x106758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x106758u;
    {
        const bool branch_taken_0x106758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106758u;
        // 0x10675c: 0x8fc23d08  lw          $v0, 0x3D08($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106758) {
            ctx->pc = 0x106790u;
            goto label_106790;
        }
    }
    ctx->pc = 0x106760u;
label_106760:
    // 0x106760: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106764: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x106764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x106768: 0x8c463d90  lw          $a2, 0x3D90($v0)
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D90u));
    // 0x10676c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106770: 0x8c6a3d8c  lw          $t2, 0x3D8C($v1)
    ctx->pc = 0x106770u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D8Cu));
    // 0x106774: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x106774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106778: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x106778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10677c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10677cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106784: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x106784u;
    SET_GPR_U32(ctx, 31, 0x10678Cu);
    ctx->pc = 0x106788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106784u;
    // 0x106788: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x106784u, 0x10678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10678Cu;
label_10678c:
    // 0x10678c: 0x8fc23d08  lw          $v0, 0x3D08($fp)
    ctx->pc = 0x10678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
label_106790:
    // 0x106790: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x106790u;
    {
        const bool branch_taken_0x106790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106790u;
        // 0x106794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106790) {
            ctx->pc = 0x10696Cu;
            goto label_10696c;
        }
    }
    ctx->pc = 0x106798u;
    // 0x106798: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10679c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1067a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1067A0u;
    {
        const bool branch_taken_0x1067a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067A0u;
        // 0x1067a4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067a0) {
            ctx->pc = 0x1067C0u;
            goto label_1067c0;
        }
    }
    ctx->pc = 0x1067A8u;
    // 0x1067a8: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x1067a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x1067ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1067ACu;
    {
        const bool branch_taken_0x1067ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067ACu;
        // 0x1067b0: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067ac) {
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x1067B4u;
    // 0x1067b4: 0xc041c58  jal         func_107160
    ctx->pc = 0x1067B4u;
    SET_GPR_U32(ctx, 31, 0x1067BCu);
    ctx->pc = 0x1067B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067B4u;
    // 0x1067b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1067B4u, 0x1067BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067BCu;
label_1067bc:
    // 0x1067bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1067bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1067c0:
    // 0x1067c0: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1067c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1067c4:
    // 0x1067c4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1067C4u;
    {
        const bool branch_taken_0x1067c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067C4u;
        // 0x1067c8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067c4) {
            ctx->pc = 0x106878u;
            goto label_106878;
        }
    }
    ctx->pc = 0x1067CCu;
    // 0x1067cc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1067d0: 0x244241f8  addiu       $v0, $v0, 0x41F8
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16888));
    // 0x1067d4: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x1067d8: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x1067d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1067dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1067dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1067e0: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1067e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x1067e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1067e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1067e8: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x1067e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1067ec: 0x34c6b010  ori         $a2, $a2, 0xB010
    ctx->pc = 0x1067ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45072);
    // 0x1067f0: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1067f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1067f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1067f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1067f8: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1067f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1067fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1067fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106800: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x106800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x106804: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x106804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x106808: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x106808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10680c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10680cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x106810: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x106810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x106814: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x106814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x106818: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x106818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x10681c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10681cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x106820: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x106820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x106824: 0xc041b46  jal         func_106D18
    ctx->pc = 0x106824u;
    SET_GPR_U32(ctx, 31, 0x10682Cu);
    ctx->pc = 0x106828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106824u;
    // 0x106828: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x106824u, 0x10682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10682Cu;
label_10682c:
    // 0x10682c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106830: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106834: 0x8c453e40  lw          $a1, 0x3E40($v0)
    ctx->pc = 0x106834u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383E40u));
    // 0x106838: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x106838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x10683c: 0x8e033e3c  lw          $v1, 0x3E3C($s0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15932)));
    // 0x106840: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x106840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x106844: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106848: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x10684c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x10684cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x106850: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x106854: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x106854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106858: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x106858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10685c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x106860: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x106860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x106864: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x106864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x106868: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x106868u;
    SET_GPR_U32(ctx, 31, 0x106870u);
    ctx->pc = 0x10686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106868u;
    // 0x10686c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x106868u, 0x106870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106870u;
label_106870:
    // 0x106870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106870u;
    {
        const bool branch_taken_0x106870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106870u;
        // 0x106874: 0x8fc23d08  lw          $v0, 0x3D08($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106870) {
            ctx->pc = 0x1068A0u;
            goto label_1068a0;
        }
    }
    ctx->pc = 0x106878u;
label_106878:
    // 0x106878: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10687c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x10687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106880: 0x246341f8  addiu       $v1, $v1, 0x41F8
    ctx->pc = 0x106880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16888));
    // 0x106884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106888: 0x8c620280  lw          $v0, 0x280($v1)
    ctx->pc = 0x106888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384478u));
    // 0x10688c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x106890: 0x453018  mult        $a2, $v0, $a1
    ctx->pc = 0x106890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x106894: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x106894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x106898: 0xac44013c  sw          $a0, 0x13C($v0)
    ctx->pc = 0x106898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x10689c: 0x8fc23d08  lw          $v0, 0x3D08($fp)
    ctx->pc = 0x10689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
label_1068a0:
    // 0x1068a0: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x1068A0u;
    {
        const bool branch_taken_0x1068a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068A0u;
        // 0x1068a4: 0xae003e3c  sw          $zero, 0x3E3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068a0) {
            ctx->pc = 0x106514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106514;
        }
    }
    ctx->pc = 0x1068A8u;
    // 0x1068a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1068a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1068ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1068acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1068b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1068B0u;
    {
        const bool branch_taken_0x1068b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068B0u;
        // 0x1068b4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068b0) {
            ctx->pc = 0x1068D0u;
            goto label_1068d0;
        }
    }
    ctx->pc = 0x1068B8u;
    // 0x1068b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1068b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1068bc: 0xae033e3c  sw          $v1, 0x3E3C($s0)
    ctx->pc = 0x1068bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15932), GPR_U32(ctx, 3));
    // 0x1068c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1068c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1068c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1068c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1068C8u;
    {
        const bool branch_taken_0x1068c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068C8u;
        // 0x1068cc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068c8) {
            ctx->pc = 0x1068FCu;
            goto label_1068fc;
        }
    }
    ctx->pc = 0x1068D0u;
label_1068d0:
    // 0x1068d0: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x1068d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x1068d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1068D4u;
    {
        const bool branch_taken_0x1068d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068D4u;
        // 0x1068d8: 0x3c070038  lui         $a3, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068d4) {
            ctx->pc = 0x106900u;
            goto label_106900;
        }
    }
    ctx->pc = 0x1068DCu;
    // 0x1068dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1068dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1068e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1068e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1068e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1068e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1068e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1068ec: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1068ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1068f0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1068f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1068f4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1068f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1068f8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1068f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1068fc:
    // 0x1068fc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1068fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_106900:
    // 0x106900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x106900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x106904: 0x8ce43d7c  lw          $a0, 0x3D7C($a3)
    ctx->pc = 0x106904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 15740)));
    // 0x106908: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x106908u;
    {
        const bool branch_taken_0x106908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106908u;
        // 0x10690c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106908) {
            ctx->pc = 0x10696Cu;
            goto label_10696c;
        }
    }
    ctx->pc = 0x106910u;
    // 0x106910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106914: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x106914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x106918: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x106918u;
    {
        const bool branch_taken_0x106918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106918u;
        // 0x10691c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106918) {
            ctx->pc = 0x10696Cu;
            goto label_10696c;
        }
    }
    ctx->pc = 0x106920u;
    // 0x106920: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x106920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x106924: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x106924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x106928: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x106928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10692c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106930: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x106930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x106934: 0x8ca23dac  lw          $v0, 0x3DAC($a1)
    ctx->pc = 0x106934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x106938: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106938u;
    {
        const bool branch_taken_0x106938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106938u;
        // 0x10693c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106938) {
            ctx->pc = 0x106948u;
            goto label_106948;
        }
    }
    ctx->pc = 0x106940u;
    // 0x106940: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x106940u;
    {
        const bool branch_taken_0x106940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106940u;
        // 0x106944: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106940) {
            ctx->pc = 0x106968u;
            goto label_106968;
        }
    }
    ctx->pc = 0x106948u;
label_106948:
    // 0x106948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10694c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10694cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x106950: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x106950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x106954: 0x8cc23dac  lw          $v0, 0x3DAC($a2)
    ctx->pc = 0x106954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x106958: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x106958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10695c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x10695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106960: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106964: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x106964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_106968:
    // 0x106968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10696c:
    // 0x10696c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x10696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x106970: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x106970u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106974: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x106974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106978: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x106978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10697c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10697cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106980: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x106980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106984: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x106984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106988: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x106988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10698c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10698cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106990: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x106990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106994: 0x3e00008  jr          $ra
    ctx->pc = 0x106994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106994u;
        // 0x106998: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10699Cu;
}
