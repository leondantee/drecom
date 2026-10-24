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

// Function: entry_0011672c
// Address: 0x11672c - 0x116750
void entry_0011672c_0x11672c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011672c_0x11672c");
#endif

    ctx->pc = 0x11672cu;

label_11672c:
    // 0x11672c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x116730: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x116730u;
    {
        const bool branch_taken_0x116730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x116734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116730u;
        // 0x116734: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116730) {
            ctx->pc = 0x116750u;
            return;
        }
    }
    ctx->pc = 0x116738u;
    // 0x116738: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x116738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11673c: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11673Cu;
    {
        const bool branch_taken_0x11673c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x11673c) {
            ctx->pc = 0x116740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11673Cu;
            // 0x116740: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11672Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11672c;
        }
    }
    ctx->pc = 0x116744u;
    // 0x116744: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x116744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x116748: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x116748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11674c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11674cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x116750u;
}
