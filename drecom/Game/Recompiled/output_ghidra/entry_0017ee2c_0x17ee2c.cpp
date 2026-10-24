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

// Function: entry_0017ee2c
// Address: 0x17ee2c - 0x17ee4c
void entry_0017ee2c_0x17ee2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee2c_0x17ee2c");
#endif

    ctx->pc = 0x17ee2cu;

    // 0x17ee2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EE30u;
    {
        const bool branch_taken_0x17ee30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ee30) {
            ctx->pc = 0x17EE4Cu;
            return;
        }
    }
    ctx->pc = 0x17EE38u;
    // 0x17ee38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ee38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee3c: 0x0  nop
    ctx->pc = 0x17ee3cu;
    // NOP
    // 0x17ee40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ee40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ee44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EE44u;
    {
        const bool branch_taken_0x17ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee44) {
            ctx->pc = 0x17EE68u;
            return;
        }
    }
    ctx->pc = 0x17EE4Cu;
}
