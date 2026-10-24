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

// Function: entry_002040b8
// Address: 0x2040b8 - 0x204100
void entry_002040b8_0x2040b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002040b8_0x2040b8");
#endif

    ctx->pc = 0x2040b8u;

    // 0x2040b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2040b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2040bc: 0x8ca4008c  lw          $a0, 0x8C($a1)
    ctx->pc = 0x2040bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2040c0: 0x10800424  beqz        $a0, . + 4 + (0x424 << 2)
    ctx->pc = 0x2040C0u;
    {
        const bool branch_taken_0x2040c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040c0) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x2040C8u;
    // 0x2040c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2040c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2040cc: 0x84a60096  lh          $a2, 0x96($a1)
    ctx->pc = 0x2040ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2040d0: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x2040d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2040d4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2040d4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2040d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2040d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2040dc: 0x10e40360  beq         $a3, $a0, . + 4 + (0x360 << 2)
    ctx->pc = 0x2040DCu;
    {
        const bool branch_taken_0x2040dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x2040dc) {
            ctx->pc = 0x204E60u;
            return;
        }
    }
    ctx->pc = 0x2040E4u;
    // 0x2040e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040e8: 0x10e500e8  beq         $a3, $a1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2040E8u;
    {
        const bool branch_taken_0x2040e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x2040e8) {
            ctx->pc = 0x20448Cu;
            return;
        }
    }
    ctx->pc = 0x2040F0u;
    // 0x2040f0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2040F0u;
    {
        const bool branch_taken_0x2040f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040f0) {
            ctx->pc = 0x204100u;
            return;
        }
    }
    ctx->pc = 0x2040F8u;
    // 0x2040f8: 0x10000416  b           . + 4 + (0x416 << 2)
    ctx->pc = 0x2040F8u;
    {
        const bool branch_taken_0x2040f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040f8) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204100u;
}
