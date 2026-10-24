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

// Function: entry_002a2354
// Address: 0x2a2354 - 0x2a2458
void entry_002a2354_0x2a2354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2354_0x2a2354");
#endif

    switch (ctx->pc) {
        case 0x2a2380u: goto label_2a2380;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23b4u: goto label_2a23b4;
        case 0x2a23f8u: goto label_2a23f8;
        case 0x2a2414u: goto label_2a2414;
        default: break;
    }

    ctx->pc = 0x2a2354u;

    // 0x2a2354: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2358: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a235c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a2360: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x2a2360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a2364: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a2364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2368: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a236c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2370: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2374: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2378: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2378u;
    SET_GPR_U32(ctx, 31, 0x2A2380u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2378u, 0x2A2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2380u;
label_2a2380:
    // 0x2a2380: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a2384: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2388: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a2388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a238c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2390: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2390u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2394: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2394u;
    SET_GPR_U32(ctx, 31, 0x2A239Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2394u, 0x2A239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A239Cu;
label_2a239c:
    // 0x2a239c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a23a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a23a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a23a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a23ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A23ACu;
    SET_GPR_U32(ctx, 31, 0x2A23B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A23ACu, 0x2A23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23B4u;
label_2a23b4:
    // 0x2a23b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23b8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2a23b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2a23bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a23bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a23c0: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x2a23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2a23c4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A23C4u;
    {
        const bool branch_taken_0x2a23c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a23c4) {
            ctx->pc = 0x2A2458u;
            return;
        }
    }
    ctx->pc = 0x2A23CCu;
    // 0x2a23cc: 0x3c053e86  lui         $a1, 0x3E86
    ctx->pc = 0x2a23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16006 << 16));
    // 0x2a23d0: 0x34a20a92  ori         $v0, $a1, 0xA92
    ctx->pc = 0x2a23d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x2a23d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a23d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a23d8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a23d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23dc: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23e0: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2a23e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a23e4: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x2a23e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a23e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a23ec: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a23f0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A23F0u;
    SET_GPR_U32(ctx, 31, 0x2A23F8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A23F0u, 0x2A23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23F8u;
label_2a23f8:
    // 0x2a23f8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a23f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a23fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2400: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2404: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2408: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2408u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a240c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A240Cu;
    SET_GPR_U32(ctx, 31, 0x2A2414u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A240Cu, 0x2A2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2414u;
label_2a2414:
    // 0x2a2414: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2418: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a2418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a241c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2420: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2424: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a2424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2428: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a242c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2a242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2430: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2434: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2a2438: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a243c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2440: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2a2444: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2a2444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2a2448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a244c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2a244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2450: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2454: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2a2454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x2a2458u;
}
