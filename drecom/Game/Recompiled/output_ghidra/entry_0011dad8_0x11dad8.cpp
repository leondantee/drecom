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

// Function: entry_0011dad8
// Address: 0x11dad8 - 0x11db10
void entry_0011dad8_0x11dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dad8_0x11dad8");
#endif

    ctx->pc = 0x11dad8u;

    // 0x11dad8: 0x1320000e  beqz        $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x11DAD8u;
    {
        const bool branch_taken_0x11dad8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAD8u;
        // 0x11dadc: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dad8) {
            ctx->pc = 0x11DB14u;
            return;
        }
    }
    ctx->pc = 0x11DAE0u;
    // 0x11dae0: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x11dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11dae4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x11dae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11dae8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x11dae8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11daec: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x11daecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x11daf0: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x11daf4: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x11daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11daf8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x11daf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x11dafc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11dafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11db00: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11db00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11db04: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x11db04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11db08: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x11db08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x11db0c: 0x0  nop
    ctx->pc = 0x11db0cu;
    // NOP
    ctx->pc = 0x11db10u;
}
