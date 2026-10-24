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

// Function: Fade_set
// Address: 0x164640 - 0x164774
void Fade_set_0x164640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fade_set_0x164640");
#endif

    ctx->pc = 0x164640u;

    // 0x164640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164648: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x164648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x16464c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16464cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x164650: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x164650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x164654: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x164654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x164658: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x164658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x16465c: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x16465cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x164660: 0xafaa0048  sw          $t2, 0x48($sp)
    ctx->pc = 0x164660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 10));
    // 0x164664: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164668: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x164668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16466c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164670: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164678: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16467c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x164680: 0x246358a0  addiu       $v1, $v1, 0x58A0
    ctx->pc = 0x164680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22688));
    // 0x164684: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x164684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164688: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16468c: 0x26030048  addiu       $v1, $s0, 0x48
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x164690: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x164690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x164694: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x164694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164698: 0x2603004c  addiu       $v1, $s0, 0x4C
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x16469c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x16469cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1646a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1646a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1646a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1646a8: 0xa2030055  sb          $v1, 0x55($s0)
    ctx->pc = 0x1646a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x1646ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1646acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1646b0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1646b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1646b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1646b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1646b8: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x1646b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x1646bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1646bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1646c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1646c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1646c4: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x1646c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x1646c8: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x1646c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x1646cc: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1646d0: 0xa6030040  sh          $v1, 0x40($s0)
    ctx->pc = 0x1646d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x1646d4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1646d8: 0xa6030042  sh          $v1, 0x42($s0)
    ctx->pc = 0x1646d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 3));
    // 0x1646dc: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x1646dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x1646e0: 0xa6030044  sh          $v1, 0x44($s0)
    ctx->pc = 0x1646e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 3));
    // 0x1646e4: 0x24030e00  addiu       $v1, $zero, 0xE00
    ctx->pc = 0x1646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1646e8: 0xa6030046  sh          $v1, 0x46($s0)
    ctx->pc = 0x1646e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1646ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1646ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1646f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1646f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1646f4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1646F4u;
    {
        const bool branch_taken_0x1646f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1646f4) {
            ctx->pc = 0x164750u;
            goto label_164750;
        }
    }
    ctx->pc = 0x1646FCu;
    // 0x1646fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1646fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164700: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x164700u;
    {
        const bool branch_taken_0x164700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164700) {
            ctx->pc = 0x164734u;
            goto label_164734;
        }
    }
    ctx->pc = 0x164708u;
    // 0x164708: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164708u;
    {
        const bool branch_taken_0x164708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164708) {
            ctx->pc = 0x164718u;
            goto label_164718;
        }
    }
    ctx->pc = 0x164710u;
    // 0x164710: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x164710u;
    {
        const bool branch_taken_0x164710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164710) {
            ctx->pc = 0x164764u;
            goto label_164764;
        }
    }
    ctx->pc = 0x164718u;
label_164718:
    // 0x164718: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x16471c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x164720: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x164720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x164724: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164728: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x164728u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x16472c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16472Cu;
    {
        const bool branch_taken_0x16472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16472c) {
            ctx->pc = 0x164764u;
            goto label_164764;
        }
    }
    ctx->pc = 0x164734u;
label_164734:
    // 0x164734: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x164738: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x164738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16473c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x16473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x164740: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164744: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x164744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x164748: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164748u;
    {
        const bool branch_taken_0x164748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164748) {
            ctx->pc = 0x164764u;
            goto label_164764;
        }
    }
    ctx->pc = 0x164750u;
label_164750:
    // 0x164750: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x164754: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x164758: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x164758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x16475c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164760: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x164760u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
label_164764:
    // 0x164764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164768: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x164768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16476c: 0x3e00008  jr          $ra
    ctx->pc = 0x16476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164774u;
}
