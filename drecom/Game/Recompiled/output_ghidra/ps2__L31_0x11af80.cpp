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

// Function: $L31
// Address: 0x11af80 - 0x11afb8
void ps2__L31_0x11af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L31_0x11af80");
#endif

    ctx->pc = 0x11af80u;

    // 0x11af80: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x11af80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11af84: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11AF84u;
    {
        const bool branch_taken_0x11af84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF84u;
        // 0x11af88: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af84) {
            ctx->pc = 0x11AFF8u;
            return;
        }
    }
    ctx->pc = 0x11AF8Cu;
    // 0x11af8c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x11af8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11af90: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x11af90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11af94: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AF94u;
    {
        const bool branch_taken_0x11af94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF94u;
        // 0x11af98: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af94) {
            ctx->pc = 0x11B004u;
            return;
        }
    }
    ctx->pc = 0x11AF9Cu;
    // 0x11af9c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x11af9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x11afa0: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x11afa0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x11afa4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x11afa4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x11afa8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11afa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11afac: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x11afacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x11afb0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11afb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11afb4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x11afb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    ctx->pc = 0x11afb8u;
}
