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

// Function: entry_001b6278
// Address: 0x1b6278 - 0x1b631c
void entry_001b6278_0x1b6278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6278_0x1b6278");
#endif

    ctx->pc = 0x1b6278u;

    // 0x1b6278: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b627c: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1b627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6280: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1b6280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1b6284: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b6284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6288: 0x0  nop
    ctx->pc = 0x1b6288u;
    // NOP
    // 0x1b628c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b628cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6290: 0x0  nop
    ctx->pc = 0x1b6290u;
    // NOP
    // 0x1b6294: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B6294u;
    {
        const bool branch_taken_0x1b6294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6294) {
            ctx->pc = 0x1B6378u;
            return;
        }
    }
    ctx->pc = 0x1B629Cu;
    // 0x1b629c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b62a0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b62a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b62a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b62a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62ac: 0x0  nop
    ctx->pc = 0x1b62acu;
    // NOP
    // 0x1b62b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b62b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b62b4: 0x0  nop
    ctx->pc = 0x1b62b4u;
    // NOP
    // 0x1b62b8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B62B8u;
    {
        const bool branch_taken_0x1b62b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b62b8) {
            ctx->pc = 0x1B631Cu;
            return;
        }
    }
    ctx->pc = 0x1B62C0u;
    // 0x1b62c0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b62c4: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b62c8: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x1b62c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x1b62cc: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x1b62ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1b62d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b62d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62d4: 0x0  nop
    ctx->pc = 0x1b62d4u;
    // NOP
    // 0x1b62d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b62d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b62dc: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b62dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b62e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b62e4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b62e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b62e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b62ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b62ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62f0: 0x0  nop
    ctx->pc = 0x1b62f0u;
    // NOP
    // 0x1b62f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b62f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b62f8: 0x0  nop
    ctx->pc = 0x1b62f8u;
    // NOP
    // 0x1b62fc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B62FCu;
    {
        const bool branch_taken_0x1b62fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b62fc) {
            ctx->pc = 0x1B6378u;
            return;
        }
    }
    ctx->pc = 0x1B6304u;
    // 0x1b6304: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b6304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b630c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6310: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b6310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b6314: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B6314u;
    {
        const bool branch_taken_0x1b6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6314) {
            ctx->pc = 0x1B6378u;
            return;
        }
    }
    ctx->pc = 0x1B631Cu;
}
