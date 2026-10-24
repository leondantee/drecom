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

// Function: r100_first_cameta
// Address: 0x283650 - 0x2837a0
void r100_first_cameta_0x283650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r100_first_cameta_0x283650");
#endif

    switch (ctx->pc) {
        case 0x2836a8u: goto label_2836a8;
        case 0x283778u: goto label_283778;
        case 0x28378cu: goto label_28378c;
        default: break;
    }

    ctx->pc = 0x283650u;

    // 0x283650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283654: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x283654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x283658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x283658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28365c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283660: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x283660u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283664: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283668: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x283668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x28366c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x28366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x283670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283674: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x283674u;
    {
        const bool branch_taken_0x283674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283674) {
            ctx->pc = 0x2836B4u;
            goto label_2836b4;
        }
    }
    ctx->pc = 0x28367Cu;
    // 0x28367c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28367cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283680: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x283680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x283684: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x283684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x283688: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x283688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28368c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28368cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283690: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x283690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x283694: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x283694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x283698: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x283698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x28369c: 0x24452c40  addiu       $a1, $v0, 0x2C40
    ctx->pc = 0x28369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11328));
    // 0x2836a0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x2836A0u;
    SET_GPR_U32(ctx, 31, 0x2836A8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x2836A0u, 0x2836A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2836A8u;
label_2836a8:
    // 0x2836a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2836a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2836ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2836acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2836b0: 0xac221b90  sw          $v0, 0x1B90($at)
    ctx->pc = 0x2836b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
label_2836b4:
    // 0x2836b4: 0x3c02c4de  lui         $v0, 0xC4DE
    ctx->pc = 0x2836b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50398 << 16));
    // 0x2836b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2836b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2836bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2836bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2836c0: 0x0  nop
    ctx->pc = 0x2836c0u;
    // NOP
    // 0x2836c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2836c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2836c8: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x2836c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x2836cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2836ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2836d0: 0x0  nop
    ctx->pc = 0x2836d0u;
    // NOP
    // 0x2836d4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2836d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2836d8: 0x3c02c5d0  lui         $v0, 0xC5D0
    ctx->pc = 0x2836d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50640 << 16));
    // 0x2836dc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2836dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2836e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2836e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2836e4: 0x0  nop
    ctx->pc = 0x2836e4u;
    // NOP
    // 0x2836e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2836e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2836ec: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x2836ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2836f0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2836f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2836f4: 0x3c02c520  lui         $v0, 0xC520
    ctx->pc = 0x2836f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50464 << 16));
    // 0x2836f8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2836f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x2836fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2836fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283700: 0x0  nop
    ctx->pc = 0x283700u;
    // NOP
    // 0x283704: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x283704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x283708: 0x3c024408  lui         $v0, 0x4408
    ctx->pc = 0x283708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17416 << 16));
    // 0x28370c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283714: 0x0  nop
    ctx->pc = 0x283714u;
    // NOP
    // 0x283718: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x283718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x28371c: 0x3c02c606  lui         $v0, 0xC606
    ctx->pc = 0x28371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50694 << 16));
    // 0x283720: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x283720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x283724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283728: 0x0  nop
    ctx->pc = 0x283728u;
    // NOP
    // 0x28372c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x28372cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x283730: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x283730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283734: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x283734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x283738: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x283738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28373c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x28373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283740: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x283740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x283744: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x283744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283748: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x283748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x28374c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x28374cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283750: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x283750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283754: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283754u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283758: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x283758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28375c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x28375cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x283760: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x283760u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283764: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x283764u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283768: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x283768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28376c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x28376cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x283770: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x283770u;
    SET_GPR_U32(ctx, 31, 0x283778u);
    ctx->pc = 0x184AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184AA0u, 0x283770u, 0x283778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283778u;
label_283778:
    // 0x283778: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x283778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28377c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28377cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283780: 0xac221b90  sw          $v0, 0x1B90($at)
    ctx->pc = 0x283780u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    // 0x283784: 0xc084934  jal         func_2124D0
    ctx->pc = 0x283784u;
    SET_GPR_U32(ctx, 31, 0x28378Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x283784u, 0x28378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28378Cu;
label_28378c:
    // 0x28378c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x28378cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x283790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283794: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x283794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x283798: 0x3e00008  jr          $ra
    ctx->pc = 0x283798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2837A0u;
}
