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

// Function: entry_00233434
// Address: 0x233434 - 0x233500
void entry_00233434_0x233434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233434_0x233434");
#endif

    switch (ctx->pc) {
        case 0x233448u: goto label_233448;
        case 0x233454u: goto label_233454;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e4u: goto label_2334e4;
        default: break;
    }

    ctx->pc = 0x233434u;

    // 0x233434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233438: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23343c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x233440: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x233440u;
    SET_GPR_U32(ctx, 31, 0x233448u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x233440u, 0x233448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233448u;
label_233448:
    // 0x233448: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23344c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23344Cu;
    SET_GPR_U32(ctx, 31, 0x233454u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23344Cu, 0x233454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233454u;
label_233454:
    // 0x233454: 0x920309db  lbu         $v1, 0x9DB($s0)
    ctx->pc = 0x233454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2523)));
    // 0x233458: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x233458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23345c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x233460: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x233460u;
    {
        const bool branch_taken_0x233460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233460) {
            ctx->pc = 0x233764u;
            return;
        }
    }
    ctx->pc = 0x233468u;
    // 0x233468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23346c: 0x0  nop
    ctx->pc = 0x23346cu;
    // NOP
    // 0x233470: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x233470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x233474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233478: 0x0  nop
    ctx->pc = 0x233478u;
    // NOP
    // 0x23347c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x23347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x233480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233484: 0x0  nop
    ctx->pc = 0x233484u;
    // NOP
    // 0x233488: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x233488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x23348c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x233490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233494: 0x0  nop
    ctx->pc = 0x233494u;
    // NOP
    // 0x233498: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x233498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23349c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x23349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2334a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2334a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2334a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2334a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2334a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2334a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2334ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2334acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2334b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2334b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2334b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2334b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2334b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2334b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2334bc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2334bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2334c0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2334c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2334c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2334c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2334cc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2334ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2334d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2334d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2334d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2334D4u;
    SET_GPR_U32(ctx, 31, 0x2334DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2334D4u, 0x2334DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334DCu;
label_2334dc:
    // 0x2334dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2334DCu;
    SET_GPR_U32(ctx, 31, 0x2334E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2334DCu, 0x2334E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2334E4u;
    {
        const bool branch_taken_0x2334e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2334e4) {
            ctx->pc = 0x233500u;
            return;
        }
    }
    ctx->pc = 0x2334ECu;
    // 0x2334ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2334ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2334f0: 0x0  nop
    ctx->pc = 0x2334f0u;
    // NOP
    // 0x2334f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2334f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2334f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2334F8u;
    {
        const bool branch_taken_0x2334f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334f8) {
            ctx->pc = 0x23351Cu;
            return;
        }
    }
    ctx->pc = 0x233500u;
}
