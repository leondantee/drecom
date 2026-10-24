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

// Function: entry_0011f160
// Address: 0x11f160 - 0x11f188
void entry_0011f160_0x11f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f160_0x11f160");
#endif

    ctx->pc = 0x11f160u;

    // 0x11f160: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11f164: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11F164u;
    {
        const bool branch_taken_0x11f164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F164u;
        // 0x11f168: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f164) {
            ctx->pc = 0x11F190u;
            return;
        }
    }
    ctx->pc = 0x11F16Cu;
    // 0x11f16c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11f170: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F170u;
    {
        const bool branch_taken_0x11f170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F170u;
        // 0x11f174: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f170) {
            ctx->pc = 0x11F188u;
            return;
        }
    }
    ctx->pc = 0x11F178u;
    // 0x11f178: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x11f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x11f17c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11f180: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11F180u;
    {
        const bool branch_taken_0x11f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F180u;
        // 0x11f184: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f180) {
            ctx->pc = 0x11F1E8u;
            return;
        }
    }
    ctx->pc = 0x11F188u;
}
