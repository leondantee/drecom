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

// Function: entry_00185d8c
// Address: 0x185d8c - 0x185e54
void entry_00185d8c_0x185d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d8c_0x185d8c");
#endif

    switch (ctx->pc) {
        case 0x185ddcu: goto label_185ddc;
        case 0x185df0u: goto label_185df0;
        case 0x185e38u: goto label_185e38;
        default: break;
    }

    ctx->pc = 0x185d8cu;

    // 0x185d8c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x185d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185d90: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185d94: 0xc42002d4  lwc1        $f0, 0x2D4($at)
    ctx->pc = 0x185d94u;
    { uint32_t bits = FAST_READ32(0x4802D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185d9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185da0: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x185da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
    // 0x185da4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x185da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185da8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185dac: 0xc4200320  lwc1        $f0, 0x320($at)
    ctx->pc = 0x185dacu;
    { uint32_t bits = FAST_READ32(0x480320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185db0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185db0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185db4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185db8: 0xc4200334  lwc1        $f0, 0x334($at)
    ctx->pc = 0x185db8u;
    { uint32_t bits = FAST_READ32(0x480334u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185dbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x185dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x185dc0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185dc4: 0xe4200324  swc1        $f0, 0x324($at)
    ctx->pc = 0x185dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480324u, _value); } while (0); }
    // 0x185dc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185dcc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185dd0: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x185dd4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x185DD4u;
    SET_GPR_U32(ctx, 31, 0x185DDCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x185DDCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185DDCu) { return; }
    ctx->pc = 0x185DDCu;
label_185ddc:
    // 0x185ddc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x185ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x185de0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185de4: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x185de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x185de8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x185DE8u;
    SET_GPR_U32(ctx, 31, 0x185DF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x185DF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185DF0u) { return; }
    ctx->pc = 0x185DF0u;
label_185df0:
    // 0x185df0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x185df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185df4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185dfc: 0x0  nop
    ctx->pc = 0x185dfcu;
    // NOP
    // 0x185e00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185e00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185e04: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x185e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x185e08: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x185e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185e0c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x185e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x185e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185e14: 0x0  nop
    ctx->pc = 0x185e14u;
    // NOP
    // 0x185e18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185e1c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x185e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x185e20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185e24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x185e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x185e28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x185e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185e2c: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x185e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x185e30: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x185E30u;
    SET_GPR_U32(ctx, 31, 0x185E38u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x185E30u, 0x185E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E38u;
label_185e38:
    // 0x185e38: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x185e38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x185e3c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x185E3Cu;
    {
        const bool branch_taken_0x185e3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e3c) {
            ctx->pc = 0x185E5Cu;
            return;
        }
    }
    ctx->pc = 0x185E44u;
    // 0x185e44: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x185e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x185e48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185e48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185e4c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x185e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x185e54u;
}
