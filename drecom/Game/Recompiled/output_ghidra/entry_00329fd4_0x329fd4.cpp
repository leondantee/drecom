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

// Function: entry_00329fd4
// Address: 0x329fd4 - 0x32a020
void entry_00329fd4_0x329fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329fd4_0x329fd4");
#endif

    ctx->pc = 0x329fd4u;

    // 0x329fd4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x329fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329fd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x329fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329fdc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329fe4: 0x0  nop
    ctx->pc = 0x329fe4u;
    // NOP
    // 0x329fe8: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x329fe8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329fec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x329fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x329ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x329ff4: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x329ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x329ff8: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x329ff8u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329ffc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x329ffcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32a000: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x32a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x32a004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32a004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a008: 0x0  nop
    ctx->pc = 0x32a008u;
    // NOP
    // 0x32a00c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a010: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x32a010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x32a014: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a018: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a01c: 0xe4601028  swc1        $f0, 0x1028($v1)
    ctx->pc = 0x32a01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4136), bits); }
    ctx->pc = 0x32a020u;
}
