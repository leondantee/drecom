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

// Function: entry_00106fa4
// Address: 0x106fa4 - 0x106fd8
void entry_00106fa4_0x106fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106fa4_0x106fa4");
#endif

    ctx->pc = 0x106fa4u;

    // 0x106fa4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106fa8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x106fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x106fac: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x106facu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x106fb0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x106fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106fb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x106fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x106fb8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x106fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x106fbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106fbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x106fc0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106FC0u;
    {
        const bool branch_taken_0x106fc0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FC0u;
        // 0x106fc4: 0xaea34498  sw          $v1, 0x4498($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 17560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fc0) {
            ctx->pc = 0x106FD8u;
            return;
        }
    }
    ctx->pc = 0x106FC8u;
    // 0x106fc8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x106fcc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x106fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x106fd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106FD0u;
    {
        const bool branch_taken_0x106fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD0u;
        // 0x106fd4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fd0) {
            ctx->pc = 0x106FDCu;
            return;
        }
    }
    ctx->pc = 0x106FD8u;
}
