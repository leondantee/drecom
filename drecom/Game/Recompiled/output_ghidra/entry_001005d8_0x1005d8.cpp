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

// Function: entry_001005d8
// Address: 0x1005d8 - 0x100600
void entry_001005d8_0x1005d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005d8_0x1005d8");
#endif

    ctx->pc = 0x1005d8u;

    // 0x1005d8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1005d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1005dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1005dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1005e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1005e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1005e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1005e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1005e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1005e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1005ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1005ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1005f0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1005F0u;
    {
        const bool branch_taken_0x1005f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F0u;
        // 0x1005f4: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005f0) {
            ctx->pc = 0x100600u;
            return;
        }
    }
    ctx->pc = 0x1005F8u;
    // 0x1005f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1005F8u;
    {
        const bool branch_taken_0x1005f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005F8u;
        // 0x1005fc: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005f8) {
            ctx->pc = 0x100604u;
            return;
        }
    }
    ctx->pc = 0x100600u;
}
