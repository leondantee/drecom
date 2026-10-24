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

// Function: entry_00217c5c
// Address: 0x217c5c - 0x217c80
void entry_00217c5c_0x217c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217c5c_0x217c5c");
#endif

    ctx->pc = 0x217c5cu;

    // 0x217c5c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217c60: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x217c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x217c64: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x217c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x217c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c6c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x217c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x217c70: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x217c70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217c74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x217C74u;
    {
        const bool branch_taken_0x217c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C74u;
        // 0x217c78: 0x247110b0  addiu       $s1, $v1, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c74) {
            ctx->pc = 0x217CA4u;
            return;
        }
    }
    ctx->pc = 0x217C7Cu;
    // 0x217c7c: 0x2483fff5  addiu       $v1, $a0, -0xB
    ctx->pc = 0x217c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967285));
    ctx->pc = 0x217c80u;
}
