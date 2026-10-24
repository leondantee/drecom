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

// Function: entry_0010e444
// Address: 0x10e444 - 0x10e464
void entry_0010e444_0x10e444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e444_0x10e444");
#endif

    ctx->pc = 0x10e444u;

    // 0x10e444: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10e444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10e448: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10e448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e44c: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x10e44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x10e450: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x10e450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10e454: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10e454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10e458: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E458u;
    {
        const bool branch_taken_0x10e458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E458u;
        // 0x10e45c: 0x24820800  addiu       $v0, $a0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e458) {
            ctx->pc = 0x10E4C0u;
            return;
        }
    }
    ctx->pc = 0x10E460u;
    // 0x10e460: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10e464u;
}
