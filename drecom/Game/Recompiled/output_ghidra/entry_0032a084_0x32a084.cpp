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

// Function: entry_0032a084
// Address: 0x32a084 - 0x32a0b0
void entry_0032a084_0x32a084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a084_0x32a084");
#endif

    ctx->pc = 0x32a084u;

    // 0x32a084: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x32a084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x32a088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32a088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a08c: 0x0  nop
    ctx->pc = 0x32a08cu;
    // NOP
    // 0x32a090: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a094: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x32a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a098: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32a098u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32a09c: 0x0  nop
    ctx->pc = 0x32a09cu;
    // NOP
    // 0x32a0a0: 0x0  nop
    ctx->pc = 0x32a0a0u;
    // NOP
    // 0x32a0a4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32a0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x32a0a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32A0A8u;
    {
        const bool branch_taken_0x32a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a0a8) {
            ctx->pc = 0x32A0E8u;
            return;
        }
    }
    ctx->pc = 0x32A0B0u;
}
