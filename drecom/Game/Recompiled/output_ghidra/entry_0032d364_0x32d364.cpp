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

// Function: entry_0032d364
// Address: 0x32d364 - 0x32d390
void entry_0032d364_0x32d364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d364_0x32d364");
#endif

    ctx->pc = 0x32d364u;

    // 0x32d364: 0x8e23282c  lw          $v1, 0x282C($s1)
    ctx->pc = 0x32d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x32d368: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x32d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x32d36c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d374: 0x0  nop
    ctx->pc = 0x32d374u;
    // NOP
    // 0x32d378: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d37c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x32d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x32d380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d384: 0x0  nop
    ctx->pc = 0x32d384u;
    // NOP
    // 0x32d388: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d388u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d38c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->pc = 0x32d390u;
}
