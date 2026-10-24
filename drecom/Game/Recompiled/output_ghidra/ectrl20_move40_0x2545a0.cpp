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

// Function: ectrl20_move40
// Address: 0x2545a0 - 0x2546a4
void ectrl20_move40_0x2545a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl20_move40_0x2545a0");
#endif

    switch (ctx->pc) {
        case 0x2545d8u: goto label_2545d8;
        case 0x254628u: goto label_254628;
        case 0x254634u: goto label_254634;
        default: break;
    }

    ctx->pc = 0x2545a0u;

    // 0x2545a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2545a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2545a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2545a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2545a8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2545a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2545ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2545acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2545b0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2545b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2545b4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2545B4u;
    {
        const bool branch_taken_0x2545b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2545b4) {
            ctx->pc = 0x254634u;
            goto label_254634;
        }
    }
    ctx->pc = 0x2545BCu;
    // 0x2545bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2545bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2545c0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2545c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2545c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2545c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2545c8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2545c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2545cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2545ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2545d0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2545D0u;
    SET_GPR_U32(ctx, 31, 0x2545D8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2545D0u, 0x2545D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545D8u;
label_2545d8:
    // 0x2545d8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2545d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2545dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2545dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2545e0: 0x0  nop
    ctx->pc = 0x2545e0u;
    // NOP
    // 0x2545e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2545e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2545e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2545e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2545ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2545ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2545f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2545f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2545f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2545f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2545f8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2545f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2545fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2545fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254600: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x254600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x254604: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x254604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x254608: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x254608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25460c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x254610: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x254610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254614: 0x24047803  addiu       $a0, $zero, 0x7803
    ctx->pc = 0x254614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30723));
    // 0x254618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x254618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25461c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x25461cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x254620: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x254620u;
    SET_GPR_U32(ctx, 31, 0x254628u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x254620u, 0x254628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254628u;
label_254628:
    // 0x254628: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x254628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25462c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x25462Cu;
    SET_GPR_U32(ctx, 31, 0x254634u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x25462Cu, 0x254634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254634u;
label_254634:
    // 0x254634: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254638: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x25463c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25463cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254640: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254648: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25464c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x25464cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x254650: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254654: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x254654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x254658: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x254658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25465c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25465cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254664: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x254664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x254668: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x254668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x25466c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x254670: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x254670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x254674: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x254674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x254678: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x254678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25467c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x25467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x254680: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254680u;
    {
        const bool branch_taken_0x254680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254680) {
            ctx->pc = 0x254694u;
            goto label_254694;
        }
    }
    ctx->pc = 0x254688u;
    // 0x254688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x254688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25468c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254690: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x254690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_254694:
    // 0x254694: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x254694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254698: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25469c: 0x3e00008  jr          $ra
    ctx->pc = 0x25469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25469Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2546A4u;
}
