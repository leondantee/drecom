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

// Function: entry_002fee88
// Address: 0x2fee88 - 0x2feeb8
void entry_002fee88_0x2fee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fee88_0x2fee88");
#endif

    ctx->pc = 0x2fee88u;

    // 0x2fee88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fee8c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fee90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee94: 0x0  nop
    ctx->pc = 0x2fee94u;
    // NOP
    // 0x2fee98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2fee98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee9c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2fee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2feea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2feea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feea4: 0x0  nop
    ctx->pc = 0x2feea4u;
    // NOP
    // 0x2feea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2feea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2feeac: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x2feeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2feeb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2feeb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2feeb4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2feeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x2feeb8u;
}
