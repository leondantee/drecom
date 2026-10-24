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

// Function: entry_00148d6c
// Address: 0x148d6c - 0x148e10
void entry_00148d6c_0x148d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148d6c_0x148d6c");
#endif

    switch (ctx->pc) {
        case 0x148d7cu: goto label_148d7c;
        case 0x148d88u: goto label_148d88;
        case 0x148d9cu: goto label_148d9c;
        case 0x148da8u: goto label_148da8;
        case 0x148db8u: goto label_148db8;
        case 0x148dd0u: goto label_148dd0;
        case 0x148df8u: goto label_148df8;
        default: break;
    }

    ctx->pc = 0x148d6cu;

    // 0x148d6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148d70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148d74: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x148D74u;
    SET_GPR_U32(ctx, 31, 0x148D7Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x148D74u, 0x148D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D7Cu;
label_148d7c:
    // 0x148d7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d80: 0xc05cd10  jal         func_173440
    ctx->pc = 0x148D80u;
    SET_GPR_U32(ctx, 31, 0x148D88u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x148D80u, 0x148D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D88u;
label_148d88:
    // 0x148d88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148d8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148d90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148d94: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x148D94u;
    SET_GPR_U32(ctx, 31, 0x148D9Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148D94u, 0x148D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D9Cu;
label_148d9c:
    // 0x148d9c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148d9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148da0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148DA0u;
    SET_GPR_U32(ctx, 31, 0x148DA8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148DA0u, 0x148DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DA8u;
label_148da8:
    // 0x148da8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148dac: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148db0: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x148DB0u;
    SET_GPR_U32(ctx, 31, 0x148DB8u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x148DB0u, 0x148DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DB8u;
label_148db8:
    // 0x148db8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x148DB8u;
    {
        const bool branch_taken_0x148db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148db8) {
            ctx->pc = 0x148E58u;
            return;
        }
    }
    ctx->pc = 0x148DC0u;
    // 0x148dc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148dc4: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148dc8: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x148DC8u;
    SET_GPR_U32(ctx, 31, 0x148DD0u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x148DC8u, 0x148DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DD0u;
label_148dd0:
    // 0x148dd0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x148DD0u;
    {
        const bool branch_taken_0x148dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148dd0) {
            ctx->pc = 0x148E58u;
            return;
        }
    }
    ctx->pc = 0x148DD8u;
    // 0x148dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ddc: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x148ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x148de0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x148de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x148de4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x148de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x148de8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x148DE8u;
    {
        const bool branch_taken_0x148de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148de8) {
            ctx->pc = 0x148E10u;
            return;
        }
    }
    ctx->pc = 0x148DF0u;
    // 0x148df0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x148DF0u;
    SET_GPR_U32(ctx, 31, 0x148DF8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x148DF0u, 0x148DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DF8u;
label_148df8:
    // 0x148df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148DF8u;
    {
        const bool branch_taken_0x148df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148df8) {
            ctx->pc = 0x148E10u;
            return;
        }
    }
    ctx->pc = 0x148E00u;
    // 0x148e00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e04: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x148E08u;
    {
        const bool branch_taken_0x148e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e08) {
            ctx->pc = 0x148E58u;
            return;
        }
    }
    ctx->pc = 0x148E10u;
}
