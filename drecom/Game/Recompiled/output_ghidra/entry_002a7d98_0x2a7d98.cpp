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

// Function: entry_002a7d98
// Address: 0x2a7d98 - 0x2a7e7c
void entry_002a7d98_0x2a7d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7d98_0x2a7d98");
#endif

    switch (ctx->pc) {
        case 0x2a7dc4u: goto label_2a7dc4;
        case 0x2a7e4cu: goto label_2a7e4c;
        default: break;
    }

    ctx->pc = 0x2a7d98u;

    // 0x2a7d98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a7d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d9c: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x2a7d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7da0: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a7da0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a7da4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7da8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7dac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a7dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a7db0: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x2a7db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x2a7db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7db8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7dbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7DBCu;
    SET_GPR_U32(ctx, 31, 0x2A7DC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7DBCu, 0x2A7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DC4u;
label_2a7dc4:
    // 0x2a7dc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7dc8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7dcc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a7dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a7dd0: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2a7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2a7dd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a7dd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7dd8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ddc: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a7ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a7de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7de4: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7de8: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a7de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a7dec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a7decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7df0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7df4: 0xa04710a8  sb          $a3, 0x10A8($v0)
    ctx->pc = 0x2a7df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a7df8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7dfc: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7e04: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a7e04u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7e0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a7e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a7e10: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e14: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7e18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7e1c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a7e1cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7e24: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a7e28: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7e2c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a7e2cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7e30: 0x0  nop
    ctx->pc = 0x2a7e30u;
    // NOP
    // 0x2a7e34: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a7e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a7e38: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a7e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7e3c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a7e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a7e40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a7e44: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A7E44u;
    SET_GPR_U32(ctx, 31, 0x2A7E4Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A7E4Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A7E4Cu) { return; }
    ctx->pc = 0x2A7E4Cu;
label_2a7e4c:
    // 0x2a7e4c: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x2a7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x2a7e50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a7e50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7e54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7e5c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e60: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x2a7e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x2a7e64: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x2a7e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x2a7e68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a7e68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7e6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7e74: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7e78: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a7e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2a7e7cu;
}
