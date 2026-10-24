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

// Function: entry_00339798
// Address: 0x339798 - 0x3397e8
void entry_00339798_0x339798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339798_0x339798");
#endif

    ctx->pc = 0x339798u;

    // 0x339798: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x339798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x33979c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3397a0: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3397a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3397a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3397a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3397a8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3397a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3397ac: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x3397acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x3397b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3397b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3397b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3397b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3397b8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3397b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3397bc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3397bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3397c0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3397c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3397c4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3397c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3397c8: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3397c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3397cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3397ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3397d0: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3397d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3397d4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3397D4u;
    {
        const bool branch_taken_0x3397d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3397d4) {
            ctx->pc = 0x3397E8u;
            return;
        }
    }
    ctx->pc = 0x3397DCu;
    // 0x3397dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3397DCu;
    {
        const bool branch_taken_0x3397dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3397dc) {
            ctx->pc = 0x3397E8u;
            return;
        }
    }
    ctx->pc = 0x3397E4u;
    // 0x3397e4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3397e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x3397e8u;
}
