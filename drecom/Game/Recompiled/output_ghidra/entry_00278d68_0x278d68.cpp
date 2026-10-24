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

// Function: entry_00278d68
// Address: 0x278d68 - 0x278e50
void entry_00278d68_0x278d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278d68_0x278d68");
#endif

    switch (ctx->pc) {
        case 0x278de0u: goto label_278de0;
        case 0x278decu: goto label_278dec;
        case 0x278e10u: goto label_278e10;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e40u: goto label_278e40;
        case 0x278e4cu: goto label_278e4c;
        default: break;
    }

    ctx->pc = 0x278d68u;

    // 0x278d68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278d6c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x278d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x278d70: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x278d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x278d74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x278d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x278d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x278d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x278d7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x278d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x278d80: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x278d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x278d84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278d88: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x278d88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x278d8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x278d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x278d90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x278d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x278d94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x278d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x278d98: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x278d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x278d9c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x278d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x278da0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x278da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x278da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278da8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x278da8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x278dac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x278dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x278db0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x278db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x278db4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x278DB4u;
    {
        const bool branch_taken_0x278db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278db4) {
            ctx->pc = 0x278E50u;
            return;
        }
    }
    ctx->pc = 0x278DBCu;
    // 0x278dbc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278dc0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278dc4: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x278dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x278dc8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278dcc: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x278dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x278dd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278dd4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278dd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278dd8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278DD8u;
    SET_GPR_U32(ctx, 31, 0x278DE0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278DD8u, 0x278DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DE0u;
label_278de0:
    // 0x278de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278de4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278DE4u;
    SET_GPR_U32(ctx, 31, 0x278DECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278DE4u, 0x278DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DECu;
label_278dec:
    // 0x278dec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278df0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278df4: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x278df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x278df8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278dfc: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x278dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x278e00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278e04: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278e04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278e08: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278E08u;
    SET_GPR_U32(ctx, 31, 0x278E10u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278E08u, 0x278E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E10u;
label_278e10:
    // 0x278e10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278e10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278e14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278E14u;
    SET_GPR_U32(ctx, 31, 0x278E1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278E14u, 0x278E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E1Cu;
label_278e1c:
    // 0x278e1c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278e20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278e24: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x278e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x278e28: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278e2c: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x278e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x278e30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278e34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278e34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278e38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278E38u;
    SET_GPR_U32(ctx, 31, 0x278E40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278E38u, 0x278E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E40u;
label_278e40:
    // 0x278e40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278e40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278e44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278E44u;
    SET_GPR_U32(ctx, 31, 0x278E4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278E44u, 0x278E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E4Cu;
label_278e4c:
    // 0x278e4c: 0x0  nop
    ctx->pc = 0x278e4cu;
    // NOP
    ctx->pc = 0x278e50u;
}
