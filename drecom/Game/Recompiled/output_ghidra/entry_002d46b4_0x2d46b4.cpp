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

// Function: entry_002d46b4
// Address: 0x2d46b4 - 0x2d4798
void entry_002d46b4_0x2d46b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d46b4_0x2d46b4");
#endif

    switch (ctx->pc) {
        case 0x2d46ecu: goto label_2d46ec;
        case 0x2d4720u: goto label_2d4720;
        case 0x2d4754u: goto label_2d4754;
        case 0x2d4788u: goto label_2d4788;
        default: break;
    }

    ctx->pc = 0x2d46b4u;

    // 0x2d46b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d46b8: 0x24428780  addiu       $v0, $v0, -0x7880
    ctx->pc = 0x2d46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936448));
    // 0x2d46bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d46c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d46c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398780u));
    // 0x2d46c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d46c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d46cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d46d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d46d4: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d46d8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d46d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d46dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d46e0: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d46e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d46e4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D46E4u;
    SET_GPR_U32(ctx, 31, 0x2D46ECu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D46E4u, 0x2D46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46ECu;
label_2d46ec:
    // 0x2d46ec: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d46f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d46f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d46f4: 0x0  nop
    ctx->pc = 0x2d46f4u;
    // NOP
    // 0x2d46f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d46f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d46fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4700: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4708: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d470c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4710: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4714: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d4718: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4718u;
    SET_GPR_U32(ctx, 31, 0x2D4720u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4718u, 0x2D4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4720u;
label_2d4720:
    // 0x2d4720: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d4724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4728: 0x0  nop
    ctx->pc = 0x2d4728u;
    // NOP
    // 0x2d472c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d472cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4730: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4734: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d473c: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d4740: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4744: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4748: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d4748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d474c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D474Cu;
    SET_GPR_U32(ctx, 31, 0x2D4754u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D474Cu, 0x2D4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4754u;
label_2d4754:
    // 0x2d4754: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d4754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d4758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d475c: 0x0  nop
    ctx->pc = 0x2d475cu;
    // NOP
    // 0x2d4760: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4768: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d476c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4770: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d4770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d4774: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4778: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d477c: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d477cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d4780: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4780u;
    SET_GPR_U32(ctx, 31, 0x2D4788u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4780u, 0x2D4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4788u;
label_2d4788:
    // 0x2d4788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d478c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4790: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D4790u;
    SET_GPR_U32(ctx, 31, 0x2D4798u);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D4790u, 0x2D4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4798u;
}
