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
// Address: 0x149d1c - 0x149dc4
void caseD_5_0x149d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x149d1c");
#endif

    switch (ctx->pc) {
        case 0x149d2cu: goto label_149d2c;
        case 0x149d38u: goto label_149d38;
        case 0x149d4cu: goto label_149d4c;
        case 0x149d58u: goto label_149d58;
        case 0x149d68u: goto label_149d68;
        case 0x149d80u: goto label_149d80;
        case 0x149da8u: goto label_149da8;
        default: break;
    }

    ctx->pc = 0x149d1cu;

    // 0x149d1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149d20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149d24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149D24u;
    SET_GPR_U32(ctx, 31, 0x149D2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149D24u, 0x149D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D2Cu;
label_149d2c:
    // 0x149d2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149d30: 0xc05cd10  jal         func_173440
    ctx->pc = 0x149D30u;
    SET_GPR_U32(ctx, 31, 0x149D38u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x149D30u, 0x149D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D38u;
label_149d38:
    // 0x149d38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149d3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149d40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149d40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149d44: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x149D44u;
    SET_GPR_U32(ctx, 31, 0x149D4Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149D44u, 0x149D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D4Cu;
label_149d4c:
    // 0x149d4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149d4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149d50: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x149D50u;
    SET_GPR_U32(ctx, 31, 0x149D58u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149D50u, 0x149D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D58u;
label_149d58:
    // 0x149d58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149d5c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x149d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x149d60: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x149D60u;
    SET_GPR_U32(ctx, 31, 0x149D68u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x149D60u, 0x149D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D68u;
label_149d68:
    // 0x149d68: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x149D68u;
    {
        const bool branch_taken_0x149d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d68) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149D70u;
    // 0x149d70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149d74: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x149d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x149d78: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x149D78u;
    SET_GPR_U32(ctx, 31, 0x149D80u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x149D78u, 0x149D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D80u;
label_149d80:
    // 0x149d80: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x149D80u;
    {
        const bool branch_taken_0x149d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d80) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149D88u;
    // 0x149d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149d8c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x149d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x149d90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x149d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x149d94: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x149d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x149d98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x149D98u;
    {
        const bool branch_taken_0x149d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149d98) {
            ctx->pc = 0x149DC4u;
            return;
        }
    }
    ctx->pc = 0x149DA0u;
    // 0x149da0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x149DA0u;
    SET_GPR_U32(ctx, 31, 0x149DA8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x149DA0u, 0x149DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DA8u;
label_149da8:
    // 0x149da8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149DA8u;
    {
        const bool branch_taken_0x149da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149da8) {
            ctx->pc = 0x149DC4u;
            return;
        }
    }
    ctx->pc = 0x149DB0u;
    // 0x149db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149db8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x149db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x149dbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x149DBCu;
    {
        const bool branch_taken_0x149dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149dbc) {
            ctx->pc = 0x149E10u;
            return;
        }
    }
    ctx->pc = 0x149DC4u;
}
