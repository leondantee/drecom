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

// Function: entry_001258e4
// Address: 0x1258e4 - 0x125990
void entry_001258e4_0x1258e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001258e4_0x1258e4");
#endif

    switch (ctx->pc) {
        case 0x1258f4u: goto label_1258f4;
        default: break;
    }

    ctx->pc = 0x1258e4u;

    // 0x1258e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1258e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1258e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1258ec: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1258ECu;
    SET_GPR_U32(ctx, 31, 0x1258F4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1258ECu, 0x1258F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1258F4u;
label_1258f4:
    // 0x1258f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1258F4u;
    {
        const bool branch_taken_0x1258f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258f4) {
            ctx->pc = 0x125990u;
            return;
        }
    }
    ctx->pc = 0x1258FCu;
    // 0x1258fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1258fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125900: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x125900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125904: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x125908: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x125908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12590c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x125910: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x125910u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125914: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125918: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x125918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12591c: 0x0  nop
    ctx->pc = 0x12591cu;
    // NOP
    // 0x125920: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x125920u;
    {
        const bool branch_taken_0x125920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125920) {
            ctx->pc = 0x125990u;
            return;
        }
    }
    ctx->pc = 0x125928u;
    // 0x125928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12592c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125930: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x125934: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x125934u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125938: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12593c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12593cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125940: 0x0  nop
    ctx->pc = 0x125940u;
    // NOP
    // 0x125944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x125944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x125948: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x125948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12594c: 0x0  nop
    ctx->pc = 0x12594cu;
    // NOP
    // 0x125950: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x125950u;
    {
        const bool branch_taken_0x125950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125950) {
            ctx->pc = 0x125990u;
            return;
        }
    }
    ctx->pc = 0x125958u;
    // 0x125958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12595c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125960: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125964: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x125968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12596c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12596cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125970: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125974: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125978: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12597c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12597cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125980: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125988: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x125988u;
    {
        const bool branch_taken_0x125988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125988) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125990u;
}
