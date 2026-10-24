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

// Function: Em01_R1_def_hand
// Address: 0x3045e0 - 0x304780
void Em01_R1_def_hand_0x3045e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_def_hand_0x3045e0");
#endif

    switch (ctx->pc) {
        case 0x304648u: goto label_304648;
        case 0x304680u: goto label_304680;
        case 0x30468cu: goto label_30468c;
        case 0x3046c8u: goto label_3046c8;
        case 0x3046dcu: goto label_3046dc;
        case 0x3046f4u: goto label_3046f4;
        case 0x304700u: goto label_304700;
        case 0x304710u: goto label_304710;
        case 0x30471cu: goto label_30471c;
        default: break;
    }

    ctx->pc = 0x3045e0u;

    // 0x3045e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3045e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3045e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3045e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3045e8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3045e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3045ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3045ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3045f0: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x3045f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x3045f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3045f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3045f8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3045f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399520u));
    // 0x3045fc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3045fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x304600: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304604: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x304604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304608: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x304608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30460c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304610: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x304610u;
    {
        const bool branch_taken_0x304610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x304610) {
            ctx->pc = 0x30469Cu;
            goto label_30469c;
        }
    }
    ctx->pc = 0x304618u;
    // 0x304618: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304618u;
    {
        const bool branch_taken_0x304618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304618) {
            ctx->pc = 0x304628u;
            goto label_304628;
        }
    }
    ctx->pc = 0x304620u;
    // 0x304620: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x304620u;
    {
        const bool branch_taken_0x304620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304620) {
            ctx->pc = 0x304770u;
            goto label_304770;
        }
    }
    ctx->pc = 0x304628u;
label_304628:
    // 0x304628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x304628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30462c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304630: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304634: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x304634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x304638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30463c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30463cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304640: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304640u;
    SET_GPR_U32(ctx, 31, 0x304648u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304640u, 0x304648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304648u;
label_304648:
    // 0x304648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x304648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30464c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304650: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x304650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304654: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304658: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30465c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304660: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304668: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x304668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30466c: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x30466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x304670: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304674: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x304674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304678: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x304678u;
    SET_GPR_U32(ctx, 31, 0x304680u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x304678u, 0x304680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304680u;
label_304680:
    // 0x304680: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x304680u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x304684: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x304684u;
    SET_GPR_U32(ctx, 31, 0x30468Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x304684u, 0x30468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30468Cu;
label_30468c:
    // 0x30468c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304690: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304698: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30469c:
    // 0x30469c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3046a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3046a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3046a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3046a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3046a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3046a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3046acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3046b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046b4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3046b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3046b8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3046b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3046bc: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3046bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3046c0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3046C0u;
    SET_GPR_U32(ctx, 31, 0x3046C8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3046C0u, 0x3046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C8u;
label_3046c8:
    // 0x3046c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3046c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3046ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3046d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3046d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3046d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3046D4u;
    SET_GPR_U32(ctx, 31, 0x3046DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3046D4u, 0x3046DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046DCu;
label_3046dc:
    // 0x3046dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3046e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3046e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3046e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3046e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3046ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3046ECu;
    SET_GPR_U32(ctx, 31, 0x3046F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3046ECu, 0x3046F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046F4u;
label_3046f4:
    // 0x3046f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3046f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3046f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3046F8u;
    SET_GPR_U32(ctx, 31, 0x304700u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3046F8u, 0x304700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304700u;
label_304700:
    // 0x304700: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x304700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304704: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304708: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304708u;
    SET_GPR_U32(ctx, 31, 0x304710u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304708u, 0x304710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304710u;
label_304710:
    // 0x304710: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x304710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304714: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304714u;
    SET_GPR_U32(ctx, 31, 0x30471Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304714u, 0x30471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30471Cu;
label_30471c:
    // 0x30471c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304720: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304724: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x304724u;
    {
        const bool branch_taken_0x304724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304724) {
            ctx->pc = 0x304770u;
            goto label_304770;
        }
    }
    ctx->pc = 0x30472Cu;
    // 0x30472c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304730: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x304730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x304734: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x304734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x304738: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30473c: 0xac641340  sw          $a0, 0x1340($v1)
    ctx->pc = 0x30473cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 4));
    // 0x304740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304744: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304748: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30474c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304750: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304754: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x304758: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30475c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30475cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x304760: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304764: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x304764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30476c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30476cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_304770:
    // 0x304770: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x304770u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304774: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x304774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304778: 0x3e00008  jr          $ra
    ctx->pc = 0x304778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304780u;
}
