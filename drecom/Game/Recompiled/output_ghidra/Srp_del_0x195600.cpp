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

// Function: Srp_del
// Address: 0x195600 - 0x1956fc
void Srp_del_0x195600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_del_0x195600");
#endif

    switch (ctx->pc) {
        case 0x195630u: goto label_195630;
        default: break;
    }

    ctx->pc = 0x195600u;

    // 0x195600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19560c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19560cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195610: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x195610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x195614: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195618: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x195618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x19561c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19561cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x195620: 0x2471a630  addiu       $s1, $v1, -0x59D0
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944304));
    // 0x195624: 0x8e300068  lw          $s0, 0x68($s1)
    ctx->pc = 0x195624u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A698u));
    // 0x195628: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x195628u;
    {
        const bool branch_taken_0x195628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195628) {
            ctx->pc = 0x1956E0u;
            goto label_1956e0;
        }
    }
    ctx->pc = 0x195630u;
label_195630:
    // 0x195630: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x195634: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195638: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195638u;
    {
        const bool branch_taken_0x195638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195638) {
            ctx->pc = 0x195650u;
            goto label_195650;
        }
    }
    ctx->pc = 0x195640u;
    // 0x195640: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195644: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195648: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x195648u;
    {
        const bool branch_taken_0x195648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195648) {
            ctx->pc = 0x1956D8u;
            goto label_1956d8;
        }
    }
    ctx->pc = 0x195650u;
label_195650:
    // 0x195650: 0x8e040354  lw          $a0, 0x354($s0)
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x195654: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195658: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195658u;
    {
        const bool branch_taken_0x195658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195658) {
            ctx->pc = 0x195670u;
            goto label_195670;
        }
    }
    ctx->pc = 0x195660u;
    // 0x195660: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195664: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195668: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x195668u;
    {
        const bool branch_taken_0x195668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195668) {
            ctx->pc = 0x1956D8u;
            goto label_1956d8;
        }
    }
    ctx->pc = 0x195670u;
label_195670:
    // 0x195670: 0x9203034d  lbu         $v1, 0x34D($s0)
    ctx->pc = 0x195670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 845)));
    // 0x195674: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195678: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19567c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19567Cu;
    {
        const bool branch_taken_0x19567c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19567c) {
            ctx->pc = 0x195698u;
            goto label_195698;
        }
    }
    ctx->pc = 0x195684u;
    // 0x195684: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195688: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19568c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19568Cu;
    {
        const bool branch_taken_0x19568c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19568c) {
            ctx->pc = 0x1956D8u;
            goto label_1956d8;
        }
    }
    ctx->pc = 0x195694u;
    // 0x195694: 0x0  nop
    ctx->pc = 0x195694u;
    // NOP
label_195698:
    // 0x195698: 0x8e040320  lw          $a0, 0x320($s0)
    ctx->pc = 0x195698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x19569c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1956a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1956A0u;
    {
        const bool branch_taken_0x1956a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1956a0) {
            ctx->pc = 0x1956B8u;
            goto label_1956b8;
        }
    }
    ctx->pc = 0x1956A8u;
    // 0x1956a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1956ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1956acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1956b0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1956B0u;
    {
        const bool branch_taken_0x1956b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1956b0) {
            ctx->pc = 0x1956D8u;
            goto label_1956d8;
        }
    }
    ctx->pc = 0x1956B8u;
label_1956b8:
    // 0x1956b8: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x1956bc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1956bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1956c0: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x1956c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x1956c4: 0x8e040b18  lw          $a0, 0xB18($s0)
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x1956c8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1956cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1956ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1956d0: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x1956d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x1956d4: 0x0  nop
    ctx->pc = 0x1956d4u;
    // NOP
label_1956d8:
    // 0x1956d8: 0x8e100b24  lw          $s0, 0xB24($s0)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2852)));
    // 0x1956dc: 0x0  nop
    ctx->pc = 0x1956dcu;
    // NOP
label_1956e0:
    // 0x1956e0: 0x1600ffd3  bnez        $s0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1956E0u;
    {
        const bool branch_taken_0x1956e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956e0) {
            ctx->pc = 0x195630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195630;
        }
    }
    ctx->pc = 0x1956E8u;
    // 0x1956e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1956e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1956ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1956f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1956f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1956F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1956FCu;
}
