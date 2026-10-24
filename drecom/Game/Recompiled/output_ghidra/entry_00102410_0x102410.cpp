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

// Function: entry_00102410
// Address: 0x102410 - 0x102424
void entry_00102410_0x102410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102410_0x102410");
#endif

    ctx->pc = 0x102410u;

    // 0x102410: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102414: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x102414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10241c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x10241Cu;
    {
        const bool branch_taken_0x10241c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10241c) {
            ctx->pc = 0x102420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10241Cu;
            // 0x102420: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102424u;
            return;
        }
    }
    ctx->pc = 0x102424u;
}
