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

// Function: entry_00255e28
// Address: 0x255e28 - 0x255e88
void entry_00255e28_0x255e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255e28_0x255e28");
#endif

    ctx->pc = 0x255e28u;

    // 0x255e28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255e2c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x255e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x255e30: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x255e30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x255e34: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x255e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x255e38: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x255e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x255e3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x255e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x255e40: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x255e44: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x255e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x255e48: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x255e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x255e4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255e50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x255e5c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x255e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x255e60: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x255e64: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x255e64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x255e68: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x255e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x255e6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x255e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255e70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x255E70u;
    {
        const bool branch_taken_0x255e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255e70) {
            ctx->pc = 0x255E88u;
            return;
        }
    }
    ctx->pc = 0x255E78u;
    // 0x255e78: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x255e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x255e7c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x255e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x255e80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x255E80u;
    {
        const bool branch_taken_0x255e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255e80) {
            ctx->pc = 0x255F30u;
            return;
        }
    }
    ctx->pc = 0x255E88u;
}
