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
// Address: 0x127048 - 0x1270f4
void caseD_0_0x127048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x127048");
#endif

    switch (ctx->pc) {
        case 0x127058u: goto label_127058;
        default: break;
    }

    ctx->pc = 0x127048u;

    // 0x127048: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12704c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127050: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127050u;
    SET_GPR_U32(ctx, 31, 0x127058u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127050u, 0x127058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127058u;
label_127058:
    // 0x127058: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x127058u;
    {
        const bool branch_taken_0x127058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127058) {
            ctx->pc = 0x127124u;
            return;
        }
    }
    ctx->pc = 0x127060u;
    // 0x127060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127064: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127068: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12706c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12706cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127070: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127074: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127074u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127078: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12707c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127080: 0x0  nop
    ctx->pc = 0x127080u;
    // NOP
    // 0x127084: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x127084u;
    {
        const bool branch_taken_0x127084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127084) {
            ctx->pc = 0x127124u;
            return;
        }
    }
    ctx->pc = 0x12708Cu;
    // 0x12708c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127090: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127094: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127098: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127098u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12709c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12709cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1270a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1270a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1270a4: 0x0  nop
    ctx->pc = 0x1270a4u;
    // NOP
    // 0x1270a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1270a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1270ac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1270acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1270b0: 0x0  nop
    ctx->pc = 0x1270b0u;
    // NOP
    // 0x1270b4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1270B4u;
    {
        const bool branch_taken_0x1270b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1270b4) {
            ctx->pc = 0x127124u;
            return;
        }
    }
    ctx->pc = 0x1270BCu;
    // 0x1270bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1270bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1270c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1270c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1270c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1270c8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1270cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1270d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1270d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1270d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1270d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1270d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1270dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1270e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1270e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1270e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1270e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1270e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1270e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1270ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1270ECu;
    {
        const bool branch_taken_0x1270ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1270ec) {
            ctx->pc = 0x127124u;
            return;
        }
    }
    ctx->pc = 0x1270F4u;
}
