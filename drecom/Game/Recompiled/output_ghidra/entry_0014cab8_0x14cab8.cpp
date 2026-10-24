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

// Function: entry_0014cab8
// Address: 0x14cab8 - 0x14cb14
void entry_0014cab8_0x14cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cab8_0x14cab8");
#endif

    switch (ctx->pc) {
        case 0x14cafcu: goto label_14cafc;
        default: break;
    }

    ctx->pc = 0x14cab8u;

    // 0x14cab8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cabc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14cac0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cac8: 0x0  nop
    ctx->pc = 0x14cac8u;
    // NOP
    // 0x14cacc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14caccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cad0: 0x0  nop
    ctx->pc = 0x14cad0u;
    // NOP
    // 0x14cad4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x14CAD4u;
    {
        const bool branch_taken_0x14cad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cad4) {
            ctx->pc = 0x14CB14u;
            return;
        }
    }
    ctx->pc = 0x14CADCu;
    // 0x14cadc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cae0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cae4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cae8: 0x24060059  addiu       $a2, $zero, 0x59
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x14caec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14caecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14caf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14caf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14caf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CAF4u;
    SET_GPR_U32(ctx, 31, 0x14CAFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CAF4u, 0x14CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAFCu;
label_14cafc:
    // 0x14cafc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb00: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x14cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cb04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cb08: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x14cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x14cb0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14CB0Cu;
    {
        const bool branch_taken_0x14cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb0c) {
            ctx->pc = 0x14CB60u;
            return;
        }
    }
    ctx->pc = 0x14CB14u;
}
