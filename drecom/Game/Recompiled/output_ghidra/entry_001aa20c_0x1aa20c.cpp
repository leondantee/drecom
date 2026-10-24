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

// Function: entry_001aa20c
// Address: 0x1aa20c - 0x1aa230
void entry_001aa20c_0x1aa20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa20c_0x1aa20c");
#endif

    ctx->pc = 0x1aa20cu;

    // 0x1aa20c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa210: 0x9042002c  lbu         $v0, 0x2C($v0)
    ctx->pc = 0x1aa210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1aa214: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA214u;
    {
        const bool branch_taken_0x1aa214 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1aa214) {
            ctx->pc = 0x1AA230u;
            return;
        }
    }
    ctx->pc = 0x1AA21Cu;
    // 0x1aa21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa220: 0x0  nop
    ctx->pc = 0x1aa220u;
    // NOP
    // 0x1aa224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA228u;
    {
        const bool branch_taken_0x1aa228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa228) {
            ctx->pc = 0x1AA24Cu;
            return;
        }
    }
    ctx->pc = 0x1AA230u;
}
