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

// Function: entry_002d0378
// Address: 0x2d0378 - 0x2d0480
void entry_002d0378_0x2d0378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0378_0x2d0378");
#endif

    switch (ctx->pc) {
        case 0x2d0380u: goto label_2d0380;
        case 0x2d03f4u: goto label_2d03f4;
        default: break;
    }

    ctx->pc = 0x2d0378u;

    // 0x2d0378: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D0378u;
    SET_GPR_U32(ctx, 31, 0x2D0380u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D0378u, 0x2D0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0380u;
label_2d0380:
    // 0x2d0380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0384: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0388: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d038c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0394: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0398: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d039c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d03a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d03a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d03a4: 0x0  nop
    ctx->pc = 0x2d03a4u;
    // NOP
    // 0x2d03a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d03a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d03ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d03b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d03b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d03b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d03bc: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d03c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d03c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d03c8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d03cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d03d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d03d4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d03d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d03d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d03dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2d03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d03e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d03e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d03e4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d03e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d03e8: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2d03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d03ec: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D03ECu;
    SET_GPR_U32(ctx, 31, 0x2D03F4u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D03ECu, 0x2D03F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03F4u;
label_2d03f4:
    // 0x2d03f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d03f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d03f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d03fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d03fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d040c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d040cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d0410: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0414: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0418: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d041c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d041cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0424: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d0428: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d042c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d0430: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0434: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0438: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d043c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d0440: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0440u;
    {
        const bool branch_taken_0x2d0440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0440) {
            ctx->pc = 0x2D0480u;
            return;
        }
    }
    ctx->pc = 0x2D0448u;
    // 0x2d0448: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d044c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0450: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0454: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d045c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0460: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d0464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0468: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d046c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0470: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d0470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0474: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0478: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0478u;
    SET_GPR_U32(ctx, 31, 0x2D0480u);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0478u, 0x2D0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0480u;
}
