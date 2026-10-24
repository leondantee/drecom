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

// Function: entry_0026e8a0
// Address: 0x26e8a0 - 0x26e918
void entry_0026e8a0_0x26e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026e8a0_0x26e8a0");
#endif

    switch (ctx->pc) {
        case 0x26e8e4u: goto label_26e8e4;
        default: break;
    }

    ctx->pc = 0x26e8a0u;

    // 0x26e8a0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e8a4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x26e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x26e8a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26e8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e8b0: 0x0  nop
    ctx->pc = 0x26e8b0u;
    // NOP
    // 0x26e8b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e8b8: 0x0  nop
    ctx->pc = 0x26e8b8u;
    // NOP
    // 0x26e8bc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26E8BCu;
    {
        const bool branch_taken_0x26e8bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e8bc) {
            ctx->pc = 0x26E918u;
            return;
        }
    }
    ctx->pc = 0x26E8C4u;
    // 0x26e8c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26e8d0: 0x24060377  addiu       $a2, $zero, 0x377
    ctx->pc = 0x26e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 887));
    // 0x26e8d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e8d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26e8dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26E8DCu;
    SET_GPR_U32(ctx, 31, 0x26E8E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26E8DCu, 0x26E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8E4u;
label_26e8e4:
    // 0x26e8e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8e8: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x26e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e8ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8f0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26e8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26e8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8fc: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x26e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x26e900: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x26e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x26e904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e908: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e90c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x26e910: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26E910u;
    {
        const bool branch_taken_0x26e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e910) {
            ctx->pc = 0x26E97Cu;
            return;
        }
    }
    ctx->pc = 0x26E918u;
}
