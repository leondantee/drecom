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

// Function: entry_0026edf0
// Address: 0x26edf0 - 0x26ee68
void entry_0026edf0_0x26edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026edf0_0x26edf0");
#endif

    switch (ctx->pc) {
        case 0x26ee34u: goto label_26ee34;
        default: break;
    }

    ctx->pc = 0x26edf0u;

    // 0x26edf0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26edf4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x26edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x26edf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26edfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26edfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ee00: 0x0  nop
    ctx->pc = 0x26ee00u;
    // NOP
    // 0x26ee04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ee04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ee08: 0x0  nop
    ctx->pc = 0x26ee08u;
    // NOP
    // 0x26ee0c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26EE0Cu;
    {
        const bool branch_taken_0x26ee0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ee0c) {
            ctx->pc = 0x26EE68u;
            return;
        }
    }
    ctx->pc = 0x26EE14u;
    // 0x26ee14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26ee20: 0x24060378  addiu       $a2, $zero, 0x378
    ctx->pc = 0x26ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x26ee24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ee2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EE2Cu;
    SET_GPR_U32(ctx, 31, 0x26EE34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EE2Cu, 0x26EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE34u;
label_26ee34:
    // 0x26ee34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee38: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x26ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ee3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee40: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26ee40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26ee44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee4c: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x26ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x26ee50: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x26ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x26ee54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ee54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ee58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x26ee60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26EE60u;
    {
        const bool branch_taken_0x26ee60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ee60) {
            ctx->pc = 0x26EECCu;
            return;
        }
    }
    ctx->pc = 0x26EE68u;
}
