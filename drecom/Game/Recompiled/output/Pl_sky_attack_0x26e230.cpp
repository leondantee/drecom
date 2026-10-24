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

// Function: Pl_sky_attack
// Address: 0x26e230 - 0x26e330
void Pl_sky_attack_0x26e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sky_attack_0x26e230");
#endif

    switch (ctx->pc) {
        case 0x26e254u: goto label_26e254;
        case 0x26e260u: goto label_26e260;
        case 0x26e294u: goto label_26e294;
        case 0x26e2bcu: goto label_26e2bc;
        case 0x26e2d0u: goto label_26e2d0;
        case 0x26e318u: goto label_26e318;
        default: break;
    }

    ctx->pc = 0x26e230u;

    // 0x26e230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26e234: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x26e234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x26e238: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26e23c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e240: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x26e240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x26e244: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e248: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e24c: 0xc09b78c  jal         func_26DE30
    ctx->pc = 0x26E24Cu;
    SET_GPR_U32(ctx, 31, 0x26E254u);
    ctx->pc = 0x26DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE30u, 0x26E24Cu, 0x26E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E254u;
label_26e254:
    // 0x26e254: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e258: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26E258u;
    SET_GPR_U32(ctx, 31, 0x26E260u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26E258u, 0x26E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E260u;
label_26e260:
    // 0x26e260: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26e264: 0x24508b80  addiu       $s0, $v0, -0x7480
    ctx->pc = 0x26e264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x26e268: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x26e268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e26c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e270: 0x24420470  addiu       $v0, $v0, 0x470
    ctx->pc = 0x26e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x26e274: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26e274u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B80u, _value); } while (0);
    // 0x26e278: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e27c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26e27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B84u, _value); } while (0);
    // 0x26e280: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e284: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x26e284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26e288: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x26e288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e28c: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x26E28Cu;
    SET_GPR_U32(ctx, 31, 0x26E294u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x26E28Cu, 0x26E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E294u;
label_26e294:
    // 0x26e294: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26e294u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e298: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x26E298u;
    {
        const bool branch_taken_0x26e298 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x26e298) {
            ctx->pc = 0x26E2D0u;
            goto label_26e2d0;
        }
    }
    ctx->pc = 0x26E2A0u;
    // 0x26e2a0: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x26e2a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x26e2a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26E2A4u;
    {
        const bool branch_taken_0x26e2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e2a4) {
            ctx->pc = 0x26E2D0u;
            goto label_26e2d0;
        }
    }
    ctx->pc = 0x26E2ACu;
    // 0x26e2ac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x26e2b0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x26e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x26e2b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E2B4u;
    SET_GPR_U32(ctx, 31, 0x26E2BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E2B4u, 0x26E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2BCu;
label_26e2bc:
    // 0x26e2bc: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x26e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x26e2c0: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x26e2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x26e2c4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x26e2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x26e2c8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E2C8u;
    SET_GPR_U32(ctx, 31, 0x26E2D0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E2C8u, 0x26E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2D0u;
label_26e2d0:
    // 0x26e2d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e2d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e2d8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e2dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e2e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e2e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e2e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x26e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x26e2ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e2f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e2f4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x26e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26e2f8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26e2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e2fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26e2fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e300: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26e300u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e304: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x26e304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e308: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x26e308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e30c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x26e30cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e310: 0xc0bc91c  jal         func_2F2470
    ctx->pc = 0x26E310u;
    SET_GPR_U32(ctx, 31, 0x26E318u);
    ctx->pc = 0x2F2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2470u, 0x26E310u, 0x26E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E318u;
label_26e318:
    // 0x26e318: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26e318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e31c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e324: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26e324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26e328: 0x3e00008  jr          $ra
    ctx->pc = 0x26E328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E330u;
}
