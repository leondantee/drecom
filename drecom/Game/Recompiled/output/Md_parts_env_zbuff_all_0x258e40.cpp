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

// Function: Md_parts_env_zbuff_all
// Address: 0x258e40 - 0x258ed8
void Md_parts_env_zbuff_all_0x258e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_zbuff_all_0x258e40");
#endif

    switch (ctx->pc) {
        case 0x258e6cu: goto label_258e6c;
        case 0x258e78u: goto label_258e78;
        case 0x258e8cu: goto label_258e8c;
        default: break;
    }

    ctx->pc = 0x258e40u;

    // 0x258e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258e44: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x258e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x258e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x258e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258e54: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x258e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x258e58: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x258e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x258e5c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x258e5cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258e60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x258e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258e64: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x258e64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x258e68: 0x0  nop
    ctx->pc = 0x258e68u;
    // NOP
label_258e6c:
    // 0x258e6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x258e6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258e70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258E70u;
    {
        const bool branch_taken_0x258e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258e70) {
            ctx->pc = 0x258E90u;
            goto label_258e90;
        }
    }
    ctx->pc = 0x258E78u;
label_258e78:
    // 0x258e78: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x258e78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x258e7c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x258e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x258e80: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258e80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258e84: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x258E84u;
    SET_GPR_U32(ctx, 31, 0x258E8Cu);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x258E84u, 0x258E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E8Cu;
label_258e8c:
    // 0x258e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258e90:
    // 0x258e90: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258e90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258e94: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258E94u;
    {
        const bool branch_taken_0x258e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258e94) {
            ctx->pc = 0x258E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258e78;
        }
    }
    ctx->pc = 0x258E9Cu;
    // 0x258e9c: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x258e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x258ea0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258ea4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x258ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258ea8: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258eb0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x258eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258eb4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x258EB4u;
    {
        const bool branch_taken_0x258eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258eb4) {
            ctx->pc = 0x258E6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258e6c;
        }
    }
    ctx->pc = 0x258EBCu;
    // 0x258ebc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x258ebcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258ecc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x258eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x258ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258ED8u;
}
