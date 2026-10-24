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

// Function: Em00_R0_die
// Address: 0x2d5050 - 0x2d5188
void Em00_R0_die_0x2d5050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R0_die_0x2d5050");
#endif

    switch (ctx->pc) {
        case 0x2d50bcu: goto label_2d50bc;
        case 0x2d50ecu: goto label_2d50ec;
        case 0x2d50f8u: goto label_2d50f8;
        case 0x2d5108u: goto label_2d5108;
        case 0x2d5114u: goto label_2d5114;
        case 0x2d515cu: goto label_2d515c;
        case 0x2d5178u: goto label_2d5178;
        default: break;
    }

    ctx->pc = 0x2d5050u;

    // 0x2d5050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5054: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d5054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d5058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d5058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d505c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5060: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d5060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d5064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d5064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5068: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d5068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d506c: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D506Cu;
    {
        const bool branch_taken_0x2d506c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d506c) {
            ctx->pc = 0x2D516Cu;
            goto label_2d516c;
        }
    }
    ctx->pc = 0x2D5074u;
    // 0x2d5074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d5074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5078: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D5078u;
    {
        const bool branch_taken_0x2d5078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5078) {
            ctx->pc = 0x2D513Cu;
            goto label_2d513c;
        }
    }
    ctx->pc = 0x2D5080u;
    // 0x2d5080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d5080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5084: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D5084u;
    {
        const bool branch_taken_0x2d5084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5084) {
            ctx->pc = 0x2D50DCu;
            goto label_2d50dc;
        }
    }
    ctx->pc = 0x2D508Cu;
    // 0x2d508c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D508Cu;
    {
        const bool branch_taken_0x2d508c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d508c) {
            ctx->pc = 0x2D509Cu;
            goto label_2d509c;
        }
    }
    ctx->pc = 0x2D5094u;
    // 0x2d5094: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2D5094u;
    {
        const bool branch_taken_0x2d5094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5094) {
            ctx->pc = 0x2D5178u;
            goto label_2d5178;
        }
    }
    ctx->pc = 0x2D509Cu;
label_2d509c:
    // 0x2d509c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d50a8: 0x2406641a  addiu       $a2, $zero, 0x641A
    ctx->pc = 0x2d50a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25626));
    // 0x2d50ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d50acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d50b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d50b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d50b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D50B4u;
    SET_GPR_U32(ctx, 31, 0x2D50BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D50B4u, 0x2D50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50BCu;
label_2d50bc:
    // 0x2d50bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50c0: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x2d50c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2d50c4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2d50c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2d50c8: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2d50c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d50cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d50d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d50d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d50d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d50d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d50dc:
    // 0x2d50dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d50e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d50e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D50E4u;
    SET_GPR_U32(ctx, 31, 0x2D50ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D50E4u, 0x2D50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50ECu;
label_2d50ec:
    // 0x2d50ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D50F0u;
    SET_GPR_U32(ctx, 31, 0x2D50F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D50F0u, 0x2D50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D50F8u;
label_2d50f8:
    // 0x2d50f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d50fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d50fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d5100: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D5100u;
    SET_GPR_U32(ctx, 31, 0x2D5108u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D5100u, 0x2D5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5108u;
label_2d5108:
    // 0x2d5108: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d510c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D510Cu;
    SET_GPR_U32(ctx, 31, 0x2D5114u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D510Cu, 0x2D5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5114u;
label_2d5114:
    // 0x2d5114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d5114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5118: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d5118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d511c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D511Cu;
    {
        const bool branch_taken_0x2d511c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d511c) {
            ctx->pc = 0x2D5178u;
            goto label_2d5178;
        }
    }
    ctx->pc = 0x2D5124u;
    // 0x2d5124: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5128: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d5128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d512c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5130: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d5130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d5134: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5134u;
    {
        const bool branch_taken_0x2d5134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5134) {
            ctx->pc = 0x2D5178u;
            goto label_2d5178;
        }
    }
    ctx->pc = 0x2D513Cu;
label_2d513c:
    // 0x2d513c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5140: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5144: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d5148: 0x2406641b  addiu       $a2, $zero, 0x641B
    ctx->pc = 0x2d5148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25627));
    // 0x2d514c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d514cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5150: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d5150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d5154: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D5154u;
    SET_GPR_U32(ctx, 31, 0x2D515Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D5154u, 0x2D515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D515Cu;
label_2d515c:
    // 0x2d515c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5160: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d5160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d5164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5168: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d5168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d516c:
    // 0x2d516c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5170: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D5170u;
    SET_GPR_U32(ctx, 31, 0x2D5178u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D5170u, 0x2D5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5178u;
label_2d5178:
    // 0x2d5178: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d5178u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d517c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d517cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5180: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5188u;
}
