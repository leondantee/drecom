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

// Function: entry_001e30c8
// Address: 0x1e30c8 - 0x1e3118
void entry_001e30c8_0x1e30c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e30c8_0x1e30c8");
#endif

    ctx->pc = 0x1e30c8u;

    // 0x1e30c8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e30d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e30d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e30d4: 0x0  nop
    ctx->pc = 0x1e30d4u;
    // NOP
    // 0x1e30d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e30d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e30dc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e30dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e30e0: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30e4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e30e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e30ec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e30ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e30f0: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e30f4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e30f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e30f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e30fc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e30fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e3100: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e3104: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e3108: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e3108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e310c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e310cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3110: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E3110u;
    SET_GPR_U32(ctx, 31, 0x1E3118u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E3110u, 0x1E3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3118u;
}
