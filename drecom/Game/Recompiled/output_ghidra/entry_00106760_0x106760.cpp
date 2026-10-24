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

// Function: entry_00106760
// Address: 0x106760 - 0x10678c
void entry_00106760_0x106760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106760_0x106760");
#endif

    ctx->pc = 0x106760u;

    // 0x106760: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106764: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x106764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x106768: 0x8c463d90  lw          $a2, 0x3D90($v0)
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D90u));
    // 0x10676c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106770: 0x8c6a3d8c  lw          $t2, 0x3D8C($v1)
    ctx->pc = 0x106770u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D8Cu));
    // 0x106774: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x106774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x106778: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x106778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10677c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10677cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x106780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106784: 0xc041aea  jal         func_106BA8
    ctx->pc = 0x106784u;
    SET_GPR_U32(ctx, 31, 0x10678Cu);
    ctx->pc = 0x106788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106784u;
    // 0x106788: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106BA8u, 0x106784u, 0x10678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10678Cu;
}
