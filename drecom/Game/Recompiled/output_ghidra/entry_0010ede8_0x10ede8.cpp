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

// Function: entry_0010ede8
// Address: 0x10ede8 - 0x10ee1c
void entry_0010ede8_0x10ede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ede8_0x10ede8");
#endif

    ctx->pc = 0x10ede8u;

    // 0x10ede8: 0x8ec245a8  lw          $v0, 0x45A8($s6)
    ctx->pc = 0x10ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17832)));
    // 0x10edec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10edecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edf0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10edf4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10edf8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10edf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10edfc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10edfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10ee00: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10ee04: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10ee08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE08u;
    {
        const bool branch_taken_0x10ee08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE08u;
        // 0x10ee0c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee08) {
            ctx->pc = 0x10EE1Cu;
            return;
        }
    }
    ctx->pc = 0x10EE10u;
    // 0x10ee10: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ee14: 0xc046760  jal         func_119D80
    ctx->pc = 0x10EE14u;
    SET_GPR_U32(ctx, 31, 0x10EE1Cu);
    ctx->pc = 0x10EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE14u;
    // 0x10ee18: 0x2484ce10  addiu       $a0, $a0, -0x31F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10EE1Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EE1Cu) { return; }
    ctx->pc = 0x10EE1Cu;
}
