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

// Function: entry_0017b784
// Address: 0x17b784 - 0x17b7b0
void entry_0017b784_0x17b784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b784_0x17b784");
#endif

    ctx->pc = 0x17b784u;

    // 0x17b784: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b788: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b78c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b790: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17b794: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B794u;
    {
        const bool branch_taken_0x17b794 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17b794) {
            ctx->pc = 0x17B7B0u;
            return;
        }
    }
    ctx->pc = 0x17B79Cu;
    // 0x17b79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7a0: 0x0  nop
    ctx->pc = 0x17b7a0u;
    // NOP
    // 0x17b7a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b7a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B7A8u;
    {
        const bool branch_taken_0x17b7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b7a8) {
            ctx->pc = 0x17B7CCu;
            return;
        }
    }
    ctx->pc = 0x17B7B0u;
}
