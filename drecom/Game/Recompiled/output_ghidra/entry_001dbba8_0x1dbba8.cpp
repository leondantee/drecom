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

// Function: entry_001dbba8
// Address: 0x1dbba8 - 0x1dbc08
void entry_001dbba8_0x1dbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbba8_0x1dbba8");
#endif

    ctx->pc = 0x1dbba8u;

    // 0x1dbba8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1dbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1dbbac: 0x34820003  ori         $v0, $a0, 0x3
    ctx->pc = 0x1dbbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1dbbb0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1dbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1dbbb4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbbb8: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x1dbbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1dbbbc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1dbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1dbbc0: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x1dbbc4: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1dbbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1dbbc8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1dbbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1dbbcc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1dbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1dbbd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbd8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1dbbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbbdc: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x1dbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x1dbbe0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1dbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1dbbe4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1dbbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1dbbe8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1dbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1dbbec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dbbf0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBBF0u;
    {
        const bool branch_taken_0x1dbbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dbbf0) {
            ctx->pc = 0x1DBC08u;
            return;
        }
    }
    ctx->pc = 0x1DBBF8u;
    // 0x1dbbf8: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1dbbf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1dbbfc: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1dbbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1dbc00: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1DBC00u;
    {
        const bool branch_taken_0x1dbc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc00) {
            ctx->pc = 0x1DBCB0u;
            return;
        }
    }
    ctx->pc = 0x1DBC08u;
}
