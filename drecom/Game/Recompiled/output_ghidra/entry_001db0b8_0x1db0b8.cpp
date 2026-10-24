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

// Function: entry_001db0b8
// Address: 0x1db0b8 - 0x1db118
void entry_001db0b8_0x1db0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db0b8_0x1db0b8");
#endif

    ctx->pc = 0x1db0b8u;

    // 0x1db0b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db0bc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1db0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1db0c0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1db0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1db0c4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1db0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1db0c8: 0x34820404  ori         $v0, $a0, 0x404
    ctx->pc = 0x1db0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x1db0cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1db0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1db0d0: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x1db0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x1db0d4: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1db0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1db0d8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1db0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1db0dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db0e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db0e4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db0e8: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1db0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1db0ec: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1db0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1db0f0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1db0f4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1db0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1db0f8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1db0fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1db100: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB100u;
    {
        const bool branch_taken_0x1db100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1db100) {
            ctx->pc = 0x1DB118u;
            return;
        }
    }
    ctx->pc = 0x1DB108u;
    // 0x1db108: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1db108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1db10c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db10cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db110: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DB110u;
    {
        const bool branch_taken_0x1db110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db110) {
            ctx->pc = 0x1DB1C0u;
            return;
        }
    }
    ctx->pc = 0x1DB118u;
}
