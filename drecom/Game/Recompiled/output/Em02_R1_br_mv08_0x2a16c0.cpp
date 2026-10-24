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

// Function: Em02_R1_br_mv08
// Address: 0x2a16c0 - 0x2a17fc
void Em02_R1_br_mv08_0x2a16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_br_mv08_0x2a16c0");
#endif

    switch (ctx->pc) {
        case 0x2a1730u: goto label_2a1730;
        case 0x2a179cu: goto label_2a179c;
        default: break;
    }

    ctx->pc = 0x2a16c0u;

    // 0x2a16c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a16c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a16c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a16c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a16cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a16ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a16d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a16d4: 0x94630042  lhu         $v1, 0x42($v1)
    ctx->pc = 0x2a16d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x2a16d8: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A16D8u;
    {
        const bool branch_taken_0x2a16d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a16d8) {
            ctx->pc = 0x2A17ECu;
            goto label_2a17ec;
        }
    }
    ctx->pc = 0x2A16E0u;
    // 0x2a16e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a16e4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2a16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a16e8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2a16ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a16ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a16f0: 0x0  nop
    ctx->pc = 0x2a16f0u;
    // NOP
    // 0x2a16f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a16f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a16f8: 0x0  nop
    ctx->pc = 0x2a16f8u;
    // NOP
    // 0x2a16fc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2A16FCu;
    {
        const bool branch_taken_0x2a16fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a16fc) {
            ctx->pc = 0x2A17ECu;
            goto label_2a17ec;
        }
    }
    ctx->pc = 0x2A1704u;
    // 0x2a1704: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2a1704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1708: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a1708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a170c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a170cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a1710: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a1710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a1714: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1718: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a171c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1720: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a1720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a1724: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a1728: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A1728u;
    SET_GPR_U32(ctx, 31, 0x2A1730u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A1728u, 0x2A1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1730u;
label_2a1730:
    // 0x2a1730: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A1730u;
    {
        const bool branch_taken_0x2a1730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1730) {
            ctx->pc = 0x2A17ECu;
            goto label_2a17ec;
        }
    }
    ctx->pc = 0x2A1738u;
    // 0x2a1738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a1738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a173c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a1740: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a1744: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2a1744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2a1748: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2a1748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2a174c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1750: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a1750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1754: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a1754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1758: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a1758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a175c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1760: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a1760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a1764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1768: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a1768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a176c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1770: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a1770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1778: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a1778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a177c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1780: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a1780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a1784: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2a1784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a1788: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2a1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2a178c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A178Cu;
    {
        const bool branch_taken_0x2a178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a178c) {
            ctx->pc = 0x2A17ECu;
            goto label_2a17ec;
        }
    }
    ctx->pc = 0x2A1794u;
    // 0x2a1794: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1794u;
    SET_GPR_U32(ctx, 31, 0x2A179Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1794u, 0x2A179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A179Cu;
label_2a179c:
    // 0x2a179c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a17a0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2a17a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2a17a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A17A4u;
    {
        const bool branch_taken_0x2a17a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a17a4) {
            ctx->pc = 0x2A17BCu;
            goto label_2a17bc;
        }
    }
    ctx->pc = 0x2A17ACu;
    // 0x2a17ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a17b0: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2a17b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A17B4u;
    {
        const bool branch_taken_0x2a17b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a17b4) {
            ctx->pc = 0x2A17ECu;
            goto label_2a17ec;
        }
    }
    ctx->pc = 0x2A17BCu;
label_2a17bc:
    // 0x2a17bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a17c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a17c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a17c8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a17cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a17d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a17d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a17d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a17dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a17e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a17ec:
    // 0x2a17ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a17ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a17f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a17f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A17F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A17F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A17FCu;
}
