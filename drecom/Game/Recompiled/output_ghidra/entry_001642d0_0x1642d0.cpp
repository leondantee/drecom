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

// Function: entry_001642d0
// Address: 0x1642d0 - 0x164320
void entry_001642d0_0x1642d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001642d0_0x1642d0");
#endif

    switch (ctx->pc) {
        case 0x1642f0u: goto label_1642f0;
        case 0x1642fcu: goto label_1642fc;
        case 0x164308u: goto label_164308;
        case 0x164314u: goto label_164314;
        default: break;
    }

    ctx->pc = 0x1642d0u;

    // 0x1642d0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1642d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1642d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1642D4u;
    {
        const bool branch_taken_0x1642d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1642d4) {
            ctx->pc = 0x1642B0u;
            return;
        }
    }
    ctx->pc = 0x1642DCu;
    // 0x1642dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1642e0: 0xac20fde0  sw          $zero, -0x220($at)
    ctx->pc = 0x1642e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDE0u, _value); } while (0);
    // 0x1642e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1642e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1642e8: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x1642E8u;
    SET_GPR_U32(ctx, 31, 0x1642F0u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x1642E8u, 0x1642F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642F0u;
label_1642f0:
    // 0x1642f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1642f4: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x1642F4u;
    SET_GPR_U32(ctx, 31, 0x1642FCu);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x1642F4u, 0x1642FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642FCu;
label_1642fc:
    // 0x1642fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164300: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x164300u;
    SET_GPR_U32(ctx, 31, 0x164308u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x164300u, 0x164308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164308u;
label_164308:
    // 0x164308: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16430c: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x16430Cu;
    SET_GPR_U32(ctx, 31, 0x164314u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x16430Cu, 0x164314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164314u;
label_164314:
    // 0x164314: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x164314u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164318u;
    {
        const bool branch_taken_0x164318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164318) {
            ctx->pc = 0x164330u;
            return;
        }
    }
    ctx->pc = 0x164320u;
}
