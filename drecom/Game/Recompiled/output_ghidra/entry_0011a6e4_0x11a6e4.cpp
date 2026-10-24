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

// Function: entry_0011a6e4
// Address: 0x11a6e4 - 0x11a710
void entry_0011a6e4_0x11a6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6e4_0x11a6e4");
#endif

    ctx->pc = 0x11a6e4u;

    // 0x11a6e4: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x11a6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11a6e8: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x11a6e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x11a6ec: 0x18a0001e  blez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11A6ECu;
    {
        const bool branch_taken_0x11a6ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6ECu;
        // 0x11a6f0: 0x2bc20002  slti        $v0, $fp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6ec) {
            ctx->pc = 0x11A768u;
            return;
        }
    }
    ctx->pc = 0x11A6F4u;
    // 0x11a6f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A6F4u;
    {
        const bool branch_taken_0x11a6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6F4u;
        // 0x11a6f8: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6f4) {
            ctx->pc = 0x11A738u;
            return;
        }
    }
    ctx->pc = 0x11A6FCu;
    // 0x11a6fc: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x11a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x11a700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a708: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a70c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x11a710u;
}
