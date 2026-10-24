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

// Function: entry_00329d34
// Address: 0x329d34 - 0x329dd4
void entry_00329d34_0x329d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329d34_0x329d34");
#endif

    ctx->pc = 0x329d34u;

    // 0x329d34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d3c: 0x0  nop
    ctx->pc = 0x329d3cu;
    // NOP
    // 0x329d40: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x329d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x329d44: 0x3c0343bc  lui         $v1, 0x43BC
    ctx->pc = 0x329d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17340 << 16));
    // 0x329d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d4c: 0x0  nop
    ctx->pc = 0x329d4cu;
    // NOP
    // 0x329d50: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x329d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x329d54: 0x3c034377  lui         $v1, 0x4377
    ctx->pc = 0x329d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17271 << 16));
    // 0x329d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d5c: 0x0  nop
    ctx->pc = 0x329d5cu;
    // NOP
    // 0x329d60: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x329d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x329d64: 0x3c0343dc  lui         $v1, 0x43DC
    ctx->pc = 0x329d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17372 << 16));
    // 0x329d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d6c: 0x0  nop
    ctx->pc = 0x329d6cu;
    // NOP
    // 0x329d70: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x329d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x329d74: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x329d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x329d78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x329d7c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x329d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x329d80: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x329d80u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329d84: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x329d84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329d88: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x329d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x329d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d90: 0x0  nop
    ctx->pc = 0x329d90u;
    // NOP
    // 0x329d94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x329d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x329d98: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x329d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329da0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x329da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x329da4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x329da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x329da8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x329dac: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x329dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x329db0: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x329db0u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329db4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x329db4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329db8: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x329db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x329dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329dc0: 0x0  nop
    ctx->pc = 0x329dc0u;
    // NOP
    // 0x329dc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x329dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x329dc8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x329dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329dcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329dd0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x329dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->pc = 0x329dd4u;
}
