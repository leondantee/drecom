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

// Function: entry_002433bc
// Address: 0x2433bc - 0x243464
void entry_002433bc_0x2433bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002433bc_0x2433bc");
#endif

    switch (ctx->pc) {
        case 0x2433d4u: goto label_2433d4;
        default: break;
    }

    ctx->pc = 0x2433bcu;

    // 0x2433bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2433bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2433c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2433c4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2433c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2433c8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2433c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2433cc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2433CCu;
    SET_GPR_U32(ctx, 31, 0x2433D4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2433CCu, 0x2433D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433D4u;
label_2433d4:
    // 0x2433d4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2433d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2433d8: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x2433d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x2433dc: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x2433dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x2433e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2433e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2433e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2433e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2433e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2433e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2433ec: 0x0  nop
    ctx->pc = 0x2433ecu;
    // NOP
    // 0x2433f0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2433F0u;
    {
        const bool branch_taken_0x2433f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2433f0) {
            ctx->pc = 0x243464u;
            return;
        }
    }
    ctx->pc = 0x2433F8u;
    // 0x2433f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2433fc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2433fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243400: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x243400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x243404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243408: 0x0  nop
    ctx->pc = 0x243408u;
    // NOP
    // 0x24340c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24340cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x243410: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x243410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243418: 0x0  nop
    ctx->pc = 0x243418u;
    // NOP
    // 0x24341c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x24341Cu;
    {
        const bool branch_taken_0x24341c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24341c) {
            ctx->pc = 0x243464u;
            return;
        }
    }
    ctx->pc = 0x243424u;
    // 0x243424: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243428: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x243428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24342c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x24342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x243430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243434: 0x0  nop
    ctx->pc = 0x243434u;
    // NOP
    // 0x243438: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x243438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24343c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243440: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243444: 0x0  nop
    ctx->pc = 0x243444u;
    // NOP
    // 0x243448: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x243448u;
    {
        const bool branch_taken_0x243448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243448) {
            ctx->pc = 0x243464u;
            return;
        }
    }
    ctx->pc = 0x243450u;
    // 0x243450: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243454: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x243454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243458: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x243458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24345c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x24345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x243460: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x243460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x243464u;
}
