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

// Function: entry_00126774
// Address: 0x126774 - 0x126820
void entry_00126774_0x126774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126774_0x126774");
#endif

    switch (ctx->pc) {
        case 0x126784u: goto label_126784;
        default: break;
    }

    ctx->pc = 0x126774u;

    // 0x126774: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126778: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12677c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x12677Cu;
    SET_GPR_U32(ctx, 31, 0x126784u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12677Cu, 0x126784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126784u;
label_126784:
    // 0x126784: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x126784u;
    {
        const bool branch_taken_0x126784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126784) {
            ctx->pc = 0x126820u;
            return;
        }
    }
    ctx->pc = 0x12678Cu;
    // 0x12678c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126790: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x126790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126794: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x126794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x126798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12679c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12679cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1267a0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1267a0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1267a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1267a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1267a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1267a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1267ac: 0x0  nop
    ctx->pc = 0x1267acu;
    // NOP
    // 0x1267b0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1267B0u;
    {
        const bool branch_taken_0x1267b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1267b0) {
            ctx->pc = 0x126820u;
            return;
        }
    }
    ctx->pc = 0x1267B8u;
    // 0x1267b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1267b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1267bc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1267bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1267c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1267c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1267c4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1267c4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1267c8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1267c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1267cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1267ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1267d0: 0x0  nop
    ctx->pc = 0x1267d0u;
    // NOP
    // 0x1267d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1267d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1267d8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1267d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1267dc: 0x0  nop
    ctx->pc = 0x1267dcu;
    // NOP
    // 0x1267e0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1267E0u;
    {
        const bool branch_taken_0x1267e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1267e0) {
            ctx->pc = 0x126820u;
            return;
        }
    }
    ctx->pc = 0x1267E8u;
    // 0x1267e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1267e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1267ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1267ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1267f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1267f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1267f4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1267f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1267f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1267f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1267fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1267fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126800: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126804: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126808: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12680c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12680cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126810: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126814: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126818: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x126818u;
    {
        const bool branch_taken_0x126818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126818) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126820u;
}
