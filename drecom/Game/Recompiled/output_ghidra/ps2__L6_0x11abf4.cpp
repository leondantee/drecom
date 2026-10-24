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

// Function: $L6
// Address: 0x11abf4 - 0x11ac10
void ps2__L6_0x11abf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L6_0x11abf4");
#endif

    ctx->pc = 0x11abf4u;

    // 0x11abf4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x11abf8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11abf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11abfc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11abfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ac00: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11AC00u;
    {
        const bool branch_taken_0x11ac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11ac00) {
            ctx->pc = 0x11AC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AC00u;
            // 0x11ac04: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ABD8u;
            return;
        }
    }
    ctx->pc = 0x11AC08u;
    // 0x11ac08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11AC08u;
    {
        const bool branch_taken_0x11ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC08u;
        // 0x11ac0c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac08) {
            ctx->pc = 0x11AC30u;
            return;
        }
    }
    ctx->pc = 0x11AC10u;
}
