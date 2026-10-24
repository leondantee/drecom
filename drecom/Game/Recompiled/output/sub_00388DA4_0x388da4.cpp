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

// Function: sub_00388DA4
// Address: 0x388da4 - 0x388ddc
void sub_00388DA4_0x388da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388DA4_0x388da4");
#endif

    ctx->pc = 0x388da4u;

    // 0x388da4: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388da4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x388DA4 raw=0x43160000");
    // 0x388da8: 0x8000038  j           func_0000E0
    ctx->pc = 0x388DA8u;
    ctx->pc = 0x388DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388DA8u;
    // 0x388dac: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0xE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE0u, 0x388DA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x388DB0u;
    // 0x388db0: 0x12a0163  .word       0x012A0163                   # subu        $zero, $t1, $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388db0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x388db4: 0xe8  .word       0x000000E8                   # mfsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x388db4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x388db8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x388db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x388dbc: 0x0  nop
    ctx->pc = 0x388dbcu;
    // NOP
    // 0x388dc0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x388dc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x388dc4: 0x0  nop
    ctx->pc = 0x388dc4u;
    // NOP
    // 0x388dc8: 0x0  nop
    ctx->pc = 0x388dc8u;
    // NOP
    // 0x388dcc: 0x0  nop
    ctx->pc = 0x388dccu;
    // NOP
    // 0x388dd0: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388dd0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x388DD0 raw=0x42C80000");
    // 0x388dd4: 0x48000019  .word       0x48000019                   # INVALID     $zero, $zero, 0x19 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x388dd4u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x388DD4 raw=0x48000019");
    // 0x388dd8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x388dd8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x388ddcu;
}
