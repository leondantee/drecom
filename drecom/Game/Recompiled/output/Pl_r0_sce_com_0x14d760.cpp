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

// Function: Pl_r0_sce_com
// Address: 0x14d760 - 0x14d878
void Pl_r0_sce_com_0x14d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_sce_com_0x14d760");
#endif

    switch (ctx->pc) {
        case 0x14d7c0u: goto label_14d7c0;
        case 0x14d7d4u: goto label_14d7d4;
        case 0x14d808u: goto label_14d808;
        case 0x14d824u: goto label_14d824;
        case 0x14d844u: goto label_14d844;
        case 0x14d850u: goto label_14d850;
        default: break;
    }

    ctx->pc = 0x14d760u;

    // 0x14d760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14d764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14d768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14d768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14d76c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d770: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14d770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14d774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d778: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d77c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14D77Cu;
    {
        const bool branch_taken_0x14d77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d77c) {
            ctx->pc = 0x14D868u;
            goto label_14d868;
        }
    }
    ctx->pc = 0x14D784u;
    // 0x14d784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d788: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14D788u;
    {
        const bool branch_taken_0x14d788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d788) {
            ctx->pc = 0x14D7F8u;
            goto label_14d7f8;
        }
    }
    ctx->pc = 0x14D790u;
    // 0x14d790: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D790u;
    {
        const bool branch_taken_0x14d790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d790) {
            ctx->pc = 0x14D7A0u;
            goto label_14d7a0;
        }
    }
    ctx->pc = 0x14D798u;
    // 0x14d798: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x14D798u;
    {
        const bool branch_taken_0x14d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d798) {
            ctx->pc = 0x14D868u;
            goto label_14d868;
        }
    }
    ctx->pc = 0x14D7A0u;
label_14d7a0:
    // 0x14d7a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7a8: 0x8c450364  lw          $a1, 0x364($v0)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x14d7ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14d7acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d7b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d7b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d7b8: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x14D7B8u;
    SET_GPR_U32(ctx, 31, 0x14D7C0u);
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x14D7B8u, 0x14D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7C0u;
label_14d7c0:
    // 0x14d7c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7c8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x14d7cc: 0xc096c60  jal         func_25B180
    ctx->pc = 0x14D7CCu;
    SET_GPR_U32(ctx, 31, 0x14D7D4u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x14D7CCu, 0x14D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7D4u;
label_14d7d4:
    // 0x14d7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d7d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14d7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14d7e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7e4: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x14d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x14d7e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d7f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d7f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d7f8:
    // 0x14d7f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d7fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d800: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D800u;
    SET_GPR_U32(ctx, 31, 0x14D808u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D800u, 0x14D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D808u;
label_14d808:
    // 0x14d808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d80c: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x14d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x14d810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D810u;
    {
        const bool branch_taken_0x14d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d810) {
            ctx->pc = 0x14D824u;
            goto label_14d824;
        }
    }
    ctx->pc = 0x14D818u;
    // 0x14d818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d81c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x14D81Cu;
    SET_GPR_U32(ctx, 31, 0x14D824u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x14D81Cu, 0x14D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D824u;
label_14d824:
    // 0x14d824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d82c: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x14d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x14d830: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d834: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d838: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14d83c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D83Cu;
    SET_GPR_U32(ctx, 31, 0x14D844u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D83Cu, 0x14D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D844u;
label_14d844:
    // 0x14d844: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d848: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x14D848u;
    SET_GPR_U32(ctx, 31, 0x14D850u);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x14D848u, 0x14D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D850u;
label_14d850:
    // 0x14d850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d854: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14d858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D858u;
    {
        const bool branch_taken_0x14d858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d858) {
            ctx->pc = 0x14D868u;
            goto label_14d868;
        }
    }
    ctx->pc = 0x14D860u;
    // 0x14d860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d864: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x14d864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_14d868:
    // 0x14d868: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14d868u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d86c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14d86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14d870: 0x3e00008  jr          $ra
    ctx->pc = 0x14D870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D878u;
}
