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

// Function: entry_0029319c
// Address: 0x29319c - 0x2931dc
void entry_0029319c_0x29319c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029319c_0x29319c");
#endif

    ctx->pc = 0x29319cu;

    // 0x29319c: 0x8e425dc4  lw          $v0, 0x5DC4($s2)
    ctx->pc = 0x29319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
    // 0x2931a0: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2931A0u;
    {
        const bool branch_taken_0x2931a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2931a0) {
            ctx->pc = 0x293204u;
            return;
        }
    }
    ctx->pc = 0x2931A8u;
    // 0x2931a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2931a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2931ac: 0x8c24fde0  lw          $a0, -0x220($at)
    ctx->pc = 0x2931acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFDE0u));
    // 0x2931b0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2931b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2931b4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2931B4u;
    {
        const bool branch_taken_0x2931b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2931b4) {
            ctx->pc = 0x2931F4u;
            return;
        }
    }
    ctx->pc = 0x2931BCu;
    // 0x2931bc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2931bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2931c0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2931C0u;
    {
        const bool branch_taken_0x2931c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2931c0) {
            ctx->pc = 0x2931E8u;
            return;
        }
    }
    ctx->pc = 0x2931C8u;
    // 0x2931c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2931cc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2931CCu;
    {
        const bool branch_taken_0x2931cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2931cc) {
            ctx->pc = 0x2931DCu;
            return;
        }
    }
    ctx->pc = 0x2931D4u;
    // 0x2931d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2931D4u;
    {
        const bool branch_taken_0x2931d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2931d4) {
            ctx->pc = 0x293210u;
            return;
        }
    }
    ctx->pc = 0x2931DCu;
}
