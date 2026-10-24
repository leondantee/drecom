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

// Function: entry_00117050
// Address: 0x117050 - 0x117068
void entry_00117050_0x117050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117050_0x117050");
#endif

    ctx->pc = 0x117050u;

    // 0x117050: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x117050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x117054: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x117054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x117058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11705c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11705Cu;
    {
        const bool branch_taken_0x11705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11705Cu;
        // 0x117060: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11705c) {
            ctx->pc = 0x117068u;
            return;
        }
    }
    ctx->pc = 0x117064u;
    // 0x117064: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x117064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x117068u;
}
