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

// Function: entry_0015c3f4
// Address: 0x15c3f4 - 0x15c470
void entry_0015c3f4_0x15c3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c3f4_0x15c3f4");
#endif

    switch (ctx->pc) {
        case 0x15c414u: goto label_15c414;
        case 0x15c438u: goto label_15c438;
        default: break;
    }

    ctx->pc = 0x15c3f4u;

    // 0x15c3f4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x15c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15c3f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c3fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c404: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c408: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c40c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15C40Cu;
    SET_GPR_U32(ctx, 31, 0x15C414u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15C40Cu, 0x15C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C414u;
label_15c414:
    // 0x15c414: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x15c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c418: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x15c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c41c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15c41cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c420: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c424: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x15c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c428: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15c428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c42c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15c42cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c430: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15C430u;
    SET_GPR_U32(ctx, 31, 0x15C438u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15C430u, 0x15C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C438u;
label_15c438:
    // 0x15c438: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15c438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15c43c: 0xc60111e8  lwc1        $f1, 0x11E8($s0)
    ctx->pc = 0x15c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c440: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x15c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x15c444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c448: 0x0  nop
    ctx->pc = 0x15c448u;
    // NOP
    // 0x15c44c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x15c44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15c450: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c454: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c458: 0x0  nop
    ctx->pc = 0x15c458u;
    // NOP
    // 0x15c45c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15C45Cu;
    {
        const bool branch_taken_0x15c45c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c45c) {
            ctx->pc = 0x15C470u;
            return;
        }
    }
    ctx->pc = 0x15C464u;
    // 0x15c464: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15c464u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15C468u;
    {
        const bool branch_taken_0x15c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c468) {
            ctx->pc = 0x15C474u;
            return;
        }
    }
    ctx->pc = 0x15C470u;
}
