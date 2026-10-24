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

// Function: Om8b_R0_init
// Address: 0x33fcb0 - 0x33ff14
void Om8b_R0_init_0x33fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R0_init_0x33fcb0");
#endif

    switch (ctx->pc) {
        case 0x33fce8u: goto label_33fce8;
        case 0x33fd00u: goto label_33fd00;
        case 0x33fd8cu: goto label_33fd8c;
        case 0x33fe14u: goto label_33fe14;
        case 0x33fe3cu: goto label_33fe3c;
        case 0x33fe58u: goto label_33fe58;
        case 0x33fe74u: goto label_33fe74;
        case 0x33fec0u: goto label_33fec0;
        case 0x33fee4u: goto label_33fee4;
        default: break;
    }

    ctx->pc = 0x33fcb0u;

    // 0x33fcb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33fcb4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x33fcb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33fcbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33fcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33fcc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33fcc4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x33fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x33fcc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fccc: 0x8c5202d0  lw          $s2, 0x2D0($v0)
    ctx->pc = 0x33fcccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x33fcd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fcd4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33fcd8: 0x24440750  addiu       $a0, $v0, 0x750
    ctx->pc = 0x33fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x33fcdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fce0: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x33FCE0u;
    SET_GPR_U32(ctx, 31, 0x33FCE8u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x33FCE0u, 0x33FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FCE8u;
label_33fce8:
    // 0x33fce8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fcec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33fcf0: 0x244407e0  addiu       $a0, $v0, 0x7E0
    ctx->pc = 0x33fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x33fcf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fcf8: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x33FCF8u;
    SET_GPR_U32(ctx, 31, 0x33FD00u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x33FCF8u, 0x33FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD00u;
label_33fd00:
    // 0x33fd00: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x33fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x33fd04: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x33fd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x33fd08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fd08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fd0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd10: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x33fd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x33fd14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd18: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x33fd18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x33fd1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33fd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33fd20: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x33FD20u;
    {
        const bool branch_taken_0x33fd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fd20) {
            ctx->pc = 0x33FE9Cu;
            goto label_33fe9c;
        }
    }
    ctx->pc = 0x33FD28u;
    // 0x33fd28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33fd2c: 0x2443a1b0  addiu       $v1, $v0, -0x5E50
    ctx->pc = 0x33fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x33fd30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd34: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x33fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x33fd38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fd3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd40: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x33fd40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x33fd44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33fd48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd4c: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x33fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x33fd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fd54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd58: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x33fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fd5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd60: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x33fd60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd64: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x33fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x33fd68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33fd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33fd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fd70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd74: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x33fd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x33fd78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fd7c: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x33fd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33fd80: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33fd80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fd84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33FD84u;
    {
        const bool branch_taken_0x33fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fd84) {
            ctx->pc = 0x33FDA8u;
            goto label_33fda8;
        }
    }
    ctx->pc = 0x33FD8Cu;
label_33fd8c:
    // 0x33fd8c: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x33fd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd90: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x33fd90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd94: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x33fd94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd98: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33fd98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd9c: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x33fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33fda0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33fda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33fda4: 0x0  nop
    ctx->pc = 0x33fda4u;
    // NOP
label_33fda8:
    // 0x33fda8: 0x2e22000d  sltiu       $v0, $s1, 0xD
    ctx->pc = 0x33fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x33fdac: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x33FDACu;
    {
        const bool branch_taken_0x33fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdac) {
            ctx->pc = 0x33FD8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fd8c;
        }
    }
    ctx->pc = 0x33FDB4u;
    // 0x33fdb4: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x33fdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdb8: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x33fdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdbc: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x33fdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdc0: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdc4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x33fdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33fdc8: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x33fdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdcc: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x33fdccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdd0: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x33fdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdd4: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fdd8: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x33fdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33fddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fde0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fde4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33fde4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33fde8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fdec: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33fdf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33FDF0u;
    {
        const bool branch_taken_0x33fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33fdf0) {
            ctx->pc = 0x33FE04u;
            goto label_33fe04;
        }
    }
    ctx->pc = 0x33FDF8u;
    // 0x33fdf8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x33fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33fdfc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe00: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x33fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
label_33fe04:
    // 0x33fe04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe08: 0x244412f0  addiu       $a0, $v0, 0x12F0
    ctx->pc = 0x33fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
    // 0x33fe0c: 0xc05da88  jal         func_176A20
    ctx->pc = 0x33FE0Cu;
    SET_GPR_U32(ctx, 31, 0x33FE14u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x33FE0Cu, 0x33FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE14u;
label_33fe14:
    // 0x33fe14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe18: 0xac6212b0  sw          $v0, 0x12B0($v1)
    ctx->pc = 0x33fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 2));
    // 0x33fe1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe20: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x33fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x33fe24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe28: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x33fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x33fe2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33fe30: 0x2446a220  addiu       $a2, $v0, -0x5DE0
    ctx->pc = 0x33fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943264));
    // 0x33fe34: 0xc05db20  jal         func_176C80
    ctx->pc = 0x33FE34u;
    SET_GPR_U32(ctx, 31, 0x33FE3Cu);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x33FE34u, 0x33FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE3Cu;
label_33fe3c:
    // 0x33fe3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe40: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x33fe44: 0x3c0245f3  lui         $v0, 0x45F3
    ctx->pc = 0x33fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17907 << 16));
    // 0x33fe48: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x33fe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x33fe4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33fe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33fe50: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x33FE50u;
    SET_GPR_U32(ctx, 31, 0x33FE58u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x33FE50u, 0x33FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE58u;
label_33fe58:
    // 0x33fe58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe5c: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x33fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x33fe60: 0x3c024676  lui         $v0, 0x4676
    ctx->pc = 0x33fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18038 << 16));
    // 0x33fe64: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x33fe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x33fe68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33fe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33fe6c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x33FE6Cu;
    SET_GPR_U32(ctx, 31, 0x33FE74u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x33FE6Cu, 0x33FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE74u;
label_33fe74:
    // 0x33fe74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33fe74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fe78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe7c: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x33fe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x33fe80: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x33fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x33fe84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe88: 0xac641294  sw          $a0, 0x1294($v1)
    ctx->pc = 0x33fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4756), GPR_U32(ctx, 4));
    // 0x33fe8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fe90: 0xac601298  sw          $zero, 0x1298($v1)
    ctx->pc = 0x33fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4760), GPR_U32(ctx, 0));
    // 0x33fe94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33FE94u;
    {
        const bool branch_taken_0x33fe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe94) {
            ctx->pc = 0x33FEF8u;
            goto label_33fef8;
        }
    }
    ctx->pc = 0x33FE9Cu;
label_33fe9c:
    // 0x33fe9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fea0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x33fea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x33fea4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x33fea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33fea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33feac: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33FEACu;
    {
        const bool branch_taken_0x33feac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33feac) {
            ctx->pc = 0x33FEF8u;
            goto label_33fef8;
        }
    }
    ctx->pc = 0x33FEB4u;
    // 0x33feb4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33feb4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33feb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33FEB8u;
    {
        const bool branch_taken_0x33feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33feb8) {
            ctx->pc = 0x33FEE8u;
            goto label_33fee8;
        }
    }
    ctx->pc = 0x33FEC0u;
label_33fec0:
    // 0x33fec0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fec4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x33fec4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33fec8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33fec8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fecc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x33feccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fed0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x33fed0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fed4: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x33fed4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33fed8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x33fed8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33fedc: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x33FEDCu;
    SET_GPR_U32(ctx, 31, 0x33FEE4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x33FEDCu, 0x33FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FEE4u;
label_33fee4:
    // 0x33fee4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33fee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33fee8:
    // 0x33fee8: 0x2e23000d  sltiu       $v1, $s1, 0xD
    ctx->pc = 0x33fee8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x33feec: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x33FEECu;
    {
        const bool branch_taken_0x33feec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33feec) {
            ctx->pc = 0x33FEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fec0;
        }
    }
    ctx->pc = 0x33FEF4u;
    // 0x33fef4: 0x0  nop
    ctx->pc = 0x33fef4u;
    // NOP
label_33fef8:
    // 0x33fef8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x33fef8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33fefc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33fefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ff00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ff00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ff04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ff04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ff08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x33ff08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x33FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FF14u;
}
