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
// Address: 0x1298b8 - 0x12995c
void caseD_0_0x1298b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1298b8");
#endif

    switch (ctx->pc) {
        case 0x1298c8u: goto label_1298c8;
        default: break;
    }

    ctx->pc = 0x1298b8u;

    // 0x1298b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1298b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1298bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1298bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1298c0: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1298C0u;
    SET_GPR_U32(ctx, 31, 0x1298C8u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1298C0u, 0x1298C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1298C8u;
label_1298c8:
    // 0x1298c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1298C8u;
    {
        const bool branch_taken_0x1298c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1298c8) {
            ctx->pc = 0x12995Cu;
            return;
        }
    }
    ctx->pc = 0x1298D0u;
    // 0x1298d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1298d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1298d4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1298d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1298d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1298d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1298dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1298dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1298e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1298e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1298e4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1298e4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1298e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1298e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1298ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1298ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1298f0: 0x0  nop
    ctx->pc = 0x1298f0u;
    // NOP
    // 0x1298f4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1298F4u;
    {
        const bool branch_taken_0x1298f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1298f4) {
            ctx->pc = 0x12995Cu;
            return;
        }
    }
    ctx->pc = 0x1298FCu;
    // 0x1298fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1298fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129900: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129904: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x129908: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x129908u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12990c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x129910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129914: 0x0  nop
    ctx->pc = 0x129914u;
    // NOP
    // 0x129918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x129918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12991c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12991cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129920: 0x0  nop
    ctx->pc = 0x129920u;
    // NOP
    // 0x129924: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x129924u;
    {
        const bool branch_taken_0x129924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129924) {
            ctx->pc = 0x12995Cu;
            return;
        }
    }
    ctx->pc = 0x12992Cu;
    // 0x12992c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129930: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129934: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129938: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12993c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129940: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129944: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12994c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129958: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12995cu;
}
