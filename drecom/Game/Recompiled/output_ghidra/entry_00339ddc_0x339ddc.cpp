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

// Function: entry_00339ddc
// Address: 0x339ddc - 0x339e44
void entry_00339ddc_0x339ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339ddc_0x339ddc");
#endif

    ctx->pc = 0x339ddcu;

    // 0x339ddc: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x339ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x339de0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339de4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x339de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x339de8: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339dec: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339df0: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x339df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x339df4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339df8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339dfc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339e00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339e04: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339e08: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339e10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339e14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339e18: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339e1c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339e20: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339e24: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339e28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339e2c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339e30: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339E30u;
    {
        const bool branch_taken_0x339e30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339e30) {
            ctx->pc = 0x339E44u;
            return;
        }
    }
    ctx->pc = 0x339E38u;
    // 0x339e38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339E38u;
    {
        const bool branch_taken_0x339e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339e38) {
            ctx->pc = 0x339E44u;
            return;
        }
    }
    ctx->pc = 0x339E40u;
    // 0x339e40: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339e44u;
}
