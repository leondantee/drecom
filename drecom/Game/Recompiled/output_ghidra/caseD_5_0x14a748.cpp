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

// Function: caseD_5
// Address: 0x14a748 - 0x14a7c0
void caseD_5_0x14a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x14a748");
#endif

    switch (ctx->pc) {
        case 0x14a758u: goto label_14a758;
        case 0x14a764u: goto label_14a764;
        case 0x14a778u: goto label_14a778;
        case 0x14a784u: goto label_14a784;
        case 0x14a7a4u: goto label_14a7a4;
        default: break;
    }

    ctx->pc = 0x14a748u;

    // 0x14a748: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a74c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a750: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14A750u;
    SET_GPR_U32(ctx, 31, 0x14A758u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14A750u, 0x14A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A758u;
label_14a758:
    // 0x14a758: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a75c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14A75Cu;
    SET_GPR_U32(ctx, 31, 0x14A764u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14A75Cu, 0x14A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A764u;
label_14a764:
    // 0x14a764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14a764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a768: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a76c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14a76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a770: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14A770u;
    SET_GPR_U32(ctx, 31, 0x14A778u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14A770u, 0x14A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A778u;
label_14a778:
    // 0x14a778: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a77c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14A77Cu;
    SET_GPR_U32(ctx, 31, 0x14A784u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A77Cu, 0x14A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A784u;
label_14a784:
    // 0x14a784: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a788: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14a788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14a78c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14a78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14a790: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14a790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14a794: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14A794u;
    {
        const bool branch_taken_0x14a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a794) {
            ctx->pc = 0x14A7C0u;
            return;
        }
    }
    ctx->pc = 0x14A79Cu;
    // 0x14a79c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14A79Cu;
    SET_GPR_U32(ctx, 31, 0x14A7A4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14A79Cu, 0x14A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7A4u;
label_14a7a4:
    // 0x14a7a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A7A4u;
    {
        const bool branch_taken_0x14a7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7a4) {
            ctx->pc = 0x14A7C0u;
            return;
        }
    }
    ctx->pc = 0x14A7ACu;
    // 0x14a7ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a7b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a7b4: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a7b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14A7B8u;
    {
        const bool branch_taken_0x14a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7b8) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A7C0u;
}
