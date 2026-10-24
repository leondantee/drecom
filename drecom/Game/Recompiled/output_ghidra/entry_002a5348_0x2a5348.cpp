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

// Function: entry_002a5348
// Address: 0x2a5348 - 0x2a543c
void entry_002a5348_0x2a5348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a5348_0x2a5348");
#endif

    switch (ctx->pc) {
        case 0x2a5368u: goto label_2a5368;
        case 0x2a5380u: goto label_2a5380;
        case 0x2a538cu: goto label_2a538c;
        case 0x2a53d4u: goto label_2a53d4;
        default: break;
    }

    ctx->pc = 0x2a5348u;

    // 0x2a5348: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a5348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a534c: 0xa0e010a8  sb          $zero, 0x10A8($a3)
    ctx->pc = 0x2a534cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5350: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a5350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5354: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a5354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5358: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2a5358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a535c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a535cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a5360: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5360u;
    SET_GPR_U32(ctx, 31, 0x2A5368u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5360u, 0x2A5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5368u;
label_2a5368:
    // 0x2a5368: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5368u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a536c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5374: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5378: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A5378u;
    SET_GPR_U32(ctx, 31, 0x2A5380u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5378u, 0x2A5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5380u;
label_2a5380:
    // 0x2a5380: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5384: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A5384u;
    SET_GPR_U32(ctx, 31, 0x2A538Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5384u, 0x2A538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A538Cu;
label_2a538c:
    // 0x2a538c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5390: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2a5390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2a5394: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A5394u;
    {
        const bool branch_taken_0x2a5394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5394) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A539Cu;
    // 0x2a539c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53a0: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a53a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53a4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a53a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a53a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53ac: 0x8fa90108  lw          $t1, 0x108($sp)
    ctx->pc = 0x2a53acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53b0: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a53b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a53b4: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a53b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53b8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a53b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a53bc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a53c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a53c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a53cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A53CCu;
    SET_GPR_U32(ctx, 31, 0x2A53D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A53CCu, 0x2A53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53D4u;
label_2a53d4:
    // 0x2a53d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a53d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a53d8: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x2a53d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2a53dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a53dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53e0: 0x14a60016  bne         $a1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A53E0u;
    {
        const bool branch_taken_0x2a53e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a53e0) {
            ctx->pc = 0x2A543Cu;
            return;
        }
    }
    ctx->pc = 0x2A53E8u;
    // 0x2a53e8: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53ec: 0xc4e11288  lwc1        $f1, 0x1288($a3)
    ctx->pc = 0x2a53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a53f0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2a53f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a53f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a53f8: 0x0  nop
    ctx->pc = 0x2a53f8u;
    // NOP
    // 0x2a53fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a53fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5400: 0x0  nop
    ctx->pc = 0x2a5400u;
    // NOP
    // 0x2a5404: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A5404u;
    {
        const bool branch_taken_0x2a5404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5404) {
            ctx->pc = 0x2A543Cu;
            return;
        }
    }
    ctx->pc = 0x2A540Cu;
    // 0x2a540c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5410: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a5410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5414: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2a5414u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a5418: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a5418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a541c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a541cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5420: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x2a5420u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a5424: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5428: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a5428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a542c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5430: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a5430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5434: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a5434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5438: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a5438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a543cu;
}
