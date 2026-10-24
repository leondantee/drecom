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

// Function: entry_001d8c1c
// Address: 0x1d8c1c - 0x1d8cbc
void entry_001d8c1c_0x1d8c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8c1c_0x1d8c1c");
#endif

    ctx->pc = 0x1d8c1cu;

    // 0x1d8c1c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8c20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d8c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8c24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8c28: 0x10620158  beq         $v1, $v0, . + 4 + (0x158 << 2)
    ctx->pc = 0x1D8C28u;
    {
        const bool branch_taken_0x1d8c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c28) {
            ctx->pc = 0x1D918Cu;
            return;
        }
    }
    ctx->pc = 0x1D8C30u;
    // 0x1d8c30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d8c34: 0x10620140  beq         $v1, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x1D8C34u;
    {
        const bool branch_taken_0x1d8c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c34) {
            ctx->pc = 0x1D9138u;
            return;
        }
    }
    ctx->pc = 0x1D8C3Cu;
    // 0x1d8c3c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d8c40: 0x1062011c  beq         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1D8C40u;
    {
        const bool branch_taken_0x1d8c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c40) {
            ctx->pc = 0x1D90B4u;
            return;
        }
    }
    ctx->pc = 0x1D8C48u;
    // 0x1d8c48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d8c4c: 0x106200fe  beq         $v1, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x1D8C4Cu;
    {
        const bool branch_taken_0x1d8c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c4c) {
            ctx->pc = 0x1D9048u;
            return;
        }
    }
    ctx->pc = 0x1D8C54u;
    // 0x1d8c54: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1d8c58: 0x106200e6  beq         $v1, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1D8C58u;
    {
        const bool branch_taken_0x1d8c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c58) {
            ctx->pc = 0x1D8FF4u;
            return;
        }
    }
    ctx->pc = 0x1D8C60u;
    // 0x1d8c60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8c64: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1D8C64u;
    {
        const bool branch_taken_0x1d8c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c64) {
            ctx->pc = 0x1D8F74u;
            return;
        }
    }
    ctx->pc = 0x1D8C6Cu;
    // 0x1d8c6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d8c70: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1D8C70u;
    {
        const bool branch_taken_0x1d8c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c70) {
            ctx->pc = 0x1D8F20u;
            return;
        }
    }
    ctx->pc = 0x1D8C78u;
    // 0x1d8c78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8c7c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D8C7Cu;
    {
        const bool branch_taken_0x1d8c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c7c) {
            ctx->pc = 0x1D8D10u;
            return;
        }
    }
    ctx->pc = 0x1D8C84u;
    // 0x1d8c84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8c88: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8C88u;
    {
        const bool branch_taken_0x1d8c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c88) {
            ctx->pc = 0x1D8D10u;
            return;
        }
    }
    ctx->pc = 0x1D8C90u;
    // 0x1d8c90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8c94: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D8C94u;
    {
        const bool branch_taken_0x1d8c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c94) {
            ctx->pc = 0x1D8D10u;
            return;
        }
    }
    ctx->pc = 0x1D8C9Cu;
    // 0x1d8c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8ca0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D8CA0u;
    {
        const bool branch_taken_0x1d8ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8ca0) {
            ctx->pc = 0x1D8D10u;
            return;
        }
    }
    ctx->pc = 0x1D8CA8u;
    // 0x1d8ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8cac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8CACu;
    {
        const bool branch_taken_0x1d8cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8cac) {
            ctx->pc = 0x1D8CBCu;
            return;
        }
    }
    ctx->pc = 0x1D8CB4u;
    // 0x1d8cb4: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x1D8CB4u;
    {
        const bool branch_taken_0x1d8cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cb4) {
            ctx->pc = 0x1D91E4u;
            return;
        }
    }
    ctx->pc = 0x1D8CBCu;
}
