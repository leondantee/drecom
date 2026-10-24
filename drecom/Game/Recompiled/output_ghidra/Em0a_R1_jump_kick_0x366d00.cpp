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

// Function: Em0a_R1_jump_kick
// Address: 0x366d00 - 0x367054
void Em0a_R1_jump_kick_0x366d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_jump_kick_0x366d00");
#endif

    switch (ctx->pc) {
        case 0x366d00u: goto label_366d00;
        case 0x366d04u: goto label_366d04;
        case 0x366d08u: goto label_366d08;
        case 0x366d0cu: goto label_366d0c;
        case 0x366d10u: goto label_366d10;
        case 0x366d14u: goto label_366d14;
        case 0x366d18u: goto label_366d18;
        case 0x366d1cu: goto label_366d1c;
        case 0x366d20u: goto label_366d20;
        case 0x366d24u: goto label_366d24;
        case 0x366d28u: goto label_366d28;
        case 0x366d2cu: goto label_366d2c;
        case 0x366d30u: goto label_366d30;
        case 0x366d34u: goto label_366d34;
        case 0x366d38u: goto label_366d38;
        case 0x366d3cu: goto label_366d3c;
        case 0x366d40u: goto label_366d40;
        case 0x366d44u: goto label_366d44;
        case 0x366d48u: goto label_366d48;
        case 0x366d4cu: goto label_366d4c;
        case 0x366d50u: goto label_366d50;
        case 0x366d54u: goto label_366d54;
        case 0x366d58u: goto label_366d58;
        case 0x366d5cu: goto label_366d5c;
        case 0x366d60u: goto label_366d60;
        case 0x366d64u: goto label_366d64;
        case 0x366d68u: goto label_366d68;
        case 0x366d6cu: goto label_366d6c;
        case 0x366d70u: goto label_366d70;
        case 0x366d74u: goto label_366d74;
        case 0x366d78u: goto label_366d78;
        case 0x366d7cu: goto label_366d7c;
        case 0x366d80u: goto label_366d80;
        case 0x366d84u: goto label_366d84;
        case 0x366d88u: goto label_366d88;
        case 0x366d8cu: goto label_366d8c;
        case 0x366d90u: goto label_366d90;
        case 0x366d94u: goto label_366d94;
        case 0x366d98u: goto label_366d98;
        case 0x366d9cu: goto label_366d9c;
        case 0x366da0u: goto label_366da0;
        case 0x366da4u: goto label_366da4;
        case 0x366da8u: goto label_366da8;
        case 0x366dacu: goto label_366dac;
        case 0x366db0u: goto label_366db0;
        case 0x366db4u: goto label_366db4;
        case 0x366db8u: goto label_366db8;
        case 0x366dbcu: goto label_366dbc;
        case 0x366dc0u: goto label_366dc0;
        case 0x366dc4u: goto label_366dc4;
        case 0x366dc8u: goto label_366dc8;
        case 0x366dccu: goto label_366dcc;
        case 0x366dd0u: goto label_366dd0;
        case 0x366dd4u: goto label_366dd4;
        case 0x366dd8u: goto label_366dd8;
        case 0x366ddcu: goto label_366ddc;
        case 0x366de0u: goto label_366de0;
        case 0x366de4u: goto label_366de4;
        case 0x366de8u: goto label_366de8;
        case 0x366decu: goto label_366dec;
        case 0x366df0u: goto label_366df0;
        case 0x366df4u: goto label_366df4;
        case 0x366df8u: goto label_366df8;
        case 0x366dfcu: goto label_366dfc;
        case 0x366e00u: goto label_366e00;
        case 0x366e04u: goto label_366e04;
        case 0x366e08u: goto label_366e08;
        case 0x366e0cu: goto label_366e0c;
        case 0x366e10u: goto label_366e10;
        case 0x366e14u: goto label_366e14;
        case 0x366e18u: goto label_366e18;
        case 0x366e1cu: goto label_366e1c;
        case 0x366e20u: goto label_366e20;
        case 0x366e24u: goto label_366e24;
        case 0x366e28u: goto label_366e28;
        case 0x366e2cu: goto label_366e2c;
        case 0x366e30u: goto label_366e30;
        case 0x366e34u: goto label_366e34;
        case 0x366e38u: goto label_366e38;
        case 0x366e3cu: goto label_366e3c;
        case 0x366e40u: goto label_366e40;
        case 0x366e44u: goto label_366e44;
        case 0x366e48u: goto label_366e48;
        case 0x366e4cu: goto label_366e4c;
        case 0x366e50u: goto label_366e50;
        case 0x366e54u: goto label_366e54;
        case 0x366e58u: goto label_366e58;
        case 0x366e5cu: goto label_366e5c;
        case 0x366e60u: goto label_366e60;
        case 0x366e64u: goto label_366e64;
        case 0x366e68u: goto label_366e68;
        case 0x366e6cu: goto label_366e6c;
        case 0x366e70u: goto label_366e70;
        case 0x366e74u: goto label_366e74;
        case 0x366e78u: goto label_366e78;
        case 0x366e7cu: goto label_366e7c;
        case 0x366e80u: goto label_366e80;
        case 0x366e84u: goto label_366e84;
        case 0x366e88u: goto label_366e88;
        case 0x366e8cu: goto label_366e8c;
        case 0x366e90u: goto label_366e90;
        case 0x366e94u: goto label_366e94;
        case 0x366e98u: goto label_366e98;
        case 0x366e9cu: goto label_366e9c;
        case 0x366ea0u: goto label_366ea0;
        case 0x366ea4u: goto label_366ea4;
        case 0x366ea8u: goto label_366ea8;
        case 0x366eacu: goto label_366eac;
        case 0x366eb0u: goto label_366eb0;
        case 0x366eb4u: goto label_366eb4;
        case 0x366eb8u: goto label_366eb8;
        case 0x366ebcu: goto label_366ebc;
        case 0x366ec0u: goto label_366ec0;
        case 0x366ec4u: goto label_366ec4;
        case 0x366ec8u: goto label_366ec8;
        case 0x366eccu: goto label_366ecc;
        case 0x366ed0u: goto label_366ed0;
        case 0x366ed4u: goto label_366ed4;
        case 0x366ed8u: goto label_366ed8;
        case 0x366edcu: goto label_366edc;
        case 0x366ee0u: goto label_366ee0;
        case 0x366ee4u: goto label_366ee4;
        case 0x366ee8u: goto label_366ee8;
        case 0x366eecu: goto label_366eec;
        case 0x366ef0u: goto label_366ef0;
        case 0x366ef4u: goto label_366ef4;
        case 0x366ef8u: goto label_366ef8;
        case 0x366efcu: goto label_366efc;
        case 0x366f00u: goto label_366f00;
        case 0x366f04u: goto label_366f04;
        case 0x366f08u: goto label_366f08;
        case 0x366f0cu: goto label_366f0c;
        case 0x366f10u: goto label_366f10;
        case 0x366f14u: goto label_366f14;
        case 0x366f18u: goto label_366f18;
        case 0x366f1cu: goto label_366f1c;
        case 0x366f20u: goto label_366f20;
        case 0x366f24u: goto label_366f24;
        case 0x366f28u: goto label_366f28;
        case 0x366f2cu: goto label_366f2c;
        case 0x366f30u: goto label_366f30;
        case 0x366f34u: goto label_366f34;
        case 0x366f38u: goto label_366f38;
        case 0x366f3cu: goto label_366f3c;
        case 0x366f40u: goto label_366f40;
        case 0x366f44u: goto label_366f44;
        case 0x366f48u: goto label_366f48;
        case 0x366f4cu: goto label_366f4c;
        case 0x366f50u: goto label_366f50;
        case 0x366f54u: goto label_366f54;
        case 0x366f58u: goto label_366f58;
        case 0x366f5cu: goto label_366f5c;
        case 0x366f60u: goto label_366f60;
        case 0x366f64u: goto label_366f64;
        case 0x366f68u: goto label_366f68;
        case 0x366f6cu: goto label_366f6c;
        case 0x366f70u: goto label_366f70;
        case 0x366f74u: goto label_366f74;
        case 0x366f78u: goto label_366f78;
        case 0x366f7cu: goto label_366f7c;
        case 0x366f80u: goto label_366f80;
        case 0x366f84u: goto label_366f84;
        case 0x366f88u: goto label_366f88;
        case 0x366f8cu: goto label_366f8c;
        case 0x366f90u: goto label_366f90;
        case 0x366f94u: goto label_366f94;
        case 0x366f98u: goto label_366f98;
        case 0x366f9cu: goto label_366f9c;
        case 0x366fa0u: goto label_366fa0;
        case 0x366fa4u: goto label_366fa4;
        case 0x366fa8u: goto label_366fa8;
        case 0x366facu: goto label_366fac;
        case 0x366fb0u: goto label_366fb0;
        case 0x366fb4u: goto label_366fb4;
        case 0x366fb8u: goto label_366fb8;
        case 0x366fbcu: goto label_366fbc;
        case 0x366fc0u: goto label_366fc0;
        case 0x366fc4u: goto label_366fc4;
        case 0x366fc8u: goto label_366fc8;
        case 0x366fccu: goto label_366fcc;
        case 0x366fd0u: goto label_366fd0;
        case 0x366fd4u: goto label_366fd4;
        case 0x366fd8u: goto label_366fd8;
        case 0x366fdcu: goto label_366fdc;
        case 0x366fe0u: goto label_366fe0;
        case 0x366fe4u: goto label_366fe4;
        case 0x366fe8u: goto label_366fe8;
        case 0x366fecu: goto label_366fec;
        case 0x366ff0u: goto label_366ff0;
        case 0x366ff4u: goto label_366ff4;
        case 0x366ff8u: goto label_366ff8;
        case 0x366ffcu: goto label_366ffc;
        case 0x367000u: goto label_367000;
        case 0x367004u: goto label_367004;
        case 0x367008u: goto label_367008;
        case 0x36700cu: goto label_36700c;
        case 0x367010u: goto label_367010;
        case 0x367014u: goto label_367014;
        case 0x367018u: goto label_367018;
        case 0x36701cu: goto label_36701c;
        case 0x367020u: goto label_367020;
        case 0x367024u: goto label_367024;
        case 0x367028u: goto label_367028;
        case 0x36702cu: goto label_36702c;
        case 0x367030u: goto label_367030;
        case 0x367034u: goto label_367034;
        case 0x367038u: goto label_367038;
        case 0x36703cu: goto label_36703c;
        case 0x367040u: goto label_367040;
        case 0x367044u: goto label_367044;
        case 0x367048u: goto label_367048;
        case 0x36704cu: goto label_36704c;
        case 0x367050u: goto label_367050;
        default: break;
    }

    ctx->pc = 0x366d00u;

label_366d00:
    // 0x366d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x366d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_366d04:
    // 0x366d04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x366d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_366d08:
    // 0x366d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_366d0c:
    // 0x366d0c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x366d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_366d10:
    // 0x366d10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d14:
    // 0x366d14: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x366d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_366d18:
    // 0x366d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d1c:
    // 0x366d1c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x366d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_366d20:
    // 0x366d20: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x366d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_366d24:
    // 0x366d24: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x366d24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_366d28:
    // 0x366d28: 0x102000c5  beqz        $at, . + 4 + (0xC5 << 2)
label_366d2c:
    if (ctx->pc == 0x366D2Cu) {
        ctx->pc = 0x366D30u;
        goto label_366d30;
    }
    ctx->pc = 0x366D28u;
    {
        const bool branch_taken_0x366d28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x366d28) {
            ctx->pc = 0x367040u;
            goto label_367040;
        }
    }
    ctx->pc = 0x366D30u;
label_366d30:
    // 0x366d30: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x366d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_366d34:
    // 0x366d34: 0x24642af0  addiu       $a0, $v1, 0x2AF0
    ctx->pc = 0x366d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10992));
label_366d38:
    // 0x366d38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x366d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_366d3c:
    // 0x366d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x366d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_366d40:
    // 0x366d40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x366d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_366d44:
    // 0x366d44: 0x600008  jr          $v1
label_366d48:
    if (ctx->pc == 0x366D48u) {
        ctx->pc = 0x366D4Cu;
        goto label_366d4c;
    }
    ctx->pc = 0x366D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366D44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x366D4Cu;
label_366d4c:
    // 0x366d4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d50:
    // 0x366d50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d54:
    // 0x366d54: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_366d58:
    // 0x366d58: 0x24061e22  addiu       $a2, $zero, 0x1E22
    ctx->pc = 0x366d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7714));
label_366d5c:
    // 0x366d5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366d60:
    // 0x366d60: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_366d64:
    // 0x366d64: 0xc0965d0  jal         func_259740
label_366d68:
    if (ctx->pc == 0x366D68u) {
        ctx->pc = 0x366D6Cu;
        goto label_366d6c;
    }
    ctx->pc = 0x366D64u;
    SET_GPR_U32(ctx, 31, 0x366D6Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366D64u, 0x366D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D6Cu;
label_366d6c:
    // 0x366d6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d70:
    // 0x366d70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_366d74:
    // 0x366d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_366d78:
    // 0x366d78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366d7c:
    // 0x366d7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d80:
    // 0x366d80: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x366d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_366d84:
    // 0x366d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x366d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_366d88:
    // 0x366d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x366d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_366d8c:
    // 0x366d8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_366d90:
    if (ctx->pc == 0x366D90u) {
        ctx->pc = 0x366D94u;
        goto label_366d94;
    }
    ctx->pc = 0x366D8Cu;
    {
        const bool branch_taken_0x366d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366d8c) {
            ctx->pc = 0x366DE0u;
            goto label_366de0;
        }
    }
    ctx->pc = 0x366D94u;
label_366d94:
    // 0x366d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366d98:
    // 0x366d98: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x366d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_366d9c:
    // 0x366d9c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x366d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_366da0:
    // 0x366da0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x366da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_366da4:
    // 0x366da4: 0xc05ccfc  jal         func_1733F0
label_366da8:
    if (ctx->pc == 0x366DA8u) {
        ctx->pc = 0x366DACu;
        goto label_366dac;
    }
    ctx->pc = 0x366DA4u;
    SET_GPR_U32(ctx, 31, 0x366DACu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x366DA4u, 0x366DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DACu;
label_366dac:
    // 0x366dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366db0:
    // 0x366db0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x366db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_366db4:
    // 0x366db4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366db8:
    // 0x366db8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366dbc:
    // 0x366dbc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x366dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_366dc0:
    // 0x366dc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x366dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_366dc4:
    // 0x366dc4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x366dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_366dc8:
    // 0x366dc8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x366dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_366dcc:
    // 0x366dcc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x366dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_366dd0:
    // 0x366dd0: 0xc058f50  jal         func_163D40
label_366dd4:
    if (ctx->pc == 0x366DD4u) {
        ctx->pc = 0x366DD8u;
        goto label_366dd8;
    }
    ctx->pc = 0x366DD0u;
    SET_GPR_U32(ctx, 31, 0x366DD8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x366DD0u, 0x366DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DD8u;
label_366dd8:
    // 0x366dd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366ddc:
    // 0x366ddc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x366ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_366de0:
    // 0x366de0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366de4:
    // 0x366de4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366de4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366de8:
    // 0x366de8: 0xc096b40  jal         func_25AD00
label_366dec:
    if (ctx->pc == 0x366DECu) {
        ctx->pc = 0x366DF0u;
        goto label_366df0;
    }
    ctx->pc = 0x366DE8u;
    SET_GPR_U32(ctx, 31, 0x366DF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366DE8u, 0x366DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DF0u;
label_366df0:
    // 0x366df0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366df4:
    // 0x366df4: 0xc05cd10  jal         func_173440
label_366df8:
    if (ctx->pc == 0x366DF8u) {
        ctx->pc = 0x366DFCu;
        goto label_366dfc;
    }
    ctx->pc = 0x366DF4u;
    SET_GPR_U32(ctx, 31, 0x366DFCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366DF4u, 0x366DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DFCu;
label_366dfc:
    // 0x366dfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e00:
    // 0x366e00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366e00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366e04:
    // 0x366e04: 0xc05cec4  jal         func_173B10
label_366e08:
    if (ctx->pc == 0x366E08u) {
        ctx->pc = 0x366E0Cu;
        goto label_366e0c;
    }
    ctx->pc = 0x366E04u;
    SET_GPR_U32(ctx, 31, 0x366E0Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366E04u, 0x366E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E0Cu;
label_366e0c:
    // 0x366e0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e10:
    // 0x366e10: 0xc097478  jal         func_25D1E0
label_366e14:
    if (ctx->pc == 0x366E14u) {
        ctx->pc = 0x366E18u;
        goto label_366e18;
    }
    ctx->pc = 0x366E10u;
    SET_GPR_U32(ctx, 31, 0x366E18u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366E10u, 0x366E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E18u;
label_366e18:
    // 0x366e18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e1c:
    // 0x366e1c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x366e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
label_366e20:
    // 0x366e20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x366e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_366e24:
    // 0x366e24: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x366e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_366e28:
    // 0x366e28: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_366e2c:
    if (ctx->pc == 0x366E2Cu) {
        ctx->pc = 0x366E30u;
        goto label_366e30;
    }
    ctx->pc = 0x366E28u;
    {
        const bool branch_taken_0x366e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e28) {
            ctx->pc = 0x366EACu;
            goto label_366eac;
        }
    }
    ctx->pc = 0x366E30u;
label_366e30:
    // 0x366e30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x366e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_366e34:
    // 0x366e34: 0xc0675a4  jal         func_19D690
label_366e38:
    if (ctx->pc == 0x366E38u) {
        ctx->pc = 0x366E3Cu;
        goto label_366e3c;
    }
    ctx->pc = 0x366E34u;
    SET_GPR_U32(ctx, 31, 0x366E3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x366E34u, 0x366E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E3Cu;
label_366e3c:
    // 0x366e3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e40:
    // 0x366e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e44:
    // 0x366e44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x366e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_366e48:
    // 0x366e48: 0x244507c0  addiu       $a1, $v0, 0x7C0
    ctx->pc = 0x366e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
label_366e4c:
    // 0x366e4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x366e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_366e50:
    // 0x366e50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x366e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_366e54:
    // 0x366e54: 0x24478d24  addiu       $a3, $v0, -0x72DC
    ctx->pc = 0x366e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937892));
label_366e58:
    // 0x366e58: 0xc06d02c  jal         func_1B40B0
label_366e5c:
    if (ctx->pc == 0x366E5Cu) {
        ctx->pc = 0x366E60u;
        goto label_366e60;
    }
    ctx->pc = 0x366E58u;
    SET_GPR_U32(ctx, 31, 0x366E60u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x366E58u, 0x366E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E60u;
label_366e60:
    // 0x366e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_366e64:
    if (ctx->pc == 0x366E64u) {
        ctx->pc = 0x366E68u;
        goto label_366e68;
    }
    ctx->pc = 0x366E60u;
    {
        const bool branch_taken_0x366e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e60) {
            ctx->pc = 0x366E74u;
            goto label_366e74;
        }
    }
    ctx->pc = 0x366E68u;
label_366e68:
    // 0x366e68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x366e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_366e6c:
    // 0x366e6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e70:
    // 0x366e70: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x366e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_366e74:
    // 0x366e74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e78:
    // 0x366e78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366e7c:
    // 0x366e7c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x366e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_366e80:
    // 0x366e80: 0x244508c0  addiu       $a1, $v0, 0x8C0
    ctx->pc = 0x366e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
label_366e84:
    // 0x366e84: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x366e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_366e88:
    // 0x366e88: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x366e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_366e8c:
    // 0x366e8c: 0x24478d24  addiu       $a3, $v0, -0x72DC
    ctx->pc = 0x366e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937892));
label_366e90:
    // 0x366e90: 0xc06d02c  jal         func_1B40B0
label_366e94:
    if (ctx->pc == 0x366E94u) {
        ctx->pc = 0x366E98u;
        goto label_366e98;
    }
    ctx->pc = 0x366E90u;
    SET_GPR_U32(ctx, 31, 0x366E98u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x366E90u, 0x366E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E98u;
label_366e98:
    // 0x366e98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_366e9c:
    if (ctx->pc == 0x366E9Cu) {
        ctx->pc = 0x366EA0u;
        goto label_366ea0;
    }
    ctx->pc = 0x366E98u;
    {
        const bool branch_taken_0x366e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e98) {
            ctx->pc = 0x366EACu;
            goto label_366eac;
        }
    }
    ctx->pc = 0x366EA0u;
label_366ea0:
    // 0x366ea0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x366ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_366ea4:
    // 0x366ea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366ea8:
    // 0x366ea8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x366ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_366eac:
    // 0x366eac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366eb0:
    // 0x366eb0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_366eb4:
    // 0x366eb4: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_366eb8:
    if (ctx->pc == 0x366EB8u) {
        ctx->pc = 0x366EBCu;
        goto label_366ebc;
    }
    ctx->pc = 0x366EB4u;
    {
        const bool branch_taken_0x366eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366eb4) {
            ctx->pc = 0x367040u;
            goto label_367040;
        }
    }
    ctx->pc = 0x366EBCu;
label_366ebc:
    // 0x366ebc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366ec0:
    // 0x366ec0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x366ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_366ec4:
    // 0x366ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x366ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_366ec8:
    // 0x366ec8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x366ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_366ecc:
    // 0x366ecc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_366ed0:
    if (ctx->pc == 0x366ED0u) {
        ctx->pc = 0x366ED4u;
        goto label_366ed4;
    }
    ctx->pc = 0x366ECCu;
    {
        const bool branch_taken_0x366ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ecc) {
            ctx->pc = 0x367040u;
            goto label_367040;
        }
    }
    ctx->pc = 0x366ED4u;
label_366ed4:
    // 0x366ed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366ed8:
    // 0x366ed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366edc:
    // 0x366edc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_366ee0:
    // 0x366ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x366ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366ee4:
    // 0x366ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366ee8:
    // 0x366ee8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_366eec:
    // 0x366eec: 0xc0965d0  jal         func_259740
label_366ef0:
    if (ctx->pc == 0x366EF0u) {
        ctx->pc = 0x366EF4u;
        goto label_366ef4;
    }
    ctx->pc = 0x366EECu;
    SET_GPR_U32(ctx, 31, 0x366EF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366EECu, 0x366EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366EF4u;
label_366ef4:
    // 0x366ef4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366ef8:
    // 0x366ef8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x366ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_366efc:
    // 0x366efc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x366efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_366f00:
    // 0x366f00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x366f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_366f04:
    // 0x366f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_366f08:
    // 0x366f08: 0x0  nop
    ctx->pc = 0x366f08u;
    // NOP
label_366f0c:
    // 0x366f0c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x366f0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_366f10:
    // 0x366f10: 0xc058fec  jal         func_163FB0
label_366f14:
    if (ctx->pc == 0x366F14u) {
        ctx->pc = 0x366F18u;
        goto label_366f18;
    }
    ctx->pc = 0x366F10u;
    SET_GPR_U32(ctx, 31, 0x366F18u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x366F10u, 0x366F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F18u;
label_366f18:
    // 0x366f18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f1c:
    // 0x366f1c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x366f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_366f20:
    // 0x366f20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f24:
    // 0x366f24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_366f28:
    // 0x366f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_366f2c:
    // 0x366f2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366f30:
    // 0x366f30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f34:
    // 0x366f34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366f34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366f38:
    // 0x366f38: 0xc096b40  jal         func_25AD00
label_366f3c:
    if (ctx->pc == 0x366F3Cu) {
        ctx->pc = 0x366F40u;
        goto label_366f40;
    }
    ctx->pc = 0x366F38u;
    SET_GPR_U32(ctx, 31, 0x366F40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366F38u, 0x366F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F40u;
label_366f40:
    // 0x366f40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f44:
    // 0x366f44: 0xc05cd10  jal         func_173440
label_366f48:
    if (ctx->pc == 0x366F48u) {
        ctx->pc = 0x366F4Cu;
        goto label_366f4c;
    }
    ctx->pc = 0x366F44u;
    SET_GPR_U32(ctx, 31, 0x366F4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366F44u, 0x366F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F4Cu;
label_366f4c:
    // 0x366f4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f50:
    // 0x366f50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366f54:
    // 0x366f54: 0xc05cec4  jal         func_173B10
label_366f58:
    if (ctx->pc == 0x366F58u) {
        ctx->pc = 0x366F5Cu;
        goto label_366f5c;
    }
    ctx->pc = 0x366F54u;
    SET_GPR_U32(ctx, 31, 0x366F5Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366F54u, 0x366F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F5Cu;
label_366f5c:
    // 0x366f5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f60:
    // 0x366f60: 0xc097478  jal         func_25D1E0
label_366f64:
    if (ctx->pc == 0x366F64u) {
        ctx->pc = 0x366F68u;
        goto label_366f68;
    }
    ctx->pc = 0x366F60u;
    SET_GPR_U32(ctx, 31, 0x366F68u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366F60u, 0x366F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F68u;
label_366f68:
    // 0x366f68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366f6c:
    // 0x366f6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f70:
    // 0x366f70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_366f74:
    // 0x366f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f78:
    // 0x366f78: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x366f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_366f7c:
    // 0x366f7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f80:
    // 0x366f80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_366f84:
    // 0x366f84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f88:
    // 0x366f88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_366f8c:
    // 0x366f8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366f90:
    // 0x366f90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_366f94:
    // 0x366f94: 0x1000002a  b           . + 4 + (0x2A << 2)
label_366f98:
    if (ctx->pc == 0x366F98u) {
        ctx->pc = 0x366F9Cu;
        goto label_366f9c;
    }
    ctx->pc = 0x366F94u;
    {
        const bool branch_taken_0x366f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f94) {
            ctx->pc = 0x367040u;
            goto label_367040;
        }
    }
    ctx->pc = 0x366F9Cu;
label_366f9c:
    // 0x366f9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366fa0:
    // 0x366fa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366fa4:
    // 0x366fa4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_366fa8:
    // 0x366fa8: 0x24060523  addiu       $a2, $zero, 0x523
    ctx->pc = 0x366fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1315));
label_366fac:
    // 0x366fac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366fb0:
    // 0x366fb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_366fb4:
    // 0x366fb4: 0xc0965d0  jal         func_259740
label_366fb8:
    if (ctx->pc == 0x366FB8u) {
        ctx->pc = 0x366FBCu;
        goto label_366fbc;
    }
    ctx->pc = 0x366FB4u;
    SET_GPR_U32(ctx, 31, 0x366FBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366FB4u, 0x366FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FBCu;
label_366fbc:
    // 0x366fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366fc0:
    // 0x366fc0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_366fc4:
    // 0x366fc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_366fc8:
    // 0x366fc8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366fcc:
    // 0x366fcc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366fd0:
    // 0x366fd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366fd4:
    // 0x366fd4: 0xc096b40  jal         func_25AD00
label_366fd8:
    if (ctx->pc == 0x366FD8u) {
        ctx->pc = 0x366FDCu;
        goto label_366fdc;
    }
    ctx->pc = 0x366FD4u;
    SET_GPR_U32(ctx, 31, 0x366FDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366FD4u, 0x366FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FDCu;
label_366fdc:
    // 0x366fdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366fe0:
    // 0x366fe0: 0xc05cd10  jal         func_173440
label_366fe4:
    if (ctx->pc == 0x366FE4u) {
        ctx->pc = 0x366FE8u;
        goto label_366fe8;
    }
    ctx->pc = 0x366FE0u;
    SET_GPR_U32(ctx, 31, 0x366FE8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366FE0u, 0x366FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FE8u;
label_366fe8:
    // 0x366fe8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366fec:
    // 0x366fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_366ff0:
    // 0x366ff0: 0xc05cec4  jal         func_173B10
label_366ff4:
    if (ctx->pc == 0x366FF4u) {
        ctx->pc = 0x366FF8u;
        goto label_366ff8;
    }
    ctx->pc = 0x366FF0u;
    SET_GPR_U32(ctx, 31, 0x366FF8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366FF0u, 0x366FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366FF8u;
label_366ff8:
    // 0x366ff8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_366ffc:
    // 0x366ffc: 0xc097478  jal         func_25D1E0
label_367000:
    if (ctx->pc == 0x367000u) {
        ctx->pc = 0x367004u;
        goto label_367004;
    }
    ctx->pc = 0x366FFCu;
    SET_GPR_U32(ctx, 31, 0x367004u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366FFCu, 0x367004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367004u;
label_367004:
    // 0x367004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_367008:
    // 0x367008: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_36700c:
    // 0x36700c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_367010:
    if (ctx->pc == 0x367010u) {
        ctx->pc = 0x367014u;
        goto label_367014;
    }
    ctx->pc = 0x36700Cu;
    {
        const bool branch_taken_0x36700c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36700c) {
            ctx->pc = 0x367040u;
            goto label_367040;
        }
    }
    ctx->pc = 0x367014u;
label_367014:
    // 0x367014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367018:
    // 0x367018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_36701c:
    // 0x36701c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36701cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_367020:
    // 0x367020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_367024:
    // 0x367024: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x367024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_367028:
    // 0x367028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_36702c:
    // 0x36702c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36702cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_367030:
    // 0x367030: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_367034:
    // 0x367034: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x367034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_367038:
    // 0x367038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x367038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_36703c:
    // 0x36703c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36703cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_367040:
    // 0x367040: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x367040u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_367044:
    // 0x367044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367048:
    // 0x367048: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x367048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_36704c:
    // 0x36704c: 0x3e00008  jr          $ra
label_367050:
    if (ctx->pc == 0x367050u) {
        ctx->pc = 0x367054u;
        goto label_fallthrough_0x36704c;
    }
    ctx->pc = 0x36704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36704c:
    ctx->pc = 0x367054u;
}
