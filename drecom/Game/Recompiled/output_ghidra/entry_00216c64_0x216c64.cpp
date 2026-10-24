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

// Function: entry_00216c64
// Address: 0x216c64 - 0x216c80
void entry_00216c64_0x216c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216c64_0x216c64");
#endif

    ctx->pc = 0x216c64u;

    // 0x216c64: 0xaeb1000c  sw          $s1, 0xC($s5)
    ctx->pc = 0x216c64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 17));
    // 0x216c68: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x216C68u;
    {
        const bool branch_taken_0x216c68 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x216C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C68u;
        // 0x216c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c68) {
            ctx->pc = 0x216CA8u;
            return;
        }
    }
    ctx->pc = 0x216C70u;
    // 0x216c70: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x216c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x216c74: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x216c74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x216c78: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x216c7c: 0x3c0b0021  lui         $t3, 0x21
    ctx->pc = 0x216c7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)33 << 16));
    ctx->pc = 0x216c80u;
}
