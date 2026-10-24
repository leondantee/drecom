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

// Function: entry_0011d198
// Address: 0x11d198 - 0x11d1e0
void entry_0011d198_0x11d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d198_0x11d198");
#endif

    ctx->pc = 0x11d198u;

    // 0x11d198: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d19c: 0xc52006  srlv        $a0, $a1, $a2
    ctx->pc = 0x11d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d1a0: 0x2442dd28  addiu       $v0, $v0, -0x22D8
    ctx->pc = 0x11d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958376));
    // 0x11d1a4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11d1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d1a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d1ac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d1acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d1b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11d1b4: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11d1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11d1b8: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D1B8u;
    {
        const bool branch_taken_0x11d1b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d1b8) {
            ctx->pc = 0x11D1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D1B8u;
            // 0x11d1bc: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D1E0u;
            return;
        }
    }
    ctx->pc = 0x11D1C0u;
    // 0x11d1c0: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x11d1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11d1c4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x11D1C4u;
    {
        const bool branch_taken_0x11d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1C4u;
        // 0x11d1c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1c4) {
            ctx->pc = 0x11D318u;
            return;
        }
    }
    ctx->pc = 0x11D1CCu;
    // 0x11d1cc: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x11d1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d1d0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x11D1D0u;
    {
        const bool branch_taken_0x11d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1D0u;
        // 0x11d1d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d0) {
            ctx->pc = 0x11D318u;
            return;
        }
    }
    ctx->pc = 0x11D1D8u;
    // 0x11d1d8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x11D1D8u;
    {
        const bool branch_taken_0x11d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1D8u;
        // 0x11d1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d8) {
            ctx->pc = 0x11D318u;
            return;
        }
    }
    ctx->pc = 0x11D1E0u;
}
