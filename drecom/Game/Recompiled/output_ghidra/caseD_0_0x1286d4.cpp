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

// Function: caseD_0
// Address: 0x1286d4 - 0x128780
void caseD_0_0x1286d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1286d4");
#endif

    switch (ctx->pc) {
        case 0x1286e4u: goto label_1286e4;
        default: break;
    }

    ctx->pc = 0x1286d4u;

    // 0x1286d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1286d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1286d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1286dc: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1286DCu;
    SET_GPR_U32(ctx, 31, 0x1286E4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1286DCu, 0x1286E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286E4u;
label_1286e4:
    // 0x1286e4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1286E4u;
    {
        const bool branch_taken_0x1286e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286e4) {
            ctx->pc = 0x1287BCu;
            return;
        }
    }
    ctx->pc = 0x1286ECu;
    // 0x1286ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1286ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1286f0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1286f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1286f4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1286f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1286f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1286f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1286fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1286fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128700: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128700u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x128708: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12870c: 0x0  nop
    ctx->pc = 0x12870cu;
    // NOP
    // 0x128710: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x128710u;
    {
        const bool branch_taken_0x128710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128710) {
            ctx->pc = 0x1287BCu;
            return;
        }
    }
    ctx->pc = 0x128718u;
    // 0x128718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12871c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128720: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128724: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128724u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128728: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12872c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12872cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128730: 0x0  nop
    ctx->pc = 0x128730u;
    // NOP
    // 0x128734: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128738: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12873c: 0x0  nop
    ctx->pc = 0x12873cu;
    // NOP
    // 0x128740: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128740) {
            ctx->pc = 0x1287BCu;
            return;
        }
    }
    ctx->pc = 0x128748u;
    // 0x128748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12874c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128750: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128754: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x128758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12875c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12875cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128760: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128764: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12876c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12876cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128770: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128774: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x128778: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x128778u;
    {
        const bool branch_taken_0x128778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128778) {
            ctx->pc = 0x1287BCu;
            return;
        }
    }
    ctx->pc = 0x128780u;
}
