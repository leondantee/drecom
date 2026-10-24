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

// Function: entry_002fc9c0
// Address: 0x2fc9c0 - 0x2fc9f8
void entry_002fc9c0_0x2fc9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc9c0_0x2fc9c0");
#endif

    ctx->pc = 0x2fc9c0u;

    // 0x2fc9c0: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2FC9C0u;
    {
        const bool branch_taken_0x2fc9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9c0) {
            ctx->pc = 0x2FC974u;
            return;
        }
    }
    ctx->pc = 0x2FC9C8u;
    // 0x2fc9c8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc9cc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fc9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc9d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc9d4: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FC9D4u;
    {
        const bool branch_taken_0x2fc9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fc9d4) {
            ctx->pc = 0x2FCA18u;
            return;
        }
    }
    ctx->pc = 0x2FC9DCu;
    // 0x2fc9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc9e0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC9E0u;
    {
        const bool branch_taken_0x2fc9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fc9e0) {
            ctx->pc = 0x2FCA08u;
            return;
        }
    }
    ctx->pc = 0x2FC9E8u;
    // 0x2fc9e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC9E8u;
    {
        const bool branch_taken_0x2fc9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9e8) {
            ctx->pc = 0x2FC9F8u;
            return;
        }
    }
    ctx->pc = 0x2FC9F0u;
    // 0x2fc9f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FC9F0u;
    {
        const bool branch_taken_0x2fc9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9f0) {
            ctx->pc = 0x2FCA20u;
            return;
        }
    }
    ctx->pc = 0x2FC9F8u;
}
