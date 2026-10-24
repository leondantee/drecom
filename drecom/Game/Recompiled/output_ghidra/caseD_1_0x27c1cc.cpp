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

// Function: caseD_1
// Address: 0x27c1cc - 0x27c210
void caseD_1_0x27c1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x27c1cc");
#endif

    ctx->pc = 0x27c1ccu;

    // 0x27c1cc: 0x2e210064  sltiu       $at, $s1, 0x64
    ctx->pc = 0x27c1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x27c1d0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x27C1D0u;
    {
        const bool branch_taken_0x27c1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c1d0) {
            ctx->pc = 0x27C210u;
            return;
        }
    }
    ctx->pc = 0x27C1D8u;
    // 0x27c1d8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x27c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x27c1dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27c1e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27c1e4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27c1e8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x27c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x27c1ec: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x27c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x27c1f0: 0x430019  multu       $v0, $v1
    ctx->pc = 0x27c1f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x27c1f4: 0x0  nop
    ctx->pc = 0x27c1f4u;
    // NOP
    // 0x27c1f8: 0x0  nop
    ctx->pc = 0x27c1f8u;
    // NOP
    // 0x27c1fc: 0x1010  mfhi        $v0
    ctx->pc = 0x27c1fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x27c200: 0x28142  srl         $s0, $v0, 5
    ctx->pc = 0x27c200u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x27c204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c208: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x27C208u;
    {
        const bool branch_taken_0x27c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c208) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C210u;
}
