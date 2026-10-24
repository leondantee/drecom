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

// Function: entry_00313f68
// Address: 0x313f68 - 0x313fa8
void entry_00313f68_0x313f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313f68_0x313f68");
#endif

    ctx->pc = 0x313f68u;

    // 0x313f68: 0x1220ffe1  beqz        $s1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x313F68u;
    {
        const bool branch_taken_0x313f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x313f68) {
            ctx->pc = 0x313EF0u;
            return;
        }
    }
    ctx->pc = 0x313F70u;
    // 0x313f70: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x313f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x313f74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313f78: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x313F78u;
    {
        const bool branch_taken_0x313f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313f78) {
            ctx->pc = 0x31400Cu;
            return;
        }
    }
    ctx->pc = 0x313F80u;
    // 0x313f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x313f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313f84: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x313F84u;
    {
        const bool branch_taken_0x313f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313f84) {
            ctx->pc = 0x313FE8u;
            return;
        }
    }
    ctx->pc = 0x313F8Cu;
    // 0x313f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313f90: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x313F90u;
    {
        const bool branch_taken_0x313f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x313f90) {
            ctx->pc = 0x313FC8u;
            return;
        }
    }
    ctx->pc = 0x313F98u;
    // 0x313f98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313F98u;
    {
        const bool branch_taken_0x313f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x313f98) {
            ctx->pc = 0x313FA8u;
            return;
        }
    }
    ctx->pc = 0x313FA0u;
    // 0x313fa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x313FA0u;
    {
        const bool branch_taken_0x313fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313fa0) {
            ctx->pc = 0x314030u;
            return;
        }
    }
    ctx->pc = 0x313FA8u;
}
