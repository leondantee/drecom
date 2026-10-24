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

// Function: entry_0023817c
// Address: 0x23817c - 0x238224
void entry_0023817c_0x23817c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023817c_0x23817c");
#endif

    switch (ctx->pc) {
        case 0x238194u: goto label_238194;
        default: break;
    }

    ctx->pc = 0x23817cu;

    // 0x23817c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x23817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238180: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238184: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x238184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x238188: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x238188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x23818c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x23818Cu;
    SET_GPR_U32(ctx, 31, 0x238194u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x23818Cu, 0x238194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238194u;
label_238194:
    // 0x238194: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x238194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x238198: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x23819c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x23819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x2381a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2381a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2381a4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2381a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2381a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2381a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2381ac: 0x0  nop
    ctx->pc = 0x2381acu;
    // NOP
    // 0x2381b0: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2381B0u;
    {
        const bool branch_taken_0x2381b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2381b0) {
            ctx->pc = 0x238224u;
            return;
        }
    }
    ctx->pc = 0x2381B8u;
    // 0x2381b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2381b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2381bc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2381bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2381c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2381c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2381c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2381c8: 0x0  nop
    ctx->pc = 0x2381c8u;
    // NOP
    // 0x2381cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2381ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2381d0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2381d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2381d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2381d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2381d8: 0x0  nop
    ctx->pc = 0x2381d8u;
    // NOP
    // 0x2381dc: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2381DCu;
    {
        const bool branch_taken_0x2381dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2381dc) {
            ctx->pc = 0x238224u;
            return;
        }
    }
    ctx->pc = 0x2381E4u;
    // 0x2381e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2381e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2381e8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2381e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2381ec: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2381ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2381f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2381f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2381f4: 0x0  nop
    ctx->pc = 0x2381f4u;
    // NOP
    // 0x2381f8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2381f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2381fc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2381fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238200: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x238200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238204: 0x0  nop
    ctx->pc = 0x238204u;
    // NOP
    // 0x238208: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x238208u;
    {
        const bool branch_taken_0x238208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238208) {
            ctx->pc = 0x238224u;
            return;
        }
    }
    ctx->pc = 0x238210u;
    // 0x238210: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238214: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x238214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238218: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x238218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23821c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x238220: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x238220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x238224u;
}
