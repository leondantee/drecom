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

// Function: entry_00127594
// Address: 0x127594 - 0x127640
void entry_00127594_0x127594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127594_0x127594");
#endif

    switch (ctx->pc) {
        case 0x1275a4u: goto label_1275a4;
        default: break;
    }

    ctx->pc = 0x127594u;

    // 0x127594: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12759c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x12759Cu;
    SET_GPR_U32(ctx, 31, 0x1275A4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12759Cu, 0x1275A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275A4u;
label_1275a4:
    // 0x1275a4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1275A4u;
    {
        const bool branch_taken_0x1275a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275a4) {
            ctx->pc = 0x127640u;
            return;
        }
    }
    ctx->pc = 0x1275ACu;
    // 0x1275ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1275b0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1275b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1275b4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1275b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1275b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1275b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1275bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1275bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1275c0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1275c0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1275c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1275c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1275c8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1275c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1275cc: 0x0  nop
    ctx->pc = 0x1275ccu;
    // NOP
    // 0x1275d0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1275D0u;
    {
        const bool branch_taken_0x1275d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1275d0) {
            ctx->pc = 0x127640u;
            return;
        }
    }
    ctx->pc = 0x1275D8u;
    // 0x1275d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1275d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1275dc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1275dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1275e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1275e4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1275e4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1275e8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1275e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1275ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1275ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1275f0: 0x0  nop
    ctx->pc = 0x1275f0u;
    // NOP
    // 0x1275f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1275f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1275f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1275f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1275fc: 0x0  nop
    ctx->pc = 0x1275fcu;
    // NOP
    // 0x127600: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x127600u;
    {
        const bool branch_taken_0x127600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127600) {
            ctx->pc = 0x127640u;
            return;
        }
    }
    ctx->pc = 0x127608u;
    // 0x127608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12760c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127610: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127614: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x127618: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12761c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12761cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127620: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127624: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12762c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12762cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127634: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127638: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x127638u;
    {
        const bool branch_taken_0x127638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127638) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127640u;
}
