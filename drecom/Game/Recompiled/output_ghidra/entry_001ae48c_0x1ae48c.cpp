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

// Function: entry_001ae48c
// Address: 0x1ae48c - 0x1ae4f4
void entry_001ae48c_0x1ae48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae48c_0x1ae48c");
#endif

    ctx->pc = 0x1ae48cu;

    // 0x1ae48c: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x1ae48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae490: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ae490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ae494: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1ae498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae49c: 0x0  nop
    ctx->pc = 0x1ae49cu;
    // NOP
    // 0x1ae4a0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1ae4a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ae4a4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ae4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae4ac: 0xc6201588  lwc1        $f0, 0x1588($s1)
    ctx->pc = 0x1ae4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae4b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ae4b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ae4b4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1ae4b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ae4b8: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae4bc: 0xc420efe8  lwc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae4bcu;
    { uint32_t bits = FAST_READ32(0x5EEFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae4c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae4c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae4c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4c8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4cc: 0xe420b50c  swc1        $f0, -0x4AF4($at)
    ctx->pc = 0x1ae4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948108), bits); }
    // 0x1ae4d0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ae4d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4d8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4dc: 0xa422b502  sh          $v0, -0x4AFE($at)
    ctx->pc = 0x1ae4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948098), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae4e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae4e4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae4e8: 0xa420b504  sh          $zero, -0x4AFC($at)
    ctx->pc = 0x1ae4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ae4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae4f0: 0xa2220d86  sb          $v0, 0xD86($s1)
    ctx->pc = 0x1ae4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ae4f4u;
}
