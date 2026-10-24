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

// Function: Event_exec_face
// Address: 0x3777f0 - 0x377960
void Event_exec_face_0x3777f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_face_0x3777f0");
#endif

    switch (ctx->pc) {
        case 0x377814u: goto label_377814;
        case 0x377920u: goto label_377920;
        default: break;
    }

    ctx->pc = 0x3777f0u;

    // 0x3777f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3777f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3777f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x3777f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x3777f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3777f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3777fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3777fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377808: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x377808u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37780c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x37780Cu;
    {
        const bool branch_taken_0x37780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37780c) {
            ctx->pc = 0x377928u;
            goto label_377928;
        }
    }
    ctx->pc = 0x377814u;
label_377814:
    // 0x377814: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377818: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37781c: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x37781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x377820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377824: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x377824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377828: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x37782c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x37782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377830: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377838: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x377838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x37783c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x37783Cu;
    {
        const bool branch_taken_0x37783c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37783c) {
            ctx->pc = 0x377908u;
            goto label_377908;
        }
    }
    ctx->pc = 0x377844u;
    // 0x377844: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377848: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37784c: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x37784cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377854: 0x8c720084  lw          $s2, 0x84($v1)
    ctx->pc = 0x377854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x377858: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x377858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37785c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x37785cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377860: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377864: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x377864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x377868: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x377868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37786c: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x37786Cu;
    {
        const bool branch_taken_0x37786c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37786c) {
            ctx->pc = 0x377908u;
            goto label_377908;
        }
    }
    ctx->pc = 0x377874u;
    // 0x377874: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x377874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x377878: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x377878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37787c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x37787cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x377880: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x377880u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377884: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x377884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x377888: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37788c: 0x8c230390  lw          $v1, 0x390($at)
    ctx->pc = 0x37788cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x9A0390u));
    // 0x377890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377894: 0x247312c4  addiu       $s3, $v1, 0x12C4
    ctx->pc = 0x377894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4804));
    // 0x377898: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x377898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x37789c: 0xae031304  sw          $v1, 0x1304($s0)
    ctx->pc = 0x37789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4868), GPR_U32(ctx, 3));
    // 0x3778a0: 0x8e031304  lw          $v1, 0x1304($s0)
    ctx->pc = 0x3778a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4868)));
    // 0x3778a4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3778a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3778a8: 0xa603130a  sh          $v1, 0x130A($s0)
    ctx->pc = 0x3778a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4874), (uint16_t)GPR_U32(ctx, 3));
    // 0x3778ac: 0x8e031304  lw          $v1, 0x1304($s0)
    ctx->pc = 0x3778acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4868)));
    // 0x3778b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3778b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3778b4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3778b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3778b8: 0xa603130c  sh          $v1, 0x130C($s0)
    ctx->pc = 0x3778b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4876), (uint16_t)GPR_U32(ctx, 3));
    // 0x3778bc: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x3778bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x3778c0: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x3778c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x3778c4: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x3778c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3778c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3778c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3778cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3778ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3778d0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3778D0u;
    {
        const bool branch_taken_0x3778d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3778d0) {
            ctx->pc = 0x3778F4u;
            goto label_3778f4;
        }
    }
    ctx->pc = 0x3778D8u;
    // 0x3778d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3778d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3778dc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3778dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3778e0: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3778e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3778e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3778e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3778e8: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x3778e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x3778ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3778ECu;
    {
        const bool branch_taken_0x3778ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3778ec) {
            ctx->pc = 0x377908u;
            goto label_377908;
        }
    }
    ctx->pc = 0x3778F4u;
label_3778f4:
    // 0x3778f4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3778f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3778f8: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3778f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3778fc: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3778fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377904: 0xac720084  sw          $s2, 0x84($v1)
    ctx->pc = 0x377904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 18));
label_377908:
    // 0x377908: 0x8e031304  lw          $v1, 0x1304($s0)
    ctx->pc = 0x377908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4868)));
    // 0x37790c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37790Cu;
    {
        const bool branch_taken_0x37790c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37790c) {
            ctx->pc = 0x377920u;
            goto label_377920;
        }
    }
    ctx->pc = 0x377914u;
    // 0x377914: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x377914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x377918: 0xc06c58c  jal         func_1B1630
    ctx->pc = 0x377918u;
    SET_GPR_U32(ctx, 31, 0x377920u);
    ctx->pc = 0x1B1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1630u, 0x377918u, 0x377920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377920u;
label_377920:
    // 0x377920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x377920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x377924: 0x0  nop
    ctx->pc = 0x377924u;
    // NOP
label_377928:
    // 0x377928: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37792c: 0x90230396  lbu         $v1, 0x396($at)
    ctx->pc = 0x37792cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x377930: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x377934: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x377934u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377938: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x377938u;
    {
        const bool branch_taken_0x377938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377938) {
            ctx->pc = 0x377814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377814;
        }
    }
    ctx->pc = 0x377940u;
    // 0x377940: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x377940u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37794c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37794cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377954: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x377954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x377958: 0x3e00008  jr          $ra
    ctx->pc = 0x377958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377960u;
}
