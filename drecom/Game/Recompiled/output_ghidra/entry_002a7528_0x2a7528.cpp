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

// Function: entry_002a7528
// Address: 0x2a7528 - 0x2a760c
void entry_002a7528_0x2a7528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7528_0x2a7528");
#endif

    switch (ctx->pc) {
        case 0x2a7554u: goto label_2a7554;
        case 0x2a75dcu: goto label_2a75dc;
        default: break;
    }

    ctx->pc = 0x2a7528u;

    // 0x2a7528: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a7528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a752c: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x2a752cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7530: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a7530u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a7534: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7538: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a753c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a753cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a7540: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x2a7540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x2a7544: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7548: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a754c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A754Cu;
    SET_GPR_U32(ctx, 31, 0x2A7554u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A754Cu, 0x2A7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7554u;
label_2a7554:
    // 0x2a7554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7558: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a755c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a7560: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2a7560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2a7564: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a7564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7568: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a756c: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a7570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7574: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7578: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a7578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a757c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a757cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7580: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7584: 0xa04710a8  sb          $a3, 0x10A8($v0)
    ctx->pc = 0x2a7584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a7588: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a758c: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7590: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7594: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a7594u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7598: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7598u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a759c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a75a0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a75a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a75a4: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a75a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a75a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a75ac: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a75acu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a75b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a75b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a75b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a75b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a75b8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a75bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a75bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a75c0: 0x0  nop
    ctx->pc = 0x2a75c0u;
    // NOP
    // 0x2a75c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a75c8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a75c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a75cc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a75ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a75d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a75d4: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A75D4u;
    SET_GPR_U32(ctx, 31, 0x2A75DCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A75DCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A75DCu) { return; }
    ctx->pc = 0x2A75DCu;
label_2a75dc:
    // 0x2a75dc: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x2a75dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x2a75e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a75e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a75e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a75e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a75e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a75e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a75ec: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a75ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a75f0: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x2a75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x2a75f4: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x2a75f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x2a75f8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a75f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a75fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a75fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7604: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7608: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2a760cu;
}
