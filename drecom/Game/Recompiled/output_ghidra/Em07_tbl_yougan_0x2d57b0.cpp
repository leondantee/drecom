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

// Function: Em07_tbl_yougan
// Address: 0x2d57b0 - 0x2d5874
void Em07_tbl_yougan_0x2d57b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_tbl_yougan_0x2d57b0");
#endif

    switch (ctx->pc) {
        case 0x2d57f0u: goto label_2d57f0;
        case 0x2d5864u: goto label_2d5864;
        default: break;
    }

    ctx->pc = 0x2d57b0u;

    // 0x2d57b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d57b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d57b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d57b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d57b8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2d57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2d57bc: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2d57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2d57c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d57c4: 0x24428930  addiu       $v0, $v0, -0x76D0
    ctx->pc = 0x2d57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936880));
    // 0x2d57c8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d57cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d57ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398930u));
    // 0x2d57d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d57d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d57d8: 0x24428940  addiu       $v0, $v0, -0x76C0
    ctx->pc = 0x2d57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936896));
    // 0x2d57dc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d57e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d57e0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398940u));
    // 0x2d57e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d57e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d57e8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D57E8u;
    SET_GPR_U32(ctx, 31, 0x2D57F0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D57E8u, 0x2D57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57F0u;
label_2d57f0:
    // 0x2d57f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d57f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d57f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d57fc: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x2d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
    // 0x2d5800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5804: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d5804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d5808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d580c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d5810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5814: 0x0  nop
    ctx->pc = 0x2d5814u;
    // NOP
    // 0x2d5818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d581c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d581cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d5820: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d5820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5824: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d5824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d5828: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d582c: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x2d582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
    // 0x2d5830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5834: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5838: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d5838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d583c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d583cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5840: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d5840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d5844: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d5844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5848: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d5848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d584c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d584cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5850: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d5850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5854: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d5854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d5858: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2d5858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d585c: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D585Cu;
    SET_GPR_U32(ctx, 31, 0x2D5864u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D585Cu, 0x2D5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5864u;
label_2d5864:
    // 0x2d5864: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d5864u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5868: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d5868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d586c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D586Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5874u;
}
