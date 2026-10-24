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

// Function: entry_00118f5c
// Address: 0x118f5c - 0x118f78
void entry_00118f5c_0x118f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118f5c_0x118f5c");
#endif

    ctx->pc = 0x118f5cu;

    // 0x118f5c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x118f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f60: 0x1812  mflo        $v1
    ctx->pc = 0x118f60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x118f64: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x118f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118f68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118F68u;
    {
        const bool branch_taken_0x118f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F68u;
        // 0x118f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f68) {
            ctx->pc = 0x118F9Cu;
            return;
        }
    }
    ctx->pc = 0x118F70u;
    // 0x118f70: 0x2a72000a  slti        $s2, $s3, 0xA
    ctx->pc = 0x118f70u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x118f74: 0x0  nop
    ctx->pc = 0x118f74u;
    // NOP
    ctx->pc = 0x118f78u;
}
