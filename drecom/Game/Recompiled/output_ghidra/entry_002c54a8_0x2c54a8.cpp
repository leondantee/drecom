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

// Function: entry_002c54a8
// Address: 0x2c54a8 - 0x2c5520
void entry_002c54a8_0x2c54a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c54a8_0x2c54a8");
#endif

    ctx->pc = 0x2c54a8u;

    // 0x2c54a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c54ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c54b0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c54b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c54b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c54b8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c54bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c54bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c54c0: 0x0  nop
    ctx->pc = 0x2c54c0u;
    // NOP
    // 0x2c54c4: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x2C54C4u;
    {
        const bool branch_taken_0x2c54c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c54c4) {
            ctx->pc = 0x2C5574u;
            return;
        }
    }
    ctx->pc = 0x2C54CCu;
    // 0x2c54cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c54d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c54d4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c54d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c54d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c54dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c54e0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c54e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c54e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c54e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c54ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c54f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c54f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c54f4: 0x0  nop
    ctx->pc = 0x2c54f4u;
    // NOP
    // 0x2c54f8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C54F8u;
    {
        const bool branch_taken_0x2c54f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c54f8) {
            ctx->pc = 0x2C5520u;
            return;
        }
    }
    ctx->pc = 0x2C5500u;
    // 0x2c5500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c5504: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5508: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x2c550c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2c5510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5514: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2c5514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5518: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c551c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2c551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x2c5520u;
}
