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

// Function: entry_0010fae8
// Address: 0x10fae8 - 0x10fb00
void entry_0010fae8_0x10fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fae8_0x10fae8");
#endif

    ctx->pc = 0x10fae8u;

    // 0x10fae8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10faec: 0x8c4345f0  lw          $v1, 0x45F0($v0)
    ctx->pc = 0x10faecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845F0u));
    // 0x10faf0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FAF0u;
    {
        const bool branch_taken_0x10faf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF0u;
        // 0x10faf4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf0) {
            ctx->pc = 0x10FB00u;
            return;
        }
    }
    ctx->pc = 0x10FAF8u;
    // 0x10faf8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10FAF8u;
    {
        const bool branch_taken_0x10faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF8u;
        // 0x10fafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf8) {
            ctx->pc = 0x10FBD0u;
            return;
        }
    }
    ctx->pc = 0x10FB00u;
}
