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

// Function: entry_00126870
// Address: 0x126870 - 0x12691c
void entry_00126870_0x126870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126870_0x126870");
#endif

    switch (ctx->pc) {
        case 0x126880u: goto label_126880;
        default: break;
    }

    ctx->pc = 0x126870u;

    // 0x126870: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126878: 0xc05d25c  jal         func_174970
    ctx->pc = 0x126878u;
    SET_GPR_U32(ctx, 31, 0x126880u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126878u, 0x126880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126880u;
label_126880:
    // 0x126880: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x126880u;
    {
        const bool branch_taken_0x126880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126880) {
            ctx->pc = 0x126950u;
            return;
        }
    }
    ctx->pc = 0x126888u;
    // 0x126888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12688c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126890: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x126890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x126894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126898: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x126898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12689c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x12689cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1268a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1268a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1268a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1268a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1268a8: 0x0  nop
    ctx->pc = 0x1268a8u;
    // NOP
    // 0x1268ac: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1268ACu;
    {
        const bool branch_taken_0x1268ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1268ac) {
            ctx->pc = 0x126950u;
            return;
        }
    }
    ctx->pc = 0x1268B4u;
    // 0x1268b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1268b8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1268b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1268bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1268bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1268c0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1268c0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1268c4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1268c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1268c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1268c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1268cc: 0x0  nop
    ctx->pc = 0x1268ccu;
    // NOP
    // 0x1268d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1268d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1268d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1268d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1268d8: 0x0  nop
    ctx->pc = 0x1268d8u;
    // NOP
    // 0x1268dc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x1268DCu;
    {
        const bool branch_taken_0x1268dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1268dc) {
            ctx->pc = 0x126950u;
            return;
        }
    }
    ctx->pc = 0x1268E4u;
    // 0x1268e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1268e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1268e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1268ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1268ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1268f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1268f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1268f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1268f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1268f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1268fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1268fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126900: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126908: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12690c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126910: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126914: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x126914u;
    {
        const bool branch_taken_0x126914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126914) {
            ctx->pc = 0x126950u;
            return;
        }
    }
    ctx->pc = 0x12691Cu;
}
