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

// Function: entry_001b78b0
// Address: 0x1b78b0 - 0x1b7954
void entry_001b78b0_0x1b78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b78b0_0x1b78b0");
#endif

    ctx->pc = 0x1b78b0u;

    // 0x1b78b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b78b4: 0xc4811b5c  lwc1        $f1, 0x1B5C($a0)
    ctx->pc = 0x1b78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78b8: 0x3c054240  lui         $a1, 0x4240
    ctx->pc = 0x1b78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16960 << 16));
    // 0x1b78bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b78bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b78c0: 0x0  nop
    ctx->pc = 0x1b78c0u;
    // NOP
    // 0x1b78c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b78c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b78c8: 0x0  nop
    ctx->pc = 0x1b78c8u;
    // NOP
    // 0x1b78cc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B78CCu;
    {
        const bool branch_taken_0x1b78cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b78cc) {
            ctx->pc = 0x1B79B0u;
            return;
        }
    }
    ctx->pc = 0x1B78D4u;
    // 0x1b78d4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78d8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b78dc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b78dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b78e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b78e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b78e4: 0x0  nop
    ctx->pc = 0x1b78e4u;
    // NOP
    // 0x1b78e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b78e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b78ec: 0x0  nop
    ctx->pc = 0x1b78ecu;
    // NOP
    // 0x1b78f0: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B78F0u;
    {
        const bool branch_taken_0x1b78f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b78f0) {
            ctx->pc = 0x1B7954u;
            return;
        }
    }
    ctx->pc = 0x1B78F8u;
    // 0x1b78f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b78fc: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b78fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7900: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b7900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b7904: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1b7904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b7908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b790c: 0x0  nop
    ctx->pc = 0x1b790cu;
    // NOP
    // 0x1b7910: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b7910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b7914: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b7914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b7918: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b791c: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7920: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7924: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b7924u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7928: 0x0  nop
    ctx->pc = 0x1b7928u;
    // NOP
    // 0x1b792c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b792cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7930: 0x0  nop
    ctx->pc = 0x1b7930u;
    // NOP
    // 0x1b7934: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1B7934u;
    {
        const bool branch_taken_0x1b7934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7934) {
            ctx->pc = 0x1B79B0u;
            return;
        }
    }
    ctx->pc = 0x1B793Cu;
    // 0x1b793c: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1b793cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7940: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b7940u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7944: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7948: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b7948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b794c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B794Cu;
    {
        const bool branch_taken_0x1b794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b794c) {
            ctx->pc = 0x1B79B0u;
            return;
        }
    }
    ctx->pc = 0x1B7954u;
}
