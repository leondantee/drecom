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

// Function: Ck_player
// Address: 0x1b38f0 - 0x1b3a40
void Ck_player_0x1b38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_player_0x1b38f0");
#endif

    switch (ctx->pc) {
        case 0x1b39a0u: goto label_1b39a0;
        case 0x1b39b0u: goto label_1b39b0;
        case 0x1b39c4u: goto label_1b39c4;
        default: break;
    }

    ctx->pc = 0x1b38f0u;

    // 0x1b38f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b38f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1b38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b38f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b38fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b38fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3900: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1b3900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1b3904: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1b3904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1b3908: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x1b3908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1b390c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b390cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3910: 0x922210a8  lbu         $v0, 0x10A8($s1)
    ctx->pc = 0x1b3910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4264)));
    // 0x1b3914: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3914u;
    {
        const bool branch_taken_0x1b3914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3914) {
            ctx->pc = 0x1B3920u;
            goto label_1b3920;
        }
    }
    ctx->pc = 0x1B391Cu;
    // 0x1b391c: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_1b3920:
    // 0x1b3920: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x1b3924: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3928: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b392c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B392Cu;
    {
        const bool branch_taken_0x1b392c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b392c) {
            ctx->pc = 0x1B3938u;
            goto label_1b3938;
        }
    }
    ctx->pc = 0x1B3934u;
    // 0x1b3934: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x1b3934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_1b3938:
    // 0x1b3938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b3938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b393c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b3940: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b3944: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3944u;
    {
        const bool branch_taken_0x1b3944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3944) {
            ctx->pc = 0x1B3950u;
            goto label_1b3950;
        }
    }
    ctx->pc = 0x1B394Cu;
    // 0x1b394c: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x1b394cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_1b3950:
    // 0x1b3950: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b3954: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b3954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b3958: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b3958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b395c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B395Cu;
    {
        const bool branch_taken_0x1b395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b395c) {
            ctx->pc = 0x1B396Cu;
            goto label_1b396c;
        }
    }
    ctx->pc = 0x1B3964u;
    // 0x1b3964: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b3964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b3968: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1b3968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b396c:
    // 0x1b396c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b3970: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b3970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b3974: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1b3974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1b3978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3978u;
    {
        const bool branch_taken_0x1b3978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3978) {
            ctx->pc = 0x1B3988u;
            goto label_1b3988;
        }
    }
    ctx->pc = 0x1B3980u;
    // 0x1b3980: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b3980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3984: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1b3984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b3988:
    // 0x1b3988: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b3988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b398c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3990: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3994: 0x26260120  addiu       $a2, $s1, 0x120
    ctx->pc = 0x1b3994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1b3998: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3998u;
    SET_GPR_U32(ctx, 31, 0x1B39A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3998u, 0x1B39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39A0u;
label_1b39a0:
    // 0x1b39a0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1b39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b39a4: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1b39a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b39a8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B39A8u;
    SET_GPR_U32(ctx, 31, 0x1B39B0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B39A8u, 0x1B39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39B0u;
label_1b39b0:
    // 0x1b39b0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b39b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b39b4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1b39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b39b8: 0xc62d00d4  lwc1        $f13, 0xD4($s1)
    ctx->pc = 0x1b39b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b39bc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B39BCu;
    SET_GPR_U32(ctx, 31, 0x1B39C4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B39BCu, 0x1B39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39C4u;
label_1b39c4:
    // 0x1b39c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b39c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1b39c8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1b39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b39cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b39ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b39d0: 0x0  nop
    ctx->pc = 0x1b39d0u;
    // NOP
    // 0x1b39d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b39d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b39d8: 0x0  nop
    ctx->pc = 0x1b39d8u;
    // NOP
    // 0x1b39dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B39DCu;
    {
        const bool branch_taken_0x1b39dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b39dc) {
            ctx->pc = 0x1B39F8u;
            goto label_1b39f8;
        }
    }
    ctx->pc = 0x1B39E4u;
    // 0x1b39e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b39e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b39ec: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b39f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b39f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b39f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1b39f8:
    // 0x1b39f8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1b39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b39fc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3a00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a08: 0x0  nop
    ctx->pc = 0x1b3a08u;
    // NOP
    // 0x1b3a0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3a10: 0x0  nop
    ctx->pc = 0x1b3a10u;
    // NOP
    // 0x1b3a14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3A14u;
    {
        const bool branch_taken_0x1b3a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3a14) {
            ctx->pc = 0x1B3A24u;
            goto label_1b3a24;
        }
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3a20: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1b3a20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b3a24:
    // 0x1b3a24: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1b3a24u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b3a28: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1b3a28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3a34: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b3a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A40u;
}
