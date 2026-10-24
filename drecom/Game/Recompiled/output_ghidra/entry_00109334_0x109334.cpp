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

// Function: entry_00109334
// Address: 0x109334 - 0x109350
void entry_00109334_0x109334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109334_0x109334");
#endif

    ctx->pc = 0x109334u;

    // 0x109334: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x109334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x109338: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10933c: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10933Cu;
    {
        const bool branch_taken_0x10933c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x10933c) {
            ctx->pc = 0x109350u;
            return;
        }
    }
    ctx->pc = 0x109344u;
    // 0x109344: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x109344u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x109348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109348u;
    {
        const bool branch_taken_0x109348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109348u;
        // 0x10934c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109348) {
            ctx->pc = 0x109368u;
            return;
        }
    }
    ctx->pc = 0x109350u;
}
