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

// Function: Event_exec_pos
// Address: 0x377570 - 0x377690
void Event_exec_pos_0x377570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Event_exec_pos_0x377570");
#endif

    switch (ctx->pc) {
        case 0x37758cu: goto label_37758c;
        default: break;
    }

    ctx->pc = 0x377570u;

    // 0x377570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x377578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37757c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377580: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x377580u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x377584: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x377584u;
    {
        const bool branch_taken_0x377584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377584) {
            ctx->pc = 0x377660u;
            goto label_377660;
        }
    }
    ctx->pc = 0x37758Cu;
label_37758c:
    // 0x37758c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x37758cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377590: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377594: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37759c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775a0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3775A0u;
    {
        const bool branch_taken_0x3775a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3775a0) {
            ctx->pc = 0x377658u;
            goto label_377658;
        }
    }
    ctx->pc = 0x3775A8u;
    // 0x3775a8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3775a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3775ac: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3775acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3775b0: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3775b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3775b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3775b8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3775b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3775bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3775c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3775c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3775c4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3775c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3775c8: 0x94230394  lhu         $v1, 0x394($at)
    ctx->pc = 0x3775c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x9A0394u));
    // 0x3775cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3775ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3775d0: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3775D0u;
    {
        const bool branch_taken_0x3775d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3775d0) {
            ctx->pc = 0x377658u;
            goto label_377658;
        }
    }
    ctx->pc = 0x3775D8u;
    // 0x3775d8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3775d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3775dc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x3775dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x3775e0: 0x24630350  addiu       $v1, $v1, 0x350
    ctx->pc = 0x3775e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
    // 0x3775e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3775e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3775e8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3775e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775ec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3775ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3775f0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3775f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3775f4: 0x26430120  addiu       $v1, $s2, 0x120
    ctx->pc = 0x3775f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x3775f8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3775f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3775fc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3775fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x377600: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x377600u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377604: 0x264300d0  addiu       $v1, $s2, 0xD0
    ctx->pc = 0x377604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x377608: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x377608u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37760c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x37760cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x377610: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x377610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x377614: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x377614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x377618: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x377618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x37761c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37761Cu;
    {
        const bool branch_taken_0x37761c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37761c) {
            ctx->pc = 0x377640u;
            goto label_377640;
        }
    }
    ctx->pc = 0x377624u;
    // 0x377624: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377628: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x37762c: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x37762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x377630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377634: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x377634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x377638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x377638u;
    {
        const bool branch_taken_0x377638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377638) {
            ctx->pc = 0x377658u;
            goto label_377658;
        }
    }
    ctx->pc = 0x377640u;
label_377640:
    // 0x377640: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x377640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377644: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x377644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x377648: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x377648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x37764c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377650: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x377650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x377654: 0x0  nop
    ctx->pc = 0x377654u;
    // NOP
label_377658:
    // 0x377658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x377658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37765c: 0x0  nop
    ctx->pc = 0x37765cu;
    // NOP
label_377660:
    // 0x377660: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x377660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x377664: 0x90230396  lbu         $v1, 0x396($at)
    ctx->pc = 0x377664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x377668: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37766c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x37766cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x377670: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x377670u;
    {
        const bool branch_taken_0x377670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377670) {
            ctx->pc = 0x37758Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37758c;
        }
    }
    ctx->pc = 0x377678u;
    // 0x377678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37767c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37767cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x377684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x377688: 0x3e00008  jr          $ra
    ctx->pc = 0x377688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377690u;
}
