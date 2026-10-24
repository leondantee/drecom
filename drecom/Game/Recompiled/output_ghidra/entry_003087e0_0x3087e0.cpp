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

// Function: entry_003087e0
// Address: 0x3087e0 - 0x308870
void entry_003087e0_0x3087e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003087e0_0x3087e0");
#endif

    switch (ctx->pc) {
        case 0x308838u: goto label_308838;
        default: break;
    }

    ctx->pc = 0x3087e0u;

    // 0x3087e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3087e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3087e4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3087e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3087e8: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x3087e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x3087ec: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3087ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3087f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3087f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3087f4: 0x0  nop
    ctx->pc = 0x3087f4u;
    // NOP
    // 0x3087f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3087f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3087fc: 0x0  nop
    ctx->pc = 0x3087fcu;
    // NOP
    // 0x308800: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x308800u;
    {
        const bool branch_taken_0x308800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308800) {
            ctx->pc = 0x308870u;
            return;
        }
    }
    ctx->pc = 0x308808u;
    // 0x308808: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x308808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x30880c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x308810: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308818: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x308818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30881c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308820: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x308824: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x308824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308828: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30882c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308830: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308830u;
    SET_GPR_U32(ctx, 31, 0x308838u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308830u, 0x308838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308838u;
label_308838:
    // 0x308838: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308838u;
    {
        const bool branch_taken_0x308838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308838) {
            ctx->pc = 0x308870u;
            return;
        }
    }
    ctx->pc = 0x308840u;
    // 0x308840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308844: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308848: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30884c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308854: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30885c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30885cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308860: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308864: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308868: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30886c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30886cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x308870u;
}
