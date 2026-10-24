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

// Function: entry_001bc11c
// Address: 0x1bc11c - 0x1bc1c8
void entry_001bc11c_0x1bc11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc11c_0x1bc11c");
#endif

    ctx->pc = 0x1bc11cu;

    // 0x1bc11c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc120: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x1bc120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc124: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1bc124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1bc128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc12c: 0x0  nop
    ctx->pc = 0x1bc12cu;
    // NOP
    // 0x1bc130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc134: 0x0  nop
    ctx->pc = 0x1bc134u;
    // NOP
    // 0x1bc138: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1BC138u;
    {
        const bool branch_taken_0x1bc138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc138) {
            ctx->pc = 0x1BC21Cu;
            return;
        }
    }
    ctx->pc = 0x1BC140u;
    // 0x1bc140: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc144: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1bc144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1bc148: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1bc148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bc14c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc14cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc150: 0x0  nop
    ctx->pc = 0x1bc150u;
    // NOP
    // 0x1bc154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc158: 0x0  nop
    ctx->pc = 0x1bc158u;
    // NOP
    // 0x1bc15c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1BC15Cu;
    {
        const bool branch_taken_0x1bc15c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc15c) {
            ctx->pc = 0x1BC1C8u;
            return;
        }
    }
    ctx->pc = 0x1BC164u;
    // 0x1bc164: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc168: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bc168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc16c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1bc170: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1bc170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bc174: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc174u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc178: 0x0  nop
    ctx->pc = 0x1bc178u;
    // NOP
    // 0x1bc17c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bc17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bc180: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1bc180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1bc184: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc188: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc18c: 0x3c073fa6  lui         $a3, 0x3FA6
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16294 << 16));
    // 0x1bc190: 0x34e66666  ori         $a2, $a3, 0x6666
    ctx->pc = 0x1bc190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)26214);
    // 0x1bc194: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bc194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc198: 0x0  nop
    ctx->pc = 0x1bc198u;
    // NOP
    // 0x1bc19c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc19cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc1a0: 0x0  nop
    ctx->pc = 0x1bc1a0u;
    // NOP
    // 0x1bc1a4: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1BC1A4u;
    {
        const bool branch_taken_0x1bc1a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc1a4) {
            ctx->pc = 0x1BC21Cu;
            return;
        }
    }
    ctx->pc = 0x1BC1ACu;
    // 0x1bc1ac: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1bc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1bc1b0: 0x34686666  ori         $t0, $v1, 0x6666
    ctx->pc = 0x1bc1b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1bc1b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1bc1b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc1b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc1bc: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bc1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1bc1c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC1C0u;
    {
        const bool branch_taken_0x1bc1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc1c0) {
            ctx->pc = 0x1BC21Cu;
            return;
        }
    }
    ctx->pc = 0x1BC1C8u;
}
