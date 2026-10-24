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

// Function: entry_002d0744
// Address: 0x2d0744 - 0x2d084c
void entry_002d0744_0x2d0744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0744_0x2d0744");
#endif

    switch (ctx->pc) {
        case 0x2d074cu: goto label_2d074c;
        case 0x2d07c0u: goto label_2d07c0;
        default: break;
    }

    ctx->pc = 0x2d0744u;

    // 0x2d0744: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D0744u;
    SET_GPR_U32(ctx, 31, 0x2D074Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D0744u, 0x2D074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D074Cu;
label_2d074c:
    // 0x2d074c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0750: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0754: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0758: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d075c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0760: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0768: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d0768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d076c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d076cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0770: 0x0  nop
    ctx->pc = 0x2d0770u;
    // NOP
    // 0x2d0774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d0774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0778: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d0778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d077c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0780: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0784: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0788: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d078c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0790: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0794: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0798: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d079c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d07a0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d07a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d07a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d07a8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d07ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d07acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d07b0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d07b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d07b4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2d07b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d07b8: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D07B8u;
    SET_GPR_U32(ctx, 31, 0x2D07C0u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D07B8u, 0x2D07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07C0u;
label_2d07c0:
    // 0x2d07c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d07c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d07c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d07c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d07c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d07cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d07d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d07d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d07d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d07d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d07d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d07dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d07dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d07e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d07e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d07e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d07e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d07ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d07f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d07f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d07f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d07f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d07fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d07fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0800: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0804: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0808: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d0808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d080c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D080Cu;
    {
        const bool branch_taken_0x2d080c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d080c) {
            ctx->pc = 0x2D084Cu;
            return;
        }
    }
    ctx->pc = 0x2D0814u;
    // 0x2d0814: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0818: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d081c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0820: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d082c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d082cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0830: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0834: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0838: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d083c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0840: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0844: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0844u;
    SET_GPR_U32(ctx, 31, 0x2D084Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0844u, 0x2D084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D084Cu;
}
