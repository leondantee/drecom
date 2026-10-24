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

// Function: entry_0019864c
// Address: 0x19864c - 0x1986d8
void entry_0019864c_0x19864c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019864c_0x19864c");
#endif

    switch (ctx->pc) {
        case 0x198678u: goto label_198678;
        case 0x19868cu: goto label_19868c;
        case 0x1986a4u: goto label_1986a4;
        case 0x1986c4u: goto label_1986c4;
        case 0x1986d0u: goto label_1986d0;
        default: break;
    }

    ctx->pc = 0x19864cu;

    // 0x19864c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x198650: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x198650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x198654: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x198654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x198658: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19865c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198660: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198664: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x198668: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x198668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19866c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x19866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x198670: 0xc05c848  jal         func_172120
    ctx->pc = 0x198670u;
    SET_GPR_U32(ctx, 31, 0x198678u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x198670u, 0x198678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198678u;
label_198678:
    // 0x198678: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19867c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198680: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x198680u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198684: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x198684u;
    SET_GPR_U32(ctx, 31, 0x19868Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x198684u, 0x19868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19868Cu;
label_19868c:
    // 0x19868c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198690: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x198690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x198694: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198698: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x198698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19869c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19869Cu;
    SET_GPR_U32(ctx, 31, 0x1986A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19869Cu, 0x1986A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986A4u;
label_1986a4:
    // 0x1986a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1986a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1986acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986b0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1986b4: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1986b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1986b8: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1986b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1986bc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1986BCu;
    SET_GPR_U32(ctx, 31, 0x1986C4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1986C4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1986C4u) { return; }
    ctx->pc = 0x1986C4u;
label_1986c4:
    // 0x1986c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1986C8u;
    SET_GPR_U32(ctx, 31, 0x1986D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1986C8u, 0x1986D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986D0u;
label_1986d0:
    // 0x1986d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1986d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1986d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1986d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1986d8u;
}
