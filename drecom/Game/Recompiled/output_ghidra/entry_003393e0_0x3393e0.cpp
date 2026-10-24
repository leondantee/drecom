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

// Function: entry_003393e0
// Address: 0x3393e0 - 0x339458
void entry_003393e0_0x3393e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003393e0_0x3393e0");
#endif

    ctx->pc = 0x3393e0u;

    // 0x3393e0: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3393e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3393e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3393e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3393e8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x3393e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3393ec: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x3393ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3393f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3393f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3393f4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3393f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3393f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3393f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3393fc: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x3393fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339400: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339404: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x339404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x339408: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33940c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33940cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339410: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339414: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339418: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33941c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339424: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339428: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33942c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33942cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339430: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339434: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339438: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33943c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339440: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339444: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339444u;
    {
        const bool branch_taken_0x339444 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339444) {
            ctx->pc = 0x339458u;
            return;
        }
    }
    ctx->pc = 0x33944Cu;
    // 0x33944c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33944Cu;
    {
        const bool branch_taken_0x33944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33944c) {
            ctx->pc = 0x339458u;
            return;
        }
    }
    ctx->pc = 0x339454u;
    // 0x339454: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339458u;
}
