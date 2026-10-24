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

// Function: $L9
// Address: 0x118af4 - 0x118b14
void ps2__L9_0x118af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L9_0x118af4");
#endif

    ctx->pc = 0x118af4u;

label_118af4:
    // 0x118af4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x118af4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118af8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x118af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x118afc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x118afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x118b00: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x118b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x118b04: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x118b04u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x118b08: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118B08u;
    {
        const bool branch_taken_0x118b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B08u;
        // 0x118b0c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b08) {
            ctx->pc = 0x118AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118af4;
        }
    }
    ctx->pc = 0x118B10u;
    // 0x118b10: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118b14u;
}
