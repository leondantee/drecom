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

// Function: entry_00276da8
// Address: 0x276da8 - 0x276e64
void entry_00276da8_0x276da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276da8_0x276da8");
#endif

    switch (ctx->pc) {
        case 0x276dccu: goto label_276dcc;
        case 0x276dd8u: goto label_276dd8;
        case 0x276e50u: goto label_276e50;
        case 0x276e5cu: goto label_276e5c;
        default: break;
    }

    ctx->pc = 0x276da8u;

    // 0x276da8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276dac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276db0: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x276db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x276db4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x276db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276db8: 0x24045706  addiu       $a0, $zero, 0x5706
    ctx->pc = 0x276db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22278));
    // 0x276dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276dc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276dc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276dc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276DC4u;
    SET_GPR_U32(ctx, 31, 0x276DCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276DC4u, 0x276DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DCCu;
label_276dcc:
    // 0x276dcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276dd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276DD0u;
    SET_GPR_U32(ctx, 31, 0x276DD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276DD0u, 0x276DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DD8u;
label_276dd8:
    // 0x276dd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276ddc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276de0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276de4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276dec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276df0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x276df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x276df4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276df8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x276df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x276dfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x276dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x276e00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e08: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x276e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x276e0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x276e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x276e10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x276e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x276e14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x276e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x276e18: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x276e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x276e1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x276e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276e24: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x276E24u;
    {
        const bool branch_taken_0x276e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276e24) {
            ctx->pc = 0x276E64u;
            return;
        }
    }
    ctx->pc = 0x276E2Cu;
    // 0x276e2c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276e30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276e34: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x276e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x276e38: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x276e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e3c: 0x24047304  addiu       $a0, $zero, 0x7304
    ctx->pc = 0x276e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29444));
    // 0x276e40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276e40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276e44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e48: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276E48u;
    SET_GPR_U32(ctx, 31, 0x276E50u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276E48u, 0x276E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E50u;
label_276e50:
    // 0x276e50: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276e54: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276E54u;
    SET_GPR_U32(ctx, 31, 0x276E5Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276E54u, 0x276E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E5Cu;
label_276e5c:
    // 0x276e5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x276E5Cu;
    {
        const bool branch_taken_0x276e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276e5c) {
            ctx->pc = 0x276E98u;
            return;
        }
    }
    ctx->pc = 0x276E64u;
}
