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

// Function: entry_0011d58c
// Address: 0x11d58c - 0x11d5e0
void entry_0011d58c_0x11d58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d58c_0x11d58c");
#endif

    ctx->pc = 0x11d58cu;

    // 0x11d58c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x11d58cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d590: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D590u;
    {
        const bool branch_taken_0x11d590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D590u;
        // 0x11d594: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d590) {
            ctx->pc = 0x11D5E0u;
            return;
        }
    }
    ctx->pc = 0x11D598u;
    // 0x11d598: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x11d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11d59c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d59cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d5a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d5a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d5a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11d5ac: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x11d5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x11d5b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d5b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d5b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x11d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x11d5bc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11d5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11d5c0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11d5c4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11d5c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d5c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d5cc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11d5ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11d5d0: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x11d5d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x11d5d4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x11d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d5d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11d5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d5dc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x11d5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    ctx->pc = 0x11d5e0u;
}
