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

// Function: entry_0023e3b4
// Address: 0x23e3b4 - 0x23e464
void entry_0023e3b4_0x23e3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e3b4_0x23e3b4");
#endif

    switch (ctx->pc) {
        case 0x23e41cu: goto label_23e41c;
        default: break;
    }

    ctx->pc = 0x23e3b4u;

    // 0x23e3b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e3b8: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x23e3b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x23e3bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23e3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x23e3c0: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x23e3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x23e3c4: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x23E3C4u;
    {
        const bool branch_taken_0x23e3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e3c4) {
            ctx->pc = 0x23E530u;
            return;
        }
    }
    ctx->pc = 0x23E3CCu;
    // 0x23e3cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e3d0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x23e3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e3d4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x23e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x23e3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e3dc: 0x0  nop
    ctx->pc = 0x23e3dcu;
    // NOP
    // 0x23e3e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e3e4: 0x0  nop
    ctx->pc = 0x23e3e4u;
    // NOP
    // 0x23e3e8: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x23E3E8u;
    {
        const bool branch_taken_0x23e3e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e3e8) {
            ctx->pc = 0x23E464u;
            return;
        }
    }
    ctx->pc = 0x23E3F0u;
    // 0x23e3f0: 0x3c044032  lui         $a0, 0x4032
    ctx->pc = 0x23e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16434 << 16));
    // 0x23e3f4: 0x3483b8c2  ori         $v1, $a0, 0xB8C2
    ctx->pc = 0x23e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47298);
    // 0x23e3f8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x23e3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23e3fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e400: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e404: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23e408: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e40c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23e410: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23e414: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23E414u;
    SET_GPR_U32(ctx, 31, 0x23E41Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23E414u, 0x23E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E41Cu;
label_23e41c:
    // 0x23e41c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23E41Cu;
    {
        const bool branch_taken_0x23e41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e41c) {
            ctx->pc = 0x23E464u;
            return;
        }
    }
    ctx->pc = 0x23E424u;
    // 0x23e424: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e428: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23e428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23e42c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E42Cu;
    {
        const bool branch_taken_0x23e42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e42c) {
            ctx->pc = 0x23E464u;
            return;
        }
    }
    ctx->pc = 0x23E434u;
    // 0x23e434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e438: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e43c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23e43cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e440: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23e444: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e448: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23e448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e44c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e450: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23e450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e454: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e458: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23e458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e45c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e460: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23e460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23e464u;
}
