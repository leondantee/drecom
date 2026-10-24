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

// Function: entry_00355e98
// Address: 0x355e98 - 0x355ed8
void entry_00355e98_0x355e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355e98_0x355e98");
#endif

    ctx->pc = 0x355e98u;

    // 0x355e98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355e9c: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x355e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x355ea0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x355ea4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x355ea8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x355ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x355eac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x355eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x355eb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355eb8: 0x0  nop
    ctx->pc = 0x355eb8u;
    // NOP
    // 0x355ebc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x355ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355ec0: 0x3c024077  lui         $v0, 0x4077
    ctx->pc = 0x355ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16503 << 16));
    // 0x355ec4: 0x3442bdef  ori         $v0, $v0, 0xBDEF
    ctx->pc = 0x355ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48623);
    // 0x355ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355ecc: 0x0  nop
    ctx->pc = 0x355eccu;
    // NOP
    // 0x355ed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x355ed4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x355ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x355ed8u;
}
