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

// Function: entry_0014abf8
// Address: 0x14abf8 - 0x14ac8c
void entry_0014abf8_0x14abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014abf8_0x14abf8");
#endif

    switch (ctx->pc) {
        case 0x14ac04u: goto label_14ac04;
        case 0x14ac18u: goto label_14ac18;
        case 0x14ac30u: goto label_14ac30;
        case 0x14ac44u: goto label_14ac44;
        case 0x14ac64u: goto label_14ac64;
        default: break;
    }

    ctx->pc = 0x14abf8u;

    // 0x14abf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14abfc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14ABFCu;
    SET_GPR_U32(ctx, 31, 0x14AC04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14ABFCu, 0x14AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC04u;
label_14ac04:
    // 0x14ac04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ac04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ac08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14ac10: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14AC10u;
    SET_GPR_U32(ctx, 31, 0x14AC18u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14AC10u, 0x14AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC18u;
label_14ac18:
    // 0x14ac18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac20: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14ac24: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14ac28: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14AC28u;
    SET_GPR_U32(ctx, 31, 0x14AC30u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14AC28u, 0x14AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC30u;
label_14ac30:
    // 0x14ac30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac34: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14ac34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14ac38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ac38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ac3c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14AC3Cu;
    SET_GPR_U32(ctx, 31, 0x14AC44u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AC3Cu, 0x14AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC44u;
label_14ac44:
    // 0x14ac44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac48: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14ac48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14ac4c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14ac50: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x14ac50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x14ac54: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14AC54u;
    {
        const bool branch_taken_0x14ac54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ac54) {
            ctx->pc = 0x14AC8Cu;
            return;
        }
    }
    ctx->pc = 0x14AC5Cu;
    // 0x14ac5c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14AC5Cu;
    SET_GPR_U32(ctx, 31, 0x14AC64u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14AC5Cu, 0x14AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC64u;
label_14ac64:
    // 0x14ac64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AC64u;
    {
        const bool branch_taken_0x14ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac64) {
            ctx->pc = 0x14AC8Cu;
            return;
        }
    }
    ctx->pc = 0x14AC6Cu;
    // 0x14ac6c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14ac70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac74: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14ac78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ac7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ac80: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14ac80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14ac84: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x14AC84u;
    {
        const bool branch_taken_0x14ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ac84) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AC8Cu;
}
