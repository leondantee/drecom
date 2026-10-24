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

// Function: entry_00229144
// Address: 0x229144 - 0x2291b8
void entry_00229144_0x229144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229144_0x229144");
#endif

    ctx->pc = 0x229144u;

    // 0x229144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229148: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22914c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x22914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229150: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x229150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x229154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229158: 0x0  nop
    ctx->pc = 0x229158u;
    // NOP
    // 0x22915c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22915cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229160: 0x0  nop
    ctx->pc = 0x229160u;
    // NOP
    // 0x229164: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x229164u;
    {
        const bool branch_taken_0x229164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229164) {
            ctx->pc = 0x229204u;
            return;
        }
    }
    ctx->pc = 0x22916Cu;
    // 0x22916c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x22916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229170: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x229170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x229174: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x229174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x229178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22917c: 0x0  nop
    ctx->pc = 0x22917cu;
    // NOP
    // 0x229180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229184: 0x0  nop
    ctx->pc = 0x229184u;
    // NOP
    // 0x229188: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229188u;
    {
        const bool branch_taken_0x229188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229188) {
            ctx->pc = 0x2291B8u;
            return;
        }
    }
    ctx->pc = 0x229190u;
    // 0x229190: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229194: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229198: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22919c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2291a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2291a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2291a4: 0x0  nop
    ctx->pc = 0x2291a4u;
    // NOP
    // 0x2291a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2291a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2291ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2291acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2291b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2291b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2291b4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2291b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2291b8u;
}
