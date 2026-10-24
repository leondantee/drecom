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

// Function: entry_002275d0
// Address: 0x2275d0 - 0x227690
void entry_002275d0_0x2275d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002275d0_0x2275d0");
#endif

    switch (ctx->pc) {
        case 0x2275e8u: goto label_2275e8;
        case 0x22766cu: goto label_22766c;
        case 0x227674u: goto label_227674;
        default: break;
    }

    ctx->pc = 0x2275d0u;

    // 0x2275d0: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2275d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2275d4: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2275d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2275d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2275d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2275dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2275dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2275e0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2275E0u;
    SET_GPR_U32(ctx, 31, 0x2275E8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2275E0u, 0x2275E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275E8u;
label_2275e8:
    // 0x2275e8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2275E8u;
    {
        const bool branch_taken_0x2275e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2275e8) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x2275F0u;
    // 0x2275f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2275f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2275f4: 0x0  nop
    ctx->pc = 0x2275f4u;
    // NOP
    // 0x2275f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2275f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2275fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2275fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x227600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227604: 0x0  nop
    ctx->pc = 0x227604u;
    // NOP
    // 0x227608: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x227608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22760c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22760cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227610: 0x0  nop
    ctx->pc = 0x227610u;
    // NOP
    // 0x227614: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x227614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x227618: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22761c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227620: 0x0  nop
    ctx->pc = 0x227620u;
    // NOP
    // 0x227624: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x227624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x227628: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22762c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x227630: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x227630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x227634: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x227634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x227638: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x227638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22763c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x227640: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x227640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x227644: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x227644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x227648: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x227648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22764c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227650: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x227650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x227654: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x227654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x227658: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x227658u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22765c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22765cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x227660: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x227660u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227664: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x227664u;
    SET_GPR_U32(ctx, 31, 0x22766Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x227664u, 0x22766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22766Cu;
label_22766c:
    // 0x22766c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22766Cu;
    SET_GPR_U32(ctx, 31, 0x227674u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22766Cu, 0x227674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227674u;
label_227674:
    // 0x227674: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227674u;
    {
        const bool branch_taken_0x227674 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x227674) {
            ctx->pc = 0x227690u;
            return;
        }
    }
    ctx->pc = 0x22767Cu;
    // 0x22767c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22767cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227680: 0x0  nop
    ctx->pc = 0x227680u;
    // NOP
    // 0x227684: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x227684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x227688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x227688u;
    {
        const bool branch_taken_0x227688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227688) {
            ctx->pc = 0x2276ACu;
            return;
        }
    }
    ctx->pc = 0x227690u;
}
