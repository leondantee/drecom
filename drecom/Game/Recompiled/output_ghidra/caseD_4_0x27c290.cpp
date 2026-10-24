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

// Function: caseD_4
// Address: 0x27c290 - 0x27c304
void caseD_4_0x27c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x27c290");
#endif

    ctx->pc = 0x27c290u;

    // 0x27c290: 0x2e210064  sltiu       $at, $s1, 0x64
    ctx->pc = 0x27c290u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x27c294: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x27C294u;
    {
        const bool branch_taken_0x27c294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c294) {
            ctx->pc = 0x27C350u;
            return;
        }
    }
    ctx->pc = 0x27C29Cu;
    // 0x27c29c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c2a0: 0x90221b4d  lbu         $v0, 0x1B4D($at)
    ctx->pc = 0x27c2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Du));
    // 0x27c2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c2a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c2ac: 0xa0221b4d  sb          $v0, 0x1B4D($at)
    ctx->pc = 0x27c2acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Du, _value); } while (0);
    // 0x27c2b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c2b4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27c2b8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x27c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x27c2bc: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x27c2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27c2c0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x27c2c4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x27c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x27c2c8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x27c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x27c2cc: 0x430019  multu       $v0, $v1
    ctx->pc = 0x27c2ccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x27c2d0: 0x0  nop
    ctx->pc = 0x27c2d0u;
    // NOP
    // 0x27c2d4: 0x0  nop
    ctx->pc = 0x27c2d4u;
    // NOP
    // 0x27c2d8: 0x1010  mfhi        $v0
    ctx->pc = 0x27c2d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x27c2dc: 0x28142  srl         $s0, $v0, 5
    ctx->pc = 0x27c2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x27c2e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x27c2e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c2e8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C2E8u;
    {
        const bool branch_taken_0x27c2e8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27c2e8) {
            ctx->pc = 0x27C304u;
            return;
        }
    }
    ctx->pc = 0x27C2F0u;
    // 0x27c2f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x27c2f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c2f4: 0x0  nop
    ctx->pc = 0x27c2f4u;
    // NOP
    // 0x27c2f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27c2fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27C2FCu;
    {
        const bool branch_taken_0x27c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c2fc) {
            ctx->pc = 0x27C320u;
            return;
        }
    }
    ctx->pc = 0x27C304u;
}
