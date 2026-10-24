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

// Function: Pl_r0_devil_power
// Address: 0x355c20 - 0x355f38
void Pl_r0_devil_power_0x355c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_devil_power_0x355c20");
#endif

    switch (ctx->pc) {
        case 0x355c20u: goto label_355c20;
        case 0x355c24u: goto label_355c24;
        case 0x355c28u: goto label_355c28;
        case 0x355c2cu: goto label_355c2c;
        case 0x355c30u: goto label_355c30;
        case 0x355c34u: goto label_355c34;
        case 0x355c38u: goto label_355c38;
        case 0x355c3cu: goto label_355c3c;
        case 0x355c40u: goto label_355c40;
        case 0x355c44u: goto label_355c44;
        case 0x355c48u: goto label_355c48;
        case 0x355c4cu: goto label_355c4c;
        case 0x355c50u: goto label_355c50;
        case 0x355c54u: goto label_355c54;
        case 0x355c58u: goto label_355c58;
        case 0x355c5cu: goto label_355c5c;
        case 0x355c60u: goto label_355c60;
        case 0x355c64u: goto label_355c64;
        case 0x355c68u: goto label_355c68;
        case 0x355c6cu: goto label_355c6c;
        case 0x355c70u: goto label_355c70;
        case 0x355c74u: goto label_355c74;
        case 0x355c78u: goto label_355c78;
        case 0x355c7cu: goto label_355c7c;
        case 0x355c80u: goto label_355c80;
        case 0x355c84u: goto label_355c84;
        case 0x355c88u: goto label_355c88;
        case 0x355c8cu: goto label_355c8c;
        case 0x355c90u: goto label_355c90;
        case 0x355c94u: goto label_355c94;
        case 0x355c98u: goto label_355c98;
        case 0x355c9cu: goto label_355c9c;
        case 0x355ca0u: goto label_355ca0;
        case 0x355ca4u: goto label_355ca4;
        case 0x355ca8u: goto label_355ca8;
        case 0x355cacu: goto label_355cac;
        case 0x355cb0u: goto label_355cb0;
        case 0x355cb4u: goto label_355cb4;
        case 0x355cb8u: goto label_355cb8;
        case 0x355cbcu: goto label_355cbc;
        case 0x355cc0u: goto label_355cc0;
        case 0x355cc4u: goto label_355cc4;
        case 0x355cc8u: goto label_355cc8;
        case 0x355cccu: goto label_355ccc;
        case 0x355cd0u: goto label_355cd0;
        case 0x355cd4u: goto label_355cd4;
        case 0x355cd8u: goto label_355cd8;
        case 0x355cdcu: goto label_355cdc;
        case 0x355ce0u: goto label_355ce0;
        case 0x355ce4u: goto label_355ce4;
        case 0x355ce8u: goto label_355ce8;
        case 0x355cecu: goto label_355cec;
        case 0x355cf0u: goto label_355cf0;
        case 0x355cf4u: goto label_355cf4;
        case 0x355cf8u: goto label_355cf8;
        case 0x355cfcu: goto label_355cfc;
        case 0x355d00u: goto label_355d00;
        case 0x355d04u: goto label_355d04;
        case 0x355d08u: goto label_355d08;
        case 0x355d0cu: goto label_355d0c;
        case 0x355d10u: goto label_355d10;
        case 0x355d14u: goto label_355d14;
        case 0x355d18u: goto label_355d18;
        case 0x355d1cu: goto label_355d1c;
        case 0x355d20u: goto label_355d20;
        case 0x355d24u: goto label_355d24;
        case 0x355d28u: goto label_355d28;
        case 0x355d2cu: goto label_355d2c;
        case 0x355d30u: goto label_355d30;
        case 0x355d34u: goto label_355d34;
        case 0x355d38u: goto label_355d38;
        case 0x355d3cu: goto label_355d3c;
        case 0x355d40u: goto label_355d40;
        case 0x355d44u: goto label_355d44;
        case 0x355d48u: goto label_355d48;
        case 0x355d4cu: goto label_355d4c;
        case 0x355d50u: goto label_355d50;
        case 0x355d54u: goto label_355d54;
        case 0x355d58u: goto label_355d58;
        case 0x355d5cu: goto label_355d5c;
        case 0x355d60u: goto label_355d60;
        case 0x355d64u: goto label_355d64;
        case 0x355d68u: goto label_355d68;
        case 0x355d6cu: goto label_355d6c;
        case 0x355d70u: goto label_355d70;
        case 0x355d74u: goto label_355d74;
        case 0x355d78u: goto label_355d78;
        case 0x355d7cu: goto label_355d7c;
        case 0x355d80u: goto label_355d80;
        case 0x355d84u: goto label_355d84;
        case 0x355d88u: goto label_355d88;
        case 0x355d8cu: goto label_355d8c;
        case 0x355d90u: goto label_355d90;
        case 0x355d94u: goto label_355d94;
        case 0x355d98u: goto label_355d98;
        case 0x355d9cu: goto label_355d9c;
        case 0x355da0u: goto label_355da0;
        case 0x355da4u: goto label_355da4;
        case 0x355da8u: goto label_355da8;
        case 0x355dacu: goto label_355dac;
        case 0x355db0u: goto label_355db0;
        case 0x355db4u: goto label_355db4;
        case 0x355db8u: goto label_355db8;
        case 0x355dbcu: goto label_355dbc;
        case 0x355dc0u: goto label_355dc0;
        case 0x355dc4u: goto label_355dc4;
        case 0x355dc8u: goto label_355dc8;
        case 0x355dccu: goto label_355dcc;
        case 0x355dd0u: goto label_355dd0;
        case 0x355dd4u: goto label_355dd4;
        case 0x355dd8u: goto label_355dd8;
        case 0x355ddcu: goto label_355ddc;
        case 0x355de0u: goto label_355de0;
        case 0x355de4u: goto label_355de4;
        case 0x355de8u: goto label_355de8;
        case 0x355decu: goto label_355dec;
        case 0x355df0u: goto label_355df0;
        case 0x355df4u: goto label_355df4;
        case 0x355df8u: goto label_355df8;
        case 0x355dfcu: goto label_355dfc;
        case 0x355e00u: goto label_355e00;
        case 0x355e04u: goto label_355e04;
        case 0x355e08u: goto label_355e08;
        case 0x355e0cu: goto label_355e0c;
        case 0x355e10u: goto label_355e10;
        case 0x355e14u: goto label_355e14;
        case 0x355e18u: goto label_355e18;
        case 0x355e1cu: goto label_355e1c;
        case 0x355e20u: goto label_355e20;
        case 0x355e24u: goto label_355e24;
        case 0x355e28u: goto label_355e28;
        case 0x355e2cu: goto label_355e2c;
        case 0x355e30u: goto label_355e30;
        case 0x355e34u: goto label_355e34;
        case 0x355e38u: goto label_355e38;
        case 0x355e3cu: goto label_355e3c;
        case 0x355e40u: goto label_355e40;
        case 0x355e44u: goto label_355e44;
        case 0x355e48u: goto label_355e48;
        case 0x355e4cu: goto label_355e4c;
        case 0x355e50u: goto label_355e50;
        case 0x355e54u: goto label_355e54;
        case 0x355e58u: goto label_355e58;
        case 0x355e5cu: goto label_355e5c;
        case 0x355e60u: goto label_355e60;
        case 0x355e64u: goto label_355e64;
        case 0x355e68u: goto label_355e68;
        case 0x355e6cu: goto label_355e6c;
        case 0x355e70u: goto label_355e70;
        case 0x355e74u: goto label_355e74;
        case 0x355e78u: goto label_355e78;
        case 0x355e7cu: goto label_355e7c;
        case 0x355e80u: goto label_355e80;
        case 0x355e84u: goto label_355e84;
        case 0x355e88u: goto label_355e88;
        case 0x355e8cu: goto label_355e8c;
        case 0x355e90u: goto label_355e90;
        case 0x355e94u: goto label_355e94;
        case 0x355e98u: goto label_355e98;
        case 0x355e9cu: goto label_355e9c;
        case 0x355ea0u: goto label_355ea0;
        case 0x355ea4u: goto label_355ea4;
        case 0x355ea8u: goto label_355ea8;
        case 0x355eacu: goto label_355eac;
        case 0x355eb0u: goto label_355eb0;
        case 0x355eb4u: goto label_355eb4;
        case 0x355eb8u: goto label_355eb8;
        case 0x355ebcu: goto label_355ebc;
        case 0x355ec0u: goto label_355ec0;
        case 0x355ec4u: goto label_355ec4;
        case 0x355ec8u: goto label_355ec8;
        case 0x355eccu: goto label_355ecc;
        case 0x355ed0u: goto label_355ed0;
        case 0x355ed4u: goto label_355ed4;
        case 0x355ed8u: goto label_355ed8;
        case 0x355edcu: goto label_355edc;
        case 0x355ee0u: goto label_355ee0;
        case 0x355ee4u: goto label_355ee4;
        case 0x355ee8u: goto label_355ee8;
        case 0x355eecu: goto label_355eec;
        case 0x355ef0u: goto label_355ef0;
        case 0x355ef4u: goto label_355ef4;
        case 0x355ef8u: goto label_355ef8;
        case 0x355efcu: goto label_355efc;
        case 0x355f00u: goto label_355f00;
        case 0x355f04u: goto label_355f04;
        case 0x355f08u: goto label_355f08;
        case 0x355f0cu: goto label_355f0c;
        case 0x355f10u: goto label_355f10;
        case 0x355f14u: goto label_355f14;
        case 0x355f18u: goto label_355f18;
        case 0x355f1cu: goto label_355f1c;
        case 0x355f20u: goto label_355f20;
        case 0x355f24u: goto label_355f24;
        case 0x355f28u: goto label_355f28;
        case 0x355f2cu: goto label_355f2c;
        case 0x355f30u: goto label_355f30;
        case 0x355f34u: goto label_355f34;
        default: break;
    }

    ctx->pc = 0x355c20u;

label_355c20:
    // 0x355c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x355c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_355c24:
    // 0x355c24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x355c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_355c28:
    // 0x355c28: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x355c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_355c2c:
    // 0x355c2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355c30:
    // 0x355c30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355c34:
    // 0x355c34: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x355c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_355c38:
    // 0x355c38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_355c3c:
    // 0x355c3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_355c40:
    // 0x355c40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x355c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_355c44:
    // 0x355c44: 0x2442a5e0  addiu       $v0, $v0, -0x5A20
    ctx->pc = 0x355c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944224));
label_355c48:
    // 0x355c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_355c4c:
    // 0x355c4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x355c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_355c50:
    // 0x355c50: 0x40f809  jalr        $v0
label_355c54:
    if (ctx->pc == 0x355C54u) {
        ctx->pc = 0x355C58u;
        goto label_355c58;
    }
    ctx->pc = 0x355C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x355C58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355C50u, 0x355C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x355C58u;
label_355c58:
    // 0x355c58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x355c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355c5c:
    // 0x355c5c: 0x846313ac  lh          $v1, 0x13AC($v1)
    ctx->pc = 0x355c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5036)));
label_355c60:
    // 0x355c60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_355c64:
    if (ctx->pc == 0x355C64u) {
        ctx->pc = 0x355C68u;
        goto label_355c68;
    }
    ctx->pc = 0x355C60u;
    {
        const bool branch_taken_0x355c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c60) {
            ctx->pc = 0x355C78u;
            goto label_355c78;
        }
    }
    ctx->pc = 0x355C68u;
label_355c68:
    // 0x355c68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355c6c:
    // 0x355c6c: 0x848313ac  lh          $v1, 0x13AC($a0)
    ctx->pc = 0x355c6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5036)));
label_355c70:
    // 0x355c70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x355c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_355c74:
    // 0x355c74: 0xa48313ac  sh          $v1, 0x13AC($a0)
    ctx->pc = 0x355c74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5036), (uint16_t)GPR_U32(ctx, 3));
label_355c78:
    // 0x355c78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x355c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_355c7c:
    // 0x355c7c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x355c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_355c80:
    // 0x355c80: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x355c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_355c84:
    // 0x355c84: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
label_355c88:
    if (ctx->pc == 0x355C88u) {
        ctx->pc = 0x355C8Cu;
        goto label_355c8c;
    }
    ctx->pc = 0x355C84u;
    {
        const bool branch_taken_0x355c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c84) {
            ctx->pc = 0x355F18u;
            goto label_355f18;
        }
    }
    ctx->pc = 0x355C8Cu;
label_355c8c:
    // 0x355c8c: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x355c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
label_355c90:
    // 0x355c90: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x355c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_355c94:
    // 0x355c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355c98:
    // 0x355c98: 0x0  nop
    ctx->pc = 0x355c98u;
    // NOP
label_355c9c:
    // 0x355c9c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x355c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_355ca0:
    // 0x355ca0: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x355ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_355ca4:
    // 0x355ca4: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x355ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_355ca8:
    // 0x355ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355cac:
    // 0x355cac: 0x0  nop
    ctx->pc = 0x355cacu;
    // NOP
label_355cb0:
    // 0x355cb0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x355cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_355cb4:
    // 0x355cb4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_355cb8:
    // 0x355cb8: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x355cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_355cbc:
    // 0x355cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355cc0:
    // 0x355cc0: 0x0  nop
    ctx->pc = 0x355cc0u;
    // NOP
label_355cc4:
    // 0x355cc4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x355cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_355cc8:
    // 0x355cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x355cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_355ccc:
    // 0x355ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355cd0:
    // 0x355cd0: 0x0  nop
    ctx->pc = 0x355cd0u;
    // NOP
label_355cd4:
    // 0x355cd4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x355cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_355cd8:
    // 0x355cd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x355cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_355cdc:
    // 0x355cdc: 0xc0675a4  jal         func_19D690
label_355ce0:
    if (ctx->pc == 0x355CE0u) {
        ctx->pc = 0x355CE4u;
        goto label_355ce4;
    }
    ctx->pc = 0x355CDCu;
    SET_GPR_U32(ctx, 31, 0x355CE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355CDCu, 0x355CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CE4u;
label_355ce4:
    // 0x355ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355ce8:
    // 0x355ce8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_355cec:
    // 0x355cec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_355cf0:
    // 0x355cf0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355cf4:
    // 0x355cf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_355cf8:
    // 0x355cf8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355cfc:
    // 0x355cfc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_355d00:
    // 0x355d00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_355d04:
    // 0x355d04: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_355d08:
    // 0x355d08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355d0c:
    // 0x355d0c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_355d10:
    // 0x355d10: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_355d14:
    // 0x355d14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355d18:
    // 0x355d18: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355d18u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_355d1c:
    // 0x355d1c: 0xc0862f8  jal         func_218BE0
label_355d20:
    if (ctx->pc == 0x355D20u) {
        ctx->pc = 0x355D24u;
        goto label_355d24;
    }
    ctx->pc = 0x355D1Cu;
    SET_GPR_U32(ctx, 31, 0x355D24u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355D1Cu, 0x355D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D24u;
label_355d24:
    // 0x355d24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355d28:
    // 0x355d28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_355d2c:
    // 0x355d2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_355d30:
    // 0x355d30: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355d34:
    // 0x355d34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_355d38:
    // 0x355d38: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355d3c:
    // 0x355d3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_355d40:
    // 0x355d40: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_355d44:
    // 0x355d44: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_355d48:
    // 0x355d48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355d4c:
    // 0x355d4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_355d50:
    // 0x355d50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_355d54:
    // 0x355d54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355d58:
    // 0x355d58: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355d58u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_355d5c:
    // 0x355d5c: 0xc0862f8  jal         func_218BE0
label_355d60:
    if (ctx->pc == 0x355D60u) {
        ctx->pc = 0x355D64u;
        goto label_355d64;
    }
    ctx->pc = 0x355D5Cu;
    SET_GPR_U32(ctx, 31, 0x355D64u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355D5Cu, 0x355D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D64u;
label_355d64:
    // 0x355d64: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x355d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
label_355d68:
    // 0x355d68: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x355d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
label_355d6c:
    // 0x355d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355d70:
    // 0x355d70: 0x0  nop
    ctx->pc = 0x355d70u;
    // NOP
label_355d74:
    // 0x355d74: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x355d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_355d78:
    // 0x355d78: 0x3c024223  lui         $v0, 0x4223
    ctx->pc = 0x355d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16931 << 16));
label_355d7c:
    // 0x355d7c: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x355d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
label_355d80:
    // 0x355d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355d84:
    // 0x355d84: 0x0  nop
    ctx->pc = 0x355d84u;
    // NOP
label_355d88:
    // 0x355d88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x355d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_355d8c:
    // 0x355d8c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x355d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_355d90:
    // 0x355d90: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x355d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
label_355d94:
    // 0x355d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355d98:
    // 0x355d98: 0x0  nop
    ctx->pc = 0x355d98u;
    // NOP
label_355d9c:
    // 0x355d9c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x355d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_355da0:
    // 0x355da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x355da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_355da4:
    // 0x355da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355da8:
    // 0x355da8: 0x0  nop
    ctx->pc = 0x355da8u;
    // NOP
label_355dac:
    // 0x355dac: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x355dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_355db0:
    // 0x355db0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x355db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_355db4:
    // 0x355db4: 0xc0675a4  jal         func_19D690
label_355db8:
    if (ctx->pc == 0x355DB8u) {
        ctx->pc = 0x355DBCu;
        goto label_355dbc;
    }
    ctx->pc = 0x355DB4u;
    SET_GPR_U32(ctx, 31, 0x355DBCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x355DB4u, 0x355DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DBCu;
label_355dbc:
    // 0x355dbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355dc0:
    // 0x355dc0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_355dc4:
    // 0x355dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_355dc8:
    // 0x355dc8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355dcc:
    // 0x355dcc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_355dd0:
    // 0x355dd0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355dd4:
    // 0x355dd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_355dd8:
    // 0x355dd8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_355ddc:
    // 0x355ddc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_355de0:
    // 0x355de0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355de4:
    // 0x355de4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_355de8:
    // 0x355de8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_355dec:
    // 0x355dec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355df0:
    // 0x355df0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355df0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_355df4:
    // 0x355df4: 0xc0862f8  jal         func_218BE0
label_355df8:
    if (ctx->pc == 0x355DF8u) {
        ctx->pc = 0x355DFCu;
        goto label_355dfc;
    }
    ctx->pc = 0x355DF4u;
    SET_GPR_U32(ctx, 31, 0x355DFCu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355DF4u, 0x355DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DFCu;
label_355dfc:
    // 0x355dfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355e00:
    // 0x355e00: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_355e04:
    // 0x355e04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_355e08:
    // 0x355e08: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355e0c:
    // 0x355e0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_355e10:
    // 0x355e10: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x355e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_355e14:
    // 0x355e14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_355e18:
    // 0x355e18: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x355e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_355e1c:
    // 0x355e1c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_355e20:
    // 0x355e20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355e24:
    // 0x355e24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_355e28:
    // 0x355e28: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x355e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_355e2c:
    // 0x355e2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x355e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355e30:
    // 0x355e30: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x355e30u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_355e34:
    // 0x355e34: 0xc0862f8  jal         func_218BE0
label_355e38:
    if (ctx->pc == 0x355E38u) {
        ctx->pc = 0x355E3Cu;
        goto label_355e3c;
    }
    ctx->pc = 0x355E34u;
    SET_GPR_U32(ctx, 31, 0x355E3Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x355E34u, 0x355E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E3Cu;
label_355e3c:
    // 0x355e3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355e40:
    // 0x355e40: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x355e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_355e44:
    // 0x355e44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_355e48:
    // 0x355e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_355e4c:
    // 0x355e4c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x355e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_355e50:
    // 0x355e50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_355e54:
    if (ctx->pc == 0x355E54u) {
        ctx->pc = 0x355E58u;
        goto label_355e58;
    }
    ctx->pc = 0x355E50u;
    {
        const bool branch_taken_0x355e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e50) {
            ctx->pc = 0x355E98u;
            goto label_355e98;
        }
    }
    ctx->pc = 0x355E58u;
label_355e58:
    // 0x355e58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355e5c:
    // 0x355e5c: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x355e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_355e60:
    // 0x355e60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_355e64:
    // 0x355e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_355e68:
    // 0x355e68: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x355e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_355e6c:
    // 0x355e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355e70:
    // 0x355e70: 0x0  nop
    ctx->pc = 0x355e70u;
    // NOP
label_355e74:
    // 0x355e74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x355e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_355e78:
    // 0x355e78: 0x3c024077  lui         $v0, 0x4077
    ctx->pc = 0x355e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16503 << 16));
label_355e7c:
    // 0x355e7c: 0x3442bdef  ori         $v0, $v0, 0xBDEF
    ctx->pc = 0x355e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48623);
label_355e80:
    // 0x355e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355e84:
    // 0x355e84: 0x0  nop
    ctx->pc = 0x355e84u;
    // NOP
label_355e88:
    // 0x355e88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_355e8c:
    // 0x355e8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x355e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_355e90:
    // 0x355e90: 0x10000011  b           . + 4 + (0x11 << 2)
label_355e94:
    if (ctx->pc == 0x355E94u) {
        ctx->pc = 0x355E98u;
        goto label_355e98;
    }
    ctx->pc = 0x355E90u;
    {
        const bool branch_taken_0x355e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e90) {
            ctx->pc = 0x355ED8u;
            goto label_355ed8;
        }
    }
    ctx->pc = 0x355E98u;
label_355e98:
    // 0x355e98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x355e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355e9c:
    // 0x355e9c: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x355e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_355ea0:
    // 0x355ea0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_355ea4:
    // 0x355ea4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_355ea8:
    // 0x355ea8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x355ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_355eac:
    // 0x355eac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x355eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_355eb0:
    // 0x355eb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_355eb4:
    // 0x355eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355eb8:
    // 0x355eb8: 0x0  nop
    ctx->pc = 0x355eb8u;
    // NOP
label_355ebc:
    // 0x355ebc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x355ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_355ec0:
    // 0x355ec0: 0x3c024077  lui         $v0, 0x4077
    ctx->pc = 0x355ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16503 << 16));
label_355ec4:
    // 0x355ec4: 0x3442bdef  ori         $v0, $v0, 0xBDEF
    ctx->pc = 0x355ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48623);
label_355ec8:
    // 0x355ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355ecc:
    // 0x355ecc: 0x0  nop
    ctx->pc = 0x355eccu;
    // NOP
label_355ed0:
    // 0x355ed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x355ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_355ed4:
    // 0x355ed4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x355ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_355ed8:
    // 0x355ed8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x355ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_355edc:
    // 0x355edc: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x355edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
label_355ee0:
    // 0x355ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355ee4:
    // 0x355ee4: 0x0  nop
    ctx->pc = 0x355ee4u;
    // NOP
label_355ee8:
    // 0x355ee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x355ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_355eec:
    // 0x355eec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x355eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_355ef0:
    // 0x355ef0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355ef4:
    // 0x355ef4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x355ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_355ef8:
    // 0x355ef8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x355ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_355efc:
    // 0x355efc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x355efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_355f00:
    // 0x355f00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x355f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_355f04:
    // 0x355f04: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x355f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_355f08:
    // 0x355f08: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x355f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_355f0c:
    // 0x355f0c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x355f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_355f10:
    // 0x355f10: 0xc0c91ec  jal         func_3247B0
label_355f14:
    if (ctx->pc == 0x355F14u) {
        ctx->pc = 0x355F18u;
        goto label_355f18;
    }
    ctx->pc = 0x355F10u;
    SET_GPR_U32(ctx, 31, 0x355F18u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x355F10u, 0x355F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355F18u;
label_355f18:
    // 0x355f18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x355f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_355f1c:
    // 0x355f1c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x355f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
label_355f20:
    // 0x355f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_355f24:
    // 0x355f24: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x355f24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
label_355f28:
    // 0x355f28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x355f28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355f2c:
    // 0x355f2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x355f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_355f30:
    // 0x355f30: 0x3e00008  jr          $ra
label_355f34:
    if (ctx->pc == 0x355F34u) {
        ctx->pc = 0x355F38u;
        goto label_fallthrough_0x355f30;
    }
    ctx->pc = 0x355F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x355f30:
    ctx->pc = 0x355F38u;
}
