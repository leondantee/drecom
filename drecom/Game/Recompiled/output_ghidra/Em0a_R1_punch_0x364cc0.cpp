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

// Function: Em0a_R1_punch
// Address: 0x364cc0 - 0x365158
void Em0a_R1_punch_0x364cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_punch_0x364cc0");
#endif

    switch (ctx->pc) {
        case 0x364cc0u: goto label_364cc0;
        case 0x364cc4u: goto label_364cc4;
        case 0x364cc8u: goto label_364cc8;
        case 0x364cccu: goto label_364ccc;
        case 0x364cd0u: goto label_364cd0;
        case 0x364cd4u: goto label_364cd4;
        case 0x364cd8u: goto label_364cd8;
        case 0x364cdcu: goto label_364cdc;
        case 0x364ce0u: goto label_364ce0;
        case 0x364ce4u: goto label_364ce4;
        case 0x364ce8u: goto label_364ce8;
        case 0x364cecu: goto label_364cec;
        case 0x364cf0u: goto label_364cf0;
        case 0x364cf4u: goto label_364cf4;
        case 0x364cf8u: goto label_364cf8;
        case 0x364cfcu: goto label_364cfc;
        case 0x364d00u: goto label_364d00;
        case 0x364d04u: goto label_364d04;
        case 0x364d08u: goto label_364d08;
        case 0x364d0cu: goto label_364d0c;
        case 0x364d10u: goto label_364d10;
        case 0x364d14u: goto label_364d14;
        case 0x364d18u: goto label_364d18;
        case 0x364d1cu: goto label_364d1c;
        case 0x364d20u: goto label_364d20;
        case 0x364d24u: goto label_364d24;
        case 0x364d28u: goto label_364d28;
        case 0x364d2cu: goto label_364d2c;
        case 0x364d30u: goto label_364d30;
        case 0x364d34u: goto label_364d34;
        case 0x364d38u: goto label_364d38;
        case 0x364d3cu: goto label_364d3c;
        case 0x364d40u: goto label_364d40;
        case 0x364d44u: goto label_364d44;
        case 0x364d48u: goto label_364d48;
        case 0x364d4cu: goto label_364d4c;
        case 0x364d50u: goto label_364d50;
        case 0x364d54u: goto label_364d54;
        case 0x364d58u: goto label_364d58;
        case 0x364d5cu: goto label_364d5c;
        case 0x364d60u: goto label_364d60;
        case 0x364d64u: goto label_364d64;
        case 0x364d68u: goto label_364d68;
        case 0x364d6cu: goto label_364d6c;
        case 0x364d70u: goto label_364d70;
        case 0x364d74u: goto label_364d74;
        case 0x364d78u: goto label_364d78;
        case 0x364d7cu: goto label_364d7c;
        case 0x364d80u: goto label_364d80;
        case 0x364d84u: goto label_364d84;
        case 0x364d88u: goto label_364d88;
        case 0x364d8cu: goto label_364d8c;
        case 0x364d90u: goto label_364d90;
        case 0x364d94u: goto label_364d94;
        case 0x364d98u: goto label_364d98;
        case 0x364d9cu: goto label_364d9c;
        case 0x364da0u: goto label_364da0;
        case 0x364da4u: goto label_364da4;
        case 0x364da8u: goto label_364da8;
        case 0x364dacu: goto label_364dac;
        case 0x364db0u: goto label_364db0;
        case 0x364db4u: goto label_364db4;
        case 0x364db8u: goto label_364db8;
        case 0x364dbcu: goto label_364dbc;
        case 0x364dc0u: goto label_364dc0;
        case 0x364dc4u: goto label_364dc4;
        case 0x364dc8u: goto label_364dc8;
        case 0x364dccu: goto label_364dcc;
        case 0x364dd0u: goto label_364dd0;
        case 0x364dd4u: goto label_364dd4;
        case 0x364dd8u: goto label_364dd8;
        case 0x364ddcu: goto label_364ddc;
        case 0x364de0u: goto label_364de0;
        case 0x364de4u: goto label_364de4;
        case 0x364de8u: goto label_364de8;
        case 0x364decu: goto label_364dec;
        case 0x364df0u: goto label_364df0;
        case 0x364df4u: goto label_364df4;
        case 0x364df8u: goto label_364df8;
        case 0x364dfcu: goto label_364dfc;
        case 0x364e00u: goto label_364e00;
        case 0x364e04u: goto label_364e04;
        case 0x364e08u: goto label_364e08;
        case 0x364e0cu: goto label_364e0c;
        case 0x364e10u: goto label_364e10;
        case 0x364e14u: goto label_364e14;
        case 0x364e18u: goto label_364e18;
        case 0x364e1cu: goto label_364e1c;
        case 0x364e20u: goto label_364e20;
        case 0x364e24u: goto label_364e24;
        case 0x364e28u: goto label_364e28;
        case 0x364e2cu: goto label_364e2c;
        case 0x364e30u: goto label_364e30;
        case 0x364e34u: goto label_364e34;
        case 0x364e38u: goto label_364e38;
        case 0x364e3cu: goto label_364e3c;
        case 0x364e40u: goto label_364e40;
        case 0x364e44u: goto label_364e44;
        case 0x364e48u: goto label_364e48;
        case 0x364e4cu: goto label_364e4c;
        case 0x364e50u: goto label_364e50;
        case 0x364e54u: goto label_364e54;
        case 0x364e58u: goto label_364e58;
        case 0x364e5cu: goto label_364e5c;
        case 0x364e60u: goto label_364e60;
        case 0x364e64u: goto label_364e64;
        case 0x364e68u: goto label_364e68;
        case 0x364e6cu: goto label_364e6c;
        case 0x364e70u: goto label_364e70;
        case 0x364e74u: goto label_364e74;
        case 0x364e78u: goto label_364e78;
        case 0x364e7cu: goto label_364e7c;
        case 0x364e80u: goto label_364e80;
        case 0x364e84u: goto label_364e84;
        case 0x364e88u: goto label_364e88;
        case 0x364e8cu: goto label_364e8c;
        case 0x364e90u: goto label_364e90;
        case 0x364e94u: goto label_364e94;
        case 0x364e98u: goto label_364e98;
        case 0x364e9cu: goto label_364e9c;
        case 0x364ea0u: goto label_364ea0;
        case 0x364ea4u: goto label_364ea4;
        case 0x364ea8u: goto label_364ea8;
        case 0x364eacu: goto label_364eac;
        case 0x364eb0u: goto label_364eb0;
        case 0x364eb4u: goto label_364eb4;
        case 0x364eb8u: goto label_364eb8;
        case 0x364ebcu: goto label_364ebc;
        case 0x364ec0u: goto label_364ec0;
        case 0x364ec4u: goto label_364ec4;
        case 0x364ec8u: goto label_364ec8;
        case 0x364eccu: goto label_364ecc;
        case 0x364ed0u: goto label_364ed0;
        case 0x364ed4u: goto label_364ed4;
        case 0x364ed8u: goto label_364ed8;
        case 0x364edcu: goto label_364edc;
        case 0x364ee0u: goto label_364ee0;
        case 0x364ee4u: goto label_364ee4;
        case 0x364ee8u: goto label_364ee8;
        case 0x364eecu: goto label_364eec;
        case 0x364ef0u: goto label_364ef0;
        case 0x364ef4u: goto label_364ef4;
        case 0x364ef8u: goto label_364ef8;
        case 0x364efcu: goto label_364efc;
        case 0x364f00u: goto label_364f00;
        case 0x364f04u: goto label_364f04;
        case 0x364f08u: goto label_364f08;
        case 0x364f0cu: goto label_364f0c;
        case 0x364f10u: goto label_364f10;
        case 0x364f14u: goto label_364f14;
        case 0x364f18u: goto label_364f18;
        case 0x364f1cu: goto label_364f1c;
        case 0x364f20u: goto label_364f20;
        case 0x364f24u: goto label_364f24;
        case 0x364f28u: goto label_364f28;
        case 0x364f2cu: goto label_364f2c;
        case 0x364f30u: goto label_364f30;
        case 0x364f34u: goto label_364f34;
        case 0x364f38u: goto label_364f38;
        case 0x364f3cu: goto label_364f3c;
        case 0x364f40u: goto label_364f40;
        case 0x364f44u: goto label_364f44;
        case 0x364f48u: goto label_364f48;
        case 0x364f4cu: goto label_364f4c;
        case 0x364f50u: goto label_364f50;
        case 0x364f54u: goto label_364f54;
        case 0x364f58u: goto label_364f58;
        case 0x364f5cu: goto label_364f5c;
        case 0x364f60u: goto label_364f60;
        case 0x364f64u: goto label_364f64;
        case 0x364f68u: goto label_364f68;
        case 0x364f6cu: goto label_364f6c;
        case 0x364f70u: goto label_364f70;
        case 0x364f74u: goto label_364f74;
        case 0x364f78u: goto label_364f78;
        case 0x364f7cu: goto label_364f7c;
        case 0x364f80u: goto label_364f80;
        case 0x364f84u: goto label_364f84;
        case 0x364f88u: goto label_364f88;
        case 0x364f8cu: goto label_364f8c;
        case 0x364f90u: goto label_364f90;
        case 0x364f94u: goto label_364f94;
        case 0x364f98u: goto label_364f98;
        case 0x364f9cu: goto label_364f9c;
        case 0x364fa0u: goto label_364fa0;
        case 0x364fa4u: goto label_364fa4;
        case 0x364fa8u: goto label_364fa8;
        case 0x364facu: goto label_364fac;
        case 0x364fb0u: goto label_364fb0;
        case 0x364fb4u: goto label_364fb4;
        case 0x364fb8u: goto label_364fb8;
        case 0x364fbcu: goto label_364fbc;
        case 0x364fc0u: goto label_364fc0;
        case 0x364fc4u: goto label_364fc4;
        case 0x364fc8u: goto label_364fc8;
        case 0x364fccu: goto label_364fcc;
        case 0x364fd0u: goto label_364fd0;
        case 0x364fd4u: goto label_364fd4;
        case 0x364fd8u: goto label_364fd8;
        case 0x364fdcu: goto label_364fdc;
        case 0x364fe0u: goto label_364fe0;
        case 0x364fe4u: goto label_364fe4;
        case 0x364fe8u: goto label_364fe8;
        case 0x364fecu: goto label_364fec;
        case 0x364ff0u: goto label_364ff0;
        case 0x364ff4u: goto label_364ff4;
        case 0x364ff8u: goto label_364ff8;
        case 0x364ffcu: goto label_364ffc;
        case 0x365000u: goto label_365000;
        case 0x365004u: goto label_365004;
        case 0x365008u: goto label_365008;
        case 0x36500cu: goto label_36500c;
        case 0x365010u: goto label_365010;
        case 0x365014u: goto label_365014;
        case 0x365018u: goto label_365018;
        case 0x36501cu: goto label_36501c;
        case 0x365020u: goto label_365020;
        case 0x365024u: goto label_365024;
        case 0x365028u: goto label_365028;
        case 0x36502cu: goto label_36502c;
        case 0x365030u: goto label_365030;
        case 0x365034u: goto label_365034;
        case 0x365038u: goto label_365038;
        case 0x36503cu: goto label_36503c;
        case 0x365040u: goto label_365040;
        case 0x365044u: goto label_365044;
        case 0x365048u: goto label_365048;
        case 0x36504cu: goto label_36504c;
        case 0x365050u: goto label_365050;
        case 0x365054u: goto label_365054;
        case 0x365058u: goto label_365058;
        case 0x36505cu: goto label_36505c;
        case 0x365060u: goto label_365060;
        case 0x365064u: goto label_365064;
        case 0x365068u: goto label_365068;
        case 0x36506cu: goto label_36506c;
        case 0x365070u: goto label_365070;
        case 0x365074u: goto label_365074;
        case 0x365078u: goto label_365078;
        case 0x36507cu: goto label_36507c;
        case 0x365080u: goto label_365080;
        case 0x365084u: goto label_365084;
        case 0x365088u: goto label_365088;
        case 0x36508cu: goto label_36508c;
        case 0x365090u: goto label_365090;
        case 0x365094u: goto label_365094;
        case 0x365098u: goto label_365098;
        case 0x36509cu: goto label_36509c;
        case 0x3650a0u: goto label_3650a0;
        case 0x3650a4u: goto label_3650a4;
        case 0x3650a8u: goto label_3650a8;
        case 0x3650acu: goto label_3650ac;
        case 0x3650b0u: goto label_3650b0;
        case 0x3650b4u: goto label_3650b4;
        case 0x3650b8u: goto label_3650b8;
        case 0x3650bcu: goto label_3650bc;
        case 0x3650c0u: goto label_3650c0;
        case 0x3650c4u: goto label_3650c4;
        case 0x3650c8u: goto label_3650c8;
        case 0x3650ccu: goto label_3650cc;
        case 0x3650d0u: goto label_3650d0;
        case 0x3650d4u: goto label_3650d4;
        case 0x3650d8u: goto label_3650d8;
        case 0x3650dcu: goto label_3650dc;
        case 0x3650e0u: goto label_3650e0;
        case 0x3650e4u: goto label_3650e4;
        case 0x3650e8u: goto label_3650e8;
        case 0x3650ecu: goto label_3650ec;
        case 0x3650f0u: goto label_3650f0;
        case 0x3650f4u: goto label_3650f4;
        case 0x3650f8u: goto label_3650f8;
        case 0x3650fcu: goto label_3650fc;
        case 0x365100u: goto label_365100;
        case 0x365104u: goto label_365104;
        case 0x365108u: goto label_365108;
        case 0x36510cu: goto label_36510c;
        case 0x365110u: goto label_365110;
        case 0x365114u: goto label_365114;
        case 0x365118u: goto label_365118;
        case 0x36511cu: goto label_36511c;
        case 0x365120u: goto label_365120;
        case 0x365124u: goto label_365124;
        case 0x365128u: goto label_365128;
        case 0x36512cu: goto label_36512c;
        case 0x365130u: goto label_365130;
        case 0x365134u: goto label_365134;
        case 0x365138u: goto label_365138;
        case 0x36513cu: goto label_36513c;
        case 0x365140u: goto label_365140;
        case 0x365144u: goto label_365144;
        case 0x365148u: goto label_365148;
        case 0x36514cu: goto label_36514c;
        case 0x365150u: goto label_365150;
        case 0x365154u: goto label_365154;
        default: break;
    }

    ctx->pc = 0x364cc0u;

label_364cc0:
    // 0x364cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_364cc4:
    // 0x364cc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x364cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_364cc8:
    // 0x364cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_364ccc:
    // 0x364ccc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x364cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_364cd0:
    // 0x364cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364cd4:
    // 0x364cd4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x364cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_364cd8:
    // 0x364cd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364cdc:
    // 0x364cdc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x364cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_364ce0:
    // 0x364ce0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x364ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_364ce4:
    // 0x364ce4: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x364ce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_364ce8:
    // 0x364ce8: 0x10200116  beqz        $at, . + 4 + (0x116 << 2)
label_364cec:
    if (ctx->pc == 0x364CECu) {
        ctx->pc = 0x364CF0u;
        goto label_364cf0;
    }
    ctx->pc = 0x364CE8u;
    {
        const bool branch_taken_0x364ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x364ce8) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x364CF0u;
label_364cf0:
    // 0x364cf0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x364cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_364cf4:
    // 0x364cf4: 0x24642ad0  addiu       $a0, $v1, 0x2AD0
    ctx->pc = 0x364cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10960));
label_364cf8:
    // 0x364cf8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x364cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_364cfc:
    // 0x364cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x364cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_364d00:
    // 0x364d00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x364d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_364d04:
    // 0x364d04: 0x600008  jr          $v1
label_364d08:
    if (ctx->pc == 0x364D08u) {
        ctx->pc = 0x364D0Cu;
        goto label_364d0c;
    }
    ctx->pc = 0x364D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364D04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x364D0Cu;
label_364d0c:
    // 0x364d0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d10:
    // 0x364d10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d14:
    // 0x364d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x364d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_364d18:
    // 0x364d18: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x364d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
label_364d1c:
    // 0x364d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x364d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364d20:
    // 0x364d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x364d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_364d24:
    // 0x364d24: 0xc0965d0  jal         func_259740
label_364d28:
    if (ctx->pc == 0x364D28u) {
        ctx->pc = 0x364D2Cu;
        goto label_364d2c;
    }
    ctx->pc = 0x364D24u;
    SET_GPR_U32(ctx, 31, 0x364D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x364D24u, 0x364D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D2Cu;
label_364d2c:
    // 0x364d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d30:
    // 0x364d30: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x364d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_364d34:
    // 0x364d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_364d38:
    // 0x364d38: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x364d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_364d3c:
    // 0x364d3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d40:
    // 0x364d40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_364d44:
    // 0x364d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_364d48:
    // 0x364d48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x364d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_364d4c:
    // 0x364d4c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_364d50:
    if (ctx->pc == 0x364D50u) {
        ctx->pc = 0x364D54u;
        goto label_364d54;
    }
    ctx->pc = 0x364D4Cu;
    {
        const bool branch_taken_0x364d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d4c) {
            ctx->pc = 0x364DD0u;
            goto label_364dd0;
        }
    }
    ctx->pc = 0x364D54u;
label_364d54:
    // 0x364d54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x364d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_364d58:
    // 0x364d58: 0xc0675a4  jal         func_19D690
label_364d5c:
    if (ctx->pc == 0x364D5Cu) {
        ctx->pc = 0x364D60u;
        goto label_364d60;
    }
    ctx->pc = 0x364D58u;
    SET_GPR_U32(ctx, 31, 0x364D60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x364D58u, 0x364D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D60u;
label_364d60:
    // 0x364d60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d64:
    // 0x364d64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d68:
    // 0x364d68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x364d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_364d6c:
    // 0x364d6c: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x364d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_364d70:
    // 0x364d70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x364d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_364d74:
    // 0x364d74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x364d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_364d78:
    // 0x364d78: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x364d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
label_364d7c:
    // 0x364d7c: 0xc06d02c  jal         func_1B40B0
label_364d80:
    if (ctx->pc == 0x364D80u) {
        ctx->pc = 0x364D84u;
        goto label_364d84;
    }
    ctx->pc = 0x364D7Cu;
    SET_GPR_U32(ctx, 31, 0x364D84u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x364D7Cu, 0x364D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D84u;
label_364d84:
    // 0x364d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_364d88:
    if (ctx->pc == 0x364D88u) {
        ctx->pc = 0x364D8Cu;
        goto label_364d8c;
    }
    ctx->pc = 0x364D84u;
    {
        const bool branch_taken_0x364d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d84) {
            ctx->pc = 0x364D98u;
            goto label_364d98;
        }
    }
    ctx->pc = 0x364D8Cu;
label_364d8c:
    // 0x364d8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d90:
    // 0x364d90: 0xc0da0f4  jal         func_3683D0
label_364d94:
    if (ctx->pc == 0x364D94u) {
        ctx->pc = 0x364D98u;
        goto label_364d98;
    }
    ctx->pc = 0x364D90u;
    SET_GPR_U32(ctx, 31, 0x364D98u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x364D90u, 0x364D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D98u;
label_364d98:
    // 0x364d98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364d9c:
    // 0x364d9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364da0:
    // 0x364da0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x364da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_364da4:
    // 0x364da4: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x364da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_364da8:
    // 0x364da8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x364da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_364dac:
    // 0x364dac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x364dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_364db0:
    // 0x364db0: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x364db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
label_364db4:
    // 0x364db4: 0xc06d02c  jal         func_1B40B0
label_364db8:
    if (ctx->pc == 0x364DB8u) {
        ctx->pc = 0x364DBCu;
        goto label_364dbc;
    }
    ctx->pc = 0x364DB4u;
    SET_GPR_U32(ctx, 31, 0x364DBCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x364DB4u, 0x364DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DBCu;
label_364dbc:
    // 0x364dbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_364dc0:
    if (ctx->pc == 0x364DC0u) {
        ctx->pc = 0x364DC4u;
        goto label_364dc4;
    }
    ctx->pc = 0x364DBCu;
    {
        const bool branch_taken_0x364dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364dbc) {
            ctx->pc = 0x364DD0u;
            goto label_364dd0;
        }
    }
    ctx->pc = 0x364DC4u;
label_364dc4:
    // 0x364dc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364dc8:
    // 0x364dc8: 0xc0da0f4  jal         func_3683D0
label_364dcc:
    if (ctx->pc == 0x364DCCu) {
        ctx->pc = 0x364DD0u;
        goto label_364dd0;
    }
    ctx->pc = 0x364DC8u;
    SET_GPR_U32(ctx, 31, 0x364DD0u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x364DC8u, 0x364DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DD0u;
label_364dd0:
    // 0x364dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364dd4:
    // 0x364dd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364dd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_364dd8:
    // 0x364dd8: 0xc096b40  jal         func_25AD00
label_364ddc:
    if (ctx->pc == 0x364DDCu) {
        ctx->pc = 0x364DE0u;
        goto label_364de0;
    }
    ctx->pc = 0x364DD8u;
    SET_GPR_U32(ctx, 31, 0x364DE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364DD8u, 0x364DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DE0u;
label_364de0:
    // 0x364de0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364de4:
    // 0x364de4: 0xc05cd10  jal         func_173440
label_364de8:
    if (ctx->pc == 0x364DE8u) {
        ctx->pc = 0x364DECu;
        goto label_364dec;
    }
    ctx->pc = 0x364DE4u;
    SET_GPR_U32(ctx, 31, 0x364DECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x364DE4u, 0x364DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DECu;
label_364dec:
    // 0x364dec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364df0:
    // 0x364df0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_364df4:
    // 0x364df4: 0xc05cec4  jal         func_173B10
label_364df8:
    if (ctx->pc == 0x364DF8u) {
        ctx->pc = 0x364DFCu;
        goto label_364dfc;
    }
    ctx->pc = 0x364DF4u;
    SET_GPR_U32(ctx, 31, 0x364DFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x364DF4u, 0x364DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DFCu;
label_364dfc:
    // 0x364dfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364e00:
    // 0x364e00: 0xc097478  jal         func_25D1E0
label_364e04:
    if (ctx->pc == 0x364E04u) {
        ctx->pc = 0x364E08u;
        goto label_364e08;
    }
    ctx->pc = 0x364E00u;
    SET_GPR_U32(ctx, 31, 0x364E08u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364E00u, 0x364E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E08u;
label_364e08:
    // 0x364e08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364e0c:
    // 0x364e0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x364e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_364e10:
    // 0x364e10: 0x106000cc  beqz        $v1, . + 4 + (0xCC << 2)
label_364e14:
    if (ctx->pc == 0x364E14u) {
        ctx->pc = 0x364E18u;
        goto label_364e18;
    }
    ctx->pc = 0x364E10u;
    {
        const bool branch_taken_0x364e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364e10) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x364E18u;
label_364e18:
    // 0x364e18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364e1c:
    // 0x364e1c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x364e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_364e20:
    // 0x364e20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x364e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_364e24:
    // 0x364e24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x364e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_364e28:
    // 0x364e28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x364e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_364e2c:
    // 0x364e2c: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x364e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_364e30:
    // 0x364e30: 0xc0675b0  jal         func_19D6C0
label_364e34:
    if (ctx->pc == 0x364E34u) {
        ctx->pc = 0x364E38u;
        goto label_364e38;
    }
    ctx->pc = 0x364E30u;
    SET_GPR_U32(ctx, 31, 0x364E38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x364E30u, 0x364E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E38u;
label_364e38:
    // 0x364e38: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x364e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364e3c:
    // 0x364e3c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x364e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364e40:
    // 0x364e40: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x364e40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_364e44:
    // 0x364e44: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x364e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364e48:
    // 0x364e48: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x364e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364e4c:
    // 0x364e4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x364e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_364e50:
    // 0x364e50: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x364e50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_364e54:
    // 0x364e54: 0xc06757c  jal         func_19D5F0
label_364e58:
    if (ctx->pc == 0x364E58u) {
        ctx->pc = 0x364E5Cu;
        goto label_364e5c;
    }
    ctx->pc = 0x364E54u;
    SET_GPR_U32(ctx, 31, 0x364E5Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x364E54u, 0x364E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E5Cu;
label_364e5c:
    // 0x364e5c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_364e60:
    // 0x364e60: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364e64:
    // 0x364e64: 0x3c0344b5  lui         $v1, 0x44B5
    ctx->pc = 0x364e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17589 << 16));
label_364e68:
    // 0x364e68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x364e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_364e6c:
    // 0x364e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364e70:
    // 0x364e70: 0x0  nop
    ctx->pc = 0x364e70u;
    // NOP
label_364e74:
    // 0x364e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_364e78:
    // 0x364e78: 0x0  nop
    ctx->pc = 0x364e78u;
    // NOP
label_364e7c:
    // 0x364e7c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_364e80:
    if (ctx->pc == 0x364E80u) {
        ctx->pc = 0x364E84u;
        goto label_364e84;
    }
    ctx->pc = 0x364E7Cu;
    {
        const bool branch_taken_0x364e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364e7c) {
            ctx->pc = 0x364F3Cu;
            goto label_364f3c;
        }
    }
    ctx->pc = 0x364E84u;
label_364e84:
    // 0x364e84: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x364e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_364e88:
    // 0x364e88: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x364e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_364e8c:
    // 0x364e8c: 0xc0455e6  jal         func_115798
label_364e90:
    if (ctx->pc == 0x364E90u) {
        ctx->pc = 0x364E94u;
        goto label_364e94;
    }
    ctx->pc = 0x364E8Cu;
    SET_GPR_U32(ctx, 31, 0x364E94u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x364E8Cu, 0x364E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E94u;
label_364e94:
    // 0x364e94: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x364e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_364e98:
    // 0x364e98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364e9c:
    // 0x364e9c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x364e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_364ea0:
    // 0x364ea0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x364ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_364ea4:
    // 0x364ea4: 0xc058f20  jal         func_163C80
label_364ea8:
    if (ctx->pc == 0x364EA8u) {
        ctx->pc = 0x364EACu;
        goto label_364eac;
    }
    ctx->pc = 0x364EA4u;
    SET_GPR_U32(ctx, 31, 0x364EACu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x364EA4u, 0x364EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EACu;
label_364eac:
    // 0x364eac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x364eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_364eb0:
    // 0x364eb0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x364eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364eb4:
    // 0x364eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364eb8:
    // 0x364eb8: 0x0  nop
    ctx->pc = 0x364eb8u;
    // NOP
label_364ebc:
    // 0x364ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_364ec0:
    // 0x364ec0: 0x0  nop
    ctx->pc = 0x364ec0u;
    // NOP
label_364ec4:
    // 0x364ec4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_364ec8:
    if (ctx->pc == 0x364EC8u) {
        ctx->pc = 0x364ECCu;
        goto label_364ecc;
    }
    ctx->pc = 0x364EC4u;
    {
        const bool branch_taken_0x364ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364ec4) {
            ctx->pc = 0x364F04u;
            goto label_364f04;
        }
    }
    ctx->pc = 0x364ECCu;
label_364ecc:
    // 0x364ecc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x364eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364ed0:
    // 0x364ed0: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x364ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
label_364ed4:
    // 0x364ed4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_364ed8:
    // 0x364ed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364edc:
    // 0x364edc: 0x0  nop
    ctx->pc = 0x364edcu;
    // NOP
label_364ee0:
    // 0x364ee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x364ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_364ee4:
    // 0x364ee4: 0x0  nop
    ctx->pc = 0x364ee4u;
    // NOP
label_364ee8:
    // 0x364ee8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_364eec:
    if (ctx->pc == 0x364EECu) {
        ctx->pc = 0x364EF0u;
        goto label_364ef0;
    }
    ctx->pc = 0x364EE8u;
    {
        const bool branch_taken_0x364ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x364ee8) {
            ctx->pc = 0x364F3Cu;
            goto label_364f3c;
        }
    }
    ctx->pc = 0x364EF0u;
label_364ef0:
    // 0x364ef0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x364ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_364ef4:
    // 0x364ef4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364ef8:
    // 0x364ef8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x364ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_364efc:
    // 0x364efc: 0x10000091  b           . + 4 + (0x91 << 2)
label_364f00:
    if (ctx->pc == 0x364F00u) {
        ctx->pc = 0x364F04u;
        goto label_364f04;
    }
    ctx->pc = 0x364EFCu;
    {
        const bool branch_taken_0x364efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364efc) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x364F04u;
label_364f04:
    // 0x364f04: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x364f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364f08:
    // 0x364f08: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_364f0c:
    // 0x364f0c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_364f10:
    // 0x364f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364f14:
    // 0x364f14: 0x0  nop
    ctx->pc = 0x364f14u;
    // NOP
label_364f18:
    // 0x364f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_364f1c:
    // 0x364f1c: 0x0  nop
    ctx->pc = 0x364f1cu;
    // NOP
label_364f20:
    // 0x364f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_364f24:
    if (ctx->pc == 0x364F24u) {
        ctx->pc = 0x364F28u;
        goto label_364f28;
    }
    ctx->pc = 0x364F20u;
    {
        const bool branch_taken_0x364f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364f20) {
            ctx->pc = 0x364F3Cu;
            goto label_364f3c;
        }
    }
    ctx->pc = 0x364F28u;
label_364f28:
    // 0x364f28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x364f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_364f2c:
    // 0x364f2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f30:
    // 0x364f30: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x364f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_364f34:
    // 0x364f34: 0x10000083  b           . + 4 + (0x83 << 2)
label_364f38:
    if (ctx->pc == 0x364F38u) {
        ctx->pc = 0x364F3Cu;
        goto label_364f3c;
    }
    ctx->pc = 0x364F34u;
    {
        const bool branch_taken_0x364f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364f34) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x364F3Cu;
label_364f3c:
    // 0x364f3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f40:
    // 0x364f40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x364f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_364f44:
    // 0x364f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x364f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_364f48:
    // 0x364f48: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x364f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_364f4c:
    // 0x364f4c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_364f50:
    if (ctx->pc == 0x364F50u) {
        ctx->pc = 0x364F54u;
        goto label_364f54;
    }
    ctx->pc = 0x364F4Cu;
    {
        const bool branch_taken_0x364f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364f4c) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x364F54u;
label_364f54:
    // 0x364f54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f58:
    // 0x364f58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f5c:
    // 0x364f5c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x364f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_364f60:
    // 0x364f60: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x364f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_364f64:
    // 0x364f64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x364f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364f68:
    // 0x364f68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x364f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_364f6c:
    // 0x364f6c: 0xc0965d0  jal         func_259740
label_364f70:
    if (ctx->pc == 0x364F70u) {
        ctx->pc = 0x364F74u;
        goto label_364f74;
    }
    ctx->pc = 0x364F6Cu;
    SET_GPR_U32(ctx, 31, 0x364F74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x364F6Cu, 0x364F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F74u;
label_364f74:
    // 0x364f74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f78:
    // 0x364f78: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x364f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_364f7c:
    // 0x364f7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_364f80:
    // 0x364f80: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x364f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_364f84:
    // 0x364f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364f88:
    // 0x364f88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f8c:
    // 0x364f8c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x364f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_364f90:
    // 0x364f90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364f94:
    // 0x364f94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364f94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_364f98:
    // 0x364f98: 0xc096b40  jal         func_25AD00
label_364f9c:
    if (ctx->pc == 0x364F9Cu) {
        ctx->pc = 0x364FA0u;
        goto label_364fa0;
    }
    ctx->pc = 0x364F98u;
    SET_GPR_U32(ctx, 31, 0x364FA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364F98u, 0x364FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FA0u;
label_364fa0:
    // 0x364fa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364fa4:
    // 0x364fa4: 0xc05cd10  jal         func_173440
label_364fa8:
    if (ctx->pc == 0x364FA8u) {
        ctx->pc = 0x364FACu;
        goto label_364fac;
    }
    ctx->pc = 0x364FA4u;
    SET_GPR_U32(ctx, 31, 0x364FACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x364FA4u, 0x364FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FACu;
label_364fac:
    // 0x364fac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364fb0:
    // 0x364fb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364fb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_364fb4:
    // 0x364fb4: 0xc05cec4  jal         func_173B10
label_364fb8:
    if (ctx->pc == 0x364FB8u) {
        ctx->pc = 0x364FBCu;
        goto label_364fbc;
    }
    ctx->pc = 0x364FB4u;
    SET_GPR_U32(ctx, 31, 0x364FBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x364FB4u, 0x364FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FBCu;
label_364fbc:
    // 0x364fbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364fc0:
    // 0x364fc0: 0xc097478  jal         func_25D1E0
label_364fc4:
    if (ctx->pc == 0x364FC4u) {
        ctx->pc = 0x364FC8u;
        goto label_364fc8;
    }
    ctx->pc = 0x364FC0u;
    SET_GPR_U32(ctx, 31, 0x364FC8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364FC0u, 0x364FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FC8u;
label_364fc8:
    // 0x364fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364fcc:
    // 0x364fcc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x364fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_364fd0:
    // 0x364fd0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_364fd4:
    if (ctx->pc == 0x364FD4u) {
        ctx->pc = 0x364FD8u;
        goto label_364fd8;
    }
    ctx->pc = 0x364FD0u;
    {
        const bool branch_taken_0x364fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364fd0) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x364FD8u;
label_364fd8:
    // 0x364fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364fdc:
    // 0x364fdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364fe0:
    // 0x364fe0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_364fe4:
    // 0x364fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364fe8:
    // 0x364fe8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x364fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_364fec:
    // 0x364fec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364ff0:
    // 0x364ff0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_364ff4:
    // 0x364ff4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_364ff8:
    // 0x364ff8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_364ffc:
    // 0x364ffc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365000:
    // 0x365000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365004:
    // 0x365004: 0x1000004f  b           . + 4 + (0x4F << 2)
label_365008:
    if (ctx->pc == 0x365008u) {
        ctx->pc = 0x36500Cu;
        goto label_36500c;
    }
    ctx->pc = 0x365004u;
    {
        const bool branch_taken_0x365004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365004) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x36500Cu;
label_36500c:
    // 0x36500c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365010:
    // 0x365010: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x365010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365014:
    // 0x365014: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_365018:
    // 0x365018: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x365018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_36501c:
    // 0x36501c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36501cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_365020:
    // 0x365020: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_365024:
    // 0x365024: 0xc0965d0  jal         func_259740
label_365028:
    if (ctx->pc == 0x365028u) {
        ctx->pc = 0x36502Cu;
        goto label_36502c;
    }
    ctx->pc = 0x365024u;
    SET_GPR_U32(ctx, 31, 0x36502Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365024u, 0x36502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36502Cu;
label_36502c:
    // 0x36502c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365030:
    // 0x365030: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_365034:
    // 0x365034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_365038:
    // 0x365038: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36503c:
    // 0x36503c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365040:
    // 0x365040: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_365044:
    // 0x365044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_365048:
    // 0x365048: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x365048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_36504c:
    // 0x36504c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_365050:
    if (ctx->pc == 0x365050u) {
        ctx->pc = 0x365054u;
        goto label_365054;
    }
    ctx->pc = 0x36504Cu;
    {
        const bool branch_taken_0x36504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36504c) {
            ctx->pc = 0x3650D0u;
            goto label_3650d0;
        }
    }
    ctx->pc = 0x365054u;
label_365054:
    // 0x365054: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_365058:
    // 0x365058: 0xc0675a4  jal         func_19D690
label_36505c:
    if (ctx->pc == 0x36505Cu) {
        ctx->pc = 0x365060u;
        goto label_365060;
    }
    ctx->pc = 0x365058u;
    SET_GPR_U32(ctx, 31, 0x365060u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x365058u, 0x365060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365060u;
label_365060:
    // 0x365060: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x365060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365064:
    // 0x365064: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x365064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365068:
    // 0x365068: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x365068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_36506c:
    // 0x36506c: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x36506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_365070:
    // 0x365070: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_365074:
    // 0x365074: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_365078:
    // 0x365078: 0x24478d0c  addiu       $a3, $v0, -0x72F4
    ctx->pc = 0x365078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937868));
label_36507c:
    // 0x36507c: 0xc06d02c  jal         func_1B40B0
label_365080:
    if (ctx->pc == 0x365080u) {
        ctx->pc = 0x365084u;
        goto label_365084;
    }
    ctx->pc = 0x36507Cu;
    SET_GPR_U32(ctx, 31, 0x365084u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x36507Cu, 0x365084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365084u;
label_365084:
    // 0x365084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_365088:
    if (ctx->pc == 0x365088u) {
        ctx->pc = 0x36508Cu;
        goto label_36508c;
    }
    ctx->pc = 0x365084u;
    {
        const bool branch_taken_0x365084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365084) {
            ctx->pc = 0x365098u;
            goto label_365098;
        }
    }
    ctx->pc = 0x36508Cu;
label_36508c:
    // 0x36508c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365090:
    // 0x365090: 0xc0da0f4  jal         func_3683D0
label_365094:
    if (ctx->pc == 0x365094u) {
        ctx->pc = 0x365098u;
        goto label_365098;
    }
    ctx->pc = 0x365090u;
    SET_GPR_U32(ctx, 31, 0x365098u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365090u, 0x365098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365098u;
label_365098:
    // 0x365098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x365098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_36509c:
    // 0x36509c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36509cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3650a0:
    // 0x3650a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3650a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3650a4:
    // 0x3650a4: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x3650a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_3650a8:
    // 0x3650a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3650a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3650ac:
    // 0x3650ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3650acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_3650b0:
    // 0x3650b0: 0x24478d0c  addiu       $a3, $v0, -0x72F4
    ctx->pc = 0x3650b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937868));
label_3650b4:
    // 0x3650b4: 0xc06d02c  jal         func_1B40B0
label_3650b8:
    if (ctx->pc == 0x3650B8u) {
        ctx->pc = 0x3650BCu;
        goto label_3650bc;
    }
    ctx->pc = 0x3650B4u;
    SET_GPR_U32(ctx, 31, 0x3650BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3650B4u, 0x3650BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650BCu;
label_3650bc:
    // 0x3650bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3650c0:
    if (ctx->pc == 0x3650C0u) {
        ctx->pc = 0x3650C4u;
        goto label_3650c4;
    }
    ctx->pc = 0x3650BCu;
    {
        const bool branch_taken_0x3650bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3650bc) {
            ctx->pc = 0x3650D0u;
            goto label_3650d0;
        }
    }
    ctx->pc = 0x3650C4u;
label_3650c4:
    // 0x3650c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3650c8:
    // 0x3650c8: 0xc0da0f4  jal         func_3683D0
label_3650cc:
    if (ctx->pc == 0x3650CCu) {
        ctx->pc = 0x3650D0u;
        goto label_3650d0;
    }
    ctx->pc = 0x3650C8u;
    SET_GPR_U32(ctx, 31, 0x3650D0u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x3650C8u, 0x3650D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650D0u;
label_3650d0:
    // 0x3650d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3650d4:
    // 0x3650d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3650d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3650d8:
    // 0x3650d8: 0xc096b40  jal         func_25AD00
label_3650dc:
    if (ctx->pc == 0x3650DCu) {
        ctx->pc = 0x3650E0u;
        goto label_3650e0;
    }
    ctx->pc = 0x3650D8u;
    SET_GPR_U32(ctx, 31, 0x3650E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3650D8u, 0x3650E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650E0u;
label_3650e0:
    // 0x3650e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3650e4:
    // 0x3650e4: 0xc05cd10  jal         func_173440
label_3650e8:
    if (ctx->pc == 0x3650E8u) {
        ctx->pc = 0x3650ECu;
        goto label_3650ec;
    }
    ctx->pc = 0x3650E4u;
    SET_GPR_U32(ctx, 31, 0x3650ECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3650E4u, 0x3650ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650ECu;
label_3650ec:
    // 0x3650ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3650f0:
    // 0x3650f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3650f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3650f4:
    // 0x3650f4: 0xc05cec4  jal         func_173B10
label_3650f8:
    if (ctx->pc == 0x3650F8u) {
        ctx->pc = 0x3650FCu;
        goto label_3650fc;
    }
    ctx->pc = 0x3650F4u;
    SET_GPR_U32(ctx, 31, 0x3650FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3650F4u, 0x3650FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650FCu;
label_3650fc:
    // 0x3650fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365100:
    // 0x365100: 0xc097478  jal         func_25D1E0
label_365104:
    if (ctx->pc == 0x365104u) {
        ctx->pc = 0x365108u;
        goto label_365108;
    }
    ctx->pc = 0x365100u;
    SET_GPR_U32(ctx, 31, 0x365108u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365100u, 0x365108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365108u;
label_365108:
    // 0x365108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_36510c:
    // 0x36510c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36510cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_365110:
    // 0x365110: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_365114:
    if (ctx->pc == 0x365114u) {
        ctx->pc = 0x365118u;
        goto label_365118;
    }
    ctx->pc = 0x365110u;
    {
        const bool branch_taken_0x365110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365110) {
            ctx->pc = 0x365144u;
            goto label_365144;
        }
    }
    ctx->pc = 0x365118u;
label_365118:
    // 0x365118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36511c:
    // 0x36511c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365120:
    // 0x365120: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_365124:
    // 0x365124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365128:
    // 0x365128: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x365128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_36512c:
    // 0x36512c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365130:
    // 0x365130: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_365134:
    // 0x365134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365138:
    // 0x365138: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_36513c:
    // 0x36513c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_365140:
    // 0x365140: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365144:
    // 0x365144: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x365144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_365148:
    // 0x365148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36514c:
    // 0x36514c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x36514cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_365150:
    // 0x365150: 0x3e00008  jr          $ra
label_365154:
    if (ctx->pc == 0x365154u) {
        ctx->pc = 0x365158u;
        goto label_fallthrough_0x365150;
    }
    ctx->pc = 0x365150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x365150:
    ctx->pc = 0x365158u;
}
