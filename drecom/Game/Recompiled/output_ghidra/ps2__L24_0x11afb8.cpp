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

// Function: $L24
// Address: 0x11afb8 - 0x11aff8
void ps2__L24_0x11afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L24_0x11afb8");
#endif

    ctx->pc = 0x11afb8u;

label_11afb8:
    // 0x11afb8: 0x10c0ffb9  beqz        $a2, . + 4 + (-0x47 << 2)
    ctx->pc = 0x11AFB8u;
    {
        const bool branch_taken_0x11afb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11afb8) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11AFC0u;
    // 0x11afc0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x11afc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11afc4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x11afc4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11afc8: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x11afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x11afcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11afd0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x11afd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x11afd4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x11AFD4u;
    {
        const bool branch_taken_0x11afd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFD4u;
        // 0x11afd8: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afd4) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11AFDCu;
    // 0x11afdc: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x11afdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11afe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AFE0u;
    {
        const bool branch_taken_0x11afe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFE0u;
        // 0x11afe4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afe0) {
            ctx->pc = 0x11AFF8u;
            return;
        }
    }
    ctx->pc = 0x11AFE8u;
    // 0x11afe8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x11afe8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11afec: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x11afecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11aff0: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11AFF0u;
    {
        const bool branch_taken_0x11aff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11aff0) {
            ctx->pc = 0x11AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFF0u;
            // 0x11aff4: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11afb8;
        }
    }
    ctx->pc = 0x11AFF8u;
}
