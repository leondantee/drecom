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

// Function: $L12
// Address: 0x11ae04 - 0x11ae54
void ps2__L12_0x11ae04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L12_0x11ae04");
#endif

    ctx->pc = 0x11ae04u;

    // 0x11ae04: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x11ae04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ae08: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x11ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x11ae0c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x11ae0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x11ae10: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11ae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x11ae14: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x11ae14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x11ae18: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11ae18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x11ae1c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x11ae1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x11ae20: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x11ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x11ae24: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x11ae24u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x11ae28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11ae2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11ae30: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x11AE30u;
    {
        const bool branch_taken_0x11ae30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ae30) {
            ctx->pc = 0x11AE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AE30u;
            // 0x11ae34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AE74u;
            return;
        }
    }
    ctx->pc = 0x11AE38u;
    // 0x11ae38: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x11ae38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x11ae3c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x11ae3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x11ae40: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x11ae40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x11ae44: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x11ae44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x11ae48: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x11ae48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x11ae4c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x11ae4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x11ae50: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x11ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->pc = 0x11ae54u;
}
