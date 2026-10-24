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

// Function: entry_00329eb4
// Address: 0x329eb4 - 0x329ee0
void entry_00329eb4_0x329eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329eb4_0x329eb4");
#endif

    ctx->pc = 0x329eb4u;

    // 0x329eb4: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329ebc: 0x0  nop
    ctx->pc = 0x329ebcu;
    // NOP
    // 0x329ec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329ec4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x329ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329ec8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x329ec8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329ecc: 0x0  nop
    ctx->pc = 0x329eccu;
    // NOP
    // 0x329ed0: 0x0  nop
    ctx->pc = 0x329ed0u;
    // NOP
    // 0x329ed4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x329ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x329ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x329ED8u;
    {
        const bool branch_taken_0x329ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ed8) {
            ctx->pc = 0x329F18u;
            return;
        }
    }
    ctx->pc = 0x329EE0u;
}
