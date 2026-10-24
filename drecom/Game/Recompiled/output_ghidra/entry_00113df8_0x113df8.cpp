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

// Function: entry_00113df8
// Address: 0x113df8 - 0x113e10
void entry_00113df8_0x113df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113df8_0x113df8");
#endif

    ctx->pc = 0x113df8u;

    // 0x113df8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x113df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dfc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x113dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x113e00: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x113E00u;
    {
        const bool branch_taken_0x113e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E00u;
        // 0x113e04: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e00) {
            ctx->pc = 0x113D70u;
            return;
        }
    }
    ctx->pc = 0x113E08u;
    // 0x113e08: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x113E08u;
    {
        const bool branch_taken_0x113e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E08u;
        // 0x113e0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e08) {
            ctx->pc = 0x113AB4u;
            return;
        }
    }
    ctx->pc = 0x113E10u;
}
