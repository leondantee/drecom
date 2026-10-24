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

// Function: entry_002175c8
// Address: 0x2175c8 - 0x217614
void entry_002175c8_0x2175c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002175c8_0x2175c8");
#endif

    switch (ctx->pc) {
        case 0x2175dcu: goto label_2175dc;
        default: break;
    }

    ctx->pc = 0x2175c8u;

    // 0x2175c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2175c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175cc: 0x2451ccc8  addiu       $s1, $v0, -0x3338
    ctx->pc = 0x2175ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
    // 0x2175d0: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2175d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2175d4: 0xc046c14  jal         func_11B050
    ctx->pc = 0x2175D4u;
    SET_GPR_U32(ctx, 31, 0x2175DCu);
    ctx->pc = 0x2175D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2175D4u;
    // 0x2175d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x2175DCu;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2175DCu) { return; }
    ctx->pc = 0x2175DCu;
label_2175dc:
    // 0x2175dc: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x2175dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x2175e0: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2175E0u;
    {
        const bool branch_taken_0x2175e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2175E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175E0u;
        // 0x2175e4: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175e0) {
            ctx->pc = 0x217714u;
            return;
        }
    }
    ctx->pc = 0x2175E8u;
    // 0x2175e8: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x2175e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x2175ec: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2175ECu;
    {
        const bool branch_taken_0x2175ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2175F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2175ECu;
        // 0x2175f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175ec) {
            ctx->pc = 0x2176FCu;
            return;
        }
    }
    ctx->pc = 0x2175F4u;
    // 0x2175f4: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x2175f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x2175f8: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x2175f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x2175fc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2175fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x217600: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x217600u;
    {
        const bool branch_taken_0x217600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217600u;
        // 0x217604: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217600) {
            ctx->pc = 0x217670u;
            return;
        }
    }
    ctx->pc = 0x217608u;
    // 0x217608: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x217608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x21760c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x217610: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x217610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x217614u;
}
