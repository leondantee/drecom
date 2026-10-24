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

// Function: entry_002c9fdc
// Address: 0x2c9fdc - 0x2ca084
void entry_002c9fdc_0x2c9fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9fdc_0x2c9fdc");
#endif

    switch (ctx->pc) {
        case 0x2c9fe4u: goto label_2c9fe4;
        case 0x2ca01cu: goto label_2ca01c;
        case 0x2ca054u: goto label_2ca054;
        default: break;
    }

    ctx->pc = 0x2c9fdcu;

    // 0x2c9fdc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9FDCu;
    SET_GPR_U32(ctx, 31, 0x2C9FE4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9FDCu, 0x2C9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FE4u;
label_2c9fe4:
    // 0x2c9fe4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9fe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9fec: 0x0  nop
    ctx->pc = 0x2c9fecu;
    // NOP
    // 0x2c9ff0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9ff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9ff4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c9ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9ffc: 0x0  nop
    ctx->pc = 0x2c9ffcu;
    // NOP
    // 0x2ca000: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca004: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca00c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca010: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ca010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ca014: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA014u;
    SET_GPR_U32(ctx, 31, 0x2CA01Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA014u, 0x2CA01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA01Cu;
label_2ca01c:
    // 0x2ca01c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca024: 0x0  nop
    ctx->pc = 0x2ca024u;
    // NOP
    // 0x2ca028: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca02c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ca02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ca030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca034: 0x0  nop
    ctx->pc = 0x2ca034u;
    // NOP
    // 0x2ca038: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca03c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca044: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca048: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ca048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ca04c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA04Cu;
    SET_GPR_U32(ctx, 31, 0x2CA054u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA04Cu, 0x2CA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA054u;
label_2ca054:
    // 0x2ca054: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca058: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca05c: 0x0  nop
    ctx->pc = 0x2ca05cu;
    // NOP
    // 0x2ca060: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca064: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ca064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ca068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca06c: 0x0  nop
    ctx->pc = 0x2ca06cu;
    // NOP
    // 0x2ca070: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca074: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca07c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca080: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ca080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2ca084u;
}
