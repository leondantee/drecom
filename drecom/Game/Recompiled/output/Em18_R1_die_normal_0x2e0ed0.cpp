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

// Function: Em18_R1_die_normal
// Address: 0x2e0ed0 - 0x2e1a30
void Em18_R1_die_normal_0x2e0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_die_normal_0x2e0ed0");
#endif

    switch (ctx->pc) {
        case 0x2e0f78u: goto label_2e0f78;
        case 0x2e0fc0u: goto label_2e0fc0;
        case 0x2e0fe0u: goto label_2e0fe0;
        case 0x2e1020u: goto label_2e1020;
        case 0x2e102cu: goto label_2e102c;
        case 0x2e103cu: goto label_2e103c;
        case 0x2e104cu: goto label_2e104c;
        case 0x2e11b4u: goto label_2e11b4;
        case 0x2e11dcu: goto label_2e11dc;
        case 0x2e11e4u: goto label_2e11e4;
        case 0x2e1234u: goto label_2e1234;
        case 0x2e1284u: goto label_2e1284;
        case 0x2e12ecu: goto label_2e12ec;
        case 0x2e12f4u: goto label_2e12f4;
        case 0x2e131cu: goto label_2e131c;
        case 0x2e1328u: goto label_2e1328;
        case 0x2e133cu: goto label_2e133c;
        case 0x2e1344u: goto label_2e1344;
        case 0x2e1360u: goto label_2e1360;
        case 0x2e137cu: goto label_2e137c;
        case 0x2e13b8u: goto label_2e13b8;
        case 0x2e13f4u: goto label_2e13f4;
        case 0x2e1414u: goto label_2e1414;
        case 0x2e14e0u: goto label_2e14e0;
        case 0x2e158cu: goto label_2e158c;
        case 0x2e1594u: goto label_2e1594;
        case 0x2e1630u: goto label_2e1630;
        case 0x2e16f8u: goto label_2e16f8;
        case 0x2e1730u: goto label_2e1730;
        case 0x2e1778u: goto label_2e1778;
        case 0x2e17b4u: goto label_2e17b4;
        case 0x2e1890u: goto label_2e1890;
        case 0x2e18a0u: goto label_2e18a0;
        case 0x2e18b4u: goto label_2e18b4;
        case 0x2e18c0u: goto label_2e18c0;
        case 0x2e18f8u: goto label_2e18f8;
        default: break;
    }

    ctx->pc = 0x2e0ed0u;

    // 0x2e0ed0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e0ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e0ed4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2e0ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2e0ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e0edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0ee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0eec: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2e0ef0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0ef4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2e0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2e0ef8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2e0ef8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2e0efc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e0efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f00: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e0f04: 0x24743390  addiu       $s4, $v1, 0x3390
    ctx->pc = 0x2e0f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 13200));
    // 0x2e0f08: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x2e0f08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2e0f0c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f10: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2e0f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2e0f14: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2e0f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0f18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e0f1c: 0x10a4025c  beq         $a1, $a0, . + 4 + (0x25C << 2)
    ctx->pc = 0x2E0F1Cu;
    {
        const bool branch_taken_0x2e0f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e0f1c) {
            ctx->pc = 0x2E1890u;
            goto label_2e1890;
        }
    }
    ctx->pc = 0x2E0F24u;
    // 0x2e0f24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0f28: 0x10a3021f  beq         $a1, $v1, . + 4 + (0x21F << 2)
    ctx->pc = 0x2E0F28u;
    {
        const bool branch_taken_0x2e0f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e0f28) {
            ctx->pc = 0x2E17A8u;
            goto label_2e17a8;
        }
    }
    ctx->pc = 0x2E0F30u;
    // 0x2e0f30: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2e0f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0f34: 0x10b30208  beq         $a1, $s3, . + 4 + (0x208 << 2)
    ctx->pc = 0x2E0F34u;
    {
        const bool branch_taken_0x2e0f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x2e0f34) {
            ctx->pc = 0x2E1758u;
            goto label_2e1758;
        }
    }
    ctx->pc = 0x2E0F3Cu;
    // 0x2e0f3c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e0f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f40: 0x10b00032  beq         $a1, $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E0F40u;
    {
        const bool branch_taken_0x2e0f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x2e0f40) {
            ctx->pc = 0x2E100Cu;
            goto label_2e100c;
        }
    }
    ctx->pc = 0x2E0F48u;
    // 0x2e0f48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0F48u;
    {
        const bool branch_taken_0x2e0f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f48) {
            ctx->pc = 0x2E0F58u;
            goto label_2e0f58;
        }
    }
    ctx->pc = 0x2E0F50u;
    // 0x2e0f50: 0x100002aa  b           . + 4 + (0x2AA << 2)
    ctx->pc = 0x2E0F50u;
    {
        const bool branch_taken_0x2e0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f50) {
            ctx->pc = 0x2E19FCu;
            goto label_2e19fc;
        }
    }
    ctx->pc = 0x2E0F58u;
label_2e0f58:
    // 0x2e0f58: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f5c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0f64: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x2e0f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x2e0f68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0f70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0F70u;
    SET_GPR_U32(ctx, 31, 0x2E0F78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0F70u, 0x2E0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F78u;
label_2e0f78:
    // 0x2e0f78: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2e0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0f7c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f80: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e0f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0f84: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f88: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2e0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2e0f8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0f90: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x2e0f90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e0f94: 0xac9311a0  sw          $s3, 0x11A0($a0)
    ctx->pc = 0x2e0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 19));
    // 0x2e0f98: 0xa24000d6  sb          $zero, 0xD6($s2)
    ctx->pc = 0x2e0f98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0f9c: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2e0f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e0fa0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e0fa4: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2e0fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e0fa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0fb0: 0x0  nop
    ctx->pc = 0x2e0fb0u;
    // NOP
    // 0x2e0fb4: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e0fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e0fb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E0FB8u;
    SET_GPR_U32(ctx, 31, 0x2E0FC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E0FB8u, 0x2E0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FC0u;
label_2e0fc0:
    // 0x2e0fc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e0fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0fc4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e0fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e0fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0FC8u;
    {
        const bool branch_taken_0x2e0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0fc8) {
            ctx->pc = 0x2E0FE0u;
            goto label_2e0fe0;
        }
    }
    ctx->pc = 0x2E0FD0u;
    // 0x2e0fd0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0fd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e0fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0fd8: 0xc0b8910  jal         func_2E2440
    ctx->pc = 0x2E0FD8u;
    SET_GPR_U32(ctx, 31, 0x2E0FE0u);
    ctx->pc = 0x2E2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2440u, 0x2E0FD8u, 0x2E0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FE0u;
label_2e0fe0:
    // 0x2e0fe0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0fe4: 0xa4a01278  sh          $zero, 0x1278($a1)
    ctx->pc = 0x2e0fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0fe8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0fec: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2e0fecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e0ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0ff4: 0x0  nop
    ctx->pc = 0x2e0ff4u;
    // NOP
    // 0x2e0ff8: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e0ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x2e0ffc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1000: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2e1000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1008: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2e1008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e100c:
    // 0x2e100c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e100cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1010: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2e1010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2e1014: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1014u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1018: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E1018u;
    SET_GPR_U32(ctx, 31, 0x2E1020u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E1018u, 0x2E1020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1020u;
label_2e1020:
    // 0x2e1020: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1024: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E1024u;
    SET_GPR_U32(ctx, 31, 0x2E102Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E1024u, 0x2E102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E102Cu;
label_2e102c:
    // 0x2e102c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1030: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1030u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1034: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E1034u;
    SET_GPR_U32(ctx, 31, 0x2E103Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E1034u, 0x2E103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E103Cu;
label_2e103c:
    // 0x2e103c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1040: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2e1040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2e1044: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E1044u;
    SET_GPR_U32(ctx, 31, 0x2E104Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E1044u, 0x2E104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E104Cu;
label_2e104c:
    // 0x2e104c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e104cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1050: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2e1050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2e1054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e1058: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2e1058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e105c: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1060: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e1060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1064: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e1064u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1068: 0x0  nop
    ctx->pc = 0x2e1068u;
    // NOP
    // 0x2e106c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e106cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1070: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e1070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x2e1074: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e1074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1078: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2e1078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2e107c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e107cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1080: 0x0  nop
    ctx->pc = 0x2e1080u;
    // NOP
    // 0x2e1084: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e1084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1088: 0x0  nop
    ctx->pc = 0x2e1088u;
    // NOP
    // 0x2e108c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E108Cu;
    {
        const bool branch_taken_0x2e108c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e108c) {
            ctx->pc = 0x2E10A4u;
            goto label_2e10a4;
        }
    }
    ctx->pc = 0x2E1094u;
    // 0x2e1094: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e1094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e1098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e109c: 0x0  nop
    ctx->pc = 0x2e109cu;
    // NOP
    // 0x2e10a0: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e10a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
label_2e10a4:
    // 0x2e10a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10a8: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2e10a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e10ac: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e10acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10b0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2e10b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2e10b4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e10b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e10b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e10b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e10bc: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x2e10bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2e10c0: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E10C0u;
    {
        const bool branch_taken_0x2e10c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e10c0) {
            ctx->pc = 0x2E1174u;
            goto label_2e1174;
        }
    }
    ctx->pc = 0x2E10C8u;
    // 0x2e10c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10cc: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2e10ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e10d0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e10d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e10d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e10d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e10d8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2e10d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2e10dc: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E10DCu;
    {
        const bool branch_taken_0x2e10dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e10dc) {
            ctx->pc = 0x2E1144u;
            goto label_2e1144;
        }
    }
    ctx->pc = 0x2E10E4u;
    // 0x2e10e4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10e8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e10e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e10ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e10f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e10f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e10f4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x2e10f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2e10f8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10F8u;
    {
        const bool branch_taken_0x2e10f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e10f8) {
            ctx->pc = 0x2E1114u;
            goto label_2e1114;
        }
    }
    ctx->pc = 0x2E1100u;
    // 0x2e1100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1104: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1108: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e110c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E110Cu;
    {
        const bool branch_taken_0x2e110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e110c) {
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1114u;
label_2e1114:
    // 0x2e1114: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1118: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2e1118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e111c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e1120: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1120u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1124: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e1124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e1128: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E1128u;
    {
        const bool branch_taken_0x2e1128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1128) {
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1130u;
    // 0x2e1130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1134: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1138: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1138u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e113c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E113Cu;
    {
        const bool branch_taken_0x2e113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e113c) {
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1144u;
label_2e1144:
    // 0x2e1144: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1148: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e1148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e114c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e1150: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1150u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1154: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e1154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e1158: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1158u;
    {
        const bool branch_taken_0x2e1158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1158) {
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1160u;
    // 0x2e1160: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1164: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1168: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e116c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E116Cu;
    {
        const bool branch_taken_0x2e116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e116c) {
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1174u;
label_2e1174:
    // 0x2e1174: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1178: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e1178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e117c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e1180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1184: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2e1184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2e1188: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1188u;
    {
        const bool branch_taken_0x2e1188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1188) {
            ctx->pc = 0x2E119Cu;
            goto label_2e119c;
        }
    }
    ctx->pc = 0x2E1190u;
    // 0x2e1190: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1194: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1198: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
label_2e119c:
    // 0x2e119c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e11a0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2e11a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2e11a4: 0x10600154  beqz        $v1, . + 4 + (0x154 << 2)
    ctx->pc = 0x2E11A4u;
    {
        const bool branch_taken_0x2e11a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11a4) {
            ctx->pc = 0x2E16F8u;
            goto label_2e16f8;
        }
    }
    ctx->pc = 0x2E11ACu;
    // 0x2e11ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E11ACu;
    SET_GPR_U32(ctx, 31, 0x2E11B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E11ACu, 0x2E11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11B4u;
label_2e11b4:
    // 0x2e11b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e11b8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2e11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e11bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e11c0: 0x24428b40  addiu       $v0, $v0, -0x74C0
    ctx->pc = 0x2e11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937408));
    // 0x2e11c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e11c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e11c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e11cc: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e11ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e11d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e11d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E11D4u;
    SET_GPR_U32(ctx, 31, 0x2E11DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E11D4u, 0x2E11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11DCu;
label_2e11dc:
    // 0x2e11dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E11DCu;
    SET_GPR_U32(ctx, 31, 0x2E11E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E11DCu, 0x2E11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11E4u;
label_2e11e4:
    // 0x2e11e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e11e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e11e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e11ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E11ECu;
    {
        const bool branch_taken_0x2e11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11ec) {
            ctx->pc = 0x2E1214u;
            goto label_2e1214;
        }
    }
    ctx->pc = 0x2E11F4u;
    // 0x2e11f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2e11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e11f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e11fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e11fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1200: 0x0  nop
    ctx->pc = 0x2e1200u;
    // NOP
    // 0x2e1204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1208: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e120c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E120Cu;
    {
        const bool branch_taken_0x2e120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e120c) {
            ctx->pc = 0x2E122Cu;
            goto label_2e122c;
        }
    }
    ctx->pc = 0x2E1214u;
label_2e1214:
    // 0x2e1214: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2e1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1218: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e121c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e121cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1220: 0x0  nop
    ctx->pc = 0x2e1220u;
    // NOP
    // 0x2e1224: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1228: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e1228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2e122c:
    // 0x2e122c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E122Cu;
    SET_GPR_U32(ctx, 31, 0x2E1234u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E122Cu, 0x2E1234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1234u;
label_2e1234:
    // 0x2e1234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e123c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E123Cu;
    {
        const bool branch_taken_0x2e123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e123c) {
            ctx->pc = 0x2E1264u;
            goto label_2e1264;
        }
    }
    ctx->pc = 0x2E1244u;
    // 0x2e1244: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1248: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1250: 0x0  nop
    ctx->pc = 0x2e1250u;
    // NOP
    // 0x2e1254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1258: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e1258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e125c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E125Cu;
    {
        const bool branch_taken_0x2e125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e125c) {
            ctx->pc = 0x2E127Cu;
            goto label_2e127c;
        }
    }
    ctx->pc = 0x2E1264u;
label_2e1264:
    // 0x2e1264: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1268: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e126c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e126cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1270: 0x0  nop
    ctx->pc = 0x2e1270u;
    // NOP
    // 0x2e1274: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1278: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e1278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2e127c:
    // 0x2e127c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E127Cu;
    SET_GPR_U32(ctx, 31, 0x2E1284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E127Cu, 0x2E1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1284u;
label_2e1284:
    // 0x2e1284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e128c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E128Cu;
    {
        const bool branch_taken_0x2e128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e128c) {
            ctx->pc = 0x2E12B4u;
            goto label_2e12b4;
        }
    }
    ctx->pc = 0x2E1294u;
    // 0x2e1294: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2e1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1298: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e129c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e12a0: 0x0  nop
    ctx->pc = 0x2e12a0u;
    // NOP
    // 0x2e12a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e12a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e12a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e12a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e12ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E12ACu;
    {
        const bool branch_taken_0x2e12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12ac) {
            ctx->pc = 0x2E12CCu;
            goto label_2e12cc;
        }
    }
    ctx->pc = 0x2E12B4u;
label_2e12b4:
    // 0x2e12b4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2e12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e12b8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e12bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e12bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e12c0: 0x0  nop
    ctx->pc = 0x2e12c0u;
    // NOP
    // 0x2e12c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e12c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e12c8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e12c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2e12cc:
    // 0x2e12cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e12d0: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x2e12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x2e12d4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2e12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e12d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e12dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e12dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e12e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e12e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E12E4u;
    SET_GPR_U32(ctx, 31, 0x2E12ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E12ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E12ECu) { return; }
    ctx->pc = 0x2E12ECu;
label_2e12ec:
    // 0x2e12ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E12ECu;
    SET_GPR_U32(ctx, 31, 0x2E12F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E12ECu, 0x2E12F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E12F4u;
label_2e12f4:
    // 0x2e12f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e12f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e12f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e12fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E12FCu;
    {
        const bool branch_taken_0x2e12fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12fc) {
            ctx->pc = 0x2E1330u;
            goto label_2e1330;
        }
    }
    ctx->pc = 0x2E1304u;
    // 0x2e1304: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2e1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2e1308: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e130c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e130cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e1310: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2e1310u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1314: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E1314u;
    SET_GPR_U32(ctx, 31, 0x2E131Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E1314u, 0x2E131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E131Cu;
label_2e131c:
    // 0x2e131c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e131cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e1320: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E1320u;
    SET_GPR_U32(ctx, 31, 0x2E1328u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E1320u, 0x2E1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1328u;
label_2e1328:
    // 0x2e1328: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E1328u;
    {
        const bool branch_taken_0x2e1328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1328) {
            ctx->pc = 0x2E1408u;
            goto label_2e1408;
        }
    }
    ctx->pc = 0x2E1330u;
label_2e1330:
    // 0x2e1330: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e1330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1334: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E1334u;
    {
        const bool branch_taken_0x2e1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1334) {
            ctx->pc = 0x2E13F8u;
            goto label_2e13f8;
        }
    }
    ctx->pc = 0x2E133Cu;
label_2e133c:
    // 0x2e133c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E133Cu;
    SET_GPR_U32(ctx, 31, 0x2E1344u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E133Cu, 0x2E1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1344u;
label_2e1344:
    // 0x2e1344: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e1348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e134c: 0x0  nop
    ctx->pc = 0x2e134cu;
    // NOP
    // 0x2e1350: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e1350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e1354: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e1354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e1358: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E1358u;
    SET_GPR_U32(ctx, 31, 0x2E1360u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E1358u, 0x2E1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1360u;
label_2e1360:
    // 0x2e1360: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e1360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e1364: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1368: 0x0  nop
    ctx->pc = 0x2e1368u;
    // NOP
    // 0x2e136c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e136cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e1370: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e1370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e1374: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E1374u;
    SET_GPR_U32(ctx, 31, 0x2E137Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E1374u, 0x2E137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E137Cu;
label_2e137c:
    // 0x2e137c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e1380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1384: 0x0  nop
    ctx->pc = 0x2e1384u;
    // NOP
    // 0x2e1388: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e1388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e138c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e138cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e1390: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e1390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e1394: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e1398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e139c: 0x0  nop
    ctx->pc = 0x2e139cu;
    // NOP
    // 0x2e13a0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2e13a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2e13a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e13a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2e13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e13ac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e13acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e13b0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E13B0u;
    SET_GPR_U32(ctx, 31, 0x2E13B8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E13B0u, 0x2E13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13B8u;
label_2e13b8:
    // 0x2e13b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e13bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e13bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e13c0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2e13c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e13c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e13c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e13cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e13ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e13d0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2e13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2e13d4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e13d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e13d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2e13d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e13dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e13dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e13e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e13e4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2e13e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e13e8: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e13ec: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x2E13ECu;
    SET_GPR_U32(ctx, 31, 0x2E13F4u);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x2E13ECu, 0x2E13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13F4u;
label_2e13f4:
    // 0x2e13f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e13f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e13f8:
    // 0x2e13f8: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x2e13f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e13fc: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2E13FCu;
    {
        const bool branch_taken_0x2e13fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e13fc) {
            ctx->pc = 0x2E133Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e133c;
        }
    }
    ctx->pc = 0x2E1404u;
    // 0x2e1404: 0x0  nop
    ctx->pc = 0x2e1404u;
    // NOP
label_2e1408:
    // 0x2e1408: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e1408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e140c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E140Cu;
    SET_GPR_U32(ctx, 31, 0x2E1414u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E140Cu, 0x2E1414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1414u;
label_2e1414:
    // 0x2e1414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e141c: 0x0  nop
    ctx->pc = 0x2e141cu;
    // NOP
    // 0x2e1420: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e1420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e1424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e142c: 0x0  nop
    ctx->pc = 0x2e142cu;
    // NOP
    // 0x2e1430: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2e1430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e1434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e143c: 0x0  nop
    ctx->pc = 0x2e143cu;
    // NOP
    // 0x2e1440: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e1440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e1444: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e144c: 0x0  nop
    ctx->pc = 0x2e144cu;
    // NOP
    // 0x2e1450: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e1450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2e1454: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e1454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e1458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e145c: 0x0  nop
    ctx->pc = 0x2e145cu;
    // NOP
    // 0x2e1460: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e1460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e1464: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e1464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e1468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e146c: 0x0  nop
    ctx->pc = 0x2e146cu;
    // NOP
    // 0x2e1470: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e1470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e1474: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e1478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e147c: 0x0  nop
    ctx->pc = 0x2e147cu;
    // NOP
    // 0x2e1480: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e1480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e1484: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e1484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e1488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e148c: 0x0  nop
    ctx->pc = 0x2e148cu;
    // NOP
    // 0x2e1490: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e1490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e1494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e1494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e149c: 0x0  nop
    ctx->pc = 0x2e149cu;
    // NOP
    // 0x2e14a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e14a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e14a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e14a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e14a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e14ac: 0x0  nop
    ctx->pc = 0x2e14acu;
    // NOP
    // 0x2e14b0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e14b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e14b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e14b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e14b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e14bc: 0x0  nop
    ctx->pc = 0x2e14bcu;
    // NOP
    // 0x2e14c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e14c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2e14c4: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e14c8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e14cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e14ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e14d0: 0x0  nop
    ctx->pc = 0x2e14d0u;
    // NOP
    // 0x2e14d4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e14d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2e14d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E14D8u;
    SET_GPR_U32(ctx, 31, 0x2E14E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E14D8u, 0x2E14E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14E0u;
label_2e14e0:
    // 0x2e14e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e14e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e14e4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e14e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e14e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e14ec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E14ECu;
    {
        const bool branch_taken_0x2e14ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e14ec) {
            ctx->pc = 0x2E1560u;
            goto label_2e1560;
        }
    }
    ctx->pc = 0x2E14F4u;
    // 0x2e14f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e14f8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E14F8u;
    {
        const bool branch_taken_0x2e14f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e14f8) {
            ctx->pc = 0x2E1548u;
            goto label_2e1548;
        }
    }
    ctx->pc = 0x2E1500u;
    // 0x2e1500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1504: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1504u;
    {
        const bool branch_taken_0x2e1504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1504) {
            ctx->pc = 0x2E1530u;
            goto label_2e1530;
        }
    }
    ctx->pc = 0x2E150Cu;
    // 0x2e150c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E150Cu;
    {
        const bool branch_taken_0x2e150c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e150c) {
            ctx->pc = 0x2E151Cu;
            goto label_2e151c;
        }
    }
    ctx->pc = 0x2E1514u;
    // 0x2e1514: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E1514u;
    {
        const bool branch_taken_0x2e1514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1514) {
            ctx->pc = 0x2E1570u;
            goto label_2e1570;
        }
    }
    ctx->pc = 0x2E151Cu;
label_2e151c:
    // 0x2e151c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e151cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1520: 0x0  nop
    ctx->pc = 0x2e1520u;
    // NOP
    // 0x2e1524: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e1524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1528: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1528u;
    {
        const bool branch_taken_0x2e1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1528) {
            ctx->pc = 0x2E1570u;
            goto label_2e1570;
        }
    }
    ctx->pc = 0x2E1530u;
label_2e1530:
    // 0x2e1530: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e1530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e1534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1538: 0x0  nop
    ctx->pc = 0x2e1538u;
    // NOP
    // 0x2e153c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1540: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E1540u;
    {
        const bool branch_taken_0x2e1540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1540) {
            ctx->pc = 0x2E1570u;
            goto label_2e1570;
        }
    }
    ctx->pc = 0x2E1548u;
label_2e1548:
    // 0x2e1548: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e154c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1550: 0x0  nop
    ctx->pc = 0x2e1550u;
    // NOP
    // 0x2e1554: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e1554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1558: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1558u;
    {
        const bool branch_taken_0x2e1558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1558) {
            ctx->pc = 0x2E1570u;
            goto label_2e1570;
        }
    }
    ctx->pc = 0x2E1560u;
label_2e1560:
    // 0x2e1560: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e1564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1568: 0x0  nop
    ctx->pc = 0x2e1568u;
    // NOP
    // 0x2e156c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e1570:
    // 0x2e1570: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e1570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1574: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e1574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e1578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e157c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e1580: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e1580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e1584: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E1584u;
    SET_GPR_U32(ctx, 31, 0x2E158Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E1584u, 0x2E158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E158Cu;
label_2e158c:
    // 0x2e158c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E158Cu;
    SET_GPR_U32(ctx, 31, 0x2E1594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E158Cu, 0x2E1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1594u;
label_2e1594:
    // 0x2e1594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1598: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2e1598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e159c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e15a0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E15A0u;
    {
        const bool branch_taken_0x2e15a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15a0) {
            ctx->pc = 0x2E1618u;
            goto label_2e1618;
        }
    }
    ctx->pc = 0x2E15A8u;
    // 0x2e15a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e15ac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E15ACu;
    {
        const bool branch_taken_0x2e15ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15ac) {
            ctx->pc = 0x2E1600u;
            goto label_2e1600;
        }
    }
    ctx->pc = 0x2E15B4u;
    // 0x2e15b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e15b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E15B8u;
    {
        const bool branch_taken_0x2e15b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e15b8) {
            ctx->pc = 0x2E15E8u;
            goto label_2e15e8;
        }
    }
    ctx->pc = 0x2E15C0u;
    // 0x2e15c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E15C0u;
    {
        const bool branch_taken_0x2e15c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15c0) {
            ctx->pc = 0x2E15D0u;
            goto label_2e15d0;
        }
    }
    ctx->pc = 0x2E15C8u;
    // 0x2e15c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E15C8u;
    {
        const bool branch_taken_0x2e15c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15c8) {
            ctx->pc = 0x2E1628u;
            goto label_2e1628;
        }
    }
    ctx->pc = 0x2E15D0u;
label_2e15d0:
    // 0x2e15d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2e15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2e15d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e15d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e15d8: 0x0  nop
    ctx->pc = 0x2e15d8u;
    // NOP
    // 0x2e15dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e15dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e15e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E15E0u;
    {
        const bool branch_taken_0x2e15e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15e0) {
            ctx->pc = 0x2E1628u;
            goto label_2e1628;
        }
    }
    ctx->pc = 0x2E15E8u;
label_2e15e8:
    // 0x2e15e8: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2e15ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e15ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e15f0: 0x0  nop
    ctx->pc = 0x2e15f0u;
    // NOP
    // 0x2e15f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e15f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e15f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E15F8u;
    {
        const bool branch_taken_0x2e15f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15f8) {
            ctx->pc = 0x2E1628u;
            goto label_2e1628;
        }
    }
    ctx->pc = 0x2E1600u;
label_2e1600:
    // 0x2e1600: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2e1600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2e1604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1608: 0x0  nop
    ctx->pc = 0x2e1608u;
    // NOP
    // 0x2e160c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e1610: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1610u;
    {
        const bool branch_taken_0x2e1610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1610) {
            ctx->pc = 0x2E1628u;
            goto label_2e1628;
        }
    }
    ctx->pc = 0x2E1618u;
label_2e1618:
    // 0x2e1618: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x2e1618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x2e161c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e161cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1620: 0x0  nop
    ctx->pc = 0x2e1620u;
    // NOP
    // 0x2e1624: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e1624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2e1628:
    // 0x2e1628: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E1628u;
    SET_GPR_U32(ctx, 31, 0x2E1630u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E1628u, 0x2E1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1630u;
label_2e1630:
    // 0x2e1630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1634: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2e1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e1638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e163c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E163Cu;
    {
        const bool branch_taken_0x2e163c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e163c) {
            ctx->pc = 0x2E16B4u;
            goto label_2e16b4;
        }
    }
    ctx->pc = 0x2E1644u;
    // 0x2e1644: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1648: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E1648u;
    {
        const bool branch_taken_0x2e1648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1648) {
            ctx->pc = 0x2E169Cu;
            goto label_2e169c;
        }
    }
    ctx->pc = 0x2E1650u;
    // 0x2e1650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1654: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1654u;
    {
        const bool branch_taken_0x2e1654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1654) {
            ctx->pc = 0x2E1684u;
            goto label_2e1684;
        }
    }
    ctx->pc = 0x2E165Cu;
    // 0x2e165c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E165Cu;
    {
        const bool branch_taken_0x2e165c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e165c) {
            ctx->pc = 0x2E166Cu;
            goto label_2e166c;
        }
    }
    ctx->pc = 0x2E1664u;
    // 0x2e1664: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1664u;
    {
        const bool branch_taken_0x2e1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1664) {
            ctx->pc = 0x2E16C4u;
            goto label_2e16c4;
        }
    }
    ctx->pc = 0x2E166Cu;
label_2e166c:
    // 0x2e166c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e1670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1674: 0x0  nop
    ctx->pc = 0x2e1674u;
    // NOP
    // 0x2e1678: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e1678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e167c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E167Cu;
    {
        const bool branch_taken_0x2e167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e167c) {
            ctx->pc = 0x2E16C4u;
            goto label_2e16c4;
        }
    }
    ctx->pc = 0x2E1684u;
label_2e1684:
    // 0x2e1684: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2e1688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e168c: 0x0  nop
    ctx->pc = 0x2e168cu;
    // NOP
    // 0x2e1690: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e1690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e1694: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E1694u;
    {
        const bool branch_taken_0x2e1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1694) {
            ctx->pc = 0x2E16C4u;
            goto label_2e16c4;
        }
    }
    ctx->pc = 0x2E169Cu;
label_2e169c:
    // 0x2e169c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2e169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2e16a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e16a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e16a4: 0x0  nop
    ctx->pc = 0x2e16a4u;
    // NOP
    // 0x2e16a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e16a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e16ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E16ACu;
    {
        const bool branch_taken_0x2e16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16ac) {
            ctx->pc = 0x2E16C4u;
            goto label_2e16c4;
        }
    }
    ctx->pc = 0x2E16B4u;
label_2e16b4:
    // 0x2e16b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e16b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e16b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e16bc: 0x0  nop
    ctx->pc = 0x2e16bcu;
    // NOP
    // 0x2e16c0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e16c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e16c4:
    // 0x2e16c4: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x2e16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
    // 0x2e16c8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e16c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e16cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e16ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e16d0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e16d4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2e16d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2e16d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e16d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e16dc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2e16dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e16e0: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2e16e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e16e4: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2e16e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e16e8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2e16e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e16ec: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2e16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e16f0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2E16F0u;
    SET_GPR_U32(ctx, 31, 0x2E16F8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E16F0u, 0x2E16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16F8u;
label_2e16f8:
    // 0x2e16f8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e16fc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e16fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e1700: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e1700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e1704: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1708: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e1708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e170c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E170Cu;
    {
        const bool branch_taken_0x2e170c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e170c) {
            ctx->pc = 0x2E1730u;
            goto label_2e1730;
        }
    }
    ctx->pc = 0x2E1714u;
    // 0x2e1714: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x2e1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x2e1718: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e1718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e171c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e171cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1720: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1724: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2e1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e1728: 0xc0c9144  jal         func_324510
    ctx->pc = 0x2E1728u;
    SET_GPR_U32(ctx, 31, 0x2E1730u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E1728u, 0x2E1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1730u;
label_2e1730:
    // 0x2e1730: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1734: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e1734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e1738: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2E1738u;
    {
        const bool branch_taken_0x2e1738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1738) {
            ctx->pc = 0x2E19FCu;
            goto label_2e19fc;
        }
    }
    ctx->pc = 0x2E1740u;
    // 0x2e1740: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1744: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2e1744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e174c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2e174cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1750: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2E1750u;
    {
        const bool branch_taken_0x2e1750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1750) {
            ctx->pc = 0x2E19FCu;
            goto label_2e19fc;
        }
    }
    ctx->pc = 0x2E1758u;
label_2e1758:
    // 0x2e1758: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e175c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1760: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e1760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e1764: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e1764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e1768: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e1768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e176c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e176cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e1770: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E1770u;
    SET_GPR_U32(ctx, 31, 0x2E1778u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E1770u, 0x2E1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1778u;
label_2e1778:
    // 0x2e1778: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e1778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e177c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1780: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e1780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1784: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e1788: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e178c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e178cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1794: 0xa24200dd  sb          $v0, 0xDD($s2)
    ctx->pc = 0x2e1794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1798: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e179c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e179cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e17a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e17a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e17a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e17a8:
    // 0x2e17a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e17a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e17ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E17ACu;
    {
        const bool branch_taken_0x2e17ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e17ac) {
            ctx->pc = 0x2E17E8u;
            goto label_2e17e8;
        }
    }
    ctx->pc = 0x2E17B4u;
label_2e17b4:
    // 0x2e17b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2e17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e17b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2e17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2e17bc: 0x24638ac0  addiu       $v1, $v1, -0x7540
    ctx->pc = 0x2e17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937280));
    // 0x2e17c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e17c4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2e17c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e17c8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e17c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e17cc: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2e17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2e17d0: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x2e17d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2e17d4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2e17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e17d8: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x2e17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2e17dc: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2e17dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e17e0: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e17e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e17e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e17e8:
    // 0x2e17e8: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2e17e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e17ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E17ECu;
    {
        const bool branch_taken_0x2e17ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e17ec) {
            ctx->pc = 0x2E17B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e17b4;
        }
    }
    ctx->pc = 0x2E17F4u;
    // 0x2e17f4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e17f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e17f8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2e17f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e17fc: 0x24a60e10  addiu       $a2, $a1, 0xE10
    ctx->pc = 0x2e17fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3600));
    // 0x2e1800: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x2e1800u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2e1804: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e1804u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1808: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2e1808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e180c: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x2e180cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x2e1810: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x2e1810u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2e1814: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e1814u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1818: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e181c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e1820: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e1820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e1824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e1828: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2e1828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2e182c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1830: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1834: 0x24530990  addiu       $s3, $v0, 0x990
    ctx->pc = 0x2e1834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2e1838: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e1838u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e183c: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2e183cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e1840: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e1844: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2e1844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1848: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e184c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1850: 0x0  nop
    ctx->pc = 0x2e1850u;
    // NOP
    // 0x2e1854: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e1858: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e1858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e185c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e185cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1860: 0x0  nop
    ctx->pc = 0x2e1860u;
    // NOP
    // 0x2e1864: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x2e1864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x2e1868: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e186c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e186cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e1870: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2e1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1874: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2e1874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1878: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e187c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x2e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2e1880: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e1880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e1884: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1888: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2E1888u;
    SET_GPR_U32(ctx, 31, 0x2E1890u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2E1888u, 0x2E1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1890u;
label_2e1890:
    // 0x2e1890: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e1894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e1898: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E1898u;
    SET_GPR_U32(ctx, 31, 0x2E18A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E1898u, 0x2E18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18A0u;
label_2e18a0:
    // 0x2e18a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e18a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e18a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e18a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e18ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E18ACu;
    SET_GPR_U32(ctx, 31, 0x2E18B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E18ACu, 0x2E18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18B4u;
label_2e18b4:
    // 0x2e18b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e18b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E18B8u;
    SET_GPR_U32(ctx, 31, 0x2E18C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E18B8u, 0x2E18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18C0u;
label_2e18c0:
    // 0x2e18c0: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x2e18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e18c4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2e18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2e18c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e18c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e18cc: 0x0  nop
    ctx->pc = 0x2e18ccu;
    // NOP
    // 0x2e18d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e18d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e18d4: 0x0  nop
    ctx->pc = 0x2e18d4u;
    // NOP
    // 0x2e18d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2E18D8u;
    {
        const bool branch_taken_0x2e18d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e18d8) {
            ctx->pc = 0x2E1910u;
            goto label_2e1910;
        }
    }
    ctx->pc = 0x2E18E0u;
    // 0x2e18e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e18e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e18e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e18e8: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2e18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e18ec: 0xc64c007c  lwc1        $f12, 0x7C($s2)
    ctx->pc = 0x2e18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e18f0: 0xc0c9144  jal         func_324510
    ctx->pc = 0x2E18F0u;
    SET_GPR_U32(ctx, 31, 0x2E18F8u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E18F0u, 0x2E18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18F8u;
label_2e18f8:
    // 0x2e18f8: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x2e18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e18fc: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2e18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2e1900: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e1900u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1904: 0x0  nop
    ctx->pc = 0x2e1904u;
    // NOP
    // 0x2e1908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e190c: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x2e190cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
label_2e1910:
    // 0x2e1910: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2e1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1914: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2e1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x2e1918: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e1918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e191c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e191cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1920: 0x0  nop
    ctx->pc = 0x2e1920u;
    // NOP
    // 0x2e1924: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e1924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e1928: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e192c: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2e192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1934: 0x0  nop
    ctx->pc = 0x2e1934u;
    // NOP
    // 0x2e1938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e193c: 0x0  nop
    ctx->pc = 0x2e193cu;
    // NOP
    // 0x2e1940: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x2E1940u;
    {
        const bool branch_taken_0x2e1940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1940) {
            ctx->pc = 0x2E19FCu;
            goto label_2e19fc;
        }
    }
    ctx->pc = 0x2E1948u;
    // 0x2e1948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e194c: 0x0  nop
    ctx->pc = 0x2e194cu;
    // NOP
    // 0x2e1950: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e1954: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1958: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e1958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e195c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2e195cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2e1960: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e1960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1964: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e1964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e1968: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e196c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e1970: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e1970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e1974: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e1974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1978: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e1978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e197c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1980: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e1980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1984: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e1984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e1988: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e1988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e198c: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2e198cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e1990: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2e1990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2e1994: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2e1994u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1998: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2e1998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2e199c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e199cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19a0: 0x0  nop
    ctx->pc = 0x2e19a0u;
    // NOP
    // 0x2e19a4: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e19a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e19a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e19ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e19acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19b0: 0x0  nop
    ctx->pc = 0x2e19b0u;
    // NOP
    // 0x2e19b4: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e19b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e19b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e19bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e19bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e19c0: 0x0  nop
    ctx->pc = 0x2e19c0u;
    // NOP
    // 0x2e19c4: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2e19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2e19c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e19cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e19d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e19d8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19dc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2e19dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e19e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e19e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e19e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e19ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e19f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e19f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e19f8: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2e19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
label_2e19fc:
    // 0x2e19fc: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x2e19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1a00: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e1a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e1a04: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1a08: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2e1a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2e1a0c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2e1a0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1a10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e1a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1a24: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e1a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e1a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1A30u;
}
