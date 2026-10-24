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

// Function: entry_00377814
// Address: 0x377814 - 0x3778f4
void entry_00377814_0x377814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377814_0x377814");
#endif

    ctx->pc = 0x377814u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x3778F4u;
}
