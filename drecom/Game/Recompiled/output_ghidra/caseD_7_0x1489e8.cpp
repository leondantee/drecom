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

// Function: caseD_7
// Address: 0x1489e8 - 0x148a8c
void caseD_7_0x1489e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1489e8");
#endif

    switch (ctx->pc) {
        case 0x1489f8u: goto label_1489f8;
        case 0x148a04u: goto label_148a04;
        case 0x148a18u: goto label_148a18;
        case 0x148a24u: goto label_148a24;
        case 0x148a34u: goto label_148a34;
        case 0x148a4cu: goto label_148a4c;
        case 0x148a74u: goto label_148a74;
        default: break;
    }

    ctx->pc = 0x1489e8u;

    // 0x1489e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1489ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1489ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1489f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1489F0u;
    SET_GPR_U32(ctx, 31, 0x1489F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1489F0u, 0x1489F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489F8u;
label_1489f8:
    // 0x1489f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1489f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1489fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1489FCu;
    SET_GPR_U32(ctx, 31, 0x148A04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1489FCu, 0x148A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A04u;
label_148a04:
    // 0x148a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148a08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148a0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148a0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148a10: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x148A10u;
    SET_GPR_U32(ctx, 31, 0x148A18u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148A10u, 0x148A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A18u;
label_148a18:
    // 0x148a18: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148a1c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148A1Cu;
    SET_GPR_U32(ctx, 31, 0x148A24u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148A1Cu, 0x148A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A24u;
label_148a24:
    // 0x148a24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148a28: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148a2c: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x148A2Cu;
    SET_GPR_U32(ctx, 31, 0x148A34u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x148A2Cu, 0x148A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A34u;
label_148a34:
    // 0x148a34: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x148A34u;
    {
        const bool branch_taken_0x148a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148a34) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148A3Cu;
    // 0x148a3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148a40: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148a44: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x148A44u;
    SET_GPR_U32(ctx, 31, 0x148A4Cu);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x148A44u, 0x148A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A4Cu;
label_148a4c:
    // 0x148a4c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x148A4Cu;
    {
        const bool branch_taken_0x148a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148a4c) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148A54u;
    // 0x148a54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148a58: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x148a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x148a5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x148a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x148a60: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x148a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x148a64: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x148A64u;
    {
        const bool branch_taken_0x148a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a64) {
            ctx->pc = 0x148A8Cu;
            return;
        }
    }
    ctx->pc = 0x148A6Cu;
    // 0x148a6c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x148A6Cu;
    SET_GPR_U32(ctx, 31, 0x148A74u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x148A6Cu, 0x148A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A74u;
label_148a74:
    // 0x148a74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148A74u;
    {
        const bool branch_taken_0x148a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a74) {
            ctx->pc = 0x148A8Cu;
            return;
        }
    }
    ctx->pc = 0x148A7Cu;
    // 0x148a7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148a80: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148a80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x148a84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x148A84u;
    {
        const bool branch_taken_0x148a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a84) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148A8Cu;
}
