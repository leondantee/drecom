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

// Function: entry_0033916c
// Address: 0x33916c - 0x3391d4
void entry_0033916c_0x33916c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033916c_0x33916c");
#endif

    ctx->pc = 0x33916cu;

    // 0x33916c: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x33916cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339170: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339174: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x339174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339178: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x33917c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x33917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339180: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x339180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x339184: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339188: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33918c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33918cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339190: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339194: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339198: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x33919c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3391a0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3391a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3391a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3391a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3391a8: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x3391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x3391ac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3391acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3391b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3391b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3391b4: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x3391b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x3391b8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3391b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3391bc: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3391bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3391c0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3391C0u;
    {
        const bool branch_taken_0x3391c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3391c0) {
            ctx->pc = 0x3391D4u;
            return;
        }
    }
    ctx->pc = 0x3391C8u;
    // 0x3391c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3391C8u;
    {
        const bool branch_taken_0x3391c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3391c8) {
            ctx->pc = 0x3391D4u;
            return;
        }
    }
    ctx->pc = 0x3391D0u;
    // 0x3391d0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x3391d4u;
}
