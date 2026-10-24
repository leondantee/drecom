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

// Function: Em0f_R1_atk_r
// Address: 0x30e270 - 0x30e480
void Em0f_R1_atk_r_0x30e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_atk_r_0x30e270");
#endif

    switch (ctx->pc) {
        case 0x30e2c8u: goto label_30e2c8;
        case 0x30e35cu: goto label_30e35c;
        case 0x30e39cu: goto label_30e39c;
        case 0x30e3dcu: goto label_30e3dc;
        case 0x30e3ecu: goto label_30e3ec;
        case 0x30e3f8u: goto label_30e3f8;
        case 0x30e408u: goto label_30e408;
        case 0x30e414u: goto label_30e414;
        default: break;
    }

    ctx->pc = 0x30e270u;

    // 0x30e270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30e274: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30e278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e27c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x30e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x30e280: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e284: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30e284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e288: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30e288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e290: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30E290u;
    {
        const bool branch_taken_0x30e290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e290) {
            ctx->pc = 0x30E2FCu;
            goto label_30e2fc;
        }
    }
    ctx->pc = 0x30E298u;
    // 0x30e298: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E298u;
    {
        const bool branch_taken_0x30e298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e298) {
            ctx->pc = 0x30E2A8u;
            goto label_30e2a8;
        }
    }
    ctx->pc = 0x30E2A0u;
    // 0x30e2a0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x30E2A0u;
    {
        const bool branch_taken_0x30e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e2a0) {
            ctx->pc = 0x30E46Cu;
            goto label_30e46c;
        }
    }
    ctx->pc = 0x30E2A8u;
label_30e2a8:
    // 0x30e2a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e2ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e2b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e2b4: 0x24062812  addiu       $a2, $zero, 0x2812
    ctx->pc = 0x30e2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10258));
    // 0x30e2b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e2bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e2c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E2C0u;
    SET_GPR_U32(ctx, 31, 0x30E2C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E2C0u, 0x30E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E2C8u;
label_30e2c8:
    // 0x30e2c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e2cc: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x30e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30e2d0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30e2d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e2d8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x30e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x30e2dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e2e0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30e2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e2e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e2e8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e2ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e2f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30e2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30e2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e2f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30e2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30e2fc:
    // 0x30e2fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e300: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30e300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30e304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e308: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30e30c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30E30Cu;
    {
        const bool branch_taken_0x30e30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e30c) {
            ctx->pc = 0x30E380u;
            goto label_30e380;
        }
    }
    ctx->pc = 0x30E314u;
    // 0x30e314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e318: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30e31c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30E31Cu;
    {
        const bool branch_taken_0x30e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e31c) {
            ctx->pc = 0x30E380u;
            goto label_30e380;
        }
    }
    ctx->pc = 0x30E324u;
    // 0x30e324: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e328: 0x24429990  addiu       $v0, $v0, -0x6670
    ctx->pc = 0x30e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941072));
    // 0x30e32c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e330: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30e330u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399990u));
    // 0x30e334: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30e334u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30e338: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e33c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e340: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e344: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30e348: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30e348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e34c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30e350: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30e354: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30E354u;
    SET_GPR_U32(ctx, 31, 0x30E35Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30E354u, 0x30E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E35Cu;
label_30e35c:
    // 0x30e35c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30e35cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e360: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E360u;
    {
        const bool branch_taken_0x30e360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e360) {
            ctx->pc = 0x30E380u;
            goto label_30e380;
        }
    }
    ctx->pc = 0x30E368u;
    // 0x30e368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e36c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e370: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30e370u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e37c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30e37cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30e380:
    // 0x30e380: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e384: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30e384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30e388: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E388u;
    {
        const bool branch_taken_0x30e388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e388) {
            ctx->pc = 0x30E3A4u;
            goto label_30e3a4;
        }
    }
    ctx->pc = 0x30E390u;
    // 0x30e390: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e394: 0xc0c4544  jal         func_311510
    ctx->pc = 0x30E394u;
    SET_GPR_U32(ctx, 31, 0x30E39Cu);
    ctx->pc = 0x311510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311510u, 0x30E394u, 0x30E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E39Cu;
label_30e39c:
    // 0x30e39c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3a0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30e3a4:
    // 0x30e3a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30e3a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e3ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30e3b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e3b4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30e3b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30e3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e3bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e3c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30e3c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e3c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e3c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e3cc: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30e3d0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30e3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e3d4: 0xc086488  jal         func_219220
    ctx->pc = 0x30E3D4u;
    SET_GPR_U32(ctx, 31, 0x30E3DCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30E3D4u, 0x30E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3DCu;
label_30e3dc:
    // 0x30e3dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e3e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e3e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30E3E4u;
    SET_GPR_U32(ctx, 31, 0x30E3ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30E3E4u, 0x30E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3ECu;
label_30e3ec:
    // 0x30e3ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30E3F0u;
    SET_GPR_U32(ctx, 31, 0x30E3F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30E3F0u, 0x30E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E3F8u;
label_30e3f8:
    // 0x30e3f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e3fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e3fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e400: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30E400u;
    SET_GPR_U32(ctx, 31, 0x30E408u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30E400u, 0x30E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E408u;
label_30e408:
    // 0x30e408: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e40c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30E40Cu;
    SET_GPR_U32(ctx, 31, 0x30E414u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30E40Cu, 0x30E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E414u;
label_30e414:
    // 0x30e414: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e418: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30e418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30e41c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E41Cu;
    {
        const bool branch_taken_0x30e41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e41c) {
            ctx->pc = 0x30E46Cu;
            goto label_30e46c;
        }
    }
    ctx->pc = 0x30E424u;
    // 0x30e424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e42c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e434: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e438: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30e438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e43c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e440: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e448: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e450: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30e454: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e458: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e45c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e464: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e468: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30e46c:
    // 0x30e46c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30e46cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e474: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x30e474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30e478: 0x3e00008  jr          $ra
    ctx->pc = 0x30E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E480u;
}
