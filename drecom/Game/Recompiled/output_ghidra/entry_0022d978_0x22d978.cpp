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

// Function: entry_0022d978
// Address: 0x22d978 - 0x22da2c
void entry_0022d978_0x22d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d978_0x22d978");
#endif

    ctx->pc = 0x22d978u;

    // 0x22d978: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d97c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d980: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x22d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d984: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d988: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x22d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d98c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d990: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22d990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x22d994: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d998: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d99c: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x22d99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d9a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9a4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x22d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d9a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d9ac: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x22d9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x22d9b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d9b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d9c0: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d9c4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d9c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22d9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d9cc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22d9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d9d4: 0x0  nop
    ctx->pc = 0x22d9d4u;
    // NOP
    // 0x22d9d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d9dc: 0x0  nop
    ctx->pc = 0x22d9dcu;
    // NOP
    // 0x22d9e0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x22D9E0u;
    {
        const bool branch_taken_0x22d9e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d9e0) {
            ctx->pc = 0x22DA2Cu;
            return;
        }
    }
    ctx->pc = 0x22D9E8u;
    // 0x22d9e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9ec: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d9f0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x22d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x22d9f4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x22d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x22d9f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22d9fc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22da00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22da04: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22da04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22da08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da10: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x22da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22da1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22da20: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x22da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x22da24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22DA24u;
    {
        const bool branch_taken_0x22da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da24) {
            ctx->pc = 0x22DA4Cu;
            return;
        }
    }
    ctx->pc = 0x22DA2Cu;
}
