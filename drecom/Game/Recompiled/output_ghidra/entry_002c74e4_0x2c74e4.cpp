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

// Function: entry_002c74e4
// Address: 0x2c74e4 - 0x2c75ec
void entry_002c74e4_0x2c74e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c74e4_0x2c74e4");
#endif

    switch (ctx->pc) {
        case 0x2c75a8u: goto label_2c75a8;
        default: break;
    }

    ctx->pc = 0x2c74e4u;

    // 0x2c74e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c74e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c74e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c74ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c74f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c74f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c74f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c74f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74fc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c74fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c7500: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7508: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c750c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7510: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c7514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7518: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c751c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2c751cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7520: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2c7520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2c7524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7528: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c752c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7530: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2c7530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2c7534: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x2c7534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7538: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c7538u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c753c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7540: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2c7540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2c7544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7548: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c754c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c754cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7550: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7554: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c7554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7558: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c755c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c755cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7560: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7564: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2c7564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7568: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2c7568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c756c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c756cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c7570: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2c7570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7574: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2c7574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2c7578: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x2c7578u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c757c: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7580: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x2c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x2c7584: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2c7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c7588: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c7588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c758c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2c758cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2c7590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7594: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7598: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c759c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c759cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c75a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C75A0u;
    SET_GPR_U32(ctx, 31, 0x2C75A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C75A0u, 0x2C75A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75A8u;
label_2c75a8:
    // 0x2c75a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c75ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c75acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c75b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c75b4: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C75B4u;
    {
        const bool branch_taken_0x2c75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c75b4) {
            ctx->pc = 0x2C75ECu;
            return;
        }
    }
    ctx->pc = 0x2C75BCu;
    // 0x2c75bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c75c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c75c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c75c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c75cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c75d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c75d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c75d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c75dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c75e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c75e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c75ecu;
}
