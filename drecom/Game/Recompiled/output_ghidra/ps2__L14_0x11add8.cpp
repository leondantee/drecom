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

// Function: $L14
// Address: 0x11add8 - 0x11ae04
void ps2__L14_0x11add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L14_0x11add8");
#endif

    ctx->pc = 0x11add8u;

label_11add8:
    // 0x11add8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x11add8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11addc: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x11addcu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x11ade0: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x11ade0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x11ade4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x11ade4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11ade8: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x11ade8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x11adec: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x11adecu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x11adf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11adf4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11ADF4u;
    {
        const bool branch_taken_0x11adf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11adf4) {
            ctx->pc = 0x11ADF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ADF4u;
            // 0x11adf8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11add8;
        }
    }
    ctx->pc = 0x11ADFCu;
    // 0x11adfc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11ADFCu;
    {
        const bool branch_taken_0x11adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADFCu;
        // 0x11ae00: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adfc) {
            ctx->pc = 0x11AE74u;
            return;
        }
    }
    ctx->pc = 0x11AE04u;
}
