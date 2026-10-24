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

// Function: entry_0019846c
// Address: 0x19846c - 0x1984f8
void entry_0019846c_0x19846c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019846c_0x19846c");
#endif

    switch (ctx->pc) {
        case 0x198498u: goto label_198498;
        case 0x1984acu: goto label_1984ac;
        case 0x1984c4u: goto label_1984c4;
        case 0x1984e4u: goto label_1984e4;
        case 0x1984f0u: goto label_1984f0;
        default: break;
    }

    ctx->pc = 0x19846cu;

    // 0x19846c: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x19846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x198470: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x198474: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x198474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x198478: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19847c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198480: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198484: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x198484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x198488: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x198488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19848c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x19848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x198490: 0xc05c848  jal         func_172120
    ctx->pc = 0x198490u;
    SET_GPR_U32(ctx, 31, 0x198498u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x198490u, 0x198498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198498u;
label_198498:
    // 0x198498: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19849c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1984a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1984a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1984a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1984A4u;
    SET_GPR_U32(ctx, 31, 0x1984ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1984A4u, 0x1984ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984ACu;
label_1984ac:
    // 0x1984ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1984acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984b0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1984b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1984b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1984b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1984bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1984BCu;
    SET_GPR_U32(ctx, 31, 0x1984C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1984BCu, 0x1984C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984C4u;
label_1984c4:
    // 0x1984c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1984ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984d0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1984d4: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1984d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1984d8: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1984d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1984dc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1984DCu;
    SET_GPR_U32(ctx, 31, 0x1984E4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1984E4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1984E4u) { return; }
    ctx->pc = 0x1984E4u;
label_1984e4:
    // 0x1984e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1984E8u;
    SET_GPR_U32(ctx, 31, 0x1984F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1984E8u, 0x1984F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984F0u;
label_1984f0:
    // 0x1984f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1984f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1984f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1984f8u;
}
