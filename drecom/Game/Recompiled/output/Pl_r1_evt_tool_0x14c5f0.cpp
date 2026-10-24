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

// Function: Pl_r1_evt_tool
// Address: 0x14c5f0 - 0x14c708
void Pl_r1_evt_tool_0x14c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_evt_tool_0x14c5f0");
#endif

    switch (ctx->pc) {
        case 0x14c650u: goto label_14c650;
        case 0x14c664u: goto label_14c664;
        case 0x14c698u: goto label_14c698;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6e0u: goto label_14c6e0;
        default: break;
    }

    ctx->pc = 0x14c5f0u;

    // 0x14c5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c5f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14c5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14c5f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14c5fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c600: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14c600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c604: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14c604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14c608: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c60c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14C60Cu;
    {
        const bool branch_taken_0x14c60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c60c) {
            ctx->pc = 0x14C6F8u;
            goto label_14c6f8;
        }
    }
    ctx->pc = 0x14C614u;
    // 0x14c614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c618: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14C618u;
    {
        const bool branch_taken_0x14c618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c618) {
            ctx->pc = 0x14C688u;
            goto label_14c688;
        }
    }
    ctx->pc = 0x14C620u;
    // 0x14c620: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C620u;
    {
        const bool branch_taken_0x14c620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c620) {
            ctx->pc = 0x14C630u;
            goto label_14c630;
        }
    }
    ctx->pc = 0x14C628u;
    // 0x14c628: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14C628u;
    {
        const bool branch_taken_0x14c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c628) {
            ctx->pc = 0x14C6F8u;
            goto label_14c6f8;
        }
    }
    ctx->pc = 0x14C630u;
label_14c630:
    // 0x14c630: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c634: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c638: 0x8c450364  lw          $a1, 0x364($v0)
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x14c63c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14c63cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c640: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c644: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c648: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x14C648u;
    SET_GPR_U32(ctx, 31, 0x14C650u);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x14C648u, 0x14C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C650u;
label_14c650:
    // 0x14c650: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c654: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c658: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x14c658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x14c65c: 0xc096c60  jal         func_25B180
    ctx->pc = 0x14C65Cu;
    SET_GPR_U32(ctx, 31, 0x14C664u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x14C65Cu, 0x14C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C664u;
label_14c664:
    // 0x14c664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c668: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c66c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14c66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14c670: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c674: 0xac209230  sw          $zero, -0x6DD0($at)
    ctx->pc = 0x14c674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9230u, _value); } while (0);
    // 0x14c678: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c67c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c684: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c688:
    // 0x14c688: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c68c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c68cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c690: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C690u;
    SET_GPR_U32(ctx, 31, 0x14C698u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C690u, 0x14C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C698u;
label_14c698:
    // 0x14c698: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c69c: 0x8c229230  lw          $v0, -0x6DD0($at)
    ctx->pc = 0x14c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9230u));
    // 0x14c6a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C6A0u;
    {
        const bool branch_taken_0x14c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6a0) {
            ctx->pc = 0x14C6B4u;
            goto label_14c6b4;
        }
    }
    ctx->pc = 0x14C6A8u;
    // 0x14c6a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6ac: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x14C6ACu;
    SET_GPR_U32(ctx, 31, 0x14C6B4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x14C6ACu, 0x14C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6B4u;
label_14c6b4:
    // 0x14c6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c6b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c6bc: 0xac229230  sw          $v0, -0x6DD0($at)
    ctx->pc = 0x14c6bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9230u, _value); } while (0);
    // 0x14c6c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c6c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c6cc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C6CCu;
    SET_GPR_U32(ctx, 31, 0x14C6D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C6CCu, 0x14C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6D4u;
label_14c6d4:
    // 0x14c6d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6d8: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x14C6D8u;
    SET_GPR_U32(ctx, 31, 0x14C6E0u);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x14C6D8u, 0x14C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6E0u;
label_14c6e0:
    // 0x14c6e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c6e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C6E8u;
    {
        const bool branch_taken_0x14c6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6e8) {
            ctx->pc = 0x14C6F8u;
            goto label_14c6f8;
        }
    }
    ctx->pc = 0x14C6F0u;
    // 0x14c6f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c6f4: 0xac209230  sw          $zero, -0x6DD0($at)
    ctx->pc = 0x14c6f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9230u, _value); } while (0);
label_14c6f8:
    // 0x14c6f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14c6f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c6fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14c6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14c700: 0x3e00008  jr          $ra
    ctx->pc = 0x14C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C708u;
}
