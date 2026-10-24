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

// Function: Em02_R1_br_mv01
// Address: 0x29e140 - 0x29e508
void Em02_R1_br_mv01_0x29e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_br_mv01_0x29e140");
#endif

    switch (ctx->pc) {
        case 0x29e1b0u: goto label_29e1b0;
        case 0x29e208u: goto label_29e208;
        case 0x29e288u: goto label_29e288;
        case 0x29e380u: goto label_29e380;
        case 0x29e3b4u: goto label_29e3b4;
        default: break;
    }

    ctx->pc = 0x29e140u;

    // 0x29e140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29e144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29e148: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x29e148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x29e14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e150: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e154: 0x94630042  lhu         $v1, 0x42($v1)
    ctx->pc = 0x29e154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x29e158: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x29E158u;
    {
        const bool branch_taken_0x29e158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e158) {
            ctx->pc = 0x29E258u;
            goto label_29e258;
        }
    }
    ctx->pc = 0x29E160u;
    // 0x29e160: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e164: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e168: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29e168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29e16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e170: 0x0  nop
    ctx->pc = 0x29e170u;
    // NOP
    // 0x29e174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e178: 0x0  nop
    ctx->pc = 0x29e178u;
    // NOP
    // 0x29e17c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x29E17Cu;
    {
        const bool branch_taken_0x29e17c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e17c) {
            ctx->pc = 0x29E258u;
            goto label_29e258;
        }
    }
    ctx->pc = 0x29E184u;
    // 0x29e184: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x29e188: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x29e18c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29e18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29e190: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e194: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x29e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e198: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x29e198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x29e19c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x29e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e1a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e1a4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29e1a8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29E1A8u;
    SET_GPR_U32(ctx, 31, 0x29E1B0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29E1A8u, 0x29E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1B0u;
label_29e1b0:
    // 0x29e1b0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29E1B0u;
    {
        const bool branch_taken_0x29e1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1b0) {
            ctx->pc = 0x29E258u;
            goto label_29e258;
        }
    }
    ctx->pc = 0x29E1B8u;
    // 0x29e1b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e1bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e1c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e1c4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x29e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e1c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e1cc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e1d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e1d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e1d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e1dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e1e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29e1e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e1ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e1f0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29e1f4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29e1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29e1f8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29E1F8u;
    {
        const bool branch_taken_0x29e1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1f8) {
            ctx->pc = 0x29E258u;
            goto label_29e258;
        }
    }
    ctx->pc = 0x29E200u;
    // 0x29e200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E200u;
    SET_GPR_U32(ctx, 31, 0x29E208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E200u, 0x29E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E208u;
label_29e208:
    // 0x29e208: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e20c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x29e20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29e210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E210u;
    {
        const bool branch_taken_0x29e210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e210) {
            ctx->pc = 0x29E228u;
            goto label_29e228;
        }
    }
    ctx->pc = 0x29E218u;
    // 0x29e218: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29e218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29e21c: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x29e220: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E220u;
    {
        const bool branch_taken_0x29e220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e220) {
            ctx->pc = 0x29E258u;
            goto label_29e258;
        }
    }
    ctx->pc = 0x29E228u;
label_29e228:
    // 0x29e228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e22c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e230: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e234: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29e238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e23c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e240: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e244: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e248: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e24c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e24cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e250: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e254: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e258:
    // 0x29e258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29e258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29e25c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x29e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x29e260: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29e260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29e264: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29E264u;
    {
        const bool branch_taken_0x29e264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e264) {
            ctx->pc = 0x29E2E4u;
            goto label_29e2e4;
        }
    }
    ctx->pc = 0x29E26Cu;
    // 0x29e26c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e270: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e274: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x29e274u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x29e278: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29E278u;
    {
        const bool branch_taken_0x29e278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e278) {
            ctx->pc = 0x29E2E4u;
            goto label_29e2e4;
        }
    }
    ctx->pc = 0x29E280u;
    // 0x29e280: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E280u;
    SET_GPR_U32(ctx, 31, 0x29E288u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E280u, 0x29E288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E288u;
label_29e288:
    // 0x29e288: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e28c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x29e28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29e290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e294: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29E294u;
    {
        const bool branch_taken_0x29e294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29e294) {
            ctx->pc = 0x29E2E4u;
            goto label_29e2e4;
        }
    }
    ctx->pc = 0x29E29Cu;
    // 0x29e29c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e2a4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29e2a8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29e2ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E2ACu;
    {
        const bool branch_taken_0x29e2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2ac) {
            ctx->pc = 0x29E2E4u;
            goto label_29e2e4;
        }
    }
    ctx->pc = 0x29E2B4u;
    // 0x29e2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e2b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e2c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29e2c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e2cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e2d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e2dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e2e4:
    // 0x29e2e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e2ec: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29e2f0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29E2F0u;
    {
        const bool branch_taken_0x29e2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2f0) {
            ctx->pc = 0x29E344u;
            goto label_29e344;
        }
    }
    ctx->pc = 0x29E2F8u;
    // 0x29e2f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e300: 0x9463004a  lhu         $v1, 0x4A($v1)
    ctx->pc = 0x29e300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x29e304: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e308: 0x28610168  slti        $at, $v1, 0x168
    ctx->pc = 0x29e308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x29e30c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E30Cu;
    {
        const bool branch_taken_0x29e30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e30c) {
            ctx->pc = 0x29E344u;
            goto label_29e344;
        }
    }
    ctx->pc = 0x29E314u;
    // 0x29e314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e31c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e320: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29e324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e328: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e330: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e334: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e338: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e33c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e344:
    // 0x29e344: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e348: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e34c: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x29e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x29e350: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29e350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29e354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e358: 0x0  nop
    ctx->pc = 0x29e358u;
    // NOP
    // 0x29e35c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e360: 0x0  nop
    ctx->pc = 0x29e360u;
    // NOP
    // 0x29e364: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29E364u;
    {
        const bool branch_taken_0x29e364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e364) {
            ctx->pc = 0x29E400u;
            goto label_29e400;
        }
    }
    ctx->pc = 0x29E36Cu;
    // 0x29e36c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e370: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x29e370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x29e374: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e378: 0xc05cd90  jal         func_173640
    ctx->pc = 0x29E378u;
    SET_GPR_U32(ctx, 31, 0x29E380u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x29E378u, 0x29E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E380u;
label_29e380:
    // 0x29e380: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29E380u;
    {
        const bool branch_taken_0x29e380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e380) {
            ctx->pc = 0x29E400u;
            goto label_29e400;
        }
    }
    ctx->pc = 0x29E388u;
    // 0x29e388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e38c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e390: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x29e394: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x29e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x29e398: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29e398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29e39c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29e3a0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e3a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e3a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29e3ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29E3ACu;
    SET_GPR_U32(ctx, 31, 0x29E3B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29E3ACu, 0x29E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3B4u;
label_29e3b4:
    // 0x29e3b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E3B4u;
    {
        const bool branch_taken_0x29e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e3b4) {
            ctx->pc = 0x29E400u;
            goto label_29e400;
        }
    }
    ctx->pc = 0x29E3BCu;
    // 0x29e3bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e3c4: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x29e3c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29e3c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E3C8u;
    {
        const bool branch_taken_0x29e3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e3c8) {
            ctx->pc = 0x29E400u;
            goto label_29e400;
        }
    }
    ctx->pc = 0x29E3D0u;
    // 0x29e3d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e3d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e3dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29e3e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e3e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e3f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e3f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e400:
    // 0x29e400: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e404: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e408: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e40c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e410: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e414: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29e414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e418: 0x0  nop
    ctx->pc = 0x29e418u;
    // NOP
    // 0x29e41c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x29E41Cu;
    {
        const bool branch_taken_0x29e41c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e41c) {
            ctx->pc = 0x29E488u;
            goto label_29e488;
        }
    }
    ctx->pc = 0x29E424u;
    // 0x29e424: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e428: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e42c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x29e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29e430: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29E430u;
    {
        const bool branch_taken_0x29e430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e430) {
            ctx->pc = 0x29E488u;
            goto label_29e488;
        }
    }
    ctx->pc = 0x29E438u;
    // 0x29e438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e43c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e440: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x29e440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x29e444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e448: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e44c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e450: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E450u;
    {
        const bool branch_taken_0x29e450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29e450) {
            ctx->pc = 0x29E488u;
            goto label_29e488;
        }
    }
    ctx->pc = 0x29E458u;
    // 0x29e458: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e45c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e460: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e464: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29e468: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e46c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e474: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e478: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e47c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e47cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e484: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e488:
    // 0x29e488: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e48c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e490: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29e490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e498: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e49c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29e49cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e4a0: 0x0  nop
    ctx->pc = 0x29e4a0u;
    // NOP
    // 0x29e4a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29E4A4u;
    {
        const bool branch_taken_0x29e4a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e4a4) {
            ctx->pc = 0x29E4F8u;
            goto label_29e4f8;
        }
    }
    ctx->pc = 0x29E4ACu;
    // 0x29e4ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e4b4: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29e4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29e4b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e4bc: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29e4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29e4c0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E4C0u;
    {
        const bool branch_taken_0x29e4c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e4c0) {
            ctx->pc = 0x29E4F8u;
            goto label_29e4f8;
        }
    }
    ctx->pc = 0x29E4C8u;
    // 0x29e4c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e4cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e4d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29e4d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e4e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e4e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e4f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e4f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29e4f8:
    // 0x29e4f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29e4f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e4fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29e4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29e500: 0x3e00008  jr          $ra
    ctx->pc = 0x29E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E508u;
}
