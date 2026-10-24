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

// Function: Em01_R1_die_normal
// Address: 0x306ec0 - 0x307130
void Em01_R1_die_normal_0x306ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_die_normal_0x306ec0");
#endif

    switch (ctx->pc) {
        case 0x306ec0u: goto label_306ec0;
        case 0x306ec4u: goto label_306ec4;
        case 0x306ec8u: goto label_306ec8;
        case 0x306eccu: goto label_306ecc;
        case 0x306ed0u: goto label_306ed0;
        case 0x306ed4u: goto label_306ed4;
        case 0x306ed8u: goto label_306ed8;
        case 0x306edcu: goto label_306edc;
        case 0x306ee0u: goto label_306ee0;
        case 0x306ee4u: goto label_306ee4;
        case 0x306ee8u: goto label_306ee8;
        case 0x306eecu: goto label_306eec;
        case 0x306ef0u: goto label_306ef0;
        case 0x306ef4u: goto label_306ef4;
        case 0x306ef8u: goto label_306ef8;
        case 0x306efcu: goto label_306efc;
        case 0x306f00u: goto label_306f00;
        case 0x306f04u: goto label_306f04;
        case 0x306f08u: goto label_306f08;
        case 0x306f0cu: goto label_306f0c;
        case 0x306f10u: goto label_306f10;
        case 0x306f14u: goto label_306f14;
        case 0x306f18u: goto label_306f18;
        case 0x306f1cu: goto label_306f1c;
        case 0x306f20u: goto label_306f20;
        case 0x306f24u: goto label_306f24;
        case 0x306f28u: goto label_306f28;
        case 0x306f2cu: goto label_306f2c;
        case 0x306f30u: goto label_306f30;
        case 0x306f34u: goto label_306f34;
        case 0x306f38u: goto label_306f38;
        case 0x306f3cu: goto label_306f3c;
        case 0x306f40u: goto label_306f40;
        case 0x306f44u: goto label_306f44;
        case 0x306f48u: goto label_306f48;
        case 0x306f4cu: goto label_306f4c;
        case 0x306f50u: goto label_306f50;
        case 0x306f54u: goto label_306f54;
        case 0x306f58u: goto label_306f58;
        case 0x306f5cu: goto label_306f5c;
        case 0x306f60u: goto label_306f60;
        case 0x306f64u: goto label_306f64;
        case 0x306f68u: goto label_306f68;
        case 0x306f6cu: goto label_306f6c;
        case 0x306f70u: goto label_306f70;
        case 0x306f74u: goto label_306f74;
        case 0x306f78u: goto label_306f78;
        case 0x306f7cu: goto label_306f7c;
        case 0x306f80u: goto label_306f80;
        case 0x306f84u: goto label_306f84;
        case 0x306f88u: goto label_306f88;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f90u: goto label_306f90;
        case 0x306f94u: goto label_306f94;
        case 0x306f98u: goto label_306f98;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa0u: goto label_306fa0;
        case 0x306fa4u: goto label_306fa4;
        case 0x306fa8u: goto label_306fa8;
        case 0x306facu: goto label_306fac;
        case 0x306fb0u: goto label_306fb0;
        case 0x306fb4u: goto label_306fb4;
        case 0x306fb8u: goto label_306fb8;
        case 0x306fbcu: goto label_306fbc;
        case 0x306fc0u: goto label_306fc0;
        case 0x306fc4u: goto label_306fc4;
        case 0x306fc8u: goto label_306fc8;
        case 0x306fccu: goto label_306fcc;
        case 0x306fd0u: goto label_306fd0;
        case 0x306fd4u: goto label_306fd4;
        case 0x306fd8u: goto label_306fd8;
        case 0x306fdcu: goto label_306fdc;
        case 0x306fe0u: goto label_306fe0;
        case 0x306fe4u: goto label_306fe4;
        case 0x306fe8u: goto label_306fe8;
        case 0x306fecu: goto label_306fec;
        case 0x306ff0u: goto label_306ff0;
        case 0x306ff4u: goto label_306ff4;
        case 0x306ff8u: goto label_306ff8;
        case 0x306ffcu: goto label_306ffc;
        case 0x307000u: goto label_307000;
        case 0x307004u: goto label_307004;
        case 0x307008u: goto label_307008;
        case 0x30700cu: goto label_30700c;
        case 0x307010u: goto label_307010;
        case 0x307014u: goto label_307014;
        case 0x307018u: goto label_307018;
        case 0x30701cu: goto label_30701c;
        case 0x307020u: goto label_307020;
        case 0x307024u: goto label_307024;
        case 0x307028u: goto label_307028;
        case 0x30702cu: goto label_30702c;
        case 0x307030u: goto label_307030;
        case 0x307034u: goto label_307034;
        case 0x307038u: goto label_307038;
        case 0x30703cu: goto label_30703c;
        case 0x307040u: goto label_307040;
        case 0x307044u: goto label_307044;
        case 0x307048u: goto label_307048;
        case 0x30704cu: goto label_30704c;
        case 0x307050u: goto label_307050;
        case 0x307054u: goto label_307054;
        case 0x307058u: goto label_307058;
        case 0x30705cu: goto label_30705c;
        case 0x307060u: goto label_307060;
        case 0x307064u: goto label_307064;
        case 0x307068u: goto label_307068;
        case 0x30706cu: goto label_30706c;
        case 0x307070u: goto label_307070;
        case 0x307074u: goto label_307074;
        case 0x307078u: goto label_307078;
        case 0x30707cu: goto label_30707c;
        case 0x307080u: goto label_307080;
        case 0x307084u: goto label_307084;
        case 0x307088u: goto label_307088;
        case 0x30708cu: goto label_30708c;
        case 0x307090u: goto label_307090;
        case 0x307094u: goto label_307094;
        case 0x307098u: goto label_307098;
        case 0x30709cu: goto label_30709c;
        case 0x3070a0u: goto label_3070a0;
        case 0x3070a4u: goto label_3070a4;
        case 0x3070a8u: goto label_3070a8;
        case 0x3070acu: goto label_3070ac;
        case 0x3070b0u: goto label_3070b0;
        case 0x3070b4u: goto label_3070b4;
        case 0x3070b8u: goto label_3070b8;
        case 0x3070bcu: goto label_3070bc;
        case 0x3070c0u: goto label_3070c0;
        case 0x3070c4u: goto label_3070c4;
        case 0x3070c8u: goto label_3070c8;
        case 0x3070ccu: goto label_3070cc;
        case 0x3070d0u: goto label_3070d0;
        case 0x3070d4u: goto label_3070d4;
        case 0x3070d8u: goto label_3070d8;
        case 0x3070dcu: goto label_3070dc;
        case 0x3070e0u: goto label_3070e0;
        case 0x3070e4u: goto label_3070e4;
        case 0x3070e8u: goto label_3070e8;
        case 0x3070ecu: goto label_3070ec;
        case 0x3070f0u: goto label_3070f0;
        case 0x3070f4u: goto label_3070f4;
        case 0x3070f8u: goto label_3070f8;
        case 0x3070fcu: goto label_3070fc;
        case 0x307100u: goto label_307100;
        case 0x307104u: goto label_307104;
        case 0x307108u: goto label_307108;
        case 0x30710cu: goto label_30710c;
        case 0x307110u: goto label_307110;
        case 0x307114u: goto label_307114;
        case 0x307118u: goto label_307118;
        case 0x30711cu: goto label_30711c;
        case 0x307120u: goto label_307120;
        case 0x307124u: goto label_307124;
        case 0x307128u: goto label_307128;
        case 0x30712cu: goto label_30712c;
        default: break;
    }

    ctx->pc = 0x306ec0u;

label_306ec0:
    // 0x306ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_306ec4:
    // 0x306ec4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x306ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_306ec8:
    // 0x306ec8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x306ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_306ecc:
    // 0x306ecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306ed0:
    // 0x306ed0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x306ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_306ed4:
    // 0x306ed4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x306ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_306ed8:
    // 0x306ed8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x306ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_306edc:
    // 0x306edc: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
label_306ee0:
    if (ctx->pc == 0x306EE0u) {
        ctx->pc = 0x306EE4u;
        goto label_306ee4;
    }
    ctx->pc = 0x306EDCu;
    {
        const bool branch_taken_0x306edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x306edc) {
            ctx->pc = 0x307120u;
            goto label_307120;
        }
    }
    ctx->pc = 0x306EE4u;
label_306ee4:
    // 0x306ee4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x306ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_306ee8:
    // 0x306ee8: 0x24641b70  addiu       $a0, $v1, 0x1B70
    ctx->pc = 0x306ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7024));
label_306eec:
    // 0x306eec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x306eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_306ef0:
    // 0x306ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x306ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_306ef4:
    // 0x306ef4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x306ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306ef8:
    // 0x306ef8: 0x600008  jr          $v1
label_306efc:
    if (ctx->pc == 0x306EFCu) {
        ctx->pc = 0x306F00u;
        goto label_306f00;
    }
    ctx->pc = 0x306EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x306F00u;
label_306f00:
    // 0x306f00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f04:
    // 0x306f04: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x306f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_306f08:
    // 0x306f08: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x306f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f0c:
    // 0x306f0c: 0xc0c7a0c  jal         func_31E830
label_306f10:
    if (ctx->pc == 0x306F10u) {
        ctx->pc = 0x306F14u;
        goto label_306f14;
    }
    ctx->pc = 0x306F0Cu;
    SET_GPR_U32(ctx, 31, 0x306F14u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x306F0Cu, 0x306F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F14u;
label_306f14:
    // 0x306f14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f18:
    // 0x306f18: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x306f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
label_306f1c:
    // 0x306f1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x306f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_306f20:
    // 0x306f20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x306f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_306f24:
    // 0x306f24: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x306f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_306f28:
    // 0x306f28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f2c:
    // 0x306f2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f30:
    // 0x306f30: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_306f34:
    // 0x306f34: 0x24065a22  addiu       $a2, $zero, 0x5A22
    ctx->pc = 0x306f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23074));
label_306f38:
    // 0x306f38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306f3c:
    // 0x306f3c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_306f40:
    // 0x306f40: 0xc0965d0  jal         func_259740
label_306f44:
    if (ctx->pc == 0x306F44u) {
        ctx->pc = 0x306F48u;
        goto label_306f48;
    }
    ctx->pc = 0x306F40u;
    SET_GPR_U32(ctx, 31, 0x306F48u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306F40u, 0x306F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F48u;
label_306f48:
    // 0x306f48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x306f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f4c:
    // 0x306f4c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x306f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_306f50:
    // 0x306f50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f54:
    // 0x306f54: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_306f58:
    // 0x306f58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306f5c:
    // 0x306f5c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_306f60:
    // 0x306f60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f64:
    // 0x306f64: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x306f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_306f68:
    // 0x306f68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306f6c:
    // 0x306f6c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x306f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_306f70:
    // 0x306f70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f74:
    // 0x306f74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_306f78:
    // 0x306f78: 0xc096b40  jal         func_25AD00
label_306f7c:
    if (ctx->pc == 0x306F7Cu) {
        ctx->pc = 0x306F80u;
        goto label_306f80;
    }
    ctx->pc = 0x306F78u;
    SET_GPR_U32(ctx, 31, 0x306F80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306F78u, 0x306F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F80u;
label_306f80:
    // 0x306f80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f84:
    // 0x306f84: 0xc05cd10  jal         func_173440
label_306f88:
    if (ctx->pc == 0x306F88u) {
        ctx->pc = 0x306F8Cu;
        goto label_306f8c;
    }
    ctx->pc = 0x306F84u;
    SET_GPR_U32(ctx, 31, 0x306F8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306F84u, 0x306F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F8Cu;
label_306f8c:
    // 0x306f8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306f90:
    // 0x306f90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306f90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_306f94:
    // 0x306f94: 0xc05cec4  jal         func_173B10
label_306f98:
    if (ctx->pc == 0x306F98u) {
        ctx->pc = 0x306F9Cu;
        goto label_306f9c;
    }
    ctx->pc = 0x306F94u;
    SET_GPR_U32(ctx, 31, 0x306F9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306F94u, 0x306F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F9Cu;
label_306f9c:
    // 0x306f9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306fa0:
    // 0x306fa0: 0xc0974c8  jal         func_25D320
label_306fa4:
    if (ctx->pc == 0x306FA4u) {
        ctx->pc = 0x306FA8u;
        goto label_306fa8;
    }
    ctx->pc = 0x306FA0u;
    SET_GPR_U32(ctx, 31, 0x306FA8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306FA0u, 0x306FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FA8u;
label_306fa8:
    // 0x306fa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306fac:
    // 0x306fac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_306fb0:
    // 0x306fb0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_306fb4:
    if (ctx->pc == 0x306FB4u) {
        ctx->pc = 0x306FB8u;
        goto label_306fb8;
    }
    ctx->pc = 0x306FB0u;
    {
        const bool branch_taken_0x306fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306fb0) {
            ctx->pc = 0x307120u;
            goto label_307120;
        }
    }
    ctx->pc = 0x306FB8u;
label_306fb8:
    // 0x306fb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_306fbc:
    // 0x306fbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x306fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_306fc0:
    // 0x306fc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_306fc4:
    // 0x306fc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x306fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_306fc8:
    // 0x306fc8: 0x10000055  b           . + 4 + (0x55 << 2)
label_306fcc:
    if (ctx->pc == 0x306FCCu) {
        ctx->pc = 0x306FD0u;
        goto label_306fd0;
    }
    ctx->pc = 0x306FC8u;
    {
        const bool branch_taken_0x306fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306fc8) {
            ctx->pc = 0x307120u;
            goto label_307120;
        }
    }
    ctx->pc = 0x306FD0u;
label_306fd0:
    // 0x306fd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x306fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_306fd4:
    // 0x306fd4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x306fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_306fd8:
    // 0x306fd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x306fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_306fdc:
    // 0x306fdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306fe0:
    // 0x306fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_306fe4:
    // 0x306fe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x306fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_306fe8:
    // 0x306fe8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_306fec:
    // 0x306fec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x306fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_306ff0:
    // 0x306ff0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_306ff4:
    // 0x306ff4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x306ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_306ff8:
    // 0x306ff8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_306ffc:
    // 0x306ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307000:
    // 0x307000: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x307000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_307004:
    // 0x307004: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x307004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_307008:
    // 0x307008: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_30700c:
    // 0x30700c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_307010:
    // 0x307010: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x307010u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_307014:
    // 0x307014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x307014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_307018:
    // 0x307018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_30701c:
    // 0x30701c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30701cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_307020:
    // 0x307020: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307020u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_307024:
    // 0x307024: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307028:
    // 0x307028: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x307028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_30702c:
    // 0x30702c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307030:
    // 0x307030: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_307034:
    // 0x307034: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x307034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_307038:
    // 0x307038: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_30703c:
    // 0x30703c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307040:
    // 0x307040: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_307044:
    // 0x307044: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x307044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_307048:
    // 0x307048: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x307048u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_30704c:
    // 0x30704c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307050:
    // 0x307050: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x307050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307054:
    // 0x307054: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x307054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_307058:
    // 0x307058: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x307058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_30705c:
    // 0x30705c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30705cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_307060:
    // 0x307060: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x307060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
label_307064:
    // 0x307064: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307068:
    // 0x307068: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x307068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_30706c:
    // 0x30706c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30706cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307070:
    // 0x307070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x307070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_307074:
    // 0x307074: 0xc0965d0  jal         func_259740
label_307078:
    if (ctx->pc == 0x307078u) {
        ctx->pc = 0x30707Cu;
        goto label_30707c;
    }
    ctx->pc = 0x307074u;
    SET_GPR_U32(ctx, 31, 0x30707Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x307074u, 0x30707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30707Cu;
label_30707c:
    // 0x30707c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307080:
    // 0x307080: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_307084:
    // 0x307084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_307088:
    // 0x307088: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x307088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30708c:
    // 0x30708c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307090:
    // 0x307090: 0xc0974c8  jal         func_25D320
label_307094:
    if (ctx->pc == 0x307094u) {
        ctx->pc = 0x307098u;
        goto label_307098;
    }
    ctx->pc = 0x307090u;
    SET_GPR_U32(ctx, 31, 0x307098u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307090u, 0x307098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307098u;
label_307098:
    // 0x307098: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30709c:
    // 0x30709c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30709cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_3070a0:
    // 0x3070a0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_3070a4:
    if (ctx->pc == 0x3070A4u) {
        ctx->pc = 0x3070A8u;
        goto label_3070a8;
    }
    ctx->pc = 0x3070A0u;
    {
        const bool branch_taken_0x3070a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070a0) {
            ctx->pc = 0x307120u;
            goto label_307120;
        }
    }
    ctx->pc = 0x3070A8u;
label_3070a8:
    // 0x3070a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3070ac:
    // 0x3070ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3070acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3070b0:
    // 0x3070b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3070b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3070b4:
    // 0x3070b4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3070b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3070b8:
    // 0x3070b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3070bc:
    if (ctx->pc == 0x3070BCu) {
        ctx->pc = 0x3070C0u;
        goto label_3070c0;
    }
    ctx->pc = 0x3070B8u;
    {
        const bool branch_taken_0x3070b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070b8) {
            ctx->pc = 0x307120u;
            goto label_307120;
        }
    }
    ctx->pc = 0x3070C0u;
label_3070c0:
    // 0x3070c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3070c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3070c4:
    // 0x3070c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3070c8:
    // 0x3070c8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3070c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_3070cc:
    // 0x3070cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3070ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3070d0:
    // 0x3070d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3070d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3070d4:
    // 0x3070d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3070d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3070d8:
    // 0x3070d8: 0x34465a00  ori         $a2, $v0, 0x5A00
    ctx->pc = 0x3070d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23040);
label_3070dc:
    // 0x3070dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3070dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3070e0:
    // 0x3070e0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3070e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
label_3070e4:
    // 0x3070e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3070e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3070e8:
    // 0x3070e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3070e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3070ec:
    // 0x3070ec: 0xc0965d0  jal         func_259740
label_3070f0:
    if (ctx->pc == 0x3070F0u) {
        ctx->pc = 0x3070F4u;
        goto label_3070f4;
    }
    ctx->pc = 0x3070ECu;
    SET_GPR_U32(ctx, 31, 0x3070F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3070ECu, 0x3070F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070F4u;
label_3070f4:
    // 0x3070f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3070f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3070f8:
    // 0x3070f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3070f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3070fc:
    // 0x3070fc: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x3070fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_307100:
    // 0x307100: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x307100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_307104:
    // 0x307104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307108:
    // 0x307108: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x307108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_30710c:
    // 0x30710c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_307110:
    // 0x307110: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x307110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_307114:
    // 0x307114: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_307118:
    // 0x307118: 0xc0974c8  jal         func_25D320
label_30711c:
    if (ctx->pc == 0x30711Cu) {
        ctx->pc = 0x307120u;
        goto label_307120;
    }
    ctx->pc = 0x307118u;
    SET_GPR_U32(ctx, 31, 0x307120u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307118u, 0x307120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307120u;
label_307120:
    // 0x307120: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x307120u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307124:
    // 0x307124: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x307124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_307128:
    // 0x307128: 0x3e00008  jr          $ra
label_30712c:
    if (ctx->pc == 0x30712Cu) {
        ctx->pc = 0x307130u;
        goto label_fallthrough_0x307128;
    }
    ctx->pc = 0x307128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x307128:
    ctx->pc = 0x307130u;
}
