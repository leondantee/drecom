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

// Function: entry_00118120
// Address: 0x118120 - 0x118134
void entry_00118120_0x118120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118120_0x118120");
#endif

    ctx->pc = 0x118120u;

    // 0x118120: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x118120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x118124: 0xdc624d50  ld          $v0, 0x4D50($v1)
    ctx->pc = 0x118124u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x384D50u));
    // 0x118128: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x118128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11812c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11812Cu;
    {
        const bool branch_taken_0x11812c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11812c) {
            ctx->pc = 0x118130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11812Cu;
            // 0x118130: 0xfc644d50  sd          $a0, 0x4D50($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 19792), GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118134u;
            return;
        }
    }
    ctx->pc = 0x118134u;
}
