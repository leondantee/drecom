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

// Function: entry_00192388
// Address: 0x192388 - 0x1924b0
void entry_00192388_0x192388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192388_0x192388");
#endif

    ctx->pc = 0x192388u;

    // 0x192388: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19238c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x192390: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x192390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x192394: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19239c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1923a0: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x1923a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1923a4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1923a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1923a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1923a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1923ac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1923b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1923bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1923bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1923c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1923c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1923c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1923cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1923d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1923d8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1923e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923e8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1923e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1923ec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1923f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1923f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1923f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1923f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1923f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1923f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1923fc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1923fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192400: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192404: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192408: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x192408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19240c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x19240cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x192410: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192414: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192418: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19241c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19241cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x192420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192428: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19242c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192430: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192434: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x192434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x192438: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19243c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192440: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192444: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192448: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x192448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19244c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x19244cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x192450: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192458: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19245c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192460: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x192460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x192464: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19246c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192470: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x192474: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x192474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192478: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x192478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x19247c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19247cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x192480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x192484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x192488: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x192488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19248c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19248cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x192490: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192498: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x192498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19249c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1924a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1924a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1924a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1924a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1924a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1924ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1924b0u;
}
