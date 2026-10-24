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

// Function: entry_001066c8
// Address: 0x1066c8 - 0x1066f4
void entry_001066c8_0x1066c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001066c8_0x1066c8");
#endif

    ctx->pc = 0x1066c8u;

    // 0x1066c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1066cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1066ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1066d0: 0x8c463d88  lw          $a2, 0x3D88($v0)
    ctx->pc = 0x1066d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D88u));
    // 0x1066d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1066d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066d8: 0x8c6a3d84  lw          $t2, 0x3D84($v1)
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D84u));
    // 0x1066dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1066e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1066e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1066e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066ec: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x1066ECu;
    SET_GPR_U32(ctx, 31, 0x1066F4u);
    ctx->pc = 0x1066F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066ECu;
    // 0x1066f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x1066ECu, 0x1066F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066F4u;
}
