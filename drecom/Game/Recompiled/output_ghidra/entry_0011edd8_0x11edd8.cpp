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

// Function: entry_0011edd8
// Address: 0x11edd8 - 0x11ee00
void entry_0011edd8_0x11edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011edd8_0x11edd8");
#endif

    ctx->pc = 0x11edd8u;

label_11edd8:
    // 0x11edd8: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x11edd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x11eddc: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x11eddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x11ede0: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x11ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x11ede4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11ede8: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x11ede8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x11edec: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x11edecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11edf0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11EDF0u;
    {
        const bool branch_taken_0x11edf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDF0u;
        // 0x11edf4: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edf0) {
            ctx->pc = 0x11EDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11edd8;
        }
    }
    ctx->pc = 0x11EDF8u;
    // 0x11edf8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x11edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x11edfc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x11edfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x11ee00u;
}
