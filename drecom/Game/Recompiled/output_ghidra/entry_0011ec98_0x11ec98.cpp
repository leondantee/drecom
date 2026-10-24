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

// Function: entry_0011ec98
// Address: 0x11ec98 - 0x11ecb0
void entry_0011ec98_0x11ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec98_0x11ec98");
#endif

    ctx->pc = 0x11ec98u;

    // 0x11ec98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11eca0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11eca4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11eca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11eca8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x11ECA8u;
    {
        const bool branch_taken_0x11eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECA8u;
        // 0x11ecac: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eca8) {
            ctx->pc = 0x11EE34u;
            return;
        }
    }
    ctx->pc = 0x11ECB0u;
}
