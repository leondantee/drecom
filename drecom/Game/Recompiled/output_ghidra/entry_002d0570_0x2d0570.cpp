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

// Function: entry_002d0570
// Address: 0x2d0570 - 0x2d06a4
void entry_002d0570_0x2d0570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0570_0x2d0570");
#endif

    switch (ctx->pc) {
        case 0x2d059cu: goto label_2d059c;
        case 0x2d0610u: goto label_2d0610;
        case 0x2d069cu: goto label_2d069c;
        default: break;
    }

    ctx->pc = 0x2d0570u;

    // 0x2d0570: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0574: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0578: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d057c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d0584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0588: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d058c: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D058Cu;
    {
        const bool branch_taken_0x2d058c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d058c) {
            ctx->pc = 0x2D06A4u;
            return;
        }
    }
    ctx->pc = 0x2D0594u;
    // 0x2d0594: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D0594u;
    SET_GPR_U32(ctx, 31, 0x2D059Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D0594u, 0x2D059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D059Cu;
label_2d059c:
    // 0x2d059c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d05a0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d05a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d05a8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d05ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d05b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d05b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d05b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2d05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2d05bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d05bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d05c0: 0x0  nop
    ctx->pc = 0x2d05c0u;
    // NOP
    // 0x2d05c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d05c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d05c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d05c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d05cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d05d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d05d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d05d8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d05dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d05e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d05e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d05ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d05f0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d05f8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d05fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d05fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0600: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d0600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0604: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2d0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d0608: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D0608u;
    SET_GPR_U32(ctx, 31, 0x2D0610u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D0608u, 0x2D0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0610u;
label_2d0610:
    // 0x2d0610: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0614: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0618: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d061c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d061cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0624: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0628: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d0628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d062c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0630: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0634: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0638: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d063c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0640: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d0644: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d0644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0648: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d064c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0650: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0654: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0658: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d0658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d065c: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2D065Cu;
    {
        const bool branch_taken_0x2d065c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d065c) {
            ctx->pc = 0x2D084Cu;
            return;
        }
    }
    ctx->pc = 0x2D0664u;
    // 0x2d0664: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0668: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d066c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0670: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d067c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d067cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0680: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0684: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0688: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d0688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d068c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0690: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0694: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0694u;
    SET_GPR_U32(ctx, 31, 0x2D069Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0694u, 0x2D069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D069Cu;
label_2d069c:
    // 0x2d069c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2D069Cu;
    {
        const bool branch_taken_0x2d069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d069c) {
            ctx->pc = 0x2D084Cu;
            return;
        }
    }
    ctx->pc = 0x2D06A4u;
}
