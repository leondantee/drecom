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

// Function: Em01_R1_jump_up
// Address: 0x303db0 - 0x3041c4
void Em01_R1_jump_up_0x303db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_jump_up_0x303db0");
#endif

    switch (ctx->pc) {
        case 0x303db0u: goto label_303db0;
        case 0x303db4u: goto label_303db4;
        case 0x303db8u: goto label_303db8;
        case 0x303dbcu: goto label_303dbc;
        case 0x303dc0u: goto label_303dc0;
        case 0x303dc4u: goto label_303dc4;
        case 0x303dc8u: goto label_303dc8;
        case 0x303dccu: goto label_303dcc;
        case 0x303dd0u: goto label_303dd0;
        case 0x303dd4u: goto label_303dd4;
        case 0x303dd8u: goto label_303dd8;
        case 0x303ddcu: goto label_303ddc;
        case 0x303de0u: goto label_303de0;
        case 0x303de4u: goto label_303de4;
        case 0x303de8u: goto label_303de8;
        case 0x303decu: goto label_303dec;
        case 0x303df0u: goto label_303df0;
        case 0x303df4u: goto label_303df4;
        case 0x303df8u: goto label_303df8;
        case 0x303dfcu: goto label_303dfc;
        case 0x303e00u: goto label_303e00;
        case 0x303e04u: goto label_303e04;
        case 0x303e08u: goto label_303e08;
        case 0x303e0cu: goto label_303e0c;
        case 0x303e10u: goto label_303e10;
        case 0x303e14u: goto label_303e14;
        case 0x303e18u: goto label_303e18;
        case 0x303e1cu: goto label_303e1c;
        case 0x303e20u: goto label_303e20;
        case 0x303e24u: goto label_303e24;
        case 0x303e28u: goto label_303e28;
        case 0x303e2cu: goto label_303e2c;
        case 0x303e30u: goto label_303e30;
        case 0x303e34u: goto label_303e34;
        case 0x303e38u: goto label_303e38;
        case 0x303e3cu: goto label_303e3c;
        case 0x303e40u: goto label_303e40;
        case 0x303e44u: goto label_303e44;
        case 0x303e48u: goto label_303e48;
        case 0x303e4cu: goto label_303e4c;
        case 0x303e50u: goto label_303e50;
        case 0x303e54u: goto label_303e54;
        case 0x303e58u: goto label_303e58;
        case 0x303e5cu: goto label_303e5c;
        case 0x303e60u: goto label_303e60;
        case 0x303e64u: goto label_303e64;
        case 0x303e68u: goto label_303e68;
        case 0x303e6cu: goto label_303e6c;
        case 0x303e70u: goto label_303e70;
        case 0x303e74u: goto label_303e74;
        case 0x303e78u: goto label_303e78;
        case 0x303e7cu: goto label_303e7c;
        case 0x303e80u: goto label_303e80;
        case 0x303e84u: goto label_303e84;
        case 0x303e88u: goto label_303e88;
        case 0x303e8cu: goto label_303e8c;
        case 0x303e90u: goto label_303e90;
        case 0x303e94u: goto label_303e94;
        case 0x303e98u: goto label_303e98;
        case 0x303e9cu: goto label_303e9c;
        case 0x303ea0u: goto label_303ea0;
        case 0x303ea4u: goto label_303ea4;
        case 0x303ea8u: goto label_303ea8;
        case 0x303eacu: goto label_303eac;
        case 0x303eb0u: goto label_303eb0;
        case 0x303eb4u: goto label_303eb4;
        case 0x303eb8u: goto label_303eb8;
        case 0x303ebcu: goto label_303ebc;
        case 0x303ec0u: goto label_303ec0;
        case 0x303ec4u: goto label_303ec4;
        case 0x303ec8u: goto label_303ec8;
        case 0x303eccu: goto label_303ecc;
        case 0x303ed0u: goto label_303ed0;
        case 0x303ed4u: goto label_303ed4;
        case 0x303ed8u: goto label_303ed8;
        case 0x303edcu: goto label_303edc;
        case 0x303ee0u: goto label_303ee0;
        case 0x303ee4u: goto label_303ee4;
        case 0x303ee8u: goto label_303ee8;
        case 0x303eecu: goto label_303eec;
        case 0x303ef0u: goto label_303ef0;
        case 0x303ef4u: goto label_303ef4;
        case 0x303ef8u: goto label_303ef8;
        case 0x303efcu: goto label_303efc;
        case 0x303f00u: goto label_303f00;
        case 0x303f04u: goto label_303f04;
        case 0x303f08u: goto label_303f08;
        case 0x303f0cu: goto label_303f0c;
        case 0x303f10u: goto label_303f10;
        case 0x303f14u: goto label_303f14;
        case 0x303f18u: goto label_303f18;
        case 0x303f1cu: goto label_303f1c;
        case 0x303f20u: goto label_303f20;
        case 0x303f24u: goto label_303f24;
        case 0x303f28u: goto label_303f28;
        case 0x303f2cu: goto label_303f2c;
        case 0x303f30u: goto label_303f30;
        case 0x303f34u: goto label_303f34;
        case 0x303f38u: goto label_303f38;
        case 0x303f3cu: goto label_303f3c;
        case 0x303f40u: goto label_303f40;
        case 0x303f44u: goto label_303f44;
        case 0x303f48u: goto label_303f48;
        case 0x303f4cu: goto label_303f4c;
        case 0x303f50u: goto label_303f50;
        case 0x303f54u: goto label_303f54;
        case 0x303f58u: goto label_303f58;
        case 0x303f5cu: goto label_303f5c;
        case 0x303f60u: goto label_303f60;
        case 0x303f64u: goto label_303f64;
        case 0x303f68u: goto label_303f68;
        case 0x303f6cu: goto label_303f6c;
        case 0x303f70u: goto label_303f70;
        case 0x303f74u: goto label_303f74;
        case 0x303f78u: goto label_303f78;
        case 0x303f7cu: goto label_303f7c;
        case 0x303f80u: goto label_303f80;
        case 0x303f84u: goto label_303f84;
        case 0x303f88u: goto label_303f88;
        case 0x303f8cu: goto label_303f8c;
        case 0x303f90u: goto label_303f90;
        case 0x303f94u: goto label_303f94;
        case 0x303f98u: goto label_303f98;
        case 0x303f9cu: goto label_303f9c;
        case 0x303fa0u: goto label_303fa0;
        case 0x303fa4u: goto label_303fa4;
        case 0x303fa8u: goto label_303fa8;
        case 0x303facu: goto label_303fac;
        case 0x303fb0u: goto label_303fb0;
        case 0x303fb4u: goto label_303fb4;
        case 0x303fb8u: goto label_303fb8;
        case 0x303fbcu: goto label_303fbc;
        case 0x303fc0u: goto label_303fc0;
        case 0x303fc4u: goto label_303fc4;
        case 0x303fc8u: goto label_303fc8;
        case 0x303fccu: goto label_303fcc;
        case 0x303fd0u: goto label_303fd0;
        case 0x303fd4u: goto label_303fd4;
        case 0x303fd8u: goto label_303fd8;
        case 0x303fdcu: goto label_303fdc;
        case 0x303fe0u: goto label_303fe0;
        case 0x303fe4u: goto label_303fe4;
        case 0x303fe8u: goto label_303fe8;
        case 0x303fecu: goto label_303fec;
        case 0x303ff0u: goto label_303ff0;
        case 0x303ff4u: goto label_303ff4;
        case 0x303ff8u: goto label_303ff8;
        case 0x303ffcu: goto label_303ffc;
        case 0x304000u: goto label_304000;
        case 0x304004u: goto label_304004;
        case 0x304008u: goto label_304008;
        case 0x30400cu: goto label_30400c;
        case 0x304010u: goto label_304010;
        case 0x304014u: goto label_304014;
        case 0x304018u: goto label_304018;
        case 0x30401cu: goto label_30401c;
        case 0x304020u: goto label_304020;
        case 0x304024u: goto label_304024;
        case 0x304028u: goto label_304028;
        case 0x30402cu: goto label_30402c;
        case 0x304030u: goto label_304030;
        case 0x304034u: goto label_304034;
        case 0x304038u: goto label_304038;
        case 0x30403cu: goto label_30403c;
        case 0x304040u: goto label_304040;
        case 0x304044u: goto label_304044;
        case 0x304048u: goto label_304048;
        case 0x30404cu: goto label_30404c;
        case 0x304050u: goto label_304050;
        case 0x304054u: goto label_304054;
        case 0x304058u: goto label_304058;
        case 0x30405cu: goto label_30405c;
        case 0x304060u: goto label_304060;
        case 0x304064u: goto label_304064;
        case 0x304068u: goto label_304068;
        case 0x30406cu: goto label_30406c;
        case 0x304070u: goto label_304070;
        case 0x304074u: goto label_304074;
        case 0x304078u: goto label_304078;
        case 0x30407cu: goto label_30407c;
        case 0x304080u: goto label_304080;
        case 0x304084u: goto label_304084;
        case 0x304088u: goto label_304088;
        case 0x30408cu: goto label_30408c;
        case 0x304090u: goto label_304090;
        case 0x304094u: goto label_304094;
        case 0x304098u: goto label_304098;
        case 0x30409cu: goto label_30409c;
        case 0x3040a0u: goto label_3040a0;
        case 0x3040a4u: goto label_3040a4;
        case 0x3040a8u: goto label_3040a8;
        case 0x3040acu: goto label_3040ac;
        case 0x3040b0u: goto label_3040b0;
        case 0x3040b4u: goto label_3040b4;
        case 0x3040b8u: goto label_3040b8;
        case 0x3040bcu: goto label_3040bc;
        case 0x3040c0u: goto label_3040c0;
        case 0x3040c4u: goto label_3040c4;
        case 0x3040c8u: goto label_3040c8;
        case 0x3040ccu: goto label_3040cc;
        case 0x3040d0u: goto label_3040d0;
        case 0x3040d4u: goto label_3040d4;
        case 0x3040d8u: goto label_3040d8;
        case 0x3040dcu: goto label_3040dc;
        case 0x3040e0u: goto label_3040e0;
        case 0x3040e4u: goto label_3040e4;
        case 0x3040e8u: goto label_3040e8;
        case 0x3040ecu: goto label_3040ec;
        case 0x3040f0u: goto label_3040f0;
        case 0x3040f4u: goto label_3040f4;
        case 0x3040f8u: goto label_3040f8;
        case 0x3040fcu: goto label_3040fc;
        case 0x304100u: goto label_304100;
        case 0x304104u: goto label_304104;
        case 0x304108u: goto label_304108;
        case 0x30410cu: goto label_30410c;
        case 0x304110u: goto label_304110;
        case 0x304114u: goto label_304114;
        case 0x304118u: goto label_304118;
        case 0x30411cu: goto label_30411c;
        case 0x304120u: goto label_304120;
        case 0x304124u: goto label_304124;
        case 0x304128u: goto label_304128;
        case 0x30412cu: goto label_30412c;
        case 0x304130u: goto label_304130;
        case 0x304134u: goto label_304134;
        case 0x304138u: goto label_304138;
        case 0x30413cu: goto label_30413c;
        case 0x304140u: goto label_304140;
        case 0x304144u: goto label_304144;
        case 0x304148u: goto label_304148;
        case 0x30414cu: goto label_30414c;
        case 0x304150u: goto label_304150;
        case 0x304154u: goto label_304154;
        case 0x304158u: goto label_304158;
        case 0x30415cu: goto label_30415c;
        case 0x304160u: goto label_304160;
        case 0x304164u: goto label_304164;
        case 0x304168u: goto label_304168;
        case 0x30416cu: goto label_30416c;
        case 0x304170u: goto label_304170;
        case 0x304174u: goto label_304174;
        case 0x304178u: goto label_304178;
        case 0x30417cu: goto label_30417c;
        case 0x304180u: goto label_304180;
        case 0x304184u: goto label_304184;
        case 0x304188u: goto label_304188;
        case 0x30418cu: goto label_30418c;
        case 0x304190u: goto label_304190;
        case 0x304194u: goto label_304194;
        case 0x304198u: goto label_304198;
        case 0x30419cu: goto label_30419c;
        case 0x3041a0u: goto label_3041a0;
        case 0x3041a4u: goto label_3041a4;
        case 0x3041a8u: goto label_3041a8;
        case 0x3041acu: goto label_3041ac;
        case 0x3041b0u: goto label_3041b0;
        case 0x3041b4u: goto label_3041b4;
        case 0x3041b8u: goto label_3041b8;
        case 0x3041bcu: goto label_3041bc;
        case 0x3041c0u: goto label_3041c0;
        default: break;
    }

    ctx->pc = 0x303db0u;

label_303db0:
    // 0x303db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_303db4:
    // 0x303db4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x303db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_303db8:
    // 0x303db8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x303db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_303dbc:
    // 0x303dbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303dc0:
    // 0x303dc0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x303dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_303dc4:
    // 0x303dc4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x303dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_303dc8:
    // 0x303dc8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x303dc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_303dcc:
    // 0x303dcc: 0x102000f9  beqz        $at, . + 4 + (0xF9 << 2)
label_303dd0:
    if (ctx->pc == 0x303DD0u) {
        ctx->pc = 0x303DD4u;
        goto label_303dd4;
    }
    ctx->pc = 0x303DCCu;
    {
        const bool branch_taken_0x303dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x303dcc) {
            ctx->pc = 0x3041B4u;
            goto label_3041b4;
        }
    }
    ctx->pc = 0x303DD4u;
label_303dd4:
    // 0x303dd4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x303dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_303dd8:
    // 0x303dd8: 0x24641b50  addiu       $a0, $v1, 0x1B50
    ctx->pc = 0x303dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6992));
label_303ddc:
    // 0x303ddc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x303ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_303de0:
    // 0x303de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_303de4:
    // 0x303de4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x303de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_303de8:
    // 0x303de8: 0x600008  jr          $v1
label_303dec:
    if (ctx->pc == 0x303DECu) {
        ctx->pc = 0x303DF0u;
        goto label_303df0;
    }
    ctx->pc = 0x303DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303DE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x303DF0u;
label_303df0:
    // 0x303df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303df4:
    // 0x303df4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303df8:
    // 0x303df8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_303dfc:
    // 0x303dfc: 0x24062801  addiu       $a2, $zero, 0x2801
    ctx->pc = 0x303dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10241));
label_303e00:
    // 0x303e00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303e04:
    // 0x303e04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_303e08:
    // 0x303e08: 0xc0965d0  jal         func_259740
label_303e0c:
    if (ctx->pc == 0x303E0Cu) {
        ctx->pc = 0x303E10u;
        goto label_303e10;
    }
    ctx->pc = 0x303E08u;
    SET_GPR_U32(ctx, 31, 0x303E10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303E08u, 0x303E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E10u;
label_303e10:
    // 0x303e10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e14:
    // 0x303e14: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x303e14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_303e18:
    // 0x303e18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e1c:
    // 0x303e1c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x303e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_303e20:
    // 0x303e20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_303e24:
    // 0x303e24: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_303e28:
    // 0x303e28: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x303e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_303e2c:
    // 0x303e2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x303e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_303e30:
    // 0x303e30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x303e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_303e34:
    // 0x303e34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e38:
    // 0x303e38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e3c:
    // 0x303e3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e40:
    // 0x303e40: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x303e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_303e44:
    // 0x303e44: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x303e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_303e48:
    // 0x303e48: 0xc44d1264  lwc1        $f13, 0x1264($v0)
    ctx->pc = 0x303e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_303e4c:
    // 0x303e4c: 0xc05c8f8  jal         func_1723E0
label_303e50:
    if (ctx->pc == 0x303E50u) {
        ctx->pc = 0x303E54u;
        goto label_303e54;
    }
    ctx->pc = 0x303E4Cu;
    SET_GPR_U32(ctx, 31, 0x303E54u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x303E4Cu, 0x303E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E54u;
label_303e54:
    // 0x303e54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e58:
    // 0x303e58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x303e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303e5c:
    // 0x303e5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x303e5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_303e60:
    // 0x303e60: 0xc058fec  jal         func_163FB0
label_303e64:
    if (ctx->pc == 0x303E64u) {
        ctx->pc = 0x303E68u;
        goto label_303e68;
    }
    ctx->pc = 0x303E60u;
    SET_GPR_U32(ctx, 31, 0x303E68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x303E60u, 0x303E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E68u;
label_303e68:
    // 0x303e68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e6c:
    // 0x303e6c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x303e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_303e70:
    // 0x303e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e74:
    // 0x303e74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_303e78:
    // 0x303e78: 0xc096b40  jal         func_25AD00
label_303e7c:
    if (ctx->pc == 0x303E7Cu) {
        ctx->pc = 0x303E80u;
        goto label_303e80;
    }
    ctx->pc = 0x303E78u;
    SET_GPR_U32(ctx, 31, 0x303E80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303E78u, 0x303E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E80u;
label_303e80:
    // 0x303e80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e84:
    // 0x303e84: 0xc05cd10  jal         func_173440
label_303e88:
    if (ctx->pc == 0x303E88u) {
        ctx->pc = 0x303E8Cu;
        goto label_303e8c;
    }
    ctx->pc = 0x303E84u;
    SET_GPR_U32(ctx, 31, 0x303E8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303E84u, 0x303E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E8Cu;
label_303e8c:
    // 0x303e8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303e90:
    // 0x303e90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x303e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_303e94:
    // 0x303e94: 0xc05cec4  jal         func_173B10
label_303e98:
    if (ctx->pc == 0x303E98u) {
        ctx->pc = 0x303E9Cu;
        goto label_303e9c;
    }
    ctx->pc = 0x303E94u;
    SET_GPR_U32(ctx, 31, 0x303E9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x303E94u, 0x303E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E9Cu;
label_303e9c:
    // 0x303e9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303ea0:
    // 0x303ea0: 0xc0974c8  jal         func_25D320
label_303ea4:
    if (ctx->pc == 0x303EA4u) {
        ctx->pc = 0x303EA8u;
        goto label_303ea8;
    }
    ctx->pc = 0x303EA0u;
    SET_GPR_U32(ctx, 31, 0x303EA8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303EA0u, 0x303EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EA8u;
label_303ea8:
    // 0x303ea8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303eac:
    // 0x303eac: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x303eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_303eb0:
    // 0x303eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_303eb4:
    // 0x303eb4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x303eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_303eb8:
    // 0x303eb8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x303eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_303ebc:
    // 0x303ebc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303ebcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_303ec0:
    // 0x303ec0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x303ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_303ec4:
    // 0x303ec4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303ec4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_303ec8:
    // 0x303ec8: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x303ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
label_303ecc:
    // 0x303ecc: 0x142000b9  bnez        $at, . + 4 + (0xB9 << 2)
label_303ed0:
    if (ctx->pc == 0x303ED0u) {
        ctx->pc = 0x303ED4u;
        goto label_303ed4;
    }
    ctx->pc = 0x303ECCu;
    {
        const bool branch_taken_0x303ecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ecc) {
            ctx->pc = 0x3041B4u;
            goto label_3041b4;
        }
    }
    ctx->pc = 0x303ED4u;
label_303ed4:
    // 0x303ed4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303ed8:
    // 0x303ed8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x303ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_303edc:
    // 0x303edc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_303ee0:
    // 0x303ee0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x303ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_303ee4:
    // 0x303ee4: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_303ee8:
    if (ctx->pc == 0x303EE8u) {
        ctx->pc = 0x303EECu;
        goto label_303eec;
    }
    ctx->pc = 0x303EE4u;
    {
        const bool branch_taken_0x303ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ee4) {
            ctx->pc = 0x3041B4u;
            goto label_3041b4;
        }
    }
    ctx->pc = 0x303EECu;
label_303eec:
    // 0x303eec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303ef0:
    // 0x303ef0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303ef4:
    // 0x303ef4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_303ef8:
    // 0x303ef8: 0x2406282e  addiu       $a2, $zero, 0x282E
    ctx->pc = 0x303ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10286));
label_303efc:
    // 0x303efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303f00:
    // 0x303f00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_303f04:
    // 0x303f04: 0xc0965d0  jal         func_259740
label_303f08:
    if (ctx->pc == 0x303F08u) {
        ctx->pc = 0x303F0Cu;
        goto label_303f0c;
    }
    ctx->pc = 0x303F04u;
    SET_GPR_U32(ctx, 31, 0x303F0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303F04u, 0x303F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F0Cu;
label_303f0c:
    // 0x303f0c: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x303f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
label_303f10:
    // 0x303f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303f14:
    // 0x303f14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f18:
    // 0x303f18: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x303f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_303f1c:
    // 0x303f1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f20:
    // 0x303f20: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x303f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_303f24:
    // 0x303f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_303f28:
    // 0x303f28: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_303f2c:
    // 0x303f2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f30:
    // 0x303f30: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x303f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f34:
    // 0x303f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f38:
    // 0x303f38: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x303f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_303f3c:
    // 0x303f3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x303f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_303f40:
    // 0x303f40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x303f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_303f44:
    // 0x303f44: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x303f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_303f48:
    // 0x303f48: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x303f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_303f4c:
    // 0x303f4c: 0xc46d1264  lwc1        $f13, 0x1264($v1)
    ctx->pc = 0x303f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_303f50:
    // 0x303f50: 0xc05c8f8  jal         func_1723E0
label_303f54:
    if (ctx->pc == 0x303F54u) {
        ctx->pc = 0x303F58u;
        goto label_303f58;
    }
    ctx->pc = 0x303F50u;
    SET_GPR_U32(ctx, 31, 0x303F58u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x303F50u, 0x303F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F58u;
label_303f58:
    // 0x303f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f5c:
    // 0x303f5c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x303f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303f60:
    // 0x303f60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x303f60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_303f64:
    // 0x303f64: 0xc058fec  jal         func_163FB0
label_303f68:
    if (ctx->pc == 0x303F68u) {
        ctx->pc = 0x303F6Cu;
        goto label_303f6c;
    }
    ctx->pc = 0x303F64u;
    SET_GPR_U32(ctx, 31, 0x303F6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x303F64u, 0x303F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F6Cu;
label_303f6c:
    // 0x303f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f70:
    // 0x303f70: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x303f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_303f74:
    // 0x303f74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f78:
    // 0x303f78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303f78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_303f7c:
    // 0x303f7c: 0xc096b40  jal         func_25AD00
label_303f80:
    if (ctx->pc == 0x303F80u) {
        ctx->pc = 0x303F84u;
        goto label_303f84;
    }
    ctx->pc = 0x303F7Cu;
    SET_GPR_U32(ctx, 31, 0x303F84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303F7Cu, 0x303F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F84u;
label_303f84:
    // 0x303f84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f88:
    // 0x303f88: 0xc05cd10  jal         func_173440
label_303f8c:
    if (ctx->pc == 0x303F8Cu) {
        ctx->pc = 0x303F90u;
        goto label_303f90;
    }
    ctx->pc = 0x303F88u;
    SET_GPR_U32(ctx, 31, 0x303F90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303F88u, 0x303F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F90u;
label_303f90:
    // 0x303f90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303f94:
    // 0x303f94: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x303f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_303f98:
    // 0x303f98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x303f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_303f9c:
    // 0x303f9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x303f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_303fa0:
    // 0x303fa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_303fa4:
    if (ctx->pc == 0x303FA4u) {
        ctx->pc = 0x303FA8u;
        goto label_303fa8;
    }
    ctx->pc = 0x303FA0u;
    {
        const bool branch_taken_0x303fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303fa0) {
            ctx->pc = 0x303FDCu;
            goto label_303fdc;
        }
    }
    ctx->pc = 0x303FA8u;
label_303fa8:
    // 0x303fa8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303fac:
    // 0x303fac: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x303facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303fb0:
    // 0x303fb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303fb4:
    // 0x303fb4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x303fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303fb8:
    // 0x303fb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x303fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_303fbc:
    // 0x303fbc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x303fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_303fc0:
    // 0x303fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303fc4:
    // 0x303fc4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x303fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303fc8:
    // 0x303fc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x303fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_303fcc:
    // 0x303fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303fd0:
    // 0x303fd0: 0x0  nop
    ctx->pc = 0x303fd0u;
    // NOP
label_303fd4:
    // 0x303fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_303fd8:
    // 0x303fd8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x303fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_303fdc:
    // 0x303fdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303fe0:
    // 0x303fe0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x303fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_303fe4:
    // 0x303fe4: 0xc05cec4  jal         func_173B10
label_303fe8:
    if (ctx->pc == 0x303FE8u) {
        ctx->pc = 0x303FECu;
        goto label_303fec;
    }
    ctx->pc = 0x303FE4u;
    SET_GPR_U32(ctx, 31, 0x303FECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x303FE4u, 0x303FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FECu;
label_303fec:
    // 0x303fec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303ff0:
    // 0x303ff0: 0xc0974c8  jal         func_25D320
label_303ff4:
    if (ctx->pc == 0x303FF4u) {
        ctx->pc = 0x303FF8u;
        goto label_303ff8;
    }
    ctx->pc = 0x303FF0u;
    SET_GPR_U32(ctx, 31, 0x303FF8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303FF0u, 0x303FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FF8u;
label_303ff8:
    // 0x303ff8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_303ffc:
    // 0x303ffc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x303ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_304000:
    // 0x304000: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_304004:
    if (ctx->pc == 0x304004u) {
        ctx->pc = 0x304008u;
        goto label_304008;
    }
    ctx->pc = 0x304000u;
    {
        const bool branch_taken_0x304000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304000) {
            ctx->pc = 0x3041B4u;
            goto label_3041b4;
        }
    }
    ctx->pc = 0x304008u;
label_304008:
    // 0x304008: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30400c:
    // 0x30400c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30400cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_304010:
    // 0x304010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_304014:
    // 0x304014: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x304014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_304018:
    // 0x304018: 0x10000066  b           . + 4 + (0x66 << 2)
label_30401c:
    if (ctx->pc == 0x30401Cu) {
        ctx->pc = 0x304020u;
        goto label_304020;
    }
    ctx->pc = 0x304018u;
    {
        const bool branch_taken_0x304018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304018) {
            ctx->pc = 0x3041B4u;
            goto label_3041b4;
        }
    }
    ctx->pc = 0x304020u;
label_304020:
    // 0x304020: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304024:
    // 0x304024: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304028:
    // 0x304028: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_30402c:
    // 0x30402c: 0x24061431  addiu       $a2, $zero, 0x1431
    ctx->pc = 0x30402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5169));
label_304030:
    // 0x304030: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304034:
    // 0x304034: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_304038:
    // 0x304038: 0xc0965d0  jal         func_259740
label_30403c:
    if (ctx->pc == 0x30403Cu) {
        ctx->pc = 0x304040u;
        goto label_304040;
    }
    ctx->pc = 0x304038u;
    SET_GPR_U32(ctx, 31, 0x304040u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304038u, 0x304040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304040u;
label_304040:
    // 0x304040: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x304040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_304044:
    // 0x304044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304048:
    // 0x304048: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30404c:
    // 0x30404c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x30404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_304050:
    // 0x304050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304054:
    // 0x304054: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_304058:
    // 0x304058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30405c:
    // 0x30405c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30405cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_304060:
    // 0x304060: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304064:
    // 0x304064: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_304068:
    // 0x304068: 0xc096b40  jal         func_25AD00
label_30406c:
    if (ctx->pc == 0x30406Cu) {
        ctx->pc = 0x304070u;
        goto label_304070;
    }
    ctx->pc = 0x304068u;
    SET_GPR_U32(ctx, 31, 0x304070u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304068u, 0x304070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304070u;
label_304070:
    // 0x304070: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304074:
    // 0x304074: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x304074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_304078:
    // 0x304078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30407c:
    // 0x30407c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x30407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304080:
    // 0x304080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x304080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_304084:
    // 0x304084: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x304084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_304088:
    // 0x304088: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30408c:
    // 0x30408c: 0xc05cd10  jal         func_173440
label_304090:
    if (ctx->pc == 0x304090u) {
        ctx->pc = 0x304094u;
        goto label_304094;
    }
    ctx->pc = 0x30408Cu;
    SET_GPR_U32(ctx, 31, 0x304094u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30408Cu, 0x304094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304094u;
label_304094:
    // 0x304094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304098:
    // 0x304098: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_30409c:
    // 0x30409c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3040a0:
    // 0x3040a0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3040a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3040a4:
    // 0x3040a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_3040a8:
    if (ctx->pc == 0x3040A8u) {
        ctx->pc = 0x3040ACu;
        goto label_3040ac;
    }
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x304130u;
            goto label_304130;
        }
    }
    ctx->pc = 0x3040ACu;
label_3040ac:
    // 0x3040ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040b0:
    // 0x3040b0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x3040b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3040b4:
    // 0x3040b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040b8:
    // 0x3040b8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3040b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3040bc:
    // 0x3040bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3040bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3040c0:
    // 0x3040c0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3040c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_3040c4:
    // 0x3040c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3040c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040c8:
    // 0x3040c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040cc:
    // 0x3040cc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3040ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_3040d0:
    // 0x3040d0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x3040d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_3040d4:
    // 0x3040d4: 0xc05cf7c  jal         func_173DF0
label_3040d8:
    if (ctx->pc == 0x3040D8u) {
        ctx->pc = 0x3040DCu;
        goto label_3040dc;
    }
    ctx->pc = 0x3040D4u;
    SET_GPR_U32(ctx, 31, 0x3040DCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x3040D4u, 0x3040DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040DCu;
label_3040dc:
    // 0x3040dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040e0:
    // 0x3040e0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x3040e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3040e4:
    // 0x3040e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3040e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3040e8:
    // 0x3040e8: 0x0  nop
    ctx->pc = 0x3040e8u;
    // NOP
label_3040ec:
    // 0x3040ec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3040f0:
    if (ctx->pc == 0x3040F0u) {
        ctx->pc = 0x3040F4u;
        goto label_3040f4;
    }
    ctx->pc = 0x3040ECu;
    {
        const bool branch_taken_0x3040ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3040ec) {
            ctx->pc = 0x304114u;
            goto label_304114;
        }
    }
    ctx->pc = 0x3040F4u;
label_3040f4:
    // 0x3040f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3040f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040f8:
    // 0x3040f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3040fc:
    // 0x3040fc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_304100:
    // 0x304100: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x304100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_304104:
    // 0x304104: 0xc05cf7c  jal         func_173DF0
label_304108:
    if (ctx->pc == 0x304108u) {
        ctx->pc = 0x30410Cu;
        goto label_30410c;
    }
    ctx->pc = 0x304104u;
    SET_GPR_U32(ctx, 31, 0x30410Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x304104u, 0x30410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30410Cu;
label_30410c:
    // 0x30410c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304110:
    // 0x304110: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x304110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_304114:
    // 0x304114: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304118:
    // 0x304118: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x304118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30411c:
    // 0x30411c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x30411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_304120:
    // 0x304120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304124:
    // 0x304124: 0x0  nop
    ctx->pc = 0x304124u;
    // NOP
label_304128:
    // 0x304128: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x304128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_30412c:
    // 0x30412c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x30412cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_304130:
    // 0x304130: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304134:
    // 0x304134: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x304134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_304138:
    // 0x304138: 0xc05cec4  jal         func_173B10
label_30413c:
    if (ctx->pc == 0x30413Cu) {
        ctx->pc = 0x304140u;
        goto label_304140;
    }
    ctx->pc = 0x304138u;
    SET_GPR_U32(ctx, 31, 0x304140u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304138u, 0x304140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304140u;
label_304140:
    // 0x304140: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304144:
    // 0x304144: 0xc0974c8  jal         func_25D320
label_304148:
    if (ctx->pc == 0x304148u) {
        ctx->pc = 0x30414Cu;
        goto label_30414c;
    }
    ctx->pc = 0x304144u;
    SET_GPR_U32(ctx, 31, 0x30414Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304144u, 0x30414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30414Cu;
label_30414c:
    // 0x30414c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304150:
    // 0x304150: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_304154:
    // 0x304154: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_304158:
    if (ctx->pc == 0x304158u) {
        ctx->pc = 0x30415Cu;
        goto label_30415c;
    }
    ctx->pc = 0x304154u;
    {
        const bool branch_taken_0x304154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304154) {
            ctx->pc = 0x3041B4u;
            goto label_3041b4;
        }
    }
    ctx->pc = 0x30415Cu;
label_30415c:
    // 0x30415c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304160:
    // 0x304160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304164:
    // 0x304164: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x304164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_304168:
    // 0x304168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30416c:
    // 0x30416c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304170:
    // 0x304170: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x304170u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_304174:
    // 0x304174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304178:
    // 0x304178: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x304178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_30417c:
    // 0x30417c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304180:
    // 0x304180: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x304180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_304184:
    // 0x304184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304188:
    // 0x304188: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x304188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_30418c:
    // 0x30418c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304190:
    // 0x304190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_304194:
    // 0x304194: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x304194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_304198:
    // 0x304198: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_30419c:
    // 0x30419c: 0xc05cf7c  jal         func_173DF0
label_3041a0:
    if (ctx->pc == 0x3041A0u) {
        ctx->pc = 0x3041A4u;
        goto label_3041a4;
    }
    ctx->pc = 0x30419Cu;
    SET_GPR_U32(ctx, 31, 0x3041A4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x30419Cu, 0x3041A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041A4u;
label_3041a4:
    // 0x3041a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3041a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3041a8:
    // 0x3041a8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x3041a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_3041ac:
    // 0x3041ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3041b0:
    // 0x3041b0: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x3041b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
label_3041b4:
    // 0x3041b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3041b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3041b8:
    // 0x3041b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3041b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3041bc:
    // 0x3041bc: 0x3e00008  jr          $ra
label_3041c0:
    if (ctx->pc == 0x3041C0u) {
        ctx->pc = 0x3041C4u;
        goto label_fallthrough_0x3041bc;
    }
    ctx->pc = 0x3041BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3041BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3041bc:
    ctx->pc = 0x3041C4u;
}
