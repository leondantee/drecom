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

// Function: entry_0032d278
// Address: 0x32d278 - 0x32d2b0
void entry_0032d278_0x32d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d278_0x32d278");
#endif

    ctx->pc = 0x32d278u;

    // 0x32d278: 0x86222910  lh          $v0, 0x2910($s1)
    ctx->pc = 0x32d278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10512)));
    // 0x32d27c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32d27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d280: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32d280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32d284: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x32d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x32d288: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32d288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d290: 0x0  nop
    ctx->pc = 0x32d290u;
    // NOP
    // 0x32d294: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d298: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x32d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x32d29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d2a0: 0x0  nop
    ctx->pc = 0x32d2a0u;
    // NOP
    // 0x32d2a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d2a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d2a8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d2ac: 0x0  nop
    ctx->pc = 0x32d2acu;
    // NOP
    ctx->pc = 0x32d2b0u;
}
