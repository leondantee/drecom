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

// Function: entry_00231ec4
// Address: 0x231ec4 - 0x231f5c
void entry_00231ec4_0x231ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231ec4_0x231ec4");
#endif

    ctx->pc = 0x231ec4u;

    // 0x231ec4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231ec8: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x231ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ecc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x231eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x231ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231ed4: 0x0  nop
    ctx->pc = 0x231ed4u;
    // NOP
    // 0x231ed8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x231ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231edc: 0x0  nop
    ctx->pc = 0x231edcu;
    // NOP
    // 0x231ee0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x231EE0u;
    {
        const bool branch_taken_0x231ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231ee0) {
            ctx->pc = 0x231F5Cu;
            return;
        }
    }
    ctx->pc = 0x231EE8u;
    // 0x231ee8: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x231ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231eec: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x231eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ef0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x231ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x231ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231ef8: 0x0  nop
    ctx->pc = 0x231ef8u;
    // NOP
    // 0x231efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231f00: 0xe6c00018  swc1        $f0, 0x18($s6)
    ctx->pc = 0x231f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 24), bits); }
    // 0x231f04: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f08: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x231f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231f0c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f10: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x231f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f14: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x231f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x231f18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231f18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f1c: 0x0  nop
    ctx->pc = 0x231f1cu;
    // NOP
    // 0x231f20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231f24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x231f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231f28: 0x0  nop
    ctx->pc = 0x231f28u;
    // NOP
    // 0x231f2c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x231F2Cu;
    {
        const bool branch_taken_0x231f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231f2c) {
            ctx->pc = 0x231FD4u;
            return;
        }
    }
    ctx->pc = 0x231F34u;
    // 0x231f34: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f38: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x231f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f3c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x231f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x231f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231f44: 0x0  nop
    ctx->pc = 0x231f44u;
    // NOP
    // 0x231f48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231f4c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231f50: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x231f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x231f54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x231F54u;
    {
        const bool branch_taken_0x231f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f54) {
            ctx->pc = 0x231FD4u;
            return;
        }
    }
    ctx->pc = 0x231F5Cu;
}
