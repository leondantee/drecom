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

// Function: entry_00164e44
// Address: 0x164e44 - 0x164e7c
void entry_00164e44_0x164e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e44_0x164e44");
#endif

    switch (ctx->pc) {
        case 0x164e50u: goto label_164e50;
        default: break;
    }

    ctx->pc = 0x164e44u;

    // 0x164e44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164e48: 0xc067524  jal         func_19D490
    ctx->pc = 0x164E48u;
    SET_GPR_U32(ctx, 31, 0x164E50u);
    ctx->pc = 0x19D490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D490u, 0x164E48u, 0x164E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E50u;
label_164e50:
    // 0x164e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e54: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x164E54u;
    {
        const bool branch_taken_0x164e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x164e54) {
            ctx->pc = 0x164E7Cu;
            return;
        }
    }
    ctx->pc = 0x164E5Cu;
    // 0x164e5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164e60: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164e64: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x164e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x164e68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164e6c: 0xac225458  sw          $v0, 0x5458($at)
    ctx->pc = 0x164e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5458u, _value); } while (0);
    // 0x164e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164e74: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x164E74u;
    SET_GPR_U32(ctx, 31, 0x164E7Cu);
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x164E74u, 0x164E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164E7Cu;
}
