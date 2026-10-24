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

// Function: entry_00108708
// Address: 0x108708 - 0x108738
void entry_00108708_0x108708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108708_0x108708");
#endif

    ctx->pc = 0x108708u;

    // 0x108708: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x10870c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108710: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108710u;
    {
        const bool branch_taken_0x108710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108710) {
            ctx->pc = 0x108714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108710u;
            // 0x108714: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108738u;
            return;
        }
    }
    ctx->pc = 0x108718u;
    // 0x108718: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x108718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x10871c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10871Cu;
    {
        const bool branch_taken_0x10871c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10871c) {
            ctx->pc = 0x108720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10871Cu;
            // 0x108720: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108738u;
            return;
        }
    }
    ctx->pc = 0x108724u;
    // 0x108724: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x108724u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x108728: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10872c: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x10872cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x108730: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x108730u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x108734: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x108734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->pc = 0x108738u;
}
