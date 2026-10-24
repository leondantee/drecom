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

// Function: entry_0011cd6c
// Address: 0x11cd6c - 0x11cdb8
void entry_0011cd6c_0x11cd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd6c_0x11cd6c");
#endif

    ctx->pc = 0x11cd6cu;

    // 0x11cd6c: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x11cd6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11cd70: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x11cd70u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11cd74: 0x9283f  dsra32      $a1, $t1, 0
    ctx->pc = 0x11cd74u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x11cd78: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x11cd78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11cd7c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x11cd7cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x11cd80: 0x9403c  dsll32      $t0, $t1, 0
    ctx->pc = 0x11cd80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11cd84: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x11cd84u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x11cd88: 0x14a000f2  bnez        $a1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x11CD88u;
    {
        const bool branch_taken_0x11cd88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD88u;
        // 0x11cd8c: 0x145102b  sltu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd88) {
            ctx->pc = 0x11D154u;
            return;
        }
    }
    ctx->pc = 0x11CD90u;
    // 0x11cd90: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x11cd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11cd94: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x11CD94u;
    {
        const bool branch_taken_0x11cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD94u;
        // 0x11cd98: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd94) {
            ctx->pc = 0x11CEE4u;
            return;
        }
    }
    ctx->pc = 0x11CD9Cu;
    // 0x11cd9c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11cd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11cda0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CDA0u;
    {
        const bool branch_taken_0x11cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDA0u;
        // 0x11cda4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cda0) {
            ctx->pc = 0x11CDB8u;
            return;
        }
    }
    ctx->pc = 0x11CDA8u;
    // 0x11cda8: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11cda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11cdac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11cdb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11CDB0u;
    {
        const bool branch_taken_0x11cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDB0u;
        // 0x11cdb4: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdb0) {
            ctx->pc = 0x11CDD0u;
            return;
        }
    }
    ctx->pc = 0x11CDB8u;
}
