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

// Function: entry_0018601c
// Address: 0x18601c - 0x1860c4
void entry_0018601c_0x18601c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018601c_0x18601c");
#endif

    switch (ctx->pc) {
        case 0x186028u: goto label_186028;
        case 0x186050u: goto label_186050;
        case 0x186074u: goto label_186074;
        default: break;
    }

    ctx->pc = 0x18601cu;

    // 0x18601c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186020: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x186020u;
    SET_GPR_U32(ctx, 31, 0x186028u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x186020u, 0x186028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186028u;
label_186028:
    // 0x186028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18602c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18602cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186030: 0x0  nop
    ctx->pc = 0x186030u;
    // NOP
    // 0x186034: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x186034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x186038: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18603c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186040: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x186040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x186044: 0x244602f0  addiu       $a2, $v0, 0x2F0
    ctx->pc = 0x186044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x186048: 0xc040c12  jal         func_103048
    ctx->pc = 0x186048u;
    SET_GPR_U32(ctx, 31, 0x186050u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x186050u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186050u) { return; }
    ctx->pc = 0x186050u;
label_186050:
    // 0x186050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186058: 0x0  nop
    ctx->pc = 0x186058u;
    // NOP
    // 0x18605c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18605cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x186060: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186064: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x186064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x186068: 0x244502d0  addiu       $a1, $v0, 0x2D0
    ctx->pc = 0x186068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x18606c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x18606Cu;
    SET_GPR_U32(ctx, 31, 0x186074u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186074u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186074u) { return; }
    ctx->pc = 0x186074u;
label_186074:
    // 0x186074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x186074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x186078: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x18607c: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x18607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x186080: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x186080u;
    {
        const bool branch_taken_0x186080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186080) {
            ctx->pc = 0x1860C4u;
            return;
        }
    }
    ctx->pc = 0x186088u;
    // 0x186088: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18608c: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x18608cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x186090: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x186090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x186094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x186094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x186098: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x186098u;
    {
        const bool branch_taken_0x186098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186098) {
            ctx->pc = 0x1860C4u;
            return;
        }
    }
    ctx->pc = 0x1860A0u;
    // 0x1860a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1860a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1860a4: 0xc4200338  lwc1        $f0, 0x338($at)
    ctx->pc = 0x1860a4u;
    { uint32_t bits = FAST_READ32(0x480338u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1860a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1860a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1860ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1860acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1860b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1860b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1860b4: 0xe42002c4  swc1        $f0, 0x2C4($at)
    ctx->pc = 0x1860b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802C4u, _value); } while (0); }
    // 0x1860b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1860b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1860bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1860bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1860c0: 0xe4200328  swc1        $f0, 0x328($at)
    ctx->pc = 0x1860c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480328u, _value); } while (0); }
    ctx->pc = 0x1860c4u;
}
