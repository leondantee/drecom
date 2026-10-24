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

// Function: Plw03_atk00_atk
// Address: 0x1c4d00 - 0x1c4e9c
void Plw03_atk00_atk_0x1c4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk00_atk_0x1c4d00");
#endif

    switch (ctx->pc) {
        case 0x1c4d60u: goto label_1c4d60;
        case 0x1c4d78u: goto label_1c4d78;
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e4cu: goto label_1c4e4c;
        case 0x1c4e60u: goto label_1c4e60;
        case 0x1c4e6cu: goto label_1c4e6c;
        case 0x1c4e88u: goto label_1c4e88;
        default: break;
    }

    ctx->pc = 0x1c4d00u;

    // 0x1c4d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4d04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c4d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4d0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c4d10: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c4d14: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c4d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c4d18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d1c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c4d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4d20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c4d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d28: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C4D28u;
    {
        const bool branch_taken_0x1c4d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4d28) {
            ctx->pc = 0x1C4D94u;
            goto label_1c4d94;
        }
    }
    ctx->pc = 0x1C4D30u;
    // 0x1c4d30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4D30u;
    {
        const bool branch_taken_0x1c4d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d30) {
            ctx->pc = 0x1C4D40u;
            goto label_1c4d40;
        }
    }
    ctx->pc = 0x1C4D38u;
    // 0x1c4d38: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C4D38u;
    {
        const bool branch_taken_0x1c4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d38) {
            ctx->pc = 0x1C4E88u;
            goto label_1c4e88;
        }
    }
    ctx->pc = 0x1C4D40u;
label_1c4d40:
    // 0x1c4d40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d48: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4d4c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4d50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c4d58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C4D58u;
    SET_GPR_U32(ctx, 31, 0x1C4D60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C4D58u, 0x1C4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D60u;
label_1c4d60:
    // 0x1c4d60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d64: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c4d68: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c4d6c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c4d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c4d70: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C4D70u;
    SET_GPR_U32(ctx, 31, 0x1C4D78u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C4D70u, 0x1C4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D78u;
label_1c4d78:
    // 0x1c4d78: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1c4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c4d7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d80: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c4d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c4d84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d88: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c4d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4d8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4d90: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c4d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c4d94:
    // 0x1c4d94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d98: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c4d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c4d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4da0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c4da4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4DA4u;
    {
        const bool branch_taken_0x1c4da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4da4) {
            ctx->pc = 0x1C4DC4u;
            goto label_1c4dc4;
        }
    }
    ctx->pc = 0x1C4DACu;
    // 0x1c4dac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4db0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4db4: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c4db8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c4db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c4dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4dc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c4dc4:
    // 0x1c4dc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4dc8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c4dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c4dcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4dd0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c4dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c4dd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4DD4u;
    {
        const bool branch_taken_0x1c4dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4dd4) {
            ctx->pc = 0x1C4DF0u;
            goto label_1c4df0;
        }
    }
    ctx->pc = 0x1C4DDCu;
    // 0x1c4ddc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c4ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c4de0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c4de4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c4de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c4de8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c4de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c4dec: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c4decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c4df0:
    // 0x1c4df0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4df4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c4df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c4df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4dfc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c4dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c4e00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4E00u;
    {
        const bool branch_taken_0x1c4e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e00) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4E08u;
    // 0x1c4e08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c4e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c4e0c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c4e10: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c4e14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c4e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c4e18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c4e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c4e1c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c4e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
label_1c4e20:
    // 0x1c4e20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e24: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4e28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4e30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4e34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4e38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C4E38u;
    SET_GPR_U32(ctx, 31, 0x1C4E40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C4E38u, 0x1C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E40u;
label_1c4e40:
    // 0x1c4e40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C4E44u;
    SET_GPR_U32(ctx, 31, 0x1C4E4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C4E44u, 0x1C4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E4Cu;
label_1c4e4c:
    // 0x1c4e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4e50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4e58: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C4E58u, 0x1C4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E60u;
label_1c4e60:
    // 0x1c4e60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4e64: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C4E64u;
    SET_GPR_U32(ctx, 31, 0x1C4E6Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C4E64u, 0x1C4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E6Cu;
label_1c4e6c:
    // 0x1c4e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c4e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c4e74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4E74u;
    {
        const bool branch_taken_0x1c4e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e74) {
            ctx->pc = 0x1C4E88u;
            goto label_1c4e88;
        }
    }
    ctx->pc = 0x1C4E7Cu;
    // 0x1c4e7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e80: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C4E80u;
    SET_GPR_U32(ctx, 31, 0x1C4E88u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C4E80u, 0x1C4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E88u;
label_1c4e88:
    // 0x1c4e88: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c4e88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4e90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4E9Cu;
}
