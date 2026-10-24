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

// Function: entry_002554c8
// Address: 0x2554c8 - 0x255508
void entry_002554c8_0x2554c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002554c8_0x2554c8");
#endif

    ctx->pc = 0x2554c8u;

    // 0x2554c8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2554c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2554cc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2554ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2554d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2554d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2554d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2554d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2554d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2554D8u;
    {
        const bool branch_taken_0x2554d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554d8) {
            ctx->pc = 0x255528u;
            return;
        }
    }
    ctx->pc = 0x2554E0u;
    // 0x2554e0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2554e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2554e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2554E4u;
    {
        const bool branch_taken_0x2554e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2554e4) {
            ctx->pc = 0x255508u;
            return;
        }
    }
    ctx->pc = 0x2554ECu;
    // 0x2554ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2554ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2554f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2554f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2554f4: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2554f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2554f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2554fc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2554fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255500: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x255500u;
    {
        const bool branch_taken_0x255500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255500) {
            ctx->pc = 0x255570u;
            return;
        }
    }
    ctx->pc = 0x255508u;
}
