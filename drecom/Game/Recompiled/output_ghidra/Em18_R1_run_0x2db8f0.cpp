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

// Function: Em18_R1_run
// Address: 0x2db8f0 - 0x2dbb04
void Em18_R1_run_0x2db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_run_0x2db8f0");
#endif

    switch (ctx->pc) {
        case 0x2db954u: goto label_2db954;
        case 0x2db97cu: goto label_2db97c;
        case 0x2db9a8u: goto label_2db9a8;
        case 0x2dba00u: goto label_2dba00;
        case 0x2dba1cu: goto label_2dba1c;
        case 0x2dba34u: goto label_2dba34;
        case 0x2dba40u: goto label_2dba40;
        case 0x2dba50u: goto label_2dba50;
        case 0x2dba5cu: goto label_2dba5c;
        default: break;
    }

    ctx->pc = 0x2db8f0u;

    // 0x2db8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2db8f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2db8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2db8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db8fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2db8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2db900: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db904: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2db904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2db908: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db90c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2db90cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2db910: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2db910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db918: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB918u;
    {
        const bool branch_taken_0x2db918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db918) {
            ctx->pc = 0x2DB9D4u;
            goto label_2db9d4;
        }
    }
    ctx->pc = 0x2DB920u;
    // 0x2db920: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB920u;
    {
        const bool branch_taken_0x2db920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db920) {
            ctx->pc = 0x2DB930u;
            goto label_2db930;
        }
    }
    ctx->pc = 0x2DB928u;
    // 0x2db928: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2DB928u;
    {
        const bool branch_taken_0x2db928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db928) {
            ctx->pc = 0x2DBAF0u;
            goto label_2dbaf0;
        }
    }
    ctx->pc = 0x2DB930u;
label_2db930:
    // 0x2db930: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2db930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db934: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db938: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db93c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2db93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2db940: 0x24060a02  addiu       $a2, $zero, 0xA02
    ctx->pc = 0x2db940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x2db944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db948: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2db94c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DB94Cu;
    SET_GPR_U32(ctx, 31, 0x2DB954u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DB94Cu, 0x2DB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB954u;
label_2db954:
    // 0x2db954: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db958: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2db958u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db95c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db960: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2db960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db964: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db968: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db96c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB96Cu;
    {
        const bool branch_taken_0x2db96c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2db96c) {
            ctx->pc = 0x2DB9A0u;
            goto label_2db9a0;
        }
    }
    ctx->pc = 0x2DB974u;
    // 0x2db974: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB974u;
    SET_GPR_U32(ctx, 31, 0x2DB97Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB974u, 0x2DB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB97Cu;
label_2db97c:
    // 0x2db97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db980: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2db980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2db984: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB984u;
    {
        const bool branch_taken_0x2db984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db984) {
            ctx->pc = 0x2DB9C4u;
            goto label_2db9c4;
        }
    }
    ctx->pc = 0x2DB98Cu;
    // 0x2db98c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db994: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2db994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2db998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DB998u;
    {
        const bool branch_taken_0x2db998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db998) {
            ctx->pc = 0x2DB9C4u;
            goto label_2db9c4;
        }
    }
    ctx->pc = 0x2DB9A0u;
label_2db9a0:
    // 0x2db9a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB9A0u;
    SET_GPR_U32(ctx, 31, 0x2DB9A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB9A0u, 0x2DB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9A8u;
label_2db9a8:
    // 0x2db9a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db9ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2db9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2db9b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB9B0u;
    {
        const bool branch_taken_0x2db9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db9b0) {
            ctx->pc = 0x2DB9C4u;
            goto label_2db9c4;
        }
    }
    ctx->pc = 0x2DB9B8u;
    // 0x2db9b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db9bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db9c0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2db9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2db9c4:
    // 0x2db9c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db9c8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2db9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2db9cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db9d0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2db9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2db9d4:
    // 0x2db9d4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2db9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2db9d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2db9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2db9dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2db9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2db9e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db9e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2db9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db9e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db9ec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2db9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2db9f0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2db9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db9f4: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2db9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2db9f8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2DB9F8u;
    SET_GPR_U32(ctx, 31, 0x2DBA00u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2DB9F8u, 0x2DBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA00u;
label_2dba00:
    // 0x2dba00: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2dba00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2dba04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba08: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2dba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dba0c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2dba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dba10: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2dba10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dba14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DBA14u;
    SET_GPR_U32(ctx, 31, 0x2DBA1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DBA14u, 0x2DBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA1Cu;
label_2dba1c:
    // 0x2dba1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba20: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2dba24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dba28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dba2c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DBA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBA34u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DBA2Cu, 0x2DBA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA34u;
label_2dba34:
    // 0x2dba34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba38: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DBA38u;
    SET_GPR_U32(ctx, 31, 0x2DBA40u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DBA38u, 0x2DBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA40u;
label_2dba40:
    // 0x2dba40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dba44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dba48: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DBA48u;
    SET_GPR_U32(ctx, 31, 0x2DBA50u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DBA48u, 0x2DBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA50u;
label_2dba50:
    // 0x2dba50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba54: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DBA54u;
    SET_GPR_U32(ctx, 31, 0x2DBA5Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DBA54u, 0x2DBA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBA5Cu;
label_2dba5c:
    // 0x2dba5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba60: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dba60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dba64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dba68: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dba68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dba6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba70: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dba70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dba74: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2dba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2dba78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2dba78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2dba7c: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x2dba7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2dba80: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DBA80u;
    {
        const bool branch_taken_0x2dba80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dba80) {
            ctx->pc = 0x2DBAF0u;
            goto label_2dbaf0;
        }
    }
    ctx->pc = 0x2DBA88u;
    // 0x2dba88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba8c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2dba8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2dba90: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DBA90u;
    {
        const bool branch_taken_0x2dba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dba90) {
            ctx->pc = 0x2DBAF0u;
            goto label_2dbaf0;
        }
    }
    ctx->pc = 0x2DBA98u;
    // 0x2dba98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dba9c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2dba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbaa0: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x2dbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x2dbaa4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2dbaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2dbaa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dbaa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbaac: 0x0  nop
    ctx->pc = 0x2dbaacu;
    // NOP
    // 0x2dbab0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dbab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbab4: 0x0  nop
    ctx->pc = 0x2dbab4u;
    // NOP
    // 0x2dbab8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2DBAB8u;
    {
        const bool branch_taken_0x2dbab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbab8) {
            ctx->pc = 0x2DBAF0u;
            goto label_2dbaf0;
        }
    }
    ctx->pc = 0x2DBAC0u;
    // 0x2dbac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dbac8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dbac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbacc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dbad0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dbad4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dbad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dbadc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dbadcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbae0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dbae4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dbae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dbaec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2dbaf0:
    // 0x2dbaf0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2dbaf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbaf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbaf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dbaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dbafc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBB04u;
}
