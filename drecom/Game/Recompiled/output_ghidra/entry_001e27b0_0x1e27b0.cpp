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

// Function: entry_001e27b0
// Address: 0x1e27b0 - 0x1e2850
void entry_001e27b0_0x1e27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e27b0_0x1e27b0");
#endif

    switch (ctx->pc) {
        case 0x1e2834u: goto label_1e2834;
        case 0x1e284cu: goto label_1e284c;
        default: break;
    }

    ctx->pc = 0x1e27b0u;

    // 0x1e27b0: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e27b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e27b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e27bc: 0x0  nop
    ctx->pc = 0x1e27bcu;
    // NOP
    // 0x1e27c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e27c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e27c4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e27c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e27c8: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e27c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27cc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e27ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e27d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e27d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e27d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e27d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e27d8: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27dc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e27dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e27e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e27e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e27e4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e27e8: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27ec: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e27f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e27f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e27f8: 0x0  nop
    ctx->pc = 0x1e27f8u;
    // NOP
    // 0x1e27fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e27fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2800: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2804: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e2804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2808: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e2808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e280c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e280cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e2810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2814: 0x0  nop
    ctx->pc = 0x1e2814u;
    // NOP
    // 0x1e2818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e281c: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e281cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2820: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2824: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e2824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e2828: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e2828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e282c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E282Cu;
    SET_GPR_U32(ctx, 31, 0x1E2834u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E282Cu, 0x1E2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2834u;
label_1e2834:
    // 0x1e2834: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2838: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e2838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e283c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2840: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e2840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2844: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2844u;
    SET_GPR_U32(ctx, 31, 0x1E284Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2844u, 0x1E284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E284Cu;
label_1e284c:
    // 0x1e284c: 0x0  nop
    ctx->pc = 0x1e284cu;
    // NOP
    ctx->pc = 0x1e2850u;
}
