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

// Function: entry_0011839c
// Address: 0x11839c - 0x1183c0
void entry_0011839c_0x11839c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011839c_0x11839c");
#endif

    ctx->pc = 0x11839cu;

    // 0x11839c: 0xaca5000c  sw          $a1, 0xC($a1)
    ctx->pc = 0x11839cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 5));
    // 0x1183a0: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1183A0u;
    {
        const bool branch_taken_0x1183a0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183A0u;
        // 0x1183a4: 0xaca50008  sw          $a1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183a0) {
            ctx->pc = 0x1183C0u;
            return;
        }
    }
    ctx->pc = 0x1183A8u;
    // 0x1183a8: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1183a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1183ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1183acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1183b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1183b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1183b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1183b8: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x1183B8u;
    {
        const bool branch_taken_0x1183b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183B8u;
        // 0x1183bc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183b8) {
            ctx->pc = 0x1188B4u;
            return;
        }
    }
    ctx->pc = 0x1183C0u;
}
