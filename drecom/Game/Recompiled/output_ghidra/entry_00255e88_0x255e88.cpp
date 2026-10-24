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

// Function: entry_00255e88
// Address: 0x255e88 - 0x255ec8
void entry_00255e88_0x255e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255e88_0x255e88");
#endif

    ctx->pc = 0x255e88u;

    // 0x255e88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x255e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x255e8c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x255e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x255e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255e94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x255e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x255e98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x255E98u;
    {
        const bool branch_taken_0x255e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255e98) {
            ctx->pc = 0x255EE8u;
            return;
        }
    }
    ctx->pc = 0x255EA0u;
    // 0x255ea0: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255ea4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255EA4u;
    {
        const bool branch_taken_0x255ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255ea4) {
            ctx->pc = 0x255EC8u;
            return;
        }
    }
    ctx->pc = 0x255EACu;
    // 0x255eac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255eb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255eb4: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x255eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x255eb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255ebc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255ec0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x255EC0u;
    {
        const bool branch_taken_0x255ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255ec0) {
            ctx->pc = 0x255F30u;
            return;
        }
    }
    ctx->pc = 0x255EC8u;
}
