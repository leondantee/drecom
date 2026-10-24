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

// Function: entry_002dcb20
// Address: 0x2dcb20 - 0x2dcbe0
void entry_002dcb20_0x2dcb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcb20_0x2dcb20");
#endif

    switch (ctx->pc) {
        case 0x2dcb44u: goto label_2dcb44;
        case 0x2dcb68u: goto label_2dcb68;
        case 0x2dcb7cu: goto label_2dcb7c;
        default: break;
    }

    ctx->pc = 0x2dcb20u;

    // 0x2dcb20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dcb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dcb24: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2dcb24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2dcb28: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dcb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcb2c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dcb30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dcb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcb34: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2dcb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2dcb38: 0x244607b0  addiu       $a2, $v0, 0x7B0
    ctx->pc = 0x2dcb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x2dcb3c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DCB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCB44u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DCB3Cu, 0x2DCB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB44u;
label_2dcb44:
    // 0x2dcb44: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2dcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcb48: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dcb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcb4c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2dcb4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dcb50: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2dcb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcb54: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dcb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcb58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dcb58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dcb5c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2dcb5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2dcb60: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2DCB60u;
    SET_GPR_U32(ctx, 31, 0x2DCB68u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2DCB60u, 0x2DCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB68u;
label_2dcb68:
    // 0x2dcb68: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2dcb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2dcb6c: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2dcb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcb70: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x2dcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcb74: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DCB74u;
    SET_GPR_U32(ctx, 31, 0x2DCB7Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DCB74u, 0x2DCB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB7Cu;
label_2dcb7c:
    // 0x2dcb7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dcb7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2dcb80: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dcb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2dcb84: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dcb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcb88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcb88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb8c: 0x0  nop
    ctx->pc = 0x2dcb8cu;
    // NOP
    // 0x2dcb90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcb94: 0x0  nop
    ctx->pc = 0x2dcb94u;
    // NOP
    // 0x2dcb98: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCB98u;
    {
        const bool branch_taken_0x2dcb98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcb98) {
            ctx->pc = 0x2DCBE0u;
            return;
        }
    }
    ctx->pc = 0x2DCBA0u;
    // 0x2dcba0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dcba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcba4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dcba8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcbb0: 0x0  nop
    ctx->pc = 0x2dcbb0u;
    // NOP
    // 0x2dcbb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcbb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcbb8: 0x0  nop
    ctx->pc = 0x2dcbb8u;
    // NOP
    // 0x2dcbbc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCBBCu;
    {
        const bool branch_taken_0x2dcbbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcbbc) {
            ctx->pc = 0x2DCC18u;
            return;
        }
    }
    ctx->pc = 0x2DCBC4u;
    // 0x2dcbc4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2dcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2dcbc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcbd0: 0x0  nop
    ctx->pc = 0x2dcbd0u;
    // NOP
    // 0x2dcbd4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dcbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2dcbd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DCBD8u;
    {
        const bool branch_taken_0x2dcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcbd8) {
            ctx->pc = 0x2DCC18u;
            return;
        }
    }
    ctx->pc = 0x2DCBE0u;
}
