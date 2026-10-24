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

// Function: entry_0027de80
// Address: 0x27de80 - 0x27deb8
void entry_0027de80_0x27de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027de80_0x27de80");
#endif

    ctx->pc = 0x27de80u;

    // 0x27de80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de84: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de84u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27de88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de8c: 0x0  nop
    ctx->pc = 0x27de8cu;
    // NOP
    // 0x27de90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27de90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27de94: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x27de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x27de98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de9c: 0x0  nop
    ctx->pc = 0x27de9cu;
    // NOP
    // 0x27dea0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27dea0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27dea4: 0x0  nop
    ctx->pc = 0x27dea4u;
    // NOP
    // 0x27dea8: 0x0  nop
    ctx->pc = 0x27dea8u;
    // NOP
    // 0x27deac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27deb0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27DEB0u;
    {
        const bool branch_taken_0x27deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27deb0) {
            ctx->pc = 0x27DF3Cu;
            return;
        }
    }
    ctx->pc = 0x27DEB8u;
}
