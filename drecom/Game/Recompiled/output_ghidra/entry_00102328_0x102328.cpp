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

// Function: entry_00102328
// Address: 0x102328 - 0x10233c
void entry_00102328_0x102328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102328_0x102328");
#endif

    ctx->pc = 0x102328u;

    // 0x102328: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10232c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102330: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x102334: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x102334u;
    {
        const bool branch_taken_0x102334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102334) {
            ctx->pc = 0x102338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102334u;
            // 0x102338: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10233Cu;
            return;
        }
    }
    ctx->pc = 0x10233Cu;
}
