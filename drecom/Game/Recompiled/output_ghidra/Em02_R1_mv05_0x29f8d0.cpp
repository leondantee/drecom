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

// Function: Em02_R1_mv05
// Address: 0x29f8d0 - 0x29fd0c
void Em02_R1_mv05_0x29f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv05_0x29f8d0");
#endif

    switch (ctx->pc) {
        case 0x29f954u: goto label_29f954;
        case 0x29f994u: goto label_29f994;
        case 0x29f9e8u: goto label_29f9e8;
        case 0x29fa04u: goto label_29fa04;
        case 0x29fa1cu: goto label_29fa1c;
        case 0x29fa28u: goto label_29fa28;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa44u: goto label_29fa44;
        case 0x29fa50u: goto label_29fa50;
        case 0x29fa74u: goto label_29fa74;
        case 0x29faa8u: goto label_29faa8;
        case 0x29faf0u: goto label_29faf0;
        case 0x29fb10u: goto label_29fb10;
        case 0x29fb58u: goto label_29fb58;
        case 0x29fb6cu: goto label_29fb6c;
        case 0x29fbd0u: goto label_29fbd0;
        case 0x29fca8u: goto label_29fca8;
        default: break;
    }

    ctx->pc = 0x29f8d0u;

    // 0x29f8d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29f8d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29f8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29f8dc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x29f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x29f8e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f8e4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x29f8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x29f8e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f8ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29f8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29f8f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29f8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29f8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f8f8: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x29F8F8u;
    {
        const bool branch_taken_0x29f8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29f8f8) {
            ctx->pc = 0x29F9A4u;
            goto label_29f9a4;
        }
    }
    ctx->pc = 0x29F900u;
    // 0x29f900: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29F900u;
    {
        const bool branch_taken_0x29f900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f900) {
            ctx->pc = 0x29F910u;
            goto label_29f910;
        }
    }
    ctx->pc = 0x29F908u;
    // 0x29f908: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x29F908u;
    {
        const bool branch_taken_0x29f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f908) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29F910u;
label_29f910:
    // 0x29f910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f914: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f918: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29f918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f91c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f924: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29f928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29f92c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29F92Cu;
    {
        const bool branch_taken_0x29f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f92c) {
            ctx->pc = 0x29F974u;
            goto label_29f974;
        }
    }
    ctx->pc = 0x29F934u;
    // 0x29f934: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f938: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f93c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f940: 0x24060208  addiu       $a2, $zero, 0x208
    ctx->pc = 0x29f940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x29f944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f948: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f94c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F94Cu;
    SET_GPR_U32(ctx, 31, 0x29F954u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F94Cu, 0x29F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F954u;
label_29f954:
    // 0x29f954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f958: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x29f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f95c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x29f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29f960: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x29f964: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29f964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29f968: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x29f968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x29f96c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29F96Cu;
    {
        const bool branch_taken_0x29f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f96c) {
            ctx->pc = 0x29F994u;
            goto label_29f994;
        }
    }
    ctx->pc = 0x29F974u;
label_29f974:
    // 0x29f974: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f978: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f97c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f980: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x29f980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x29f984: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f988: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f98c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F98Cu;
    SET_GPR_U32(ctx, 31, 0x29F994u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F98Cu, 0x29F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F994u;
label_29f994:
    // 0x29f994: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f998: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x29f998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x29f99c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9a0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x29f9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_29f9a4:
    // 0x29f9a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9a8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x29f9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x29f9ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f9b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x29f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x29f9b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29F9B4u;
    {
        const bool branch_taken_0x29f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f9b4) {
            ctx->pc = 0x29FA0Cu;
            goto label_29fa0c;
        }
    }
    ctx->pc = 0x29F9BCu;
    // 0x29f9bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9c4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x29f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x29f9c8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29f9cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29f9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29f9d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f9d4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f9d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f9dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f9e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x29F9E0u;
    SET_GPR_U32(ctx, 31, 0x29F9E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29F9E0u, 0x29F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9E8u;
label_29f9e8:
    // 0x29f9e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29f9ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f9f0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f9f4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f9f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29f9f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29f9fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29F9FCu;
    SET_GPR_U32(ctx, 31, 0x29FA04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29F9FCu, 0x29FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA04u;
label_29fa04:
    // 0x29fa04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29fa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_29fa0c:
    // 0x29fa0c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29fa10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fa14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29FA14u;
    SET_GPR_U32(ctx, 31, 0x29FA1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29FA14u, 0x29FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA1Cu;
label_29fa1c:
    // 0x29fa1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa20: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29FA20u;
    SET_GPR_U32(ctx, 31, 0x29FA28u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29FA20u, 0x29FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA28u;
label_29fa28:
    // 0x29fa28: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29fa2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fa30: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29FA30u;
    SET_GPR_U32(ctx, 31, 0x29FA38u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29FA30u, 0x29FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA38u;
label_29fa38:
    // 0x29fa38: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa3c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29FA3Cu;
    SET_GPR_U32(ctx, 31, 0x29FA44u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29FA3Cu, 0x29FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA44u;
label_29fa44:
    // 0x29fa44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa48: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29FA48u;
    SET_GPR_U32(ctx, 31, 0x29FA50u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29FA48u, 0x29FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA50u;
label_29fa50:
    // 0x29fa50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa54: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x29fa54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x29fa58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29fa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29fa5c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x29fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x29fa60: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x29FA60u;
    {
        const bool branch_taken_0x29fa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa60) {
            ctx->pc = 0x29FB88u;
            goto label_29fb88;
        }
    }
    ctx->pc = 0x29FA68u;
    // 0x29fa68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fa6c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FA6Cu;
    SET_GPR_U32(ctx, 31, 0x29FA74u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FA6Cu, 0x29FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA74u;
label_29fa74:
    // 0x29fa74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fa78: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x29fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x29fa7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29fa7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fa80: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x29fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fa84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x29fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x29fa88: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fa8c: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x29fa90: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x29fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x29fa94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fa94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fa98: 0x0  nop
    ctx->pc = 0x29fa98u;
    // NOP
    // 0x29fa9c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x29fa9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29faa0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29FAA0u;
    SET_GPR_U32(ctx, 31, 0x29FAA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29FAA0u, 0x29FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAA8u;
label_29faa8:
    // 0x29faa8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x29faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29faac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fab0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29fab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fab4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29fab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29fab8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29fab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29fabc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29fabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29fac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29fac4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29fac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29fac8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29facc: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x29faccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x29fad0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fad4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29fad8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fadc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x29fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fae0: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x29fae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29fae4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x29fae4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fae8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x29FAE8u;
    SET_GPR_U32(ctx, 31, 0x29FAF0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x29FAE8u, 0x29FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAF0u;
label_29faf0:
    // 0x29faf0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x29faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29faf4: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x29faf8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x29faf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x29fafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fb00: 0x0  nop
    ctx->pc = 0x29fb00u;
    // NOP
    // 0x29fb04: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x29fb04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29fb08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29FB08u;
    SET_GPR_U32(ctx, 31, 0x29FB10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29FB08u, 0x29FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB10u;
label_29fb10:
    // 0x29fb10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x29fb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29fb14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fb1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29fb20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29fb24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29fb28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29fb2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29fb30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fb34: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x29fb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x29fb38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb3c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x29fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29fb40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fb44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x29fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29fb48: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x29fb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29fb4c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x29fb4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29fb50: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x29FB50u;
    SET_GPR_U32(ctx, 31, 0x29FB58u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x29FB50u, 0x29FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB58u;
label_29fb58:
    // 0x29fb58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb60: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29fb60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fb64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FB64u;
    SET_GPR_U32(ctx, 31, 0x29FB6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FB64u, 0x29FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB6Cu;
label_29fb6c:
    // 0x29fb6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fb70: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x29fb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x29fb74: 0x2463012c  addiu       $v1, $v1, 0x12C
    ctx->pc = 0x29fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x29fb78: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29fb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29fb7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29fb84: 0xa4640042  sh          $a0, 0x42($v1)
    ctx->pc = 0x29fb84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 4));
label_29fb88:
    // 0x29fb88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fb8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x29fb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x29fb90: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x29FB90u;
    {
        const bool branch_taken_0x29fb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb90) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29FB98u;
    // 0x29fb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fba0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29fba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fba8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29fbacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29fbb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbb4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29fbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fbb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbbc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fbc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29fbc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FBC8u;
    SET_GPR_U32(ctx, 31, 0x29FBD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FBC8u, 0x29FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBD0u;
label_29fbd0:
    // 0x29fbd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fbd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29fbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29fbd8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29FBD8u;
    {
        const bool branch_taken_0x29fbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fbd8) {
            ctx->pc = 0x29FC10u;
            goto label_29fc10;
        }
    }
    ctx->pc = 0x29FBE0u;
    // 0x29fbe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fbe4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbe8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fbec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fbf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbf4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fbf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fbfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29fbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29fc04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29fc10:
    // 0x29fc10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc14: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fc18: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29fc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29fc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fc20: 0x0  nop
    ctx->pc = 0x29fc20u;
    // NOP
    // 0x29fc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29fc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fc28: 0x0  nop
    ctx->pc = 0x29fc28u;
    // NOP
    // 0x29fc2c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29FC2Cu;
    {
        const bool branch_taken_0x29fc2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fc2c) {
            ctx->pc = 0x29FC64u;
            goto label_29fc64;
        }
    }
    ctx->pc = 0x29FC34u;
    // 0x29fc34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fc38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29fc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fc40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29fc44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29fc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fc4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29fc50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29fc64:
    // 0x29fc64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29fc6c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29fc70: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29fc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29fc74: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x29FC74u;
    {
        const bool branch_taken_0x29fc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc74) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29FC7Cu;
    // 0x29fc7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc80: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fc84: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29fc88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29fc88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fc8c: 0x0  nop
    ctx->pc = 0x29fc8cu;
    // NOP
    // 0x29fc90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fc94: 0x0  nop
    ctx->pc = 0x29fc94u;
    // NOP
    // 0x29fc98: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x29FC98u;
    {
        const bool branch_taken_0x29fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fc98) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29FCA0u;
    // 0x29fca0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FCA0u;
    SET_GPR_U32(ctx, 31, 0x29FCA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FCA0u, 0x29FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCA8u;
label_29fca8:
    // 0x29fca8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fcac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x29fcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29fcb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FCB0u;
    {
        const bool branch_taken_0x29fcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcb0) {
            ctx->pc = 0x29FCC8u;
            goto label_29fcc8;
        }
    }
    ctx->pc = 0x29FCB8u;
    // 0x29fcb8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29fcbc: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x29fcbcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x29fcc0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29FCC0u;
    {
        const bool branch_taken_0x29fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcc0) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29FCC8u;
label_29fcc8:
    // 0x29fcc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29fcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fcd4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29fcd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29fcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fce4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fce8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29fcecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fcf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fcf4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29fcf8:
    // 0x29fcf8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29fcf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fcfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fd00: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29fd04: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FD0Cu;
}
