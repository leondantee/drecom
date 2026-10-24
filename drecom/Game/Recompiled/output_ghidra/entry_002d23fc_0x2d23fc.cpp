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

// Function: entry_002d23fc
// Address: 0x2d23fc - 0x2d2478
void entry_002d23fc_0x2d23fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d23fc_0x2d23fc");
#endif

    switch (ctx->pc) {
        case 0x2d2428u: goto label_2d2428;
        case 0x2d243cu: goto label_2d243c;
        case 0x2d2464u: goto label_2d2464;
        case 0x2d2470u: goto label_2d2470;
        default: break;
    }

    ctx->pc = 0x2d23fcu;

    // 0x2d23fc: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x2d23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x2d2400: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2d2400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2d2404: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2408: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d240c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2414: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d2414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d2418: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d2418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d241c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2d241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2d2420: 0xc05c848  jal         func_172120
    ctx->pc = 0x2D2420u;
    SET_GPR_U32(ctx, 31, 0x2D2428u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2D2420u, 0x2D2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2428u;
label_2d2428:
    // 0x2d2428: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d242c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2430: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2d2430u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d2434: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D2434u;
    SET_GPR_U32(ctx, 31, 0x2D243Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D2434u, 0x2D243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D243Cu;
label_2d243c:
    // 0x2d243c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2440: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d2440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d2444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2448: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d244c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2450: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d2450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d2454: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2458: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d245c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D245Cu;
    SET_GPR_U32(ctx, 31, 0x2D2464u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D245Cu, 0x2D2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2464u;
label_2d2464:
    // 0x2d2464: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2468: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D2468u;
    SET_GPR_U32(ctx, 31, 0x2D2470u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D2468u, 0x2D2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2470u;
label_2d2470:
    // 0x2d2470: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2d2478u;
}
