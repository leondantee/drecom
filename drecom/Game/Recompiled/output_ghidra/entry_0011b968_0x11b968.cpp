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

// Function: entry_0011b968
// Address: 0x11b968 - 0x11b984
void entry_0011b968_0x11b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b968_0x11b968");
#endif

    ctx->pc = 0x11b968u;

    // 0x11b968: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x11b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x11b96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B96Cu;
    {
        const bool branch_taken_0x11b96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B96Cu;
        // 0x11b970: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b96c) {
            ctx->pc = 0x11B984u;
            return;
        }
    }
    ctx->pc = 0x11B974u;
    // 0x11b974: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b978: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b97c: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x11B97Cu;
    {
        const bool branch_taken_0x11b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B97Cu;
        // 0x11b980: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b97c) {
            ctx->pc = 0x11B468u;
            return;
        }
    }
    ctx->pc = 0x11B984u;
}
