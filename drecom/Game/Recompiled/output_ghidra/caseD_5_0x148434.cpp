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
// Address: 0x148434 - 0x1484d8
void caseD_5_0x148434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x148434");
#endif

    switch (ctx->pc) {
        case 0x148444u: goto label_148444;
        case 0x148450u: goto label_148450;
        case 0x148464u: goto label_148464;
        case 0x148470u: goto label_148470;
        case 0x148480u: goto label_148480;
        case 0x148498u: goto label_148498;
        case 0x1484c0u: goto label_1484c0;
        default: break;
    }

    ctx->pc = 0x148434u;

    // 0x148434: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14843c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14843Cu;
    SET_GPR_U32(ctx, 31, 0x148444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14843Cu, 0x148444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148444u;
label_148444:
    // 0x148444: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x148448u;
    SET_GPR_U32(ctx, 31, 0x148450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x148448u, 0x148450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148450u;
label_148450:
    // 0x148450: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148454: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148458: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14845c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14845Cu;
    SET_GPR_U32(ctx, 31, 0x148464u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14845Cu, 0x148464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148464u;
label_148464:
    // 0x148464: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148468: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148468u;
    SET_GPR_U32(ctx, 31, 0x148470u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148468u, 0x148470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148470u;
label_148470:
    // 0x148470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148474: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148478: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x148478u;
    SET_GPR_U32(ctx, 31, 0x148480u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x148478u, 0x148480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148480u;
label_148480:
    // 0x148480: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x148480u;
    {
        const bool branch_taken_0x148480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148480) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x148488u;
    // 0x148488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14848c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148490: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x148490u;
    SET_GPR_U32(ctx, 31, 0x148498u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x148490u, 0x148498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148498u;
label_148498:
    // 0x148498: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x148498u;
    {
        const bool branch_taken_0x148498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148498) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x1484A0u;
    // 0x1484a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1484a4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1484a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1484a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1484a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1484ac: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1484acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1484b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1484B0u;
    {
        const bool branch_taken_0x1484b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484b0) {
            ctx->pc = 0x1484D8u;
            return;
        }
    }
    ctx->pc = 0x1484B8u;
    // 0x1484b8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1484B8u;
    SET_GPR_U32(ctx, 31, 0x1484C0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1484B8u, 0x1484C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484C0u;
label_1484c0:
    // 0x1484c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1484C0u;
    {
        const bool branch_taken_0x1484c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484c0) {
            ctx->pc = 0x1484D8u;
            return;
        }
    }
    ctx->pc = 0x1484C8u;
    // 0x1484c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1484cc: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1484ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1484d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1484D0u;
    {
        const bool branch_taken_0x1484d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484d0) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x1484D8u;
}
