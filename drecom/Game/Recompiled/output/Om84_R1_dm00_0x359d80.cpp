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

// Function: Om84_R1_dm00
// Address: 0x359d80 - 0x359e6c
void Om84_R1_dm00_0x359d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_R1_dm00_0x359d80");
#endif

    switch (ctx->pc) {
        case 0x359dc8u: goto label_359dc8;
        case 0x359e1cu: goto label_359e1c;
        case 0x359e28u: goto label_359e28;
        default: break;
    }

    ctx->pc = 0x359d80u;

    // 0x359d80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x359d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x359d84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x359d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x359d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359d90: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x359d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x359d94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x359d98: 0x2442a890  addiu       $v0, $v0, -0x5770
    ctx->pc = 0x359d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944912));
    // 0x359d9c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x359d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x359da0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x359da0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AA890u));
    // 0x359da4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x359da4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x359da8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x359da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359dac: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x359dacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x359db0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x359db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359db4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x359db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x359db8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x359db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359dbc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x359dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x359dc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x359DC0u;
    SET_GPR_U32(ctx, 31, 0x359DC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x359DC0u, 0x359DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359DC8u;
label_359dc8:
    // 0x359dc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x359dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x359dcc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x359dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x359dd0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x359dd0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x359dd4: 0x0  nop
    ctx->pc = 0x359dd4u;
    // NOP
    // 0x359dd8: 0x0  nop
    ctx->pc = 0x359dd8u;
    // NOP
    // 0x359ddc: 0x8010  mfhi        $s0
    ctx->pc = 0x359ddcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x359de0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x359de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359de4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x359de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x359de8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x359de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x359dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359df0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x359df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x359df4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x359df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x359df8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x359df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x359dfc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x359dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x359e00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x359e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x359e04: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x359e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x359e08: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x359e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x359e0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359e0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359e10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x359e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x359e14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359E14u;
    SET_GPR_U32(ctx, 31, 0x359E1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359E14u, 0x359E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E1Cu;
label_359e1c:
    // 0x359e1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x359e20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x359E20u;
    SET_GPR_U32(ctx, 31, 0x359E28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x359E20u, 0x359E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E28u;
label_359e28:
    // 0x359e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359e2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359e30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x359e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x359e34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359e38: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x359e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x359e3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359e40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x359e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x359e44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359e48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x359e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x359e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x359e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x359e50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x359e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x359e54: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x359e54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359e60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x359e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x359e64: 0x3e00008  jr          $ra
    ctx->pc = 0x359E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359E6Cu;
}
