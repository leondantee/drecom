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

// Function: entry_001c9478
// Address: 0x1c9478 - 0x1c9560
void entry_001c9478_0x1c9478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9478_0x1c9478");
#endif

    switch (ctx->pc) {
        case 0x1c94a0u: goto label_1c94a0;
        case 0x1c94b8u: goto label_1c94b8;
        case 0x1c94ccu: goto label_1c94cc;
        case 0x1c9500u: goto label_1c9500;
        default: break;
    }

    ctx->pc = 0x1c9478u;

    // 0x1c9478: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c947c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c9480: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1c9480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1c9484: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c9484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c9488: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1c948c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9490: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c9490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c9494: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c9498: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C9498u;
    SET_GPR_U32(ctx, 31, 0x1C94A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9498u, 0x1C94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94A0u;
label_1c94a0:
    // 0x1c94a0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c94a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c94a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c94a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1c94a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1c94ac: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1c94acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c94b0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1C94B0u;
    SET_GPR_U32(ctx, 31, 0x1C94B8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1C94B0u, 0x1C94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94B8u;
label_1c94b8:
    // 0x1c94b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c94b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c94bc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c94c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c94c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c94c4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1C94C4u;
    SET_GPR_U32(ctx, 31, 0x1C94CCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1C94C4u, 0x1C94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94CCu;
label_1c94cc:
    // 0x1c94cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c94ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c94d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c94d4: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1c94d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c94d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c94d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c94dc: 0x0  nop
    ctx->pc = 0x1c94dcu;
    // NOP
    // 0x1c94e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c94e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c94e4: 0x0  nop
    ctx->pc = 0x1c94e4u;
    // NOP
    // 0x1c94e8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1C94E8u;
    {
        const bool branch_taken_0x1c94e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c94e8) {
            ctx->pc = 0x1C9560u;
            return;
        }
    }
    ctx->pc = 0x1C94F0u;
    // 0x1c94f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c94f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c94f8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1C94F8u;
    SET_GPR_U32(ctx, 31, 0x1C9500u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1C94F8u, 0x1C9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9500u;
label_1c9500:
    // 0x1c9500: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1c9500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
    // 0x1c9504: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c9504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c9508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c9508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c950c: 0x0  nop
    ctx->pc = 0x1c950cu;
    // NOP
    // 0x1c9510: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9514: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1c9518: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c951c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9520: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9524: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1c9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c952c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1c952cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1c9530: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9534: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9538: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c953c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c953cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9540: 0x0  nop
    ctx->pc = 0x1c9540u;
    // NOP
    // 0x1c9544: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x1C9544u;
    {
        const bool branch_taken_0x1c9544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9544) {
            ctx->pc = 0x1C9690u;
            return;
        }
    }
    ctx->pc = 0x1C954Cu;
    // 0x1c954c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9550: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9554: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1c9554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1c9558: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C9690u;
            return;
        }
    }
    ctx->pc = 0x1C9560u;
}
