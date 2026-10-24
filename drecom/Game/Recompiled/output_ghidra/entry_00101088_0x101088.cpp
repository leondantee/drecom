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

// Function: entry_00101088
// Address: 0x101088 - 0x1010b8
void entry_00101088_0x101088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101088_0x101088");
#endif

    ctx->pc = 0x101088u;

    // 0x101088: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10108c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101090: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x101094: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x101094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x101098: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x101098u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    // 0x10109c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10109cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1010a0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1010a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1010a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1010A4u;
    {
        const bool branch_taken_0x1010a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1010A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010A4u;
        // 0x1010a8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010a4) {
            ctx->pc = 0x1010D4u;
            return;
        }
    }
    ctx->pc = 0x1010ACu;
    // 0x1010ac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1010acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1010b0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1010b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1010b4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1010b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1010b8u;
}
