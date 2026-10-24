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

// Function: entry_001f2528
// Address: 0x1f2528 - 0x1f25c4
void entry_001f2528_0x1f2528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2528_0x1f2528");
#endif

    ctx->pc = 0x1f2528u;

    // 0x1f2528: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f252c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2530: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f2530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2534: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2538: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f253c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f253cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2540: 0x0  nop
    ctx->pc = 0x1f2540u;
    // NOP
    // 0x1f2544: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x1F2544u;
    {
        const bool branch_taken_0x1f2544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2544) {
            ctx->pc = 0x1F2648u;
            return;
        }
    }
    ctx->pc = 0x1F254Cu;
    // 0x1f254c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2550: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2554: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2558: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f255c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f2560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2564: 0x0  nop
    ctx->pc = 0x1f2564u;
    // NOP
    // 0x1f2568: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F2568u;
    {
        const bool branch_taken_0x1f2568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2568) {
            ctx->pc = 0x1F25C4u;
            return;
        }
    }
    ctx->pc = 0x1F2570u;
    // 0x1f2570: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2574: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2578: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f257c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2580: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2588: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f258c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2590: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2594: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1f2594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2598: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f259c: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x1f259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f25a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f25a4: 0x0  nop
    ctx->pc = 0x1f25a4u;
    // NOP
    // 0x1f25a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F25A8u;
    {
        const bool branch_taken_0x1f25a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f25a8) {
            ctx->pc = 0x1F25C4u;
            return;
        }
    }
    ctx->pc = 0x1F25B0u;
    // 0x1f25b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f25b8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f25b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25c0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f25c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f25c4u;
}
