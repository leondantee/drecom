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

// Function: entry_0017b66c
// Address: 0x17b66c - 0x17b698
void entry_0017b66c_0x17b66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b66c_0x17b66c");
#endif

    ctx->pc = 0x17b66cu;

    // 0x17b66c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b678: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17b678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17b67c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B67Cu;
    {
        const bool branch_taken_0x17b67c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17b67c) {
            ctx->pc = 0x17B698u;
            return;
        }
    }
    ctx->pc = 0x17B684u;
    // 0x17b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b688: 0x0  nop
    ctx->pc = 0x17b688u;
    // NOP
    // 0x17b68c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b690: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B690u;
    {
        const bool branch_taken_0x17b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b690) {
            ctx->pc = 0x17B6B4u;
            return;
        }
    }
    ctx->pc = 0x17B698u;
}
