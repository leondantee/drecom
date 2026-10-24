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
// Address: 0x139c0c - 0x139ca4
void caseD_5_0x139c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x139c0c");
#endif

    switch (ctx->pc) {
        case 0x139c1cu: goto label_139c1c;
        case 0x139c28u: goto label_139c28;
        case 0x139c3cu: goto label_139c3c;
        case 0x139c48u: goto label_139c48;
        default: break;
    }

    ctx->pc = 0x139c0cu;

    // 0x139c0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139c10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139c14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x139C14u;
    SET_GPR_U32(ctx, 31, 0x139C1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139C14u, 0x139C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C1Cu;
label_139c1c:
    // 0x139c1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x139C20u;
    SET_GPR_U32(ctx, 31, 0x139C28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x139C20u, 0x139C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C28u;
label_139c28:
    // 0x139c28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139c2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139c34: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x139C34u;
    SET_GPR_U32(ctx, 31, 0x139C3Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139C34u, 0x139C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C3Cu;
label_139c3c:
    // 0x139c3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139c3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139c40: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x139C40u;
    SET_GPR_U32(ctx, 31, 0x139C48u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139C40u, 0x139C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C48u;
label_139c48:
    // 0x139c48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139c50: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x139C50u;
    {
        const bool branch_taken_0x139c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c50) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139C58u;
    // 0x139c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c5c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x139c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x139c60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x139c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x139c64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x139c64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x139c68: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x139C68u;
    {
        const bool branch_taken_0x139c68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139c68) {
            ctx->pc = 0x139CA4u;
            return;
        }
    }
    ctx->pc = 0x139C70u;
    // 0x139c70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x139c74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x139c7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c80: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x139c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x139c84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139c8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139c98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x139c9c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x139C9Cu;
    {
        const bool branch_taken_0x139c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c9c) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139CA4u;
}
