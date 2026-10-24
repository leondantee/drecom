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

// Function: ectrl16_init00
// Address: 0x251da0 - 0x251ea0
void ectrl16_init00_0x251da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl16_init00_0x251da0");
#endif

    switch (ctx->pc) {
        case 0x251dc8u: goto label_251dc8;
        case 0x251e04u: goto label_251e04;
        case 0x251e10u: goto label_251e10;
        case 0x251e30u: goto label_251e30;
        case 0x251e6cu: goto label_251e6c;
        case 0x251e78u: goto label_251e78;
        default: break;
    }

    ctx->pc = 0x251da0u;

    // 0x251da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251da4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x251da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x251da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251dac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x251dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x251db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x251db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x251db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251db8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x251db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x251dbc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x251dbcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251dc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x251DC0u;
    {
        const bool branch_taken_0x251dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251dc0) {
            ctx->pc = 0x251E18u;
            goto label_251e18;
        }
    }
    ctx->pc = 0x251DC8u;
label_251dc8:
    // 0x251dc8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x251dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251dcc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x251dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251dd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251dd4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251dd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251ddc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251de0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251de4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251dec: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251decu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251df0: 0x24040402  addiu       $a0, $zero, 0x402
    ctx->pc = 0x251df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x251df4: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x251df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x251df8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x251df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251dfc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251DFCu;
    SET_GPR_U32(ctx, 31, 0x251E04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251DFCu, 0x251E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E04u;
label_251e04:
    // 0x251e04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251e08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251E08u;
    SET_GPR_U32(ctx, 31, 0x251E10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251E08u, 0x251E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E10u;
label_251e10:
    // 0x251e10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x251e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x251e14: 0x0  nop
    ctx->pc = 0x251e14u;
    // NOP
label_251e18:
    // 0x251e18: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x251e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x251e1c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x251E1Cu;
    {
        const bool branch_taken_0x251e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e1c) {
            ctx->pc = 0x251DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251dc8;
        }
    }
    ctx->pc = 0x251E24u;
    // 0x251e24: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x251e24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251e28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x251E28u;
    {
        const bool branch_taken_0x251e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251e28) {
            ctx->pc = 0x251E80u;
            goto label_251e80;
        }
    }
    ctx->pc = 0x251E30u;
label_251e30:
    // 0x251e30: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x251e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251e34: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x251e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251e38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251e3c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251e40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251e44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251e48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251e4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251e54: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251e58: 0x24041300  addiu       $a0, $zero, 0x1300
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    // 0x251e5c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x251e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x251e60: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x251e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x251e64: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251E64u;
    SET_GPR_U32(ctx, 31, 0x251E6Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251E64u, 0x251E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E6Cu;
label_251e6c:
    // 0x251e6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251e70: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251E70u;
    SET_GPR_U32(ctx, 31, 0x251E78u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251E70u, 0x251E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E78u;
label_251e78:
    // 0x251e78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x251e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x251e7c: 0x0  nop
    ctx->pc = 0x251e7cu;
    // NOP
label_251e80:
    // 0x251e80: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x251e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x251e84: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x251E84u;
    {
        const bool branch_taken_0x251e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251e84) {
            ctx->pc = 0x251E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251e30;
        }
    }
    ctx->pc = 0x251E8Cu;
    // 0x251e8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x251e8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251e94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x251e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x251e98: 0x3e00008  jr          $ra
    ctx->pc = 0x251E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251EA0u;
}
