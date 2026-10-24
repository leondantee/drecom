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

// Function: $L19
// Address: 0x11b180 - 0x11b1b4
void ps2__L19_0x11b180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L19_0x11b180");
#endif

    ctx->pc = 0x11b180u;

label_11b180:
    // 0x11b180: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x11b180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x11b184: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11b184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x11b188: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x11b188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b18c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x11b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x11b190: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B190u;
    {
        const bool branch_taken_0x11b190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B190u;
        // 0x11b194: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b190) {
            ctx->pc = 0x11B1B4u;
            return;
        }
    }
    ctx->pc = 0x11B198u;
    // 0x11b198: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11b198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b19c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x11b19cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11b1a0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x11b1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x11b1a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11b1a8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x11b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x11b1ac: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11B1ACu;
    {
        const bool branch_taken_0x11b1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b1ac) {
            ctx->pc = 0x11B1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B1ACu;
            // 0x11b1b0: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b180;
        }
    }
    ctx->pc = 0x11B1B4u;
}
