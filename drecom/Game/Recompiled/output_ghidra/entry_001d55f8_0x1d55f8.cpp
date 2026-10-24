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

// Function: entry_001d55f8
// Address: 0x1d55f8 - 0x1d56cc
void entry_001d55f8_0x1d55f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d55f8_0x1d55f8");
#endif

    switch (ctx->pc) {
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5664u: goto label_1d5664;
        default: break;
    }

    ctx->pc = 0x1d55f8u;

label_1d55f8:
    // 0x1d55f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d55f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d55fc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5600: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5604: 0xe4400800  swc1        $f0, 0x800($v0)
    ctx->pc = 0x1d5604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2048), bits); }
    // 0x1d5608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d560c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5610: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5614: 0xe4400804  swc1        $f0, 0x804($v0)
    ctx->pc = 0x1d5614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2052), bits); }
    // 0x1d5618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d561c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5620: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5624: 0xe4400808  swc1        $f0, 0x808($v0)
    ctx->pc = 0x1d5624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2056), bits); }
    // 0x1d5628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d562c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5630: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d5634: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5638: 0xe440080c  swc1        $f0, 0x80C($v0)
    ctx->pc = 0x1d5638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2060), bits); }
    // 0x1d563c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1d563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1d5640: 0xa0400990  sb          $zero, 0x990($v0)
    ctx->pc = 0x1d5640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2448), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5644: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1D5644u;
    SET_GPR_U32(ctx, 31, 0x1D564Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1D5644u, 0x1D564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D564Cu;
label_1d564c:
    // 0x1d564c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5650: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5654: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5658: 0xa44309aa  sh          $v1, 0x9AA($v0)
    ctx->pc = 0x1d5658u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2474), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d565c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1D565Cu;
    SET_GPR_U32(ctx, 31, 0x1D5664u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1D565Cu, 0x1D5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5664u;
label_1d5664:
    // 0x1d5664: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d5664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1d5668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d566c: 0x0  nop
    ctx->pc = 0x1d566cu;
    // NOP
    // 0x1d5670: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5670u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5674: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d5674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5678: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d567c: 0xe46009dc  swc1        $f0, 0x9DC($v1)
    ctx->pc = 0x1d567cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2524), bits); }
    // 0x1d5680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5684: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d5684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d5688: 0x1660ffdb  bnez        $s3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1D5688u;
    {
        const bool branch_taken_0x1d5688 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5688) {
            ctx->pc = 0x1D55F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55f8;
        }
    }
    ctx->pc = 0x1D5690u;
    // 0x1d5690: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d5694: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d5698: 0x16a0ff13  bnez        $s5, . + 4 + (-0xED << 2)
    ctx->pc = 0x1D5698u;
    {
        const bool branch_taken_0x1d5698 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5698) {
            ctx->pc = 0x1D52E8u;
            return;
        }
    }
    ctx->pc = 0x1D56A0u;
    // 0x1d56a0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1d56a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d56a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d56a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d56a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d56a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d56ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d56acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d56b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d56b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d56b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d56b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d56b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d56b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d56bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d56bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d56c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d56c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D56C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D56C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D56CCu;
}
