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

// Function: entry_001ba2e8
// Address: 0x1ba2e8 - 0x1ba38c
void entry_001ba2e8_0x1ba2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba2e8_0x1ba2e8");
#endif

    ctx->pc = 0x1ba2e8u;

    // 0x1ba2e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba2ec: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1ba2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba2f0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1ba2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1ba2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba2f8: 0x0  nop
    ctx->pc = 0x1ba2f8u;
    // NOP
    // 0x1ba2fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba300: 0x0  nop
    ctx->pc = 0x1ba300u;
    // NOP
    // 0x1ba304: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1BA304u;
    {
        const bool branch_taken_0x1ba304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba304) {
            ctx->pc = 0x1BA3E8u;
            return;
        }
    }
    ctx->pc = 0x1BA30Cu;
    // 0x1ba30c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba310: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1ba314: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1ba318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba31c: 0x0  nop
    ctx->pc = 0x1ba31cu;
    // NOP
    // 0x1ba320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba324: 0x0  nop
    ctx->pc = 0x1ba324u;
    // NOP
    // 0x1ba328: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA328u;
    {
        const bool branch_taken_0x1ba328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba328) {
            ctx->pc = 0x1BA38Cu;
            return;
        }
    }
    ctx->pc = 0x1BA330u;
    // 0x1ba330: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba334: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba338: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1ba33c: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x1ba33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1ba340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba344: 0x0  nop
    ctx->pc = 0x1ba344u;
    // NOP
    // 0x1ba348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ba348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ba34c: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1ba350: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba354: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1ba354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba358: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba35c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ba35cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba360: 0x0  nop
    ctx->pc = 0x1ba360u;
    // NOP
    // 0x1ba364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba368: 0x0  nop
    ctx->pc = 0x1ba368u;
    // NOP
    // 0x1ba36c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1BA36Cu;
    {
        const bool branch_taken_0x1ba36c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba36c) {
            ctx->pc = 0x1BA3E8u;
            return;
        }
    }
    ctx->pc = 0x1BA374u;
    // 0x1ba374: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba37c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba380: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1ba384: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA384u;
    {
        const bool branch_taken_0x1ba384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba384) {
            ctx->pc = 0x1BA3E8u;
            return;
        }
    }
    ctx->pc = 0x1BA38Cu;
}
