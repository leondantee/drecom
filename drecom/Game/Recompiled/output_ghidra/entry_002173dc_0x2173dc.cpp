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

// Function: entry_002173dc
// Address: 0x2173dc - 0x217414
void entry_002173dc_0x2173dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002173dc_0x2173dc");
#endif

    ctx->pc = 0x2173dcu;

    // 0x2173dc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2173dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173e0: 0x2692ccc0  addiu       $s2, $s4, -0x3340
    ctx->pc = 0x2173e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954176));
    // 0x2173e4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2173E4u;
    {
        const bool branch_taken_0x2173e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E4u;
        // 0x2173e8: 0xae93ccc0  sw          $s3, -0x3340($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294954176), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173e4) {
            ctx->pc = 0x217510u;
            return;
        }
    }
    ctx->pc = 0x2173ECu;
    // 0x2173ec: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x2173ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x2173f0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2173F0u;
    {
        const bool branch_taken_0x2173f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2173F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173F0u;
        // 0x2173f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173f0) {
            ctx->pc = 0x2174FCu;
            return;
        }
    }
    ctx->pc = 0x2173F8u;
    // 0x2173f8: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x2173f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x2173fc: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x2173fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x217400: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x217400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x217404: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x217404u;
    {
        const bool branch_taken_0x217404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217404u;
        // 0x217408: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217404) {
            ctx->pc = 0x217470u;
            return;
        }
    }
    ctx->pc = 0x21740Cu;
    // 0x21740c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x217410: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x217410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x217414u;
}
