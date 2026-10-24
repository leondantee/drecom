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

// Function: entry_002dd7c0
// Address: 0x2dd7c0 - 0x2dd824
void entry_002dd7c0_0x2dd7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd7c0_0x2dd7c0");
#endif

    ctx->pc = 0x2dd7c0u;

    // 0x2dd7c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd7c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dd7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dd7c8: 0x1060017f  beqz        $v1, . + 4 + (0x17F << 2)
    ctx->pc = 0x2DD7C8u;
    {
        const bool branch_taken_0x2dd7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd7c8) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD7D0u;
    // 0x2dd7d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2dd7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dd7d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd7d8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dd7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd7dc: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dd7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dd7e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dd7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dd7e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd7e8: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DD7E8u;
    {
        const bool branch_taken_0x2dd7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd7e8) {
            ctx->pc = 0x2DD8B4u;
            return;
        }
    }
    ctx->pc = 0x2DD7F0u;
    // 0x2dd7f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dd7f4: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DD7F4u;
    {
        const bool branch_taken_0x2dd7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd7f4) {
            ctx->pc = 0x2DD8B4u;
            return;
        }
    }
    ctx->pc = 0x2DD7FCu;
    // 0x2dd7fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dd7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dd800: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD800u;
    {
        const bool branch_taken_0x2dd800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd800) {
            ctx->pc = 0x2DD860u;
            return;
        }
    }
    ctx->pc = 0x2DD808u;
    // 0x2dd808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd80c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD80Cu;
    {
        const bool branch_taken_0x2dd80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dd80c) {
            ctx->pc = 0x2DD824u;
            return;
        }
    }
    ctx->pc = 0x2DD814u;
    // 0x2dd814: 0x1080016c  beqz        $a0, . + 4 + (0x16C << 2)
    ctx->pc = 0x2DD814u;
    {
        const bool branch_taken_0x2dd814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd814) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD81Cu;
    // 0x2dd81c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2DD81Cu;
    {
        const bool branch_taken_0x2dd81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd81c) {
            ctx->pc = 0x2DD8B4u;
            return;
        }
    }
    ctx->pc = 0x2DD824u;
}
