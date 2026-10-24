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

// Function: entry_00155af8
// Address: 0x155af8 - 0x155b28
void entry_00155af8_0x155af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155af8_0x155af8");
#endif

    ctx->pc = 0x155af8u;

    // 0x155af8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x155af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x155afc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x155afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155b00: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x155B00u;
    {
        const bool branch_taken_0x155b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155b00) {
            ctx->pc = 0x155A94u;
            return;
        }
    }
    ctx->pc = 0x155B08u;
    // 0x155b08: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x155b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155b0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x155b0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155b10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x155b10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155b14: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x155b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155b18: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155b1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155b20: 0xc055700  jal         func_155C00
    ctx->pc = 0x155B20u;
    SET_GPR_U32(ctx, 31, 0x155B28u);
    ctx->pc = 0x155C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C00u, 0x155B20u, 0x155B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B28u;
}
