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

// Function: entry_001e1910
// Address: 0x1e1910 - 0x1e1958
void entry_001e1910_0x1e1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1910_0x1e1910");
#endif

    switch (ctx->pc) {
        case 0x1e1924u: goto label_1e1924;
        default: break;
    }

    ctx->pc = 0x1e1910u;

    // 0x1e1910: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e1914: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e1914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e1918: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e191c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E191Cu;
    SET_GPR_U32(ctx, 31, 0x1E1924u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E191Cu, 0x1E1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1924u;
label_1e1924:
    // 0x1e1924: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e1924u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1928: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1e1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e192c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1930: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1934: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e1934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1938: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1938u;
    {
        const bool branch_taken_0x1e1938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1938) {
            ctx->pc = 0x1E1958u;
            return;
        }
    }
    ctx->pc = 0x1E1940u;
    // 0x1e1940: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e1944: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1948: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e194c: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e194cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1950: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1988u;
            return;
        }
    }
    ctx->pc = 0x1E1958u;
}
