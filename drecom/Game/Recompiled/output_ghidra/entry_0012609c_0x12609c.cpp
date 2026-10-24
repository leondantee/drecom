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

// Function: entry_0012609c
// Address: 0x12609c - 0x126140
void entry_0012609c_0x12609c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012609c_0x12609c");
#endif

    switch (ctx->pc) {
        case 0x1260acu: goto label_1260ac;
        default: break;
    }

    ctx->pc = 0x12609cu;

    // 0x12609c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1260a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1260a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1260a4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1260A4u;
    SET_GPR_U32(ctx, 31, 0x1260ACu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1260A4u, 0x1260ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260ACu;
label_1260ac:
    // 0x1260ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1260ACu;
    {
        const bool branch_taken_0x1260ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260ac) {
            ctx->pc = 0x126140u;
            return;
        }
    }
    ctx->pc = 0x1260B4u;
    // 0x1260b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1260b8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1260b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1260bc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1260c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1260c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1260c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1260c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1260c8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1260c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1260cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1260ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1260d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1260d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1260d4: 0x0  nop
    ctx->pc = 0x1260d4u;
    // NOP
    // 0x1260d8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1260D8u;
    {
        const bool branch_taken_0x1260d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1260d8) {
            ctx->pc = 0x126140u;
            return;
        }
    }
    ctx->pc = 0x1260E0u;
    // 0x1260e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1260e4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1260e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1260e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1260e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1260ec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1260ecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1260f0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1260f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1260f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1260f8: 0x0  nop
    ctx->pc = 0x1260f8u;
    // NOP
    // 0x1260fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1260fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x126100: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x126100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126104: 0x0  nop
    ctx->pc = 0x126104u;
    // NOP
    // 0x126108: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x126108u;
    {
        const bool branch_taken_0x126108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126108) {
            ctx->pc = 0x126140u;
            return;
        }
    }
    ctx->pc = 0x126110u;
    // 0x126110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126118: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12611c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x126120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126124: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12612c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12612cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126134: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12613c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12613cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x126140u;
}
