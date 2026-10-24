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

// Function: Em05_R1_revive
// Address: 0x20d620 - 0x20d774
void Em05_R1_revive_0x20d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_revive_0x20d620");
#endif

    switch (ctx->pc) {
        case 0x20d674u: goto label_20d674;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d6dcu: goto label_20d6dc;
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d700u: goto label_20d700;
        case 0x20d710u: goto label_20d710;
        case 0x20d71cu: goto label_20d71c;
        default: break;
    }

    ctx->pc = 0x20d620u;

    // 0x20d620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d624: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x20d624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20d628: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x20d628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x20d62c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d630: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20d630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d634: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20d634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20d638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d63c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x20D63Cu;
    {
        const bool branch_taken_0x20d63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d63c) {
            ctx->pc = 0x20D68Cu;
            goto label_20d68c;
        }
    }
    ctx->pc = 0x20D644u;
    // 0x20d644: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D644u;
    {
        const bool branch_taken_0x20d644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d644) {
            ctx->pc = 0x20D654u;
            goto label_20d654;
        }
    }
    ctx->pc = 0x20D64Cu;
    // 0x20d64c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x20D64Cu;
    {
        const bool branch_taken_0x20d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d64c) {
            ctx->pc = 0x20D764u;
            goto label_20d764;
        }
    }
    ctx->pc = 0x20D654u;
label_20d654:
    // 0x20d654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d65c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20d660: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x20d660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x20d664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20d664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d668: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d66c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D66Cu;
    SET_GPR_U32(ctx, 31, 0x20D674u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D66Cu, 0x20D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D674u;
label_20d674:
    // 0x20d674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d678: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d67c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d680: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d688: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20d68c:
    // 0x20d68c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d690: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20d690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20d694: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20d694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d698: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20d698u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20d69c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20d6a0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D6A0u;
    {
        const bool branch_taken_0x20d6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d6a0) {
            ctx->pc = 0x20D6E4u;
            goto label_20d6e4;
        }
    }
    ctx->pc = 0x20D6A8u;
    // 0x20d6a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6ac: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20d6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20d6b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d6b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20d6b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D6B8u;
    {
        const bool branch_taken_0x20d6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d6b8) {
            ctx->pc = 0x20D6DCu;
            goto label_20d6dc;
        }
    }
    ctx->pc = 0x20D6C0u;
    // 0x20d6c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20D6C0u;
    SET_GPR_U32(ctx, 31, 0x20D6C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20D6C0u, 0x20D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6C8u;
label_20d6c8:
    // 0x20d6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d6cc: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20d6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20d6d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6d4: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20D6D4u;
    SET_GPR_U32(ctx, 31, 0x20D6DCu);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20D6D4u, 0x20D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6DCu;
label_20d6dc:
    // 0x20d6dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6e0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20d6e4:
    // 0x20d6e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d6ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D6ECu;
    SET_GPR_U32(ctx, 31, 0x20D6F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D6ECu, 0x20D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6F4u;
label_20d6f4:
    // 0x20d6f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d6f8: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20D6F8u;
    SET_GPR_U32(ctx, 31, 0x20D700u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20D6F8u, 0x20D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D700u;
label_20d700:
    // 0x20d700: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d708: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20D708u;
    SET_GPR_U32(ctx, 31, 0x20D710u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20D708u, 0x20D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D710u;
label_20d710:
    // 0x20d710: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20d710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d714: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D714u;
    SET_GPR_U32(ctx, 31, 0x20D71Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D714u, 0x20D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D71Cu;
label_20d71c:
    // 0x20d71c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d720: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d724: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20D724u;
    {
        const bool branch_taken_0x20d724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d724) {
            ctx->pc = 0x20D764u;
            goto label_20d764;
        }
    }
    ctx->pc = 0x20D72Cu;
    // 0x20d72c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d730: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20d730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d73c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d740: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d748: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20d748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d74c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d750: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d758: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d75c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d760: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20d764:
    // 0x20d764: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x20d764u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20d768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20d76c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D774u;
}
