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

// Function: entry_00299ed0
// Address: 0x299ed0 - 0x299ef0
void entry_00299ed0_0x299ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299ed0_0x299ed0");
#endif

    ctx->pc = 0x299ed0u;

    // 0x299ed0: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x299ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x299ed4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299ED4u;
    {
        const bool branch_taken_0x299ed4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x299ed4) {
            ctx->pc = 0x299EF0u;
            return;
        }
    }
    ctx->pc = 0x299EDCu;
    // 0x299edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299ee0: 0x0  nop
    ctx->pc = 0x299ee0u;
    // NOP
    // 0x299ee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299ee8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299EE8u;
    {
        const bool branch_taken_0x299ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299ee8) {
            ctx->pc = 0x299F0Cu;
            return;
        }
    }
    ctx->pc = 0x299EF0u;
}
