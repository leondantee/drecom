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

// Function: Em0a_R1_throw_eye
// Address: 0x365630 - 0x365768
void Em0a_R1_throw_eye_0x365630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_throw_eye_0x365630");
#endif

    switch (ctx->pc) {
        case 0x365690u: goto label_365690;
        case 0x3656f0u: goto label_3656f0;
        case 0x3656fcu: goto label_3656fc;
        case 0x36570cu: goto label_36570c;
        case 0x365718u: goto label_365718;
        default: break;
    }

    ctx->pc = 0x365630u;

    // 0x365630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365634: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x365634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x365638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36563c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x365640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365644: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x365644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x365648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36564c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36564cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365650: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x365650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365658: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x365658u;
    {
        const bool branch_taken_0x365658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365658) {
            ctx->pc = 0x3656A0u;
            goto label_3656a0;
        }
    }
    ctx->pc = 0x365660u;
    // 0x365660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365660u;
    {
        const bool branch_taken_0x365660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365660) {
            ctx->pc = 0x365670u;
            goto label_365670;
        }
    }
    ctx->pc = 0x365668u;
    // 0x365668: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x365668u;
    {
        const bool branch_taken_0x365668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365668) {
            ctx->pc = 0x365754u;
            goto label_365754;
        }
    }
    ctx->pc = 0x365670u;
label_365670:
    // 0x365670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365678: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36567c: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x36567cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x365680: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365684: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365688: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365688u;
    SET_GPR_U32(ctx, 31, 0x365690u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365688u, 0x365690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365690u;
label_365690:
    // 0x365690: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365694: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36569c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36569cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3656a0:
    // 0x3656a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3656a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3656a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3656a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3656ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3656acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3656b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3656B0u;
    {
        const bool branch_taken_0x3656b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656b0) {
            ctx->pc = 0x3656E0u;
            goto label_3656e0;
        }
    }
    ctx->pc = 0x3656B8u;
    // 0x3656b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3656bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3656c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3656c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3656c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3656c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3656c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3656C8u;
    {
        const bool branch_taken_0x3656c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656c8) {
            ctx->pc = 0x3656E0u;
            goto label_3656e0;
        }
    }
    ctx->pc = 0x3656D0u;
    // 0x3656d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3656d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3656d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3656d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3656dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3656dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3656e0:
    // 0x3656e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3656e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3656e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3656e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3656E8u;
    SET_GPR_U32(ctx, 31, 0x3656F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3656E8u, 0x3656F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656F0u;
label_3656f0:
    // 0x3656f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3656f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3656F4u;
    SET_GPR_U32(ctx, 31, 0x3656FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3656F4u, 0x3656FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656FCu;
label_3656fc:
    // 0x3656fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3656fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365704: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365704u;
    SET_GPR_U32(ctx, 31, 0x36570Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365704u, 0x36570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36570Cu;
label_36570c:
    // 0x36570c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365710: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365710u;
    SET_GPR_U32(ctx, 31, 0x365718u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365710u, 0x365718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365718u;
label_365718:
    // 0x365718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36571c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36571cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365720: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x365720u;
    {
        const bool branch_taken_0x365720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365720) {
            ctx->pc = 0x365754u;
            goto label_365754;
        }
    }
    ctx->pc = 0x365728u;
    // 0x365728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36572c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365730: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365734: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365738: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x365738u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36573c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365740: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365744: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365748: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36574c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365750: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365754:
    // 0x365754: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x365754u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36575c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36575cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x365760: 0x3e00008  jr          $ra
    ctx->pc = 0x365760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365768u;
}
