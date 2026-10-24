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

// Function: sub_003B0D70
// Address: 0x3b0d70 - 0x3b0d90
void sub_003B0D70_0x3b0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0D70_0x3b0d70");
#endif

    ctx->pc = 0x3b0d70u;

    // 0x3b0d70: 0x74414d44  .word       0x74414D44                   # INVALID     $v0, $at, 0x4D44 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3b0d70u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3B0D70 raw=0x74414D44");
    // 0x3b0d74: 0x65286761  daddiu      $t0, $t1, 0x6761
    ctx->pc = 0x3b0d74u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)26465);
    // 0x3b0d78: 0x929646e  j           func_4A591B8
    ctx->pc = 0x3B0D78u;
    ctx->pc = 0x3B0D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D78u;
    // 0x3b0d7c: 0x2578303a  addiu       $t8, $t3, 0x303A (Delay Slot)
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12346));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A591B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A591B8u, 0x3B0D78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0D80u;
    // 0x3b0d80: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x3b0d80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    // 0x3b0d84: 0x0  nop
    ctx->pc = 0x3b0d84u;
    // NOP
    // 0x3b0d88: 0x0  nop
    ctx->pc = 0x3b0d88u;
    // NOP
    // 0x3b0d8c: 0x0  nop
    ctx->pc = 0x3b0d8cu;
    // NOP
    ctx->pc = 0x3b0d90u;
}
