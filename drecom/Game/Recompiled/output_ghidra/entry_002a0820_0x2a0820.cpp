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

// Function: entry_002a0820
// Address: 0x2a0820 - 0x2a0934
void entry_002a0820_0x2a0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0820_0x2a0820");
#endif

    switch (ctx->pc) {
        case 0x2a0828u: goto label_2a0828;
        case 0x2a0880u: goto label_2a0880;
        default: break;
    }

    ctx->pc = 0x2a0820u;

    // 0x2a0820: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0820u;
    SET_GPR_U32(ctx, 31, 0x2A0828u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0820u, 0x2A0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0828u;
label_2a0828:
    // 0x2a0828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a082c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2a082cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a0830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0834: 0x1485003f  bne         $a0, $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2A0834u;
    {
        const bool branch_taken_0x2a0834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a0834) {
            ctx->pc = 0x2A0934u;
            return;
        }
    }
    ctx->pc = 0x2A083Cu;
    // 0x2a083c: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a083cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0840: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a0840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a0844: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x2a0844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a0848: 0x31090004  andi        $t1, $t0, 0x4
    ctx->pc = 0x2a0848u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x2a084c: 0x11200039  beqz        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A084Cu;
    {
        const bool branch_taken_0x2a084c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a084c) {
            ctx->pc = 0x2A0934u;
            return;
        }
    }
    ctx->pc = 0x2A0854u;
    // 0x2a0854: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0854u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0858: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a085c: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2a085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2a0860: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x2a0860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x2a0864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a0864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0868: 0x25440120  addiu       $a0, $t2, 0x120
    ctx->pc = 0x2a0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 288));
    // 0x2a086c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0870: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a0874: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a0874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a0878: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A0878u;
    SET_GPR_U32(ctx, 31, 0x2A0880u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A0878u, 0x2A0880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0880u;
label_2a0880:
    // 0x2a0880: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a0880u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0884: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A0884u;
    {
        const bool branch_taken_0x2a0884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0884) {
            ctx->pc = 0x2A0934u;
            return;
        }
    }
    ctx->pc = 0x2A088Cu;
    // 0x2a088c: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a088cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0890: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2a0890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2a0894: 0x8d090014  lw          $t1, 0x14($t0)
    ctx->pc = 0x2a0894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2a0898: 0x352a0001  ori         $t2, $t1, 0x1
    ctx->pc = 0x2a0898u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x2a089c: 0xad0a0014  sw          $t2, 0x14($t0)
    ctx->pc = 0x2a089cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 10));
    // 0x2a08a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a08a4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a08a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a08ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2a08acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a08b0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a08b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a08b8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a08b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08bc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a08c0: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08c4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2a08c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a08c8: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08cc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a08d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a08d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a08d4: 0x8427f1ac  lh          $a3, -0xE54($at)
    ctx->pc = 0x2a08d4u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2a08d8: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A08D8u;
    {
        const bool branch_taken_0x2a08d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a08d8) {
            ctx->pc = 0x2A0934u;
            return;
        }
    }
    ctx->pc = 0x2A08E0u;
    // 0x2a08e0: 0x8fa80168  lw          $t0, 0x168($sp)
    ctx->pc = 0x2a08e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a08e4: 0xc5011288  lwc1        $f1, 0x1288($t0)
    ctx->pc = 0x2a08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a08e8: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x2a08e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
    // 0x2a08ec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a08ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a08f0: 0x0  nop
    ctx->pc = 0x2a08f0u;
    // NOP
    // 0x2a08f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a08f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a08f8: 0x0  nop
    ctx->pc = 0x2a08f8u;
    // NOP
    // 0x2a08fc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A08FCu;
    {
        const bool branch_taken_0x2a08fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a08fc) {
            ctx->pc = 0x2A0934u;
            return;
        }
    }
    ctx->pc = 0x2A0904u;
    // 0x2a0904: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0908: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a0908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a090c: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x2a090cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a0910: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0914: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a0914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0918: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a0918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a091c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0920: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a0920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0924: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a0924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0928: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2a0928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a092c: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a092cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0930: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a0930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a0934u;
}
