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

// Function: entry_00102248
// Address: 0x102248 - 0x10225c
void entry_00102248_0x102248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102248_0x102248");
#endif

    ctx->pc = 0x102248u;

    // 0x102248: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10224c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x10224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x102250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x102254: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x102254u;
    {
        const bool branch_taken_0x102254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102254) {
            ctx->pc = 0x102258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102254u;
            // 0x102258: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10225Cu;
            return;
        }
    }
    ctx->pc = 0x10225Cu;
}
