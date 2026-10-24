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

// Function: Em10_eye_catch
// Address: 0x135050 - 0x1351b8
void Em10_eye_catch_0x135050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_eye_catch_0x135050");
#endif

    ctx->pc = 0x135050u;

    // 0x135050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x135058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13505c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135060: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x135060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x135064: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x135064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x135068: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x135068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13506c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x13506Cu;
    {
        const bool branch_taken_0x13506c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13506c) {
            ctx->pc = 0x135148u;
            goto label_135148;
        }
    }
    ctx->pc = 0x135074u;
    // 0x135074: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x135074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x135078: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x135078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13507c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135080: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x135080u;
    {
        const bool branch_taken_0x135080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135080) {
            ctx->pc = 0x135104u;
            goto label_135104;
        }
    }
    ctx->pc = 0x135088u;
    // 0x135088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13508c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13508Cu;
    {
        const bool branch_taken_0x13508c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13508c) {
            ctx->pc = 0x1350C0u;
            goto label_1350c0;
        }
    }
    ctx->pc = 0x135094u;
    // 0x135094: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135094u;
    {
        const bool branch_taken_0x135094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135094) {
            ctx->pc = 0x1350A4u;
            goto label_1350a4;
        }
    }
    ctx->pc = 0x13509Cu;
    // 0x13509c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13509Cu;
    {
        const bool branch_taken_0x13509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13509c) {
            ctx->pc = 0x135150u;
            goto label_135150;
        }
    }
    ctx->pc = 0x1350A4u;
label_1350a4:
    // 0x1350a4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1350a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1350a8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1350a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1350ac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1350acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1350b0: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x1350b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1350b4: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x1350b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1350b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1350b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1350bc: 0xa2030096  sb          $v1, 0x96($s0)
    ctx->pc = 0x1350bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 3));
label_1350c0:
    // 0x1350c0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1350c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1350c4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1350c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1350c8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1350c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1350cc: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x1350ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x1350d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1350D0u;
    {
        const bool branch_taken_0x1350d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350d0) {
            ctx->pc = 0x1350ECu;
            goto label_1350ec;
        }
    }
    ctx->pc = 0x1350D8u;
    // 0x1350d8: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x1350d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x1350dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1350dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1350e0: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x1350e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1350e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1350E4u;
    {
        const bool branch_taken_0x1350e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350e4) {
            ctx->pc = 0x135150u;
            goto label_135150;
        }
    }
    ctx->pc = 0x1350ECu;
label_1350ec:
    // 0x1350ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1350ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1350f0: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x1350f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x1350f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1350f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1350f8: 0xa2030096  sb          $v1, 0x96($s0)
    ctx->pc = 0x1350f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x1350fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1350FCu;
    {
        const bool branch_taken_0x1350fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350fc) {
            ctx->pc = 0x135150u;
            goto label_135150;
        }
    }
    ctx->pc = 0x135104u;
label_135104:
    // 0x135104: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x135104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135108: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x135108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x13510c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x13510cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x135110: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x135110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x135114: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135114u;
    {
        const bool branch_taken_0x135114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135114) {
            ctx->pc = 0x135130u;
            goto label_135130;
        }
    }
    ctx->pc = 0x13511Cu;
    // 0x13511c: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x13511cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x135120: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135124: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x135124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x135128: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x135128u;
    {
        const bool branch_taken_0x135128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135128) {
            ctx->pc = 0x135150u;
            goto label_135150;
        }
    }
    ctx->pc = 0x135130u;
label_135130:
    // 0x135130: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x135130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135134: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x135134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x135138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13513c: 0xa2030096  sb          $v1, 0x96($s0)
    ctx->pc = 0x13513cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x135140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x135140u;
    {
        const bool branch_taken_0x135140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135140) {
            ctx->pc = 0x135150u;
            goto label_135150;
        }
    }
    ctx->pc = 0x135148u;
label_135148:
    // 0x135148: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x135148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13514c: 0xa2000096  sb          $zero, 0x96($s0)
    ctx->pc = 0x13514cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 0));
label_135150:
    // 0x135150: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x135150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135158: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x135158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13515c: 0xac640f90  sw          $a0, 0xF90($v1)
    ctx->pc = 0x13515cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3984), GPR_U32(ctx, 4));
    // 0x135160: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x135160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135164: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135168: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x135168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13516c: 0xac640f94  sw          $a0, 0xF94($v1)
    ctx->pc = 0x13516cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3988), GPR_U32(ctx, 4));
    // 0x135170: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x135170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135174: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135178: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x135178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13517c: 0xac640f98  sw          $a0, 0xF98($v1)
    ctx->pc = 0x13517cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3992), GPR_U32(ctx, 4));
    // 0x135180: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135184: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x135184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x135188: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x135188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13518c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13518cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x135190: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x135190u;
    {
        const bool branch_taken_0x135190 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x135190) {
            ctx->pc = 0x1351A8u;
            goto label_1351a8;
        }
    }
    ctx->pc = 0x135198u;
    // 0x135198: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x135198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13519c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1351a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1351a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1351a4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1351a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1351a8:
    // 0x1351a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1351a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1351ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1351b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1351B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1351B8u;
}
