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

// Function: Em09_R1_br_mv00
// Address: 0x344900 - 0x3449fc
void Em09_R1_br_mv00_0x344900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv00_0x344900");
#endif

    switch (ctx->pc) {
        case 0x344918u: goto label_344918;
        case 0x3449b4u: goto label_3449b4;
        case 0x3449c4u: goto label_3449c4;
        case 0x3449ecu: goto label_3449ec;
        default: break;
    }

    ctx->pc = 0x344900u;

    // 0x344900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344904: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x344904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x344908: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x344908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x34490c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344910: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x344910u;
    SET_GPR_U32(ctx, 31, 0x344918u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x344910u, 0x344918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344918u;
label_344918:
    // 0x344918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34491c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x34491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344920: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x344920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x344924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344928: 0x0  nop
    ctx->pc = 0x344928u;
    // NOP
    // 0x34492c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34492cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344930: 0x0  nop
    ctx->pc = 0x344930u;
    // NOP
    // 0x344934: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x344934u;
    {
        const bool branch_taken_0x344934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344934) {
            ctx->pc = 0x344990u;
            goto label_344990;
        }
    }
    ctx->pc = 0x34493Cu;
    // 0x34493c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344940: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344944: 0x84420068  lh          $v0, 0x68($v0)
    ctx->pc = 0x344944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x344948: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x344948u;
    {
        const bool branch_taken_0x344948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344948) {
            ctx->pc = 0x344990u;
            goto label_344990;
        }
    }
    ctx->pc = 0x344950u;
    // 0x344950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344958: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34495c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344964: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34496c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34496cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344970: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344974: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344978: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34497c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34497cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344980: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x344980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x344984: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344988: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34498c: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34498cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
label_344990:
    // 0x344990: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x344990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x344994: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344998: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x344998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34499c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34499cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3449a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3449a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3449a4: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x3449a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3449a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3449a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3449ac: 0xc05b560  jal         func_16D580
    ctx->pc = 0x3449ACu;
    SET_GPR_U32(ctx, 31, 0x3449B4u);
    ctx->pc = 0x16D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D580u, 0x3449ACu, 0x3449B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449B4u;
label_3449b4:
    // 0x3449b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3449b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3449b8: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x3449b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3449bc: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x3449BCu;
    SET_GPR_U32(ctx, 31, 0x3449C4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x3449BCu, 0x3449C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449C4u;
label_3449c4:
    // 0x3449c4: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x3449c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x3449c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3449c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3449cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3449ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3449d0: 0x34630a07  ori         $v1, $v1, 0xA07
    ctx->pc = 0x3449d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2567);
    // 0x3449d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3449d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3449d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3449d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3449dc: 0x24652970  addiu       $a1, $v1, 0x2970
    ctx->pc = 0x3449dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10608));
    // 0x3449e0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3449e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3449e4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x3449E4u;
    SET_GPR_U32(ctx, 31, 0x3449ECu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x3449E4u, 0x3449ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449ECu;
label_3449ec:
    // 0x3449ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3449ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3449f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3449f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3449f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3449F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3449F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3449FCu;
}
