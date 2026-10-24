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

// Function: Em06_R1_br_walk
// Address: 0x198090 - 0x1983f8
void Em06_R1_br_walk_0x198090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_br_walk_0x198090");
#endif

    switch (ctx->pc) {
        case 0x19812cu: goto label_19812c;
        default: break;
    }

    ctx->pc = 0x198090u;

    // 0x198090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198094: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x198094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x198098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19809c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1980a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1980a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1980a4: 0x8c62133c  lw          $v0, 0x133C($v1)
    ctx->pc = 0x1980a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x1980a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1980ac: 0xac62133c  sw          $v0, 0x133C($v1)
    ctx->pc = 0x1980acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 2));
    // 0x1980b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1980b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1980b4: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1980b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1980b8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1980b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1980bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1980bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1980c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1980c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1980c4: 0x0  nop
    ctx->pc = 0x1980c4u;
    // NOP
    // 0x1980c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1980c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1980cc: 0x0  nop
    ctx->pc = 0x1980ccu;
    // NOP
    // 0x1980d0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1980D0u;
    {
        const bool branch_taken_0x1980d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1980d0) {
            ctx->pc = 0x198108u;
            goto label_198108;
        }
    }
    ctx->pc = 0x1980D8u;
    // 0x1980d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1980d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1980dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1980dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1980e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1980e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1980e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1980e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1980e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1980ec: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1980ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1980f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1980f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1980f4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1980f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1980f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1980f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1980fc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1980fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198100: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198104: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x198104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_198108:
    // 0x198108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19810c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x19810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x198110: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198114: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x198118: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x198118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19811c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x198120: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x198124: 0xc05cc90  jal         func_173240
    ctx->pc = 0x198124u;
    SET_GPR_U32(ctx, 31, 0x19812Cu);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x198124u, 0x19812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19812Cu;
label_19812c:
    // 0x19812c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x19812cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x198130: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198130u;
    {
        const bool branch_taken_0x198130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198130) {
            ctx->pc = 0x198144u;
            goto label_198144;
        }
    }
    ctx->pc = 0x198138u;
    // 0x198138: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19813c: 0x16030047  bne         $s0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x19813Cu;
    {
        const bool branch_taken_0x19813c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19813c) {
            ctx->pc = 0x19825Cu;
            goto label_19825c;
        }
    }
    ctx->pc = 0x198144u;
label_198144:
    // 0x198144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198148: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x198148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19814c: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x198150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198154: 0x0  nop
    ctx->pc = 0x198154u;
    // NOP
    // 0x198158: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x198158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19815c: 0x0  nop
    ctx->pc = 0x19815cu;
    // NOP
    // 0x198160: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x198160u;
    {
        const bool branch_taken_0x198160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x198160) {
            ctx->pc = 0x1981D0u;
            goto label_1981d0;
        }
    }
    ctx->pc = 0x198168u;
    // 0x198168: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19816c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x19816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198170: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x198174: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x198174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x198178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19817c: 0x0  nop
    ctx->pc = 0x19817cu;
    // NOP
    // 0x198180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198184: 0x0  nop
    ctx->pc = 0x198184u;
    // NOP
    // 0x198188: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x198188u;
    {
        const bool branch_taken_0x198188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198188) {
            ctx->pc = 0x1981D0u;
            goto label_1981d0;
        }
    }
    ctx->pc = 0x198190u;
    // 0x198190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198194: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x198194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x198198: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198198u;
    {
        const bool branch_taken_0x198198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198198) {
            ctx->pc = 0x1981D0u;
            goto label_1981d0;
        }
    }
    ctx->pc = 0x1981A0u;
    // 0x1981a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1981a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1981a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1981a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1981ac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1981acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1981b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1981b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1981b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1981bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1981c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1981ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1981d0:
    // 0x1981d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981d4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1981d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981d8: 0x3c034548  lui         $v1, 0x4548
    ctx->pc = 0x1981d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17736 << 16));
    // 0x1981dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1981dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1981e0: 0x0  nop
    ctx->pc = 0x1981e0u;
    // NOP
    // 0x1981e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1981e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1981e8: 0x0  nop
    ctx->pc = 0x1981e8u;
    // NOP
    // 0x1981ec: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1981ECu;
    {
        const bool branch_taken_0x1981ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1981ec) {
            ctx->pc = 0x19825Cu;
            goto label_19825c;
        }
    }
    ctx->pc = 0x1981F4u;
    // 0x1981f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1981f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981fc: 0x3c034567  lui         $v1, 0x4567
    ctx->pc = 0x1981fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17767 << 16));
    // 0x198200: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x198200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x198204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198208: 0x0  nop
    ctx->pc = 0x198208u;
    // NOP
    // 0x19820c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19820cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198210: 0x0  nop
    ctx->pc = 0x198210u;
    // NOP
    // 0x198214: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x198214u;
    {
        const bool branch_taken_0x198214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198214) {
            ctx->pc = 0x19825Cu;
            goto label_19825c;
        }
    }
    ctx->pc = 0x19821Cu;
    // 0x19821c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198220: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x198224: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198224u;
    {
        const bool branch_taken_0x198224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198224) {
            ctx->pc = 0x19825Cu;
            goto label_19825c;
        }
    }
    ctx->pc = 0x19822Cu;
    // 0x19822c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198230: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198238: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19823c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198240: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198248: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19824c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198250: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198254: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198258: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19825c:
    // 0x19825c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x198260: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0068u));
    // 0x198264: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198268: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198268u;
    {
        const bool branch_taken_0x198268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x198268) {
            ctx->pc = 0x198284u;
            goto label_198284;
        }
    }
    ctx->pc = 0x198270u;
    // 0x198270: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x198274: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x198278: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x198278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19827c: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x19827Cu;
    {
        const bool branch_taken_0x19827c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19827c) {
            ctx->pc = 0x198360u;
            goto label_198360;
        }
    }
    ctx->pc = 0x198284u;
label_198284:
    // 0x198284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x198288: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x198288u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19828c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198290: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198290u;
    {
        const bool branch_taken_0x198290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x198290) {
            ctx->pc = 0x1982ACu;
            goto label_1982ac;
        }
    }
    ctx->pc = 0x198298u;
    // 0x198298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19829c: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1982a0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1982a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1982a4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1982A4u;
    {
        const bool branch_taken_0x1982a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1982a4) {
            ctx->pc = 0x198360u;
            goto label_198360;
        }
    }
    ctx->pc = 0x1982ACu;
label_1982ac:
    // 0x1982ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982b0: 0x8c63133c  lw          $v1, 0x133C($v1)
    ctx->pc = 0x1982b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x1982b4: 0x2c61012d  sltiu       $at, $v1, 0x12D
    ctx->pc = 0x1982b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x1982b8: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1982B8u;
    {
        const bool branch_taken_0x1982b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982b8) {
            ctx->pc = 0x198360u;
            goto label_198360;
        }
    }
    ctx->pc = 0x1982C0u;
    // 0x1982c0: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x1982c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x1982c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1982C4u;
    {
        const bool branch_taken_0x1982c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982c4) {
            ctx->pc = 0x198310u;
            goto label_198310;
        }
    }
    ctx->pc = 0x1982CCu;
    // 0x1982cc: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1982ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1982d0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1982D0u;
    {
        const bool branch_taken_0x1982d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982d0) {
            ctx->pc = 0x198310u;
            goto label_198310;
        }
    }
    ctx->pc = 0x1982D8u;
    // 0x1982d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982dc: 0xac60133c  sw          $zero, 0x133C($v1)
    ctx->pc = 0x1982dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 0));
    // 0x1982e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1982e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1982e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1982e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1982ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1982ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1982f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1982f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1982f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1982fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198304: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198308: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19830c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19830cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198310:
    // 0x198310: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198314: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198314u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198318: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19831c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198320: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x198320u;
    {
        const bool branch_taken_0x198320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198320) {
            ctx->pc = 0x198360u;
            goto label_198360;
        }
    }
    ctx->pc = 0x198328u;
    // 0x198328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19832c: 0xac60133c  sw          $zero, 0x133C($v1)
    ctx->pc = 0x19832cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 0));
    // 0x198330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198334: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198338: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19833c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198344: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198348: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19834c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19834cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198350: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198354: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198358: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19835c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19835cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198360:
    // 0x198360: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198364: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x198364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x198368: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198368u;
    {
        const bool branch_taken_0x198368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198368) {
            ctx->pc = 0x19837Cu;
            goto label_19837c;
        }
    }
    ctx->pc = 0x198370u;
    // 0x198370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198374: 0x1603001b  bne         $s0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x198374u;
    {
        const bool branch_taken_0x198374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x198374) {
            ctx->pc = 0x1983E4u;
            goto label_1983e4;
        }
    }
    ctx->pc = 0x19837Cu;
label_19837c:
    // 0x19837c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198380: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x198380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198384: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x198384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x198388: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x198388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x19838c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19838cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198390: 0x0  nop
    ctx->pc = 0x198390u;
    // NOP
    // 0x198394: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198398: 0x0  nop
    ctx->pc = 0x198398u;
    // NOP
    // 0x19839c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x19839Cu;
    {
        const bool branch_taken_0x19839c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19839c) {
            ctx->pc = 0x1983E4u;
            goto label_1983e4;
        }
    }
    ctx->pc = 0x1983A4u;
    // 0x1983a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1983a8: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x1983a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x1983ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1983ACu;
    {
        const bool branch_taken_0x1983ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983ac) {
            ctx->pc = 0x1983E4u;
            goto label_1983e4;
        }
    }
    ctx->pc = 0x1983B4u;
    // 0x1983b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1983b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1983bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1983c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1983c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1983c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1983c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1983cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1983d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1983d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1983d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1983dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1983dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1983e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1983e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1983e4:
    // 0x1983e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1983e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1983e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1983ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1983f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1983F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1983F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1983F8u;
}
