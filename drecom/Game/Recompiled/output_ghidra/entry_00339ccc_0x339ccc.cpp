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

// Function: entry_00339ccc
// Address: 0x339ccc - 0x339d2c
void entry_00339ccc_0x339ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339ccc_0x339ccc");
#endif

    ctx->pc = 0x339cccu;

    // 0x339ccc: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x339cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x339cd0: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339cd4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339cd8: 0x3c027300  lui         $v0, 0x7300
    ctx->pc = 0x339cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29440 << 16));
    // 0x339cdc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339ce0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339ce4: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339ce8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339cec: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339cf0: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339cf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339cfc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339d00: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339d00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339d04: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339d08: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339d0c: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339d10: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339d14: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339d18: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339D18u;
    {
        const bool branch_taken_0x339d18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339d18) {
            ctx->pc = 0x339D2Cu;
            return;
        }
    }
    ctx->pc = 0x339D20u;
    // 0x339d20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339D20u;
    {
        const bool branch_taken_0x339d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d20) {
            ctx->pc = 0x339D2Cu;
            return;
        }
    }
    ctx->pc = 0x339D28u;
    // 0x339d28: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339d2cu;
}
