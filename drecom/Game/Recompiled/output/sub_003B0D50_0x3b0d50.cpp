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

// Function: sub_003B0D50
// Address: 0x3b0d50 - 0x3b0d70
void sub_003B0D50_0x3b0d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0D50_0x3b0d50");
#endif

    ctx->pc = 0x3b0d50u;

    // 0x3b0d50: 0x74414d44  .word       0x74414D44                   # INVALID     $v0, $at, 0x4D44 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0d50u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0D50 raw=0x74414D44");
    // 0x3b0d54: 0x74286761  .word       0x74286761                   # INVALID     $at, $t0, 0x6761 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0d54u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0D54 raw=0x74286761");
    // 0x3b0d58: 0x929706f  j           func_4A5C1BC
    ctx->pc = 0x3B0D58u;
    ctx->pc = 0x3B0D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D58u;
    // 0x3b0d5c: 0x2578303a  addiu       $t8, $t3, 0x303A (Delay Slot)
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12346));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C1BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5C1BCu, 0x3B0D58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0D60u;
    // 0x3b0d60: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x3b0d60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    // 0x3b0d64: 0x0  nop
    ctx->pc = 0x3b0d64u;
    // NOP
    // 0x3b0d68: 0x0  nop
    ctx->pc = 0x3b0d68u;
    // NOP
    // 0x3b0d6c: 0x0  nop
    ctx->pc = 0x3b0d6cu;
    // NOP
    ctx->pc = 0x3b0d70u;
}
