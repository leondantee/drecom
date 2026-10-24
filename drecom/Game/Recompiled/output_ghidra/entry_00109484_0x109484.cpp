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

// Function: entry_00109484
// Address: 0x109484 - 0x1094a0
void entry_00109484_0x109484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109484_0x109484");
#endif

    ctx->pc = 0x109484u;

    // 0x109484: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109484u;
    {
        const bool branch_taken_0x109484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109484u;
        // 0x109488: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109484) {
            ctx->pc = 0x1094A8u;
            return;
        }
    }
    ctx->pc = 0x10948Cu;
    // 0x10948c: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x10948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x109490: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x109490u;
    {
        const bool branch_taken_0x109490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109490u;
        // 0x109494: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109490) {
            ctx->pc = 0x109450u;
            return;
        }
    }
    ctx->pc = 0x109498u;
    // 0x109498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109498u;
    {
        const bool branch_taken_0x109498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109498u;
        // 0x10949c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109498) {
            ctx->pc = 0x1094ACu;
            return;
        }
    }
    ctx->pc = 0x1094A0u;
}
