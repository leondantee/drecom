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

// Function: entry_0026b1d0
// Address: 0x26b1d0 - 0x26b210
void entry_0026b1d0_0x26b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b1d0_0x26b1d0");
#endif

    ctx->pc = 0x26b1d0u;

    // 0x26b1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26b1d4: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x26b1d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26b1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26b1dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26b1dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26b1e0: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x26b1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26b1e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x26b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26b1e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b1f0: 0x0  nop
    ctx->pc = 0x26b1f0u;
    // NOP
    // 0x26b1f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26b1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26b1f8: 0x3c023fcb  lui         $v0, 0x3FCB
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16331 << 16));
    // 0x26b1fc: 0x34422cb4  ori         $v0, $v0, 0x2CB4
    ctx->pc = 0x26b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11444);
    // 0x26b200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b204: 0x0  nop
    ctx->pc = 0x26b204u;
    // NOP
    // 0x26b208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26b20c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x26b210u;
}
