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

// Function: entry_00330998
// Address: 0x330998 - 0x3309b8
void entry_00330998_0x330998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330998_0x330998");
#endif

    ctx->pc = 0x330998u;

    // 0x330998: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x330998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x33099c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33099Cu;
    {
        const bool branch_taken_0x33099c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x33099c) {
            ctx->pc = 0x3309B8u;
            return;
        }
    }
    ctx->pc = 0x3309A4u;
    // 0x3309a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3309a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3309a8: 0x0  nop
    ctx->pc = 0x3309a8u;
    // NOP
    // 0x3309ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3309acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3309b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3309B0u;
    {
        const bool branch_taken_0x3309b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3309b0) {
            ctx->pc = 0x3309D4u;
            return;
        }
    }
    ctx->pc = 0x3309B8u;
}
