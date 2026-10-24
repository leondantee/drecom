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

// Function: sub_00388D30
// Address: 0x388d30 - 0x388d50
void sub_00388D30_0x388d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388D30_0x388d30");
#endif

    ctx->pc = 0x388d30u;

    // 0x388d30: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d30u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x388D30 raw=0x43FA0000");
    // 0x388d34: 0x180100c8  .word       0x180100C8                   # blez        $zero, . + 4 + (0xC8 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x388D34u;
    {
        const bool branch_taken_0x388d34 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x388D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D34u;
        // 0x388d38: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d34) {
            ctx->pc = 0x389058u;
            return;
        }
    }
    ctx->pc = 0x388D3Cu;
    // 0x388d3c: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x388d3cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x388D3C raw=0x437A0000");
    // 0x388d40: 0x180100c8  .word       0x180100C8                   # blez        $zero, . + 4 + (0xC8 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x388D40u;
    {
        const bool branch_taken_0x388d40 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x388D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D40u;
        // 0x388d44: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d40) {
            ctx->pc = 0x389064u;
            return;
        }
    }
    ctx->pc = 0x388D48u;
    // 0x388d48: 0x0  nop
    ctx->pc = 0x388d48u;
    // NOP
    // 0x388d4c: 0x0  nop
    ctx->pc = 0x388d4cu;
    // NOP
    ctx->pc = 0x388d50u;
}
