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

// Function: entry_002147b0
// Address: 0x2147b0 - 0x2147c4
void entry_002147b0_0x2147b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002147b0_0x2147b0");
#endif

    ctx->pc = 0x2147b0u;

    // 0x2147b0: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x2147b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x2147b4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2147b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2147b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2147B8u;
    {
        const bool branch_taken_0x2147b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2147BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147B8u;
        // 0x2147bc: 0x64620030  daddiu      $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147b8) {
            ctx->pc = 0x2147C4u;
            return;
        }
    }
    ctx->pc = 0x2147C0u;
    // 0x2147c0: 0x64620057  daddiu      $v0, $v1, 0x57
    ctx->pc = 0x2147c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)87);
    ctx->pc = 0x2147c4u;
}
