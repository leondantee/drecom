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

// Function: entry_0010a870
// Address: 0x10a870 - 0x10a898
void entry_0010a870_0x10a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a870_0x10a870");
#endif

    ctx->pc = 0x10a870u;

    // 0x10a870: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x10a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10a874: 0x8c633d1c  lw          $v1, 0x3D1C($v1)
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15644)));
    // 0x10a878: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x10a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a87c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A87Cu;
    {
        const bool branch_taken_0x10a87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A87Cu;
        // 0x10a880: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a87c) {
            ctx->pc = 0x10A898u;
            return;
        }
    }
    ctx->pc = 0x10A884u;
    // 0x10a884: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a888: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10a88c: 0xae633d04  sw          $v1, 0x3D04($s3)
    ctx->pc = 0x10a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15620), GPR_U32(ctx, 3));
    // 0x10a890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a894: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x10a894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10a898u;
}
