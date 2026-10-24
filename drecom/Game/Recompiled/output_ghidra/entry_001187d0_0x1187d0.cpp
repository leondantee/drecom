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

// Function: entry_001187d0
// Address: 0x1187d0 - 0x1187fc
void entry_001187d0_0x1187d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001187d0_0x1187d0");
#endif

    switch (ctx->pc) {
        case 0x1187f4u: goto label_1187f4;
        default: break;
    }

    ctx->pc = 0x1187d0u;

    // 0x1187d0: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1187d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1187d4: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1187d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1187d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1187d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1187dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1187e0: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1187e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1187e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1187e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1187e8: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1187e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x1187ec: 0xc046346  jal         func_118D18
    ctx->pc = 0x1187ECu;
    SET_GPR_U32(ctx, 31, 0x1187F4u);
    ctx->pc = 0x1187F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187ECu;
    // 0x1187f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    {
        ctx->pc = 0x1187F4u;
        ps2_stubs::__malloc_unlock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1187F4u) { return; }
    ctx->pc = 0x1187F4u;
label_1187f4:
    // 0x1187f4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1187F4u;
    {
        const bool branch_taken_0x1187f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187F4u;
        // 0x1187f8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187f4) {
            ctx->pc = 0x1188C0u;
            return;
        }
    }
    ctx->pc = 0x1187FCu;
}
