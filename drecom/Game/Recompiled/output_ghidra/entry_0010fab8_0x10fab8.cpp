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

// Function: entry_0010fab8
// Address: 0x10fab8 - 0x10fae8
void entry_0010fab8_0x10fab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fab8_0x10fab8");
#endif

    ctx->pc = 0x10fab8u;

    // 0x10fab8: 0x8ee245a8  lw          $v0, 0x45A8($s7)
    ctx->pc = 0x10fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17832)));
    // 0x10fabc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10fabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fac0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10fac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10fac4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10fac8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10facc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10fad0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAD0u;
    {
        const bool branch_taken_0x10fad0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD0u;
        // 0x10fad4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fad0) {
            ctx->pc = 0x10FAE8u;
            return;
        }
    }
    ctx->pc = 0x10FAD8u;
    // 0x10fad8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fadc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10fadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fae0: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FAE0u;
    SET_GPR_U32(ctx, 31, 0x10FAE8u);
    ctx->pc = 0x10FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAE0u;
    // 0x10fae4: 0x2484cef0  addiu       $a0, $a0, -0x3110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FAE8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FAE8u) { return; }
    ctx->pc = 0x10FAE8u;
}
