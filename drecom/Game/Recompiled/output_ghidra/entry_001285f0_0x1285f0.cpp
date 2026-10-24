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

// Function: entry_001285f0
// Address: 0x1285f0 - 0x12869c
void entry_001285f0_0x1285f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001285f0_0x1285f0");
#endif

    switch (ctx->pc) {
        case 0x128600u: goto label_128600;
        default: break;
    }

    ctx->pc = 0x1285f0u;

    // 0x1285f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1285f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1285f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1285f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1285f8: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1285F8u;
    SET_GPR_U32(ctx, 31, 0x128600u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1285F8u, 0x128600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128600u;
label_128600:
    // 0x128600: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x128600u;
    {
        const bool branch_taken_0x128600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128600) {
            ctx->pc = 0x12869Cu;
            return;
        }
    }
    ctx->pc = 0x128608u;
    // 0x128608: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12860c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128610: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128618: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12861c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x12861cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x128624: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x128624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128628: 0x0  nop
    ctx->pc = 0x128628u;
    // NOP
    // 0x12862c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x12862Cu;
    {
        const bool branch_taken_0x12862c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12862c) {
            ctx->pc = 0x12869Cu;
            return;
        }
    }
    ctx->pc = 0x128634u;
    // 0x128634: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128638: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12863c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128640: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128640u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128644: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12864c: 0x0  nop
    ctx->pc = 0x12864cu;
    // NOP
    // 0x128650: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128654: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128658: 0x0  nop
    ctx->pc = 0x128658u;
    // NOP
    // 0x12865c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x12865Cu;
    {
        const bool branch_taken_0x12865c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12865c) {
            ctx->pc = 0x12869Cu;
            return;
        }
    }
    ctx->pc = 0x128664u;
    // 0x128664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128668: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12866c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12866cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128670: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x128674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128678: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12867c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128680: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128684: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128688: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12868c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128690: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x128694: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x128694u;
    {
        const bool branch_taken_0x128694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128694) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x12869Cu;
}
