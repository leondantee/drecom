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

// Function: entry_001db118
// Address: 0x1db118 - 0x1db158
void entry_001db118_0x1db118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db118_0x1db118");
#endif

    ctx->pc = 0x1db118u;

    // 0x1db118: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1db118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1db11c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1db11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1db120: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1db120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db124: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1db124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1db128: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DB128u;
    {
        const bool branch_taken_0x1db128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db128) {
            ctx->pc = 0x1DB178u;
            return;
        }
    }
    ctx->pc = 0x1DB130u;
    // 0x1db130: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db134: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB134u;
    {
        const bool branch_taken_0x1db134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db134) {
            ctx->pc = 0x1DB158u;
            return;
        }
    }
    ctx->pc = 0x1DB13Cu;
    // 0x1db13c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db140: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1db140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db144: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1db148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1db148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1db14c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db14cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db150: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DB150u;
    {
        const bool branch_taken_0x1db150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db150) {
            ctx->pc = 0x1DB1C0u;
            return;
        }
    }
    ctx->pc = 0x1DB158u;
}
