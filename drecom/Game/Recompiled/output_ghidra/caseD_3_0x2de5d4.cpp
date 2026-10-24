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

// Function: caseD_3
// Address: 0x2de5d4 - 0x2de668
void caseD_3_0x2de5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2de5d4");
#endif

    switch (ctx->pc) {
        case 0x2de5e4u: goto label_2de5e4;
        case 0x2de5f0u: goto label_2de5f0;
        case 0x2de600u: goto label_2de600;
        case 0x2de610u: goto label_2de610;
        default: break;
    }

    ctx->pc = 0x2de5d4u;

    // 0x2de5d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de5d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de5d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de5dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE5DCu;
    SET_GPR_U32(ctx, 31, 0x2DE5E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE5DCu, 0x2DE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5E4u;
label_2de5e4:
    // 0x2de5e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de5e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE5E8u;
    SET_GPR_U32(ctx, 31, 0x2DE5F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE5E8u, 0x2DE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE5F0u;
label_2de5f0:
    // 0x2de5f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de5f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2de5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de5f8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE5F8u;
    SET_GPR_U32(ctx, 31, 0x2DE600u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE5F8u, 0x2DE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE600u;
label_2de600:
    // 0x2de600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de604: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2de604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de608: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x2DE608u;
    SET_GPR_U32(ctx, 31, 0x2DE610u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x2DE608u, 0x2DE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE610u;
label_2de610:
    // 0x2de610: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x2de610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x2de614: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2de614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2de618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2de618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2de61c: 0x0  nop
    ctx->pc = 0x2de61cu;
    // NOP
    // 0x2de620: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2de624: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2de624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2de628: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de62c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x2de62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de634: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2de634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2de63c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2de640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de644: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2de644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de648: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2de648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de64c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de650: 0x0  nop
    ctx->pc = 0x2de650u;
    // NOP
    // 0x2de654: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE654u;
    {
        const bool branch_taken_0x2de654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de654) {
            ctx->pc = 0x2DE668u;
            return;
        }
    }
    ctx->pc = 0x2DE65Cu;
    // 0x2de65c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2de65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de664: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2de664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2de668u;
}
