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

// Function: entry_002c87fc
// Address: 0x2c87fc - 0x2c88f0
void entry_002c87fc_0x2c87fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c87fc_0x2c87fc");
#endif

    switch (ctx->pc) {
        case 0x2c8828u: goto label_2c8828;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88acu: goto label_2c88ac;
        default: break;
    }

    ctx->pc = 0x2c87fcu;

    // 0x2c87fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8800: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8804: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c8808: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c8808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c880c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c880cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c8810: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c8810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c8814: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8818: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c8818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c881c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c8820: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C8820u;
    SET_GPR_U32(ctx, 31, 0x2C8828u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C8820u, 0x2C8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8828u;
label_2c8828:
    // 0x2c8828: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c882c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8830: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8834: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c8834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8838: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c8838u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c883c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C883Cu;
    SET_GPR_U32(ctx, 31, 0x2C8844u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C883Cu, 0x2C8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8844u;
label_2c8844:
    // 0x2c8844: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8848: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c8848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c884c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8854: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C8854u;
    SET_GPR_U32(ctx, 31, 0x2C885Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C8854u, 0x2C885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C885Cu;
label_2c885c:
    // 0x2c885c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8860: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8864: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c8864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8868: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c886c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c8870: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8874: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8878: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c887c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8880: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c8880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c8884: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8888: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C8888u;
    SET_GPR_U32(ctx, 31, 0x2C8890u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C8888u, 0x2C8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8890u;
label_2c8890:
    // 0x2c8890: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c8890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c8894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8898: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C8898u;
    SET_GPR_U32(ctx, 31, 0x2C88A0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C8898u, 0x2C88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88A0u;
label_2c88a0:
    // 0x2c88a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88a4: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C88A4u;
    SET_GPR_U32(ctx, 31, 0x2C88ACu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C88A4u, 0x2C88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88ACu;
label_2c88ac:
    // 0x2c88ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2c88acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88b0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2c88b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2c88b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c88b8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2c88b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c88bc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C88BCu;
    {
        const bool branch_taken_0x2c88bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c88bc) {
            ctx->pc = 0x2C88F0u;
            return;
        }
    }
    ctx->pc = 0x2C88C4u;
    // 0x2c88c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c88c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c88c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c88ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c88d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c88d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c88d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c88dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c88e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c88e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c88ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c88f0u;
}
