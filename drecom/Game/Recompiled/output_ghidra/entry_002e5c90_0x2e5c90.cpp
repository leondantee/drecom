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

// Function: entry_002e5c90
// Address: 0x2e5c90 - 0x2e5d30
void entry_002e5c90_0x2e5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5c90_0x2e5c90");
#endif

    switch (ctx->pc) {
        case 0x2e5ca0u: goto label_2e5ca0;
        case 0x2e5cacu: goto label_2e5cac;
        case 0x2e5cbcu: goto label_2e5cbc;
        case 0x2e5cd4u: goto label_2e5cd4;
        default: break;
    }

    ctx->pc = 0x2e5c90u;

    // 0x2e5c90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e5c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5c98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E5C98u;
    SET_GPR_U32(ctx, 31, 0x2E5CA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E5C98u, 0x2E5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CA0u;
label_2e5ca0:
    // 0x2e5ca0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5ca4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2E5CA4u;
    SET_GPR_U32(ctx, 31, 0x2E5CACu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2E5CA4u, 0x2E5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CACu;
label_2e5cac:
    // 0x2e5cac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e5cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5cb4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E5CB4u;
    SET_GPR_U32(ctx, 31, 0x2E5CBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E5CB4u, 0x2E5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CBCu;
label_2e5cbc:
    // 0x2e5cbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cc4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e5cc8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e5cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e5ccc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E5CCCu;
    SET_GPR_U32(ctx, 31, 0x2E5CD4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E5CCCu, 0x2E5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CD4u;
label_2e5cd4:
    // 0x2e5cd4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e5cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cdc: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e5cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5ce4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5ce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5cec: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e5cf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cf4: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5cf8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e5cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5d00: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5d04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5d08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5d0c: 0x0  nop
    ctx->pc = 0x2e5d0cu;
    // NOP
    // 0x2e5d10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5D10u;
    {
        const bool branch_taken_0x2e5d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5d10) {
            ctx->pc = 0x2E5D30u;
            return;
        }
    }
    ctx->pc = 0x2E5D18u;
    // 0x2e5d18: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e5d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5d20: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5d2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2e5d30u;
}
