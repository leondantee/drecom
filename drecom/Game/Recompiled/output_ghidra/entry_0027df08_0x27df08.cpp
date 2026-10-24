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

// Function: entry_0027df08
// Address: 0x27df08 - 0x27df3c
void entry_0027df08_0x27df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027df08_0x27df08");
#endif

    ctx->pc = 0x27df08u;

    // 0x27df08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27df08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27df0c: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27df0cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27df10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27df14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27df14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27df18: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x27df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x27df1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df20: 0x0  nop
    ctx->pc = 0x27df20u;
    // NOP
    // 0x27df24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27df24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27df28: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x27df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x27df2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df30: 0x0  nop
    ctx->pc = 0x27df30u;
    // NOP
    // 0x27df34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27df34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27df38: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27df38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x27df3cu;
}
