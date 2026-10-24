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

// Function: entry_00370fa4
// Address: 0x370fa4 - 0x371024
void entry_00370fa4_0x370fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370fa4_0x370fa4");
#endif

    switch (ctx->pc) {
        case 0x370fdcu: goto label_370fdc;
        case 0x37101cu: goto label_37101c;
        default: break;
    }

    ctx->pc = 0x370fa4u;

    // 0x370fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370fa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x370fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370fac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370fb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x370fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370fb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x370fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370fb8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x370fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x370fbc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x370fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x370fc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370fc4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x370fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x370fc8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x370fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x370fcc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x370fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x370fd0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x370fd4: 0xc05c848  jal         func_172120
    ctx->pc = 0x370FD4u;
    SET_GPR_U32(ctx, 31, 0x370FDCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x370FD4u, 0x370FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370FDCu;
label_370fdc:
    // 0x370fdc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x370fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x370fe0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x370fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370fe8: 0x0  nop
    ctx->pc = 0x370fe8u;
    // NOP
    // 0x370fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x370fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370ff0: 0x0  nop
    ctx->pc = 0x370ff0u;
    // NOP
    // 0x370ff4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x370FF4u;
    {
        const bool branch_taken_0x370ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x370ff4) {
            ctx->pc = 0x371024u;
            return;
        }
    }
    ctx->pc = 0x370FFCu;
    // 0x370ffc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x370ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371000: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371004: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x371004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x371008: 0x24061e0d  addiu       $a2, $zero, 0x1E0D
    ctx->pc = 0x371008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7693));
    // 0x37100c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37100cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371010: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371014: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371014u;
    SET_GPR_U32(ctx, 31, 0x37101Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371014u, 0x37101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37101Cu;
label_37101c:
    // 0x37101c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37101Cu;
    {
        const bool branch_taken_0x37101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37101c) {
            ctx->pc = 0x371044u;
            return;
        }
    }
    ctx->pc = 0x371024u;
}
