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

// Function: Pl_sky_attack2
// Address: 0x26e330 - 0x26e430
void Pl_sky_attack2_0x26e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sky_attack2_0x26e330");
#endif

    switch (ctx->pc) {
        case 0x26e354u: goto label_26e354;
        case 0x26e360u: goto label_26e360;
        case 0x26e394u: goto label_26e394;
        case 0x26e3bcu: goto label_26e3bc;
        case 0x26e3d0u: goto label_26e3d0;
        case 0x26e418u: goto label_26e418;
        default: break;
    }

    ctx->pc = 0x26e330u;

    // 0x26e330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26e334: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x26e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x26e338: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26e33c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e340: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x26e340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x26e344: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e348: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26e348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e34c: 0xc09b78c  jal         func_26DE30
    ctx->pc = 0x26E34Cu;
    SET_GPR_U32(ctx, 31, 0x26E354u);
    ctx->pc = 0x26DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE30u, 0x26E34Cu, 0x26E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E354u;
label_26e354:
    // 0x26e354: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e358: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26E358u;
    SET_GPR_U32(ctx, 31, 0x26E360u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26E358u, 0x26E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E360u;
label_26e360:
    // 0x26e360: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26e364: 0x24508b98  addiu       $s0, $v0, -0x7468
    ctx->pc = 0x26e364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937496));
    // 0x26e368: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x26e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e36c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e370: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x26e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x26e374: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26e374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B98u, _value); } while (0);
    // 0x26e378: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e37c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26e37cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388B9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B9Cu, _value); } while (0);
    // 0x26e380: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e384: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x26e384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26e388: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x26e388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e38c: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x26E38Cu;
    SET_GPR_U32(ctx, 31, 0x26E394u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x26E38Cu, 0x26E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E394u;
label_26e394:
    // 0x26e394: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26e394u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e398: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x26E398u;
    {
        const bool branch_taken_0x26e398 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x26e398) {
            ctx->pc = 0x26E3D0u;
            goto label_26e3d0;
        }
    }
    ctx->pc = 0x26E3A0u;
    // 0x26e3a0: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x26e3a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x26e3a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26E3A4u;
    {
        const bool branch_taken_0x26e3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e3a4) {
            ctx->pc = 0x26E3D0u;
            goto label_26e3d0;
        }
    }
    ctx->pc = 0x26E3ACu;
    // 0x26e3ac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x26e3b0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x26e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x26e3b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E3B4u;
    SET_GPR_U32(ctx, 31, 0x26E3BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E3B4u, 0x26E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3BCu;
label_26e3bc:
    // 0x26e3bc: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x26e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x26e3c0: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x26e3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x26e3c4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x26e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x26e3c8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E3C8u;
    SET_GPR_U32(ctx, 31, 0x26E3D0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E3C8u, 0x26E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3D0u;
label_26e3d0:
    // 0x26e3d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e3d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e3d8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e3dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e3e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e3e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e3e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e3ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e3f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e3f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x26e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e3f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e3fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26e3fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e400: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26e400u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e404: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x26e404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e408: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x26e408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e40c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x26e40cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e410: 0xc0bc958  jal         func_2F2560
    ctx->pc = 0x26E410u;
    SET_GPR_U32(ctx, 31, 0x26E418u);
    ctx->pc = 0x2F2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2560u, 0x26E410u, 0x26E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E418u;
label_26e418:
    // 0x26e418: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26e418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e41c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e424: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26e428: 0x3e00008  jr          $ra
    ctx->pc = 0x26E428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E430u;
}
