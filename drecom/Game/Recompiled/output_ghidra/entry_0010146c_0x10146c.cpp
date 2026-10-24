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

// Function: entry_0010146c
// Address: 0x10146c - 0x101498
void entry_0010146c_0x10146c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010146c_0x10146c");
#endif

    ctx->pc = 0x10146cu;

    // 0x10146c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x10146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x101470: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x101470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x101474: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x101474u;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x101478: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x101478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x10147c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10147Cu;
    {
        const bool branch_taken_0x10147c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10147Cu;
        // 0x101480: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10147c) {
            ctx->pc = 0x1014B8u;
            return;
        }
    }
    ctx->pc = 0x101484u;
    // 0x101484: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101488: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x10148c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x10148cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x101490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101494: 0x0  nop
    ctx->pc = 0x101494u;
    // NOP
    ctx->pc = 0x101498u;
}
