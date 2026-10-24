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

// Function: entry_001014b8
// Address: 0x1014b8 - 0x101510
void entry_001014b8_0x1014b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001014b8_0x1014b8");
#endif

    ctx->pc = 0x1014b8u;

    // 0x1014b8: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1014b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1014bc: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1014bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1014c0: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1014c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1014c4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1014c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1014c8: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x1014c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x1014cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1014ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1014d0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1014d0u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 2));
    // 0x1014d4: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x1014D4u;
    {
        const bool branch_taken_0x1014d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014D4u;
        // 0x1014d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014d4) {
            ctx->pc = 0x101614u;
            return;
        }
    }
    ctx->pc = 0x1014DCu;
    // 0x1014dc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1014dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1014e0: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x1014e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x1014e4: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x1014e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x1014e8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1014e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1014ec: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1014ECu;
    {
        const bool branch_taken_0x1014ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1014F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014ECu;
        // 0x1014f0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014ec) {
            ctx->pc = 0x1015B4u;
            return;
        }
    }
    ctx->pc = 0x1014F4u;
    // 0x1014f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1014f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1014f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1014f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1014fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1014fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101500: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x101504: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x101508: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x101508u;
    {
        const bool branch_taken_0x101508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101508u;
        // 0x10150c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101508) {
            ctx->pc = 0x1015C4u;
            return;
        }
    }
    ctx->pc = 0x101510u;
}
