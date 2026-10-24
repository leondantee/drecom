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

// Function: entry_001f25c4
// Address: 0x1f25c4 - 0x1f2648
void entry_001f25c4_0x1f25c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f25c4_0x1f25c4");
#endif

    ctx->pc = 0x1f25c4u;

    // 0x1f25c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f25c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25c8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f25cc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f25ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f25d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25d4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f25d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f25d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f25dc: 0x0  nop
    ctx->pc = 0x1f25dcu;
    // NOP
    // 0x1f25e0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F25E0u;
    {
        const bool branch_taken_0x1f25e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f25e0) {
            ctx->pc = 0x1F2648u;
            return;
        }
    }
    ctx->pc = 0x1F25E8u;
    // 0x1f25e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25ec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f25f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f25f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f25f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f25f8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1f25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f25fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f2600: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2604: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2608: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f2608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f260c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f2610: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2614: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2618: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f261c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2620: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2628: 0x0  nop
    ctx->pc = 0x1f2628u;
    // NOP
    // 0x1f262c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F262Cu;
    {
        const bool branch_taken_0x1f262c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f262c) {
            ctx->pc = 0x1F2648u;
            return;
        }
    }
    ctx->pc = 0x1F2634u;
    // 0x1f2634: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f2634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2638: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f263c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1f263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2640: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2644: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f2648u;
}
