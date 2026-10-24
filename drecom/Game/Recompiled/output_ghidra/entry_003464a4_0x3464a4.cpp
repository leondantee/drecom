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

// Function: entry_003464a4
// Address: 0x3464a4 - 0x34662c
void entry_003464a4_0x3464a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003464a4_0x3464a4");
#endif

    switch (ctx->pc) {
        case 0x346508u: goto label_346508;
        case 0x346548u: goto label_346548;
        case 0x346554u: goto label_346554;
        case 0x346560u: goto label_346560;
        case 0x34656cu: goto label_34656c;
        case 0x34659cu: goto label_34659c;
        case 0x3465ccu: goto label_3465cc;
        case 0x3465fcu: goto label_3465fc;
        default: break;
    }

    ctx->pc = 0x3464a4u;

    // 0x3464a4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3464a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3464ac: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x3464acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3464b0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3464b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3464b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3464bc: 0x0  nop
    ctx->pc = 0x3464bcu;
    // NOP
    // 0x3464c0: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x3464C0u;
    {
        const bool branch_taken_0x3464c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3464c0) {
            ctx->pc = 0x34662Cu;
            return;
        }
    }
    ctx->pc = 0x3464C8u;
    // 0x3464c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3464ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3464d0: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x3464d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3464d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x3464dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3464dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3464e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3464e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3464e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3464ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3464f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3464f4: 0x2406010c  addiu       $a2, $zero, 0x10C
    ctx->pc = 0x3464f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x3464f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3464f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3464fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3464fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x346500: 0xc0965d0  jal         func_259740
    ctx->pc = 0x346500u;
    SET_GPR_U32(ctx, 31, 0x346508u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x346500u, 0x346508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346508u;
label_346508:
    // 0x346508: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34650c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346510: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x346510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346514: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x346514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x346518: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x346518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34651c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34651cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x346520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346524: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346528: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x346528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34652c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x346530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x346530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x346534: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x346534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346538: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346538u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34653c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x34653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x346540: 0xc0561d4  jal         func_158750
    ctx->pc = 0x346540u;
    SET_GPR_U32(ctx, 31, 0x346548u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x346540u, 0x346548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346548u;
label_346548:
    // 0x346548: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x346548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34654c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x34654Cu;
    SET_GPR_U32(ctx, 31, 0x346554u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x34654Cu, 0x346554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346554u;
label_346554:
    // 0x346554: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x346554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346558: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x346558u;
    SET_GPR_U32(ctx, 31, 0x346560u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x346558u, 0x346560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346560u;
label_346560:
    // 0x346560: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x346560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346564: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x346564u;
    SET_GPR_U32(ctx, 31, 0x34656Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x346564u, 0x34656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34656Cu;
label_34656c:
    // 0x34656c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x34656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x346570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x346570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x346574: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x346574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x346578: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34657c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x346580: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346588: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x346588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34658c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x34658cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346590: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x346590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346594: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x346594u;
    SET_GPR_U32(ctx, 31, 0x34659Cu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x346594u, 0x34659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34659Cu;
label_34659c:
    // 0x34659c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3465a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3465a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3465a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3465a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3465a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3465ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3465acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3465b0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3465b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3465b4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3465b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3465b8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3465b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3465bc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3465bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3465c0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3465c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3465c4: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x3465C4u;
    SET_GPR_U32(ctx, 31, 0x3465CCu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x3465C4u, 0x3465CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465CCu;
label_3465cc:
    // 0x3465cc: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x3465ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3465d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3465d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3465d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3465d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3465d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3465d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3465dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3465dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3465e0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3465e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3465e4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3465e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3465e8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3465e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3465ec: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3465ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3465f0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3465f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3465f4: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x3465F4u;
    SET_GPR_U32(ctx, 31, 0x3465FCu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x3465F4u, 0x3465FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465FCu;
label_3465fc:
    // 0x3465fc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x3465fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x346600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x346600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x346604: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x346604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x346608: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34660c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x346610: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346614: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x346614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x346618: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x346618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34661c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x34661cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346620: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x346620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346624: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x346624u;
    SET_GPR_U32(ctx, 31, 0x34662Cu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x346624u, 0x34662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34662Cu;
}
