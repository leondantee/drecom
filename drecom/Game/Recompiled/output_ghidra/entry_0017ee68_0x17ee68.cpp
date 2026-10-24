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

// Function: entry_0017ee68
// Address: 0x17ee68 - 0x17ee88
void entry_0017ee68_0x17ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee68_0x17ee68");
#endif

    ctx->pc = 0x17ee68u;

    // 0x17ee68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x17ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ee6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EE6Cu;
    {
        const bool branch_taken_0x17ee6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ee6c) {
            ctx->pc = 0x17EE88u;
            return;
        }
    }
    ctx->pc = 0x17EE74u;
    // 0x17ee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee78: 0x0  nop
    ctx->pc = 0x17ee78u;
    // NOP
    // 0x17ee7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ee7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17ee80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EE80u;
    {
        const bool branch_taken_0x17ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee80) {
            ctx->pc = 0x17EEA4u;
            return;
        }
    }
    ctx->pc = 0x17EE88u;
}
