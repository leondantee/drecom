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

// Function: Em00_R1_run
// Address: 0x2d2390 - 0x2d249c
void Em00_R1_run_0x2d2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_run_0x2d2390");
#endif

    switch (ctx->pc) {
        case 0x2d23e4u: goto label_2d23e4;
        case 0x2d2428u: goto label_2d2428;
        case 0x2d243cu: goto label_2d243c;
        case 0x2d2464u: goto label_2d2464;
        case 0x2d2470u: goto label_2d2470;
        case 0x2d2480u: goto label_2d2480;
        case 0x2d248cu: goto label_2d248c;
        default: break;
    }

    ctx->pc = 0x2d2390u;

    // 0x2d2390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2394: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d2394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d2398: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d2398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d239c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d23a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d23a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d23a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d23a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d23a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d23ac: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D23ACu;
    {
        const bool branch_taken_0x2d23ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d23ac) {
            ctx->pc = 0x2D23FCu;
            goto label_2d23fc;
        }
    }
    ctx->pc = 0x2D23B4u;
    // 0x2d23b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D23B4u;
    {
        const bool branch_taken_0x2d23b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23b4) {
            ctx->pc = 0x2D23C4u;
            goto label_2d23c4;
        }
    }
    ctx->pc = 0x2D23BCu;
    // 0x2d23bc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D23BCu;
    {
        const bool branch_taken_0x2d23bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d23bc) {
            ctx->pc = 0x2D248Cu;
            goto label_2d248c;
        }
    }
    ctx->pc = 0x2D23C4u;
label_2d23c4:
    // 0x2d23c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d23c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d23cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d23d0: 0x24065a1e  addiu       $a2, $zero, 0x5A1E
    ctx->pc = 0x2d23d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23070));
    // 0x2d23d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d23d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d23d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d23d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d23dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D23DCu;
    SET_GPR_U32(ctx, 31, 0x2D23E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D23DCu, 0x2D23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23E4u;
label_2d23e4:
    // 0x2d23e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d23e8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d23e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d23ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d23f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d23f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d23f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d23f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d23f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d23fc:
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
    // 0x2d2478: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D2478u;
    SET_GPR_U32(ctx, 31, 0x2D2480u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2478u, 0x2D2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2480u;
label_2d2480:
    // 0x2d2480: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2484: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2484u;
    SET_GPR_U32(ctx, 31, 0x2D248Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2484u, 0x2D248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D248Cu;
label_2d248c:
    // 0x2d248c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d248cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2494: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D249Cu;
}
