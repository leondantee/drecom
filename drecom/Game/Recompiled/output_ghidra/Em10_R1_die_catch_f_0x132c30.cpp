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

// Function: Em10_R1_die_catch_f
// Address: 0x132c30 - 0x13306c
void Em10_R1_die_catch_f_0x132c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_die_catch_f_0x132c30");
#endif

    switch (ctx->pc) {
        case 0x132c30u: goto label_132c30;
        case 0x132c34u: goto label_132c34;
        case 0x132c38u: goto label_132c38;
        case 0x132c3cu: goto label_132c3c;
        case 0x132c40u: goto label_132c40;
        case 0x132c44u: goto label_132c44;
        case 0x132c48u: goto label_132c48;
        case 0x132c4cu: goto label_132c4c;
        case 0x132c50u: goto label_132c50;
        case 0x132c54u: goto label_132c54;
        case 0x132c58u: goto label_132c58;
        case 0x132c5cu: goto label_132c5c;
        case 0x132c60u: goto label_132c60;
        case 0x132c64u: goto label_132c64;
        case 0x132c68u: goto label_132c68;
        case 0x132c6cu: goto label_132c6c;
        case 0x132c70u: goto label_132c70;
        case 0x132c74u: goto label_132c74;
        case 0x132c78u: goto label_132c78;
        case 0x132c7cu: goto label_132c7c;
        case 0x132c80u: goto label_132c80;
        case 0x132c84u: goto label_132c84;
        case 0x132c88u: goto label_132c88;
        case 0x132c8cu: goto label_132c8c;
        case 0x132c90u: goto label_132c90;
        case 0x132c94u: goto label_132c94;
        case 0x132c98u: goto label_132c98;
        case 0x132c9cu: goto label_132c9c;
        case 0x132ca0u: goto label_132ca0;
        case 0x132ca4u: goto label_132ca4;
        case 0x132ca8u: goto label_132ca8;
        case 0x132cacu: goto label_132cac;
        case 0x132cb0u: goto label_132cb0;
        case 0x132cb4u: goto label_132cb4;
        case 0x132cb8u: goto label_132cb8;
        case 0x132cbcu: goto label_132cbc;
        case 0x132cc0u: goto label_132cc0;
        case 0x132cc4u: goto label_132cc4;
        case 0x132cc8u: goto label_132cc8;
        case 0x132cccu: goto label_132ccc;
        case 0x132cd0u: goto label_132cd0;
        case 0x132cd4u: goto label_132cd4;
        case 0x132cd8u: goto label_132cd8;
        case 0x132cdcu: goto label_132cdc;
        case 0x132ce0u: goto label_132ce0;
        case 0x132ce4u: goto label_132ce4;
        case 0x132ce8u: goto label_132ce8;
        case 0x132cecu: goto label_132cec;
        case 0x132cf0u: goto label_132cf0;
        case 0x132cf4u: goto label_132cf4;
        case 0x132cf8u: goto label_132cf8;
        case 0x132cfcu: goto label_132cfc;
        case 0x132d00u: goto label_132d00;
        case 0x132d04u: goto label_132d04;
        case 0x132d08u: goto label_132d08;
        case 0x132d0cu: goto label_132d0c;
        case 0x132d10u: goto label_132d10;
        case 0x132d14u: goto label_132d14;
        case 0x132d18u: goto label_132d18;
        case 0x132d1cu: goto label_132d1c;
        case 0x132d20u: goto label_132d20;
        case 0x132d24u: goto label_132d24;
        case 0x132d28u: goto label_132d28;
        case 0x132d2cu: goto label_132d2c;
        case 0x132d30u: goto label_132d30;
        case 0x132d34u: goto label_132d34;
        case 0x132d38u: goto label_132d38;
        case 0x132d3cu: goto label_132d3c;
        case 0x132d40u: goto label_132d40;
        case 0x132d44u: goto label_132d44;
        case 0x132d48u: goto label_132d48;
        case 0x132d4cu: goto label_132d4c;
        case 0x132d50u: goto label_132d50;
        case 0x132d54u: goto label_132d54;
        case 0x132d58u: goto label_132d58;
        case 0x132d5cu: goto label_132d5c;
        case 0x132d60u: goto label_132d60;
        case 0x132d64u: goto label_132d64;
        case 0x132d68u: goto label_132d68;
        case 0x132d6cu: goto label_132d6c;
        case 0x132d70u: goto label_132d70;
        case 0x132d74u: goto label_132d74;
        case 0x132d78u: goto label_132d78;
        case 0x132d7cu: goto label_132d7c;
        case 0x132d80u: goto label_132d80;
        case 0x132d84u: goto label_132d84;
        case 0x132d88u: goto label_132d88;
        case 0x132d8cu: goto label_132d8c;
        case 0x132d90u: goto label_132d90;
        case 0x132d94u: goto label_132d94;
        case 0x132d98u: goto label_132d98;
        case 0x132d9cu: goto label_132d9c;
        case 0x132da0u: goto label_132da0;
        case 0x132da4u: goto label_132da4;
        case 0x132da8u: goto label_132da8;
        case 0x132dacu: goto label_132dac;
        case 0x132db0u: goto label_132db0;
        case 0x132db4u: goto label_132db4;
        case 0x132db8u: goto label_132db8;
        case 0x132dbcu: goto label_132dbc;
        case 0x132dc0u: goto label_132dc0;
        case 0x132dc4u: goto label_132dc4;
        case 0x132dc8u: goto label_132dc8;
        case 0x132dccu: goto label_132dcc;
        case 0x132dd0u: goto label_132dd0;
        case 0x132dd4u: goto label_132dd4;
        case 0x132dd8u: goto label_132dd8;
        case 0x132ddcu: goto label_132ddc;
        case 0x132de0u: goto label_132de0;
        case 0x132de4u: goto label_132de4;
        case 0x132de8u: goto label_132de8;
        case 0x132decu: goto label_132dec;
        case 0x132df0u: goto label_132df0;
        case 0x132df4u: goto label_132df4;
        case 0x132df8u: goto label_132df8;
        case 0x132dfcu: goto label_132dfc;
        case 0x132e00u: goto label_132e00;
        case 0x132e04u: goto label_132e04;
        case 0x132e08u: goto label_132e08;
        case 0x132e0cu: goto label_132e0c;
        case 0x132e10u: goto label_132e10;
        case 0x132e14u: goto label_132e14;
        case 0x132e18u: goto label_132e18;
        case 0x132e1cu: goto label_132e1c;
        case 0x132e20u: goto label_132e20;
        case 0x132e24u: goto label_132e24;
        case 0x132e28u: goto label_132e28;
        case 0x132e2cu: goto label_132e2c;
        case 0x132e30u: goto label_132e30;
        case 0x132e34u: goto label_132e34;
        case 0x132e38u: goto label_132e38;
        case 0x132e3cu: goto label_132e3c;
        case 0x132e40u: goto label_132e40;
        case 0x132e44u: goto label_132e44;
        case 0x132e48u: goto label_132e48;
        case 0x132e4cu: goto label_132e4c;
        case 0x132e50u: goto label_132e50;
        case 0x132e54u: goto label_132e54;
        case 0x132e58u: goto label_132e58;
        case 0x132e5cu: goto label_132e5c;
        case 0x132e60u: goto label_132e60;
        case 0x132e64u: goto label_132e64;
        case 0x132e68u: goto label_132e68;
        case 0x132e6cu: goto label_132e6c;
        case 0x132e70u: goto label_132e70;
        case 0x132e74u: goto label_132e74;
        case 0x132e78u: goto label_132e78;
        case 0x132e7cu: goto label_132e7c;
        case 0x132e80u: goto label_132e80;
        case 0x132e84u: goto label_132e84;
        case 0x132e88u: goto label_132e88;
        case 0x132e8cu: goto label_132e8c;
        case 0x132e90u: goto label_132e90;
        case 0x132e94u: goto label_132e94;
        case 0x132e98u: goto label_132e98;
        case 0x132e9cu: goto label_132e9c;
        case 0x132ea0u: goto label_132ea0;
        case 0x132ea4u: goto label_132ea4;
        case 0x132ea8u: goto label_132ea8;
        case 0x132eacu: goto label_132eac;
        case 0x132eb0u: goto label_132eb0;
        case 0x132eb4u: goto label_132eb4;
        case 0x132eb8u: goto label_132eb8;
        case 0x132ebcu: goto label_132ebc;
        case 0x132ec0u: goto label_132ec0;
        case 0x132ec4u: goto label_132ec4;
        case 0x132ec8u: goto label_132ec8;
        case 0x132eccu: goto label_132ecc;
        case 0x132ed0u: goto label_132ed0;
        case 0x132ed4u: goto label_132ed4;
        case 0x132ed8u: goto label_132ed8;
        case 0x132edcu: goto label_132edc;
        case 0x132ee0u: goto label_132ee0;
        case 0x132ee4u: goto label_132ee4;
        case 0x132ee8u: goto label_132ee8;
        case 0x132eecu: goto label_132eec;
        case 0x132ef0u: goto label_132ef0;
        case 0x132ef4u: goto label_132ef4;
        case 0x132ef8u: goto label_132ef8;
        case 0x132efcu: goto label_132efc;
        case 0x132f00u: goto label_132f00;
        case 0x132f04u: goto label_132f04;
        case 0x132f08u: goto label_132f08;
        case 0x132f0cu: goto label_132f0c;
        case 0x132f10u: goto label_132f10;
        case 0x132f14u: goto label_132f14;
        case 0x132f18u: goto label_132f18;
        case 0x132f1cu: goto label_132f1c;
        case 0x132f20u: goto label_132f20;
        case 0x132f24u: goto label_132f24;
        case 0x132f28u: goto label_132f28;
        case 0x132f2cu: goto label_132f2c;
        case 0x132f30u: goto label_132f30;
        case 0x132f34u: goto label_132f34;
        case 0x132f38u: goto label_132f38;
        case 0x132f3cu: goto label_132f3c;
        case 0x132f40u: goto label_132f40;
        case 0x132f44u: goto label_132f44;
        case 0x132f48u: goto label_132f48;
        case 0x132f4cu: goto label_132f4c;
        case 0x132f50u: goto label_132f50;
        case 0x132f54u: goto label_132f54;
        case 0x132f58u: goto label_132f58;
        case 0x132f5cu: goto label_132f5c;
        case 0x132f60u: goto label_132f60;
        case 0x132f64u: goto label_132f64;
        case 0x132f68u: goto label_132f68;
        case 0x132f6cu: goto label_132f6c;
        case 0x132f70u: goto label_132f70;
        case 0x132f74u: goto label_132f74;
        case 0x132f78u: goto label_132f78;
        case 0x132f7cu: goto label_132f7c;
        case 0x132f80u: goto label_132f80;
        case 0x132f84u: goto label_132f84;
        case 0x132f88u: goto label_132f88;
        case 0x132f8cu: goto label_132f8c;
        case 0x132f90u: goto label_132f90;
        case 0x132f94u: goto label_132f94;
        case 0x132f98u: goto label_132f98;
        case 0x132f9cu: goto label_132f9c;
        case 0x132fa0u: goto label_132fa0;
        case 0x132fa4u: goto label_132fa4;
        case 0x132fa8u: goto label_132fa8;
        case 0x132facu: goto label_132fac;
        case 0x132fb0u: goto label_132fb0;
        case 0x132fb4u: goto label_132fb4;
        case 0x132fb8u: goto label_132fb8;
        case 0x132fbcu: goto label_132fbc;
        case 0x132fc0u: goto label_132fc0;
        case 0x132fc4u: goto label_132fc4;
        case 0x132fc8u: goto label_132fc8;
        case 0x132fccu: goto label_132fcc;
        case 0x132fd0u: goto label_132fd0;
        case 0x132fd4u: goto label_132fd4;
        case 0x132fd8u: goto label_132fd8;
        case 0x132fdcu: goto label_132fdc;
        case 0x132fe0u: goto label_132fe0;
        case 0x132fe4u: goto label_132fe4;
        case 0x132fe8u: goto label_132fe8;
        case 0x132fecu: goto label_132fec;
        case 0x132ff0u: goto label_132ff0;
        case 0x132ff4u: goto label_132ff4;
        case 0x132ff8u: goto label_132ff8;
        case 0x132ffcu: goto label_132ffc;
        case 0x133000u: goto label_133000;
        case 0x133004u: goto label_133004;
        case 0x133008u: goto label_133008;
        case 0x13300cu: goto label_13300c;
        case 0x133010u: goto label_133010;
        case 0x133014u: goto label_133014;
        case 0x133018u: goto label_133018;
        case 0x13301cu: goto label_13301c;
        case 0x133020u: goto label_133020;
        case 0x133024u: goto label_133024;
        case 0x133028u: goto label_133028;
        case 0x13302cu: goto label_13302c;
        case 0x133030u: goto label_133030;
        case 0x133034u: goto label_133034;
        case 0x133038u: goto label_133038;
        case 0x13303cu: goto label_13303c;
        case 0x133040u: goto label_133040;
        case 0x133044u: goto label_133044;
        case 0x133048u: goto label_133048;
        case 0x13304cu: goto label_13304c;
        case 0x133050u: goto label_133050;
        case 0x133054u: goto label_133054;
        case 0x133058u: goto label_133058;
        case 0x13305cu: goto label_13305c;
        case 0x133060u: goto label_133060;
        case 0x133064u: goto label_133064;
        case 0x133068u: goto label_133068;
        default: break;
    }

    ctx->pc = 0x132c30u;

label_132c30:
    // 0x132c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_132c34:
    // 0x132c34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x132c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_132c38:
    // 0x132c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_132c3c:
    // 0x132c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_132c40:
    // 0x132c40: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x132c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_132c44:
    // 0x132c44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132c48:
    // 0x132c48: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x132c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_132c4c:
    // 0x132c4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132c50:
    // 0x132c50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x132c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132c54:
    // 0x132c54: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x132c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_132c58:
    // 0x132c58: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x132c58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_132c5c:
    // 0x132c5c: 0x102000fd  beqz        $at, . + 4 + (0xFD << 2)
label_132c60:
    if (ctx->pc == 0x132C60u) {
        ctx->pc = 0x132C64u;
        goto label_132c64;
    }
    ctx->pc = 0x132C5Cu;
    {
        const bool branch_taken_0x132c5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c5c) {
            ctx->pc = 0x133054u;
            goto label_133054;
        }
    }
    ctx->pc = 0x132C64u;
label_132c64:
    // 0x132c64: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x132c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_132c68:
    // 0x132c68: 0x2464e580  addiu       $a0, $v1, -0x1A80
    ctx->pc = 0x132c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960512));
label_132c6c:
    // 0x132c6c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x132c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_132c70:
    // 0x132c70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_132c74:
    // 0x132c74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x132c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_132c78:
    // 0x132c78: 0x600008  jr          $v1
label_132c7c:
    if (ctx->pc == 0x132C7Cu) {
        ctx->pc = 0x132C80u;
        goto label_132c80;
    }
    ctx->pc = 0x132C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132C78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x132C80u;
label_132c80:
    // 0x132c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132c84:
    // 0x132c84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132c88:
    // 0x132c88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132c8c:
    // 0x132c8c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x132c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_132c90:
    // 0x132c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132c94:
    // 0x132c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132c98:
    // 0x132c98: 0xc0965d0  jal         func_259740
label_132c9c:
    if (ctx->pc == 0x132C9Cu) {
        ctx->pc = 0x132CA0u;
        goto label_132ca0;
    }
    ctx->pc = 0x132C98u;
    SET_GPR_U32(ctx, 31, 0x132CA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132C98u, 0x132CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CA0u;
label_132ca0:
    // 0x132ca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ca4:
    // 0x132ca4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132ca8:
    // 0x132ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132cac:
    // 0x132cac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132cb0:
    // 0x132cb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132cb4:
    // 0x132cb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132cb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132cb8:
    // 0x132cb8: 0xc096b40  jal         func_25AD00
label_132cbc:
    if (ctx->pc == 0x132CBCu) {
        ctx->pc = 0x132CC0u;
        goto label_132cc0;
    }
    ctx->pc = 0x132CB8u;
    SET_GPR_U32(ctx, 31, 0x132CC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132CB8u, 0x132CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CC0u;
label_132cc0:
    // 0x132cc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132cc4:
    // 0x132cc4: 0xc05cd10  jal         func_173440
label_132cc8:
    if (ctx->pc == 0x132CC8u) {
        ctx->pc = 0x132CCCu;
        goto label_132ccc;
    }
    ctx->pc = 0x132CC4u;
    SET_GPR_U32(ctx, 31, 0x132CCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132CC4u, 0x132CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CCCu;
label_132ccc:
    // 0x132ccc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132cd0:
    // 0x132cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132cd4:
    // 0x132cd4: 0xc05cec4  jal         func_173B10
label_132cd8:
    if (ctx->pc == 0x132CD8u) {
        ctx->pc = 0x132CDCu;
        goto label_132cdc;
    }
    ctx->pc = 0x132CD4u;
    SET_GPR_U32(ctx, 31, 0x132CDCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132CD4u, 0x132CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CDCu;
label_132cdc:
    // 0x132cdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ce0:
    // 0x132ce0: 0xc0974dc  jal         func_25D370
label_132ce4:
    if (ctx->pc == 0x132CE4u) {
        ctx->pc = 0x132CE8u;
        goto label_132ce8;
    }
    ctx->pc = 0x132CE0u;
    SET_GPR_U32(ctx, 31, 0x132CE8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132CE0u, 0x132CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CE8u;
label_132ce8:
    // 0x132ce8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132cec:
    // 0x132cec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_132cf0:
    // 0x132cf0: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
label_132cf4:
    if (ctx->pc == 0x132CF4u) {
        ctx->pc = 0x132CF8u;
        goto label_132cf8;
    }
    ctx->pc = 0x132CF0u;
    {
        const bool branch_taken_0x132cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132cf0) {
            ctx->pc = 0x133054u;
            goto label_133054;
        }
    }
    ctx->pc = 0x132CF8u;
label_132cf8:
    // 0x132cf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132cfc:
    // 0x132cfc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_132d00:
    // 0x132d00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_132d04:
    // 0x132d04: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_132d08:
    // 0x132d08: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_132d0c:
    if (ctx->pc == 0x132D0Cu) {
        ctx->pc = 0x132D10u;
        goto label_132d10;
    }
    ctx->pc = 0x132D08u;
    {
        const bool branch_taken_0x132d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d08) {
            ctx->pc = 0x133054u;
            goto label_133054;
        }
    }
    ctx->pc = 0x132D10u;
label_132d10:
    // 0x132d10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d14:
    // 0x132d14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d18:
    // 0x132d18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132d1c:
    // 0x132d1c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x132d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_132d20:
    // 0x132d20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132d24:
    // 0x132d24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132d28:
    // 0x132d28: 0xc0965d0  jal         func_259740
label_132d2c:
    if (ctx->pc == 0x132D2Cu) {
        ctx->pc = 0x132D30u;
        goto label_132d30;
    }
    ctx->pc = 0x132D28u;
    SET_GPR_U32(ctx, 31, 0x132D30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132D28u, 0x132D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D30u;
label_132d30:
    // 0x132d30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d34:
    // 0x132d34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132d38:
    // 0x132d38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132d3c:
    // 0x132d3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132d40:
    // 0x132d40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x132d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_132d44:
    // 0x132d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d48:
    // 0x132d48: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x132d48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_132d4c:
    // 0x132d4c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x132d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_132d50:
    // 0x132d50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d54:
    // 0x132d54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x132d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_132d58:
    // 0x132d58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d5c:
    // 0x132d5c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x132d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_132d60:
    // 0x132d60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x132d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_132d64:
    // 0x132d64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x132d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_132d68:
    // 0x132d68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x132d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_132d6c:
    // 0x132d6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_132d70:
    // 0x132d70: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x132d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
label_132d74:
    // 0x132d74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d78:
    // 0x132d78: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x132d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_132d7c:
    // 0x132d7c: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x132d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_132d80:
    // 0x132d80: 0xc048044  jal         func_120110
label_132d84:
    if (ctx->pc == 0x132D84u) {
        ctx->pc = 0x132D88u;
        goto label_132d88;
    }
    ctx->pc = 0x132D80u;
    SET_GPR_U32(ctx, 31, 0x132D88u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x132D80u, 0x132D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D88u;
label_132d88:
    // 0x132d88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_132d8c:
    // 0x132d8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x132d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_132d90:
    // 0x132d90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x132d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_132d94:
    // 0x132d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132d98:
    // 0x132d98: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x132d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_132d9c:
    // 0x132d9c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x132d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
label_132da0:
    // 0x132da0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x132da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_132da4:
    // 0x132da4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x132da4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132da8:
    // 0x132da8: 0xc067b18  jal         func_19EC60
label_132dac:
    if (ctx->pc == 0x132DACu) {
        ctx->pc = 0x132DB0u;
        goto label_132db0;
    }
    ctx->pc = 0x132DA8u;
    SET_GPR_U32(ctx, 31, 0x132DB0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x132DA8u, 0x132DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DB0u;
label_132db0:
    // 0x132db0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132db4:
    // 0x132db4: 0xc04da3c  jal         func_1368F0
label_132db8:
    if (ctx->pc == 0x132DB8u) {
        ctx->pc = 0x132DBCu;
        goto label_132dbc;
    }
    ctx->pc = 0x132DB4u;
    SET_GPR_U32(ctx, 31, 0x132DBCu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x132DB4u, 0x132DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DBCu;
label_132dbc:
    // 0x132dbc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x132dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_132dc0:
    // 0x132dc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x132dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_132dc4:
    // 0x132dc4: 0xc0684d8  jal         func_1A1360
label_132dc8:
    if (ctx->pc == 0x132DC8u) {
        ctx->pc = 0x132DCCu;
        goto label_132dcc;
    }
    ctx->pc = 0x132DC4u;
    SET_GPR_U32(ctx, 31, 0x132DCCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x132DC4u, 0x132DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DCCu;
label_132dcc:
    // 0x132dcc: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x132dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_132dd0:
    // 0x132dd0: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x132dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_132dd4:
    // 0x132dd4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x132dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_132dd8:
    // 0x132dd8: 0xc0684d8  jal         func_1A1360
label_132ddc:
    if (ctx->pc == 0x132DDCu) {
        ctx->pc = 0x132DE0u;
        goto label_132de0;
    }
    ctx->pc = 0x132DD8u;
    SET_GPR_U32(ctx, 31, 0x132DE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x132DD8u, 0x132DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DE0u;
label_132de0:
    // 0x132de0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132de4:
    // 0x132de4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132de8:
    // 0x132de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132dec:
    // 0x132dec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132df0:
    // 0x132df0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132df4:
    // 0x132df4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132df4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132df8:
    // 0x132df8: 0xc096b40  jal         func_25AD00
label_132dfc:
    if (ctx->pc == 0x132DFCu) {
        ctx->pc = 0x132E00u;
        goto label_132e00;
    }
    ctx->pc = 0x132DF8u;
    SET_GPR_U32(ctx, 31, 0x132E00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132DF8u, 0x132E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E00u;
label_132e00:
    // 0x132e00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e04:
    // 0x132e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132e08:
    // 0x132e08: 0xc05cec4  jal         func_173B10
label_132e0c:
    if (ctx->pc == 0x132E0Cu) {
        ctx->pc = 0x132E10u;
        goto label_132e10;
    }
    ctx->pc = 0x132E08u;
    SET_GPR_U32(ctx, 31, 0x132E10u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132E08u, 0x132E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E10u;
label_132e10:
    // 0x132e10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e14:
    // 0x132e14: 0xc0974dc  jal         func_25D370
label_132e18:
    if (ctx->pc == 0x132E18u) {
        ctx->pc = 0x132E1Cu;
        goto label_132e1c;
    }
    ctx->pc = 0x132E14u;
    SET_GPR_U32(ctx, 31, 0x132E1Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132E14u, 0x132E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E1Cu;
label_132e1c:
    // 0x132e1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e20:
    // 0x132e20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_132e24:
    // 0x132e24: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
label_132e28:
    if (ctx->pc == 0x132E28u) {
        ctx->pc = 0x132E2Cu;
        goto label_132e2c;
    }
    ctx->pc = 0x132E24u;
    {
        const bool branch_taken_0x132e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e24) {
            ctx->pc = 0x133054u;
            goto label_133054;
        }
    }
    ctx->pc = 0x132E2Cu;
label_132e2c:
    // 0x132e2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e30:
    // 0x132e30: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_132e34:
    // 0x132e34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_132e38:
    // 0x132e38: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_132e3c:
    // 0x132e3c: 0x10000085  b           . + 4 + (0x85 << 2)
label_132e40:
    if (ctx->pc == 0x132E40u) {
        ctx->pc = 0x132E44u;
        goto label_132e44;
    }
    ctx->pc = 0x132E3Cu;
    {
        const bool branch_taken_0x132e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e3c) {
            ctx->pc = 0x133054u;
            goto label_133054;
        }
    }
    ctx->pc = 0x132E44u;
label_132e44:
    // 0x132e44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e48:
    // 0x132e48: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e4c:
    // 0x132e4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_132e50:
    // 0x132e50: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x132e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_132e54:
    // 0x132e54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132e58:
    // 0x132e58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_132e5c:
    // 0x132e5c: 0xc0965d0  jal         func_259740
label_132e60:
    if (ctx->pc == 0x132E60u) {
        ctx->pc = 0x132E64u;
        goto label_132e64;
    }
    ctx->pc = 0x132E5Cu;
    SET_GPR_U32(ctx, 31, 0x132E64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132E5Cu, 0x132E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E64u;
label_132e64:
    // 0x132e64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e68:
    // 0x132e68: 0xc04d07c  jal         func_1341F0
label_132e6c:
    if (ctx->pc == 0x132E6Cu) {
        ctx->pc = 0x132E70u;
        goto label_132e70;
    }
    ctx->pc = 0x132E68u;
    SET_GPR_U32(ctx, 31, 0x132E70u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x132E68u, 0x132E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E70u;
label_132e70:
    // 0x132e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e74:
    // 0x132e74: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x132e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_132e78:
    // 0x132e78: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_132e7c:
    // 0x132e7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x132e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_132e80:
    // 0x132e80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x132e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_132e84:
    // 0x132e84: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x132e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_132e88:
    // 0x132e88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132e8c:
    // 0x132e8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x132e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_132e90:
    // 0x132e90: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x132e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_132e94:
    // 0x132e94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x132e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_132e98:
    // 0x132e98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x132e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_132e9c:
    // 0x132e9c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x132e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_132ea0:
    // 0x132ea0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ea4:
    // 0x132ea4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x132ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_132ea8:
    // 0x132ea8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132eac:
    // 0x132eac: 0xc04d994  jal         func_136650
label_132eb0:
    if (ctx->pc == 0x132EB0u) {
        ctx->pc = 0x132EB4u;
        goto label_132eb4;
    }
    ctx->pc = 0x132EACu;
    SET_GPR_U32(ctx, 31, 0x132EB4u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x132EACu, 0x132EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EB4u;
label_132eb4:
    // 0x132eb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132eb8:
    // 0x132eb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132ebc:
    // 0x132ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132ec0:
    // 0x132ec0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132ec4:
    // 0x132ec4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ec8:
    // 0x132ec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132ecc:
    // 0x132ecc: 0xc096b40  jal         func_25AD00
label_132ed0:
    if (ctx->pc == 0x132ED0u) {
        ctx->pc = 0x132ED4u;
        goto label_132ed4;
    }
    ctx->pc = 0x132ECCu;
    SET_GPR_U32(ctx, 31, 0x132ED4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132ECCu, 0x132ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ED4u;
label_132ed4:
    // 0x132ed4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ed8:
    // 0x132ed8: 0xc0974dc  jal         func_25D370
label_132edc:
    if (ctx->pc == 0x132EDCu) {
        ctx->pc = 0x132EE0u;
        goto label_132ee0;
    }
    ctx->pc = 0x132ED8u;
    SET_GPR_U32(ctx, 31, 0x132EE0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132ED8u, 0x132EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EE0u;
label_132ee0:
    // 0x132ee0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ee4:
    // 0x132ee4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x132ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_132ee8:
    // 0x132ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_132eec:
    if (ctx->pc == 0x132EECu) {
        ctx->pc = 0x132EF0u;
        goto label_132ef0;
    }
    ctx->pc = 0x132EE8u;
    {
        const bool branch_taken_0x132ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ee8) {
            ctx->pc = 0x132F08u;
            goto label_132f08;
        }
    }
    ctx->pc = 0x132EF0u;
label_132ef0:
    // 0x132ef0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ef4:
    // 0x132ef4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x132ef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_132ef8:
    // 0x132ef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_132efc:
    // 0x132efc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x132efcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_132f00:
    // 0x132f00: 0x10000037  b           . + 4 + (0x37 << 2)
label_132f04:
    if (ctx->pc == 0x132F04u) {
        ctx->pc = 0x132F08u;
        goto label_132f08;
    }
    ctx->pc = 0x132F00u;
    {
        const bool branch_taken_0x132f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f00) {
            ctx->pc = 0x132FE0u;
            goto label_132fe0;
        }
    }
    ctx->pc = 0x132F08u;
label_132f08:
    // 0x132f08: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x132f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_132f0c:
    // 0x132f0c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x132f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_132f10:
    // 0x132f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132f14:
    // 0x132f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f18:
    // 0x132f18: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x132f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_132f1c:
    // 0x132f1c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x132f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_132f20:
    // 0x132f20: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x132f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_132f24:
    // 0x132f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132f28:
    // 0x132f28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f2c:
    // 0x132f2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_132f30:
    // 0x132f30: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x132f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_132f34:
    // 0x132f34: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x132f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_132f38:
    // 0x132f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x132f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_132f3c:
    // 0x132f3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f40:
    // 0x132f40: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x132f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_132f44:
    // 0x132f44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f48:
    // 0x132f48: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x132f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_132f4c:
    // 0x132f4c: 0xc096cc8  jal         func_25B320
label_132f50:
    if (ctx->pc == 0x132F50u) {
        ctx->pc = 0x132F54u;
        goto label_132f54;
    }
    ctx->pc = 0x132F4Cu;
    SET_GPR_U32(ctx, 31, 0x132F54u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F4Cu, 0x132F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F54u;
label_132f54:
    // 0x132f54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f58:
    // 0x132f58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_132f5c:
    // 0x132f5c: 0xc096cc8  jal         func_25B320
label_132f60:
    if (ctx->pc == 0x132F60u) {
        ctx->pc = 0x132F64u;
        goto label_132f64;
    }
    ctx->pc = 0x132F5Cu;
    SET_GPR_U32(ctx, 31, 0x132F64u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F5Cu, 0x132F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F64u;
label_132f64:
    // 0x132f64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f68:
    // 0x132f68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x132f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_132f6c:
    // 0x132f6c: 0xc096cc8  jal         func_25B320
label_132f70:
    if (ctx->pc == 0x132F70u) {
        ctx->pc = 0x132F74u;
        goto label_132f74;
    }
    ctx->pc = 0x132F6Cu;
    SET_GPR_U32(ctx, 31, 0x132F74u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F6Cu, 0x132F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F74u;
label_132f74:
    // 0x132f74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f78:
    // 0x132f78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_132f7c:
    // 0x132f7c: 0xc096cc8  jal         func_25B320
label_132f80:
    if (ctx->pc == 0x132F80u) {
        ctx->pc = 0x132F84u;
        goto label_132f84;
    }
    ctx->pc = 0x132F7Cu;
    SET_GPR_U32(ctx, 31, 0x132F84u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F7Cu, 0x132F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F84u;
label_132f84:
    // 0x132f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f88:
    // 0x132f88: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x132f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_132f8c:
    // 0x132f8c: 0xc096cc8  jal         func_25B320
label_132f90:
    if (ctx->pc == 0x132F90u) {
        ctx->pc = 0x132F94u;
        goto label_132f94;
    }
    ctx->pc = 0x132F8Cu;
    SET_GPR_U32(ctx, 31, 0x132F94u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F8Cu, 0x132F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F94u;
label_132f94:
    // 0x132f94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132f98:
    // 0x132f98: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x132f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_132f9c:
    // 0x132f9c: 0xc096cc8  jal         func_25B320
label_132fa0:
    if (ctx->pc == 0x132FA0u) {
        ctx->pc = 0x132FA4u;
        goto label_132fa4;
    }
    ctx->pc = 0x132F9Cu;
    SET_GPR_U32(ctx, 31, 0x132FA4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132F9Cu, 0x132FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FA4u;
label_132fa4:
    // 0x132fa4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132fa8:
    // 0x132fa8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x132fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_132fac:
    // 0x132fac: 0xc096cc8  jal         func_25B320
label_132fb0:
    if (ctx->pc == 0x132FB0u) {
        ctx->pc = 0x132FB4u;
        goto label_132fb4;
    }
    ctx->pc = 0x132FACu;
    SET_GPR_U32(ctx, 31, 0x132FB4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132FACu, 0x132FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FB4u;
label_132fb4:
    // 0x132fb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132fb8:
    // 0x132fb8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_132fbc:
    // 0x132fbc: 0xc096cc8  jal         func_25B320
label_132fc0:
    if (ctx->pc == 0x132FC0u) {
        ctx->pc = 0x132FC4u;
        goto label_132fc4;
    }
    ctx->pc = 0x132FBCu;
    SET_GPR_U32(ctx, 31, 0x132FC4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x132FBCu, 0x132FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FC4u;
label_132fc4:
    // 0x132fc4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_132fc8:
    // 0x132fc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132fcc:
    // 0x132fcc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x132fccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_132fd0:
    // 0x132fd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132fd4:
    // 0x132fd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_132fd8:
    // 0x132fd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132fdc:
    // 0x132fdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_132fe0:
    // 0x132fe0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132fe4:
    // 0x132fe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_132fe8:
    // 0x132fe8: 0xc096b40  jal         func_25AD00
label_132fec:
    if (ctx->pc == 0x132FECu) {
        ctx->pc = 0x132FF0u;
        goto label_132ff0;
    }
    ctx->pc = 0x132FE8u;
    SET_GPR_U32(ctx, 31, 0x132FF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132FE8u, 0x132FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FF0u;
label_132ff0:
    // 0x132ff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_132ff4:
    // 0x132ff4: 0xc0974dc  jal         func_25D370
label_132ff8:
    if (ctx->pc == 0x132FF8u) {
        ctx->pc = 0x132FFCu;
        goto label_132ffc;
    }
    ctx->pc = 0x132FF4u;
    SET_GPR_U32(ctx, 31, 0x132FFCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132FF4u, 0x132FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FFCu;
label_132ffc:
    // 0x132ffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133000:
    // 0x133000: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_133004:
    // 0x133004: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_133008:
    if (ctx->pc == 0x133008u) {
        ctx->pc = 0x13300Cu;
        goto label_13300c;
    }
    ctx->pc = 0x133004u;
    {
        const bool branch_taken_0x133004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133004) {
            ctx->pc = 0x133024u;
            goto label_133024;
        }
    }
    ctx->pc = 0x13300Cu;
label_13300c:
    // 0x13300c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133010:
    // 0x133010: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_133014:
    // 0x133014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_133018:
    // 0x133018: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_13301c:
    // 0x13301c: 0x1000000d  b           . + 4 + (0xD << 2)
label_133020:
    if (ctx->pc == 0x133020u) {
        ctx->pc = 0x133024u;
        goto label_133024;
    }
    ctx->pc = 0x13301Cu;
    {
        const bool branch_taken_0x13301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13301c) {
            ctx->pc = 0x133054u;
            goto label_133054;
        }
    }
    ctx->pc = 0x133024u;
label_133024:
    // 0x133024: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133028:
    // 0x133028: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13302c:
    // 0x13302c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x13302cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_133030:
    // 0x133030: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_133034:
    // 0x133034: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133038:
    // 0x133038: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13303c:
    // 0x13303c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x13303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_133040:
    // 0x133040: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_133044:
    // 0x133044: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133048:
    // 0x133048: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_13304c:
    // 0x13304c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_133050:
    // 0x133050: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_133054:
    // 0x133054: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x133054u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_133058:
    // 0x133058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13305c:
    // 0x13305c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13305cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_133060:
    // 0x133060: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x133060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_133064:
    // 0x133064: 0x3e00008  jr          $ra
label_133068:
    if (ctx->pc == 0x133068u) {
        ctx->pc = 0x13306Cu;
        goto label_fallthrough_0x133064;
    }
    ctx->pc = 0x133064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x133064:
    ctx->pc = 0x13306Cu;
}
