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

// Function: entry_00113e40
// Address: 0x113e40 - 0x113e64
void entry_00113e40_0x113e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e40_0x113e40");
#endif

    ctx->pc = 0x113e40u;

label_113e40:
    // 0x113e40: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x113e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x113e44: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x113e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x113e48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x113e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113e4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113e50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113e54: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113E54u;
    {
        const bool branch_taken_0x113e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113e54) {
            ctx->pc = 0x113E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113e40;
        }
    }
    ctx->pc = 0x113E5Cu;
    // 0x113e5c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x113E5Cu;
    {
        const bool branch_taken_0x113e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113e5c) {
            ctx->pc = 0x113EECu;
            return;
        }
    }
    ctx->pc = 0x113E64u;
}
