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

// Function: $L17
// Address: 0x11b124 - 0x11b180
void ps2__L17_0x11b124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L17_0x11b124");
#endif

    ctx->pc = 0x11b124u;

    // 0x11b124: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x11B124u;
    {
        const bool branch_taken_0x11b124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b124) {
            ctx->pc = 0x11B1B8u;
            return;
        }
    }
    ctx->pc = 0x11B12Cu;
    // 0x11b12c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11b12cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b130: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x11b130u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x11b134: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x11b134u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x11b138: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x11b138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x11b13c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x11b13cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x11b140: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x11b140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x11b144: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x11b144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x11b148: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x11b14c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x11b14cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x11b150: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11b150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11b154: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x11b154u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x11b158: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x11b158u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x11b15c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x11b15cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x11b160: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x11b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x11b164: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x11b164u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x11b168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11b16c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x11b16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x11b170: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B170u;
    {
        const bool branch_taken_0x11b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B170u;
        // 0x11b174: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b170) {
            ctx->pc = 0x11B1B4u;
            return;
        }
    }
    ctx->pc = 0x11B178u;
    // 0x11b178: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11b178u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b17c: 0x0  nop
    ctx->pc = 0x11b17cu;
    // NOP
    ctx->pc = 0x11b180u;
}
