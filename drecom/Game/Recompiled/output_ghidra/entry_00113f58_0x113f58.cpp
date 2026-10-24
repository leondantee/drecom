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

// Function: entry_00113f58
// Address: 0x113f58 - 0x113f80
void entry_00113f58_0x113f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f58_0x113f58");
#endif

    ctx->pc = 0x113f58u;

    // 0x113f58: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x113f5c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x113f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113f60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x113F60u;
    {
        const bool branch_taken_0x113f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F60u;
        // 0x113f64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f60) {
            ctx->pc = 0x113FC8u;
            return;
        }
    }
    ctx->pc = 0x113F68u;
    // 0x113f68: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x113f68u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x113f6c: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x113F6Cu;
    {
        const bool branch_taken_0x113f6c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x113F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F6Cu;
        // 0x113f70: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f6c) {
            ctx->pc = 0x113FCCu;
            return;
        }
    }
    ctx->pc = 0x113F74u;
    // 0x113f74: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x113f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113f78: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x113f78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
    // 0x113f7c: 0x0  nop
    ctx->pc = 0x113f7cu;
    // NOP
    ctx->pc = 0x113f80u;
}
