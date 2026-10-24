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

// Function: entry_002dfac8
// Address: 0x2dfac8 - 0x2dfb34
void entry_002dfac8_0x2dfac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfac8_0x2dfac8");
#endif

    switch (ctx->pc) {
        case 0x2dfaf8u: goto label_2dfaf8;
        default: break;
    }

    ctx->pc = 0x2dfac8u;

    // 0x2dfac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2dfacc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfad0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dfad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dfad8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dfadc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2dfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2dfae0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2dfae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2dfae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfae8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfaec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2dfaecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dfaf0: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2DFAF0u;
    SET_GPR_U32(ctx, 31, 0x2DFAF8u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2DFAF0u, 0x2DFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFAF8u;
label_2dfaf8:
    // 0x2dfaf8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dfafc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2dfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2dfb00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dfb04: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dfb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfb08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dfb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dfb0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb10: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2dfb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2dfb14: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2dfb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2dfb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dfb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfb1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb20: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2dfb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2dfb24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfb28: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dfb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dfb2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dfb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dfb30: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dfb30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2dfb34u;
}
