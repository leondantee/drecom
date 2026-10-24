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

// Function: entry_0034a594
// Address: 0x34a594 - 0x34a654
void entry_0034a594_0x34a594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a594_0x34a594");
#endif

    switch (ctx->pc) {
        case 0x34a5b4u: goto label_34a5b4;
        case 0x34a5e8u: goto label_34a5e8;
        case 0x34a614u: goto label_34a614;
        case 0x34a62cu: goto label_34a62c;
        case 0x34a638u: goto label_34a638;
        case 0x34a648u: goto label_34a648;
        default: break;
    }

    ctx->pc = 0x34a594u;

    // 0x34a594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a598: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a59c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5a4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a5a8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x34a5a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a5ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34A5ACu;
    SET_GPR_U32(ctx, 31, 0x34A5B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34A5ACu, 0x34A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5B4u;
label_34a5b4:
    // 0x34a5b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34a5bc: 0x3c023c48  lui         $v0, 0x3C48
    ctx->pc = 0x34a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15432 << 16));
    // 0x34a5c0: 0x34422b17  ori         $v0, $v0, 0x2B17
    ctx->pc = 0x34a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11031);
    // 0x34a5c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a5c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5d0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x34a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34a5d4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a5d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34a5dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34a5e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x34A5E0u;
    SET_GPR_U32(ctx, 31, 0x34A5E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34A5E0u, 0x34A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5E8u;
label_34a5e8:
    // 0x34a5e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34a5ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a5f4: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x34a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a5f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a600: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a604: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34a604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a608: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x34a608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a60c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34A60Cu;
    SET_GPR_U32(ctx, 31, 0x34A614u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34A60Cu, 0x34A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A614u;
label_34a614:
    // 0x34a614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a618: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34a61c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a620: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a620u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a624: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34A624u;
    SET_GPR_U32(ctx, 31, 0x34A62Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34A624u, 0x34A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A62Cu;
label_34a62c:
    // 0x34a62c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a630: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34A630u;
    SET_GPR_U32(ctx, 31, 0x34A638u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34A630u, 0x34A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A638u;
label_34a638:
    // 0x34a638: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a63c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a63cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a640: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34A640u;
    SET_GPR_U32(ctx, 31, 0x34A648u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34A640u, 0x34A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A648u;
label_34a648:
    // 0x34a648: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a64c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34A64Cu;
    SET_GPR_U32(ctx, 31, 0x34A654u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34A64Cu, 0x34A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A654u;
}
