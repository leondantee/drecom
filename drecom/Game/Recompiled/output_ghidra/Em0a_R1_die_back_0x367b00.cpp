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

// Function: Em0a_R1_die_back
// Address: 0x367b00 - 0x367e50
void Em0a_R1_die_back_0x367b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_die_back_0x367b00");
#endif

    switch (ctx->pc) {
        case 0x367b00u: goto label_367b00;
        case 0x367b04u: goto label_367b04;
        case 0x367b08u: goto label_367b08;
        case 0x367b0cu: goto label_367b0c;
        case 0x367b10u: goto label_367b10;
        case 0x367b14u: goto label_367b14;
        case 0x367b18u: goto label_367b18;
        case 0x367b1cu: goto label_367b1c;
        case 0x367b20u: goto label_367b20;
        case 0x367b24u: goto label_367b24;
        case 0x367b28u: goto label_367b28;
        case 0x367b2cu: goto label_367b2c;
        case 0x367b30u: goto label_367b30;
        case 0x367b34u: goto label_367b34;
        case 0x367b38u: goto label_367b38;
        case 0x367b3cu: goto label_367b3c;
        case 0x367b40u: goto label_367b40;
        case 0x367b44u: goto label_367b44;
        case 0x367b48u: goto label_367b48;
        case 0x367b4cu: goto label_367b4c;
        case 0x367b50u: goto label_367b50;
        case 0x367b54u: goto label_367b54;
        case 0x367b58u: goto label_367b58;
        case 0x367b5cu: goto label_367b5c;
        case 0x367b60u: goto label_367b60;
        case 0x367b64u: goto label_367b64;
        case 0x367b68u: goto label_367b68;
        case 0x367b6cu: goto label_367b6c;
        case 0x367b70u: goto label_367b70;
        case 0x367b74u: goto label_367b74;
        case 0x367b78u: goto label_367b78;
        case 0x367b7cu: goto label_367b7c;
        case 0x367b80u: goto label_367b80;
        case 0x367b84u: goto label_367b84;
        case 0x367b88u: goto label_367b88;
        case 0x367b8cu: goto label_367b8c;
        case 0x367b90u: goto label_367b90;
        case 0x367b94u: goto label_367b94;
        case 0x367b98u: goto label_367b98;
        case 0x367b9cu: goto label_367b9c;
        case 0x367ba0u: goto label_367ba0;
        case 0x367ba4u: goto label_367ba4;
        case 0x367ba8u: goto label_367ba8;
        case 0x367bacu: goto label_367bac;
        case 0x367bb0u: goto label_367bb0;
        case 0x367bb4u: goto label_367bb4;
        case 0x367bb8u: goto label_367bb8;
        case 0x367bbcu: goto label_367bbc;
        case 0x367bc0u: goto label_367bc0;
        case 0x367bc4u: goto label_367bc4;
        case 0x367bc8u: goto label_367bc8;
        case 0x367bccu: goto label_367bcc;
        case 0x367bd0u: goto label_367bd0;
        case 0x367bd4u: goto label_367bd4;
        case 0x367bd8u: goto label_367bd8;
        case 0x367bdcu: goto label_367bdc;
        case 0x367be0u: goto label_367be0;
        case 0x367be4u: goto label_367be4;
        case 0x367be8u: goto label_367be8;
        case 0x367becu: goto label_367bec;
        case 0x367bf0u: goto label_367bf0;
        case 0x367bf4u: goto label_367bf4;
        case 0x367bf8u: goto label_367bf8;
        case 0x367bfcu: goto label_367bfc;
        case 0x367c00u: goto label_367c00;
        case 0x367c04u: goto label_367c04;
        case 0x367c08u: goto label_367c08;
        case 0x367c0cu: goto label_367c0c;
        case 0x367c10u: goto label_367c10;
        case 0x367c14u: goto label_367c14;
        case 0x367c18u: goto label_367c18;
        case 0x367c1cu: goto label_367c1c;
        case 0x367c20u: goto label_367c20;
        case 0x367c24u: goto label_367c24;
        case 0x367c28u: goto label_367c28;
        case 0x367c2cu: goto label_367c2c;
        case 0x367c30u: goto label_367c30;
        case 0x367c34u: goto label_367c34;
        case 0x367c38u: goto label_367c38;
        case 0x367c3cu: goto label_367c3c;
        case 0x367c40u: goto label_367c40;
        case 0x367c44u: goto label_367c44;
        case 0x367c48u: goto label_367c48;
        case 0x367c4cu: goto label_367c4c;
        case 0x367c50u: goto label_367c50;
        case 0x367c54u: goto label_367c54;
        case 0x367c58u: goto label_367c58;
        case 0x367c5cu: goto label_367c5c;
        case 0x367c60u: goto label_367c60;
        case 0x367c64u: goto label_367c64;
        case 0x367c68u: goto label_367c68;
        case 0x367c6cu: goto label_367c6c;
        case 0x367c70u: goto label_367c70;
        case 0x367c74u: goto label_367c74;
        case 0x367c78u: goto label_367c78;
        case 0x367c7cu: goto label_367c7c;
        case 0x367c80u: goto label_367c80;
        case 0x367c84u: goto label_367c84;
        case 0x367c88u: goto label_367c88;
        case 0x367c8cu: goto label_367c8c;
        case 0x367c90u: goto label_367c90;
        case 0x367c94u: goto label_367c94;
        case 0x367c98u: goto label_367c98;
        case 0x367c9cu: goto label_367c9c;
        case 0x367ca0u: goto label_367ca0;
        case 0x367ca4u: goto label_367ca4;
        case 0x367ca8u: goto label_367ca8;
        case 0x367cacu: goto label_367cac;
        case 0x367cb0u: goto label_367cb0;
        case 0x367cb4u: goto label_367cb4;
        case 0x367cb8u: goto label_367cb8;
        case 0x367cbcu: goto label_367cbc;
        case 0x367cc0u: goto label_367cc0;
        case 0x367cc4u: goto label_367cc4;
        case 0x367cc8u: goto label_367cc8;
        case 0x367cccu: goto label_367ccc;
        case 0x367cd0u: goto label_367cd0;
        case 0x367cd4u: goto label_367cd4;
        case 0x367cd8u: goto label_367cd8;
        case 0x367cdcu: goto label_367cdc;
        case 0x367ce0u: goto label_367ce0;
        case 0x367ce4u: goto label_367ce4;
        case 0x367ce8u: goto label_367ce8;
        case 0x367cecu: goto label_367cec;
        case 0x367cf0u: goto label_367cf0;
        case 0x367cf4u: goto label_367cf4;
        case 0x367cf8u: goto label_367cf8;
        case 0x367cfcu: goto label_367cfc;
        case 0x367d00u: goto label_367d00;
        case 0x367d04u: goto label_367d04;
        case 0x367d08u: goto label_367d08;
        case 0x367d0cu: goto label_367d0c;
        case 0x367d10u: goto label_367d10;
        case 0x367d14u: goto label_367d14;
        case 0x367d18u: goto label_367d18;
        case 0x367d1cu: goto label_367d1c;
        case 0x367d20u: goto label_367d20;
        case 0x367d24u: goto label_367d24;
        case 0x367d28u: goto label_367d28;
        case 0x367d2cu: goto label_367d2c;
        case 0x367d30u: goto label_367d30;
        case 0x367d34u: goto label_367d34;
        case 0x367d38u: goto label_367d38;
        case 0x367d3cu: goto label_367d3c;
        case 0x367d40u: goto label_367d40;
        case 0x367d44u: goto label_367d44;
        case 0x367d48u: goto label_367d48;
        case 0x367d4cu: goto label_367d4c;
        case 0x367d50u: goto label_367d50;
        case 0x367d54u: goto label_367d54;
        case 0x367d58u: goto label_367d58;
        case 0x367d5cu: goto label_367d5c;
        case 0x367d60u: goto label_367d60;
        case 0x367d64u: goto label_367d64;
        case 0x367d68u: goto label_367d68;
        case 0x367d6cu: goto label_367d6c;
        case 0x367d70u: goto label_367d70;
        case 0x367d74u: goto label_367d74;
        case 0x367d78u: goto label_367d78;
        case 0x367d7cu: goto label_367d7c;
        case 0x367d80u: goto label_367d80;
        case 0x367d84u: goto label_367d84;
        case 0x367d88u: goto label_367d88;
        case 0x367d8cu: goto label_367d8c;
        case 0x367d90u: goto label_367d90;
        case 0x367d94u: goto label_367d94;
        case 0x367d98u: goto label_367d98;
        case 0x367d9cu: goto label_367d9c;
        case 0x367da0u: goto label_367da0;
        case 0x367da4u: goto label_367da4;
        case 0x367da8u: goto label_367da8;
        case 0x367dacu: goto label_367dac;
        case 0x367db0u: goto label_367db0;
        case 0x367db4u: goto label_367db4;
        case 0x367db8u: goto label_367db8;
        case 0x367dbcu: goto label_367dbc;
        case 0x367dc0u: goto label_367dc0;
        case 0x367dc4u: goto label_367dc4;
        case 0x367dc8u: goto label_367dc8;
        case 0x367dccu: goto label_367dcc;
        case 0x367dd0u: goto label_367dd0;
        case 0x367dd4u: goto label_367dd4;
        case 0x367dd8u: goto label_367dd8;
        case 0x367ddcu: goto label_367ddc;
        case 0x367de0u: goto label_367de0;
        case 0x367de4u: goto label_367de4;
        case 0x367de8u: goto label_367de8;
        case 0x367decu: goto label_367dec;
        case 0x367df0u: goto label_367df0;
        case 0x367df4u: goto label_367df4;
        case 0x367df8u: goto label_367df8;
        case 0x367dfcu: goto label_367dfc;
        case 0x367e00u: goto label_367e00;
        case 0x367e04u: goto label_367e04;
        case 0x367e08u: goto label_367e08;
        case 0x367e0cu: goto label_367e0c;
        case 0x367e10u: goto label_367e10;
        case 0x367e14u: goto label_367e14;
        case 0x367e18u: goto label_367e18;
        case 0x367e1cu: goto label_367e1c;
        case 0x367e20u: goto label_367e20;
        case 0x367e24u: goto label_367e24;
        case 0x367e28u: goto label_367e28;
        case 0x367e2cu: goto label_367e2c;
        case 0x367e30u: goto label_367e30;
        case 0x367e34u: goto label_367e34;
        case 0x367e38u: goto label_367e38;
        case 0x367e3cu: goto label_367e3c;
        case 0x367e40u: goto label_367e40;
        case 0x367e44u: goto label_367e44;
        case 0x367e48u: goto label_367e48;
        case 0x367e4cu: goto label_367e4c;
        default: break;
    }

    ctx->pc = 0x367b00u;

label_367b00:
    // 0x367b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_367b04:
    // 0x367b04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x367b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_367b08:
    // 0x367b08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x367b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_367b0c:
    // 0x367b0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367b10:
    // 0x367b10: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x367b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_367b14:
    // 0x367b14: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x367b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_367b18:
    // 0x367b18: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x367b18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_367b1c:
    // 0x367b1c: 0x102000c8  beqz        $at, . + 4 + (0xC8 << 2)
label_367b20:
    if (ctx->pc == 0x367B20u) {
        ctx->pc = 0x367B24u;
        goto label_367b24;
    }
    ctx->pc = 0x367B1Cu;
    {
        const bool branch_taken_0x367b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x367b1c) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367B24u;
label_367b24:
    // 0x367b24: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x367b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_367b28:
    // 0x367b28: 0x24642b30  addiu       $a0, $v1, 0x2B30
    ctx->pc = 0x367b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11056));
label_367b2c:
    // 0x367b2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x367b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_367b30:
    // 0x367b30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_367b34:
    // 0x367b34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x367b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_367b38:
    // 0x367b38: 0x600008  jr          $v1
label_367b3c:
    if (ctx->pc == 0x367B3Cu) {
        ctx->pc = 0x367B40u;
        goto label_367b40;
    }
    ctx->pc = 0x367B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367B38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x367B40u;
label_367b40:
    // 0x367b40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367b44:
    // 0x367b44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367b48:
    // 0x367b48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_367b4c:
    // 0x367b4c: 0x24060513  addiu       $a2, $zero, 0x513
    ctx->pc = 0x367b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1299));
label_367b50:
    // 0x367b50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367b54:
    // 0x367b54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_367b58:
    // 0x367b58: 0xc0965d0  jal         func_259740
label_367b5c:
    if (ctx->pc == 0x367B5Cu) {
        ctx->pc = 0x367B60u;
        goto label_367b60;
    }
    ctx->pc = 0x367B58u;
    SET_GPR_U32(ctx, 31, 0x367B60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367B58u, 0x367B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B60u;
label_367b60:
    // 0x367b60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367b64:
    // 0x367b64: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x367b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_367b68:
    // 0x367b68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x367b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_367b6c:
    // 0x367b6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_367b70:
    // 0x367b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_367b74:
    // 0x367b74: 0x0  nop
    ctx->pc = 0x367b74u;
    // NOP
label_367b78:
    // 0x367b78: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x367b78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_367b7c:
    // 0x367b7c: 0xc058fec  jal         func_163FB0
label_367b80:
    if (ctx->pc == 0x367B80u) {
        ctx->pc = 0x367B84u;
        goto label_367b84;
    }
    ctx->pc = 0x367B7Cu;
    SET_GPR_U32(ctx, 31, 0x367B84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x367B7Cu, 0x367B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B84u;
label_367b84:
    // 0x367b84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367b88:
    // 0x367b88: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_367b8c:
    // 0x367b8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367b90:
    // 0x367b90: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x367b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
label_367b94:
    // 0x367b94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x367b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_367b98:
    // 0x367b98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x367b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_367b9c:
    // 0x367b9c: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x367b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
label_367ba0:
    // 0x367ba0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367ba4:
    // 0x367ba4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_367ba8:
    // 0x367ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367bac:
    // 0x367bac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367bacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367bb0:
    // 0x367bb0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367bb4:
    // 0x367bb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367bb8:
    // 0x367bb8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x367bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_367bbc:
    // 0x367bbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x367bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_367bc0:
    // 0x367bc0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x367bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_367bc4:
    // 0x367bc4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x367bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_367bc8:
    // 0x367bc8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x367bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_367bcc:
    // 0x367bcc: 0xc058f50  jal         func_163D40
label_367bd0:
    if (ctx->pc == 0x367BD0u) {
        ctx->pc = 0x367BD4u;
        goto label_367bd4;
    }
    ctx->pc = 0x367BCCu;
    SET_GPR_U32(ctx, 31, 0x367BD4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x367BCCu, 0x367BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BD4u;
label_367bd4:
    // 0x367bd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367bd8:
    // 0x367bd8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x367bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_367bdc:
    // 0x367bdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367be0:
    // 0x367be0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_367be4:
    // 0x367be4: 0xc096b40  jal         func_25AD00
label_367be8:
    if (ctx->pc == 0x367BE8u) {
        ctx->pc = 0x367BECu;
        goto label_367bec;
    }
    ctx->pc = 0x367BE4u;
    SET_GPR_U32(ctx, 31, 0x367BECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367BE4u, 0x367BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BECu;
label_367bec:
    // 0x367bec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367bf0:
    // 0x367bf0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367bf4:
    // 0x367bf4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x367bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_367bf8:
    // 0x367bf8: 0xc05cd58  jal         func_173560
label_367bfc:
    if (ctx->pc == 0x367BFCu) {
        ctx->pc = 0x367C00u;
        goto label_367c00;
    }
    ctx->pc = 0x367BF8u;
    SET_GPR_U32(ctx, 31, 0x367C00u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x367BF8u, 0x367C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C00u;
label_367c00:
    // 0x367c00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c04:
    // 0x367c04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367c04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_367c08:
    // 0x367c08: 0xc05cec4  jal         func_173B10
label_367c0c:
    if (ctx->pc == 0x367C0Cu) {
        ctx->pc = 0x367C10u;
        goto label_367c10;
    }
    ctx->pc = 0x367C08u;
    SET_GPR_U32(ctx, 31, 0x367C10u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367C08u, 0x367C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C10u;
label_367c10:
    // 0x367c10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c14:
    // 0x367c14: 0xc097478  jal         func_25D1E0
label_367c18:
    if (ctx->pc == 0x367C18u) {
        ctx->pc = 0x367C1Cu;
        goto label_367c1c;
    }
    ctx->pc = 0x367C14u;
    SET_GPR_U32(ctx, 31, 0x367C1Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367C14u, 0x367C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C1Cu;
label_367c1c:
    // 0x367c1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c20:
    // 0x367c20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_367c24:
    // 0x367c24: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
label_367c28:
    if (ctx->pc == 0x367C28u) {
        ctx->pc = 0x367C2Cu;
        goto label_367c2c;
    }
    ctx->pc = 0x367C24u;
    {
        const bool branch_taken_0x367c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c24) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367C2Cu;
label_367c2c:
    // 0x367c2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c30:
    // 0x367c30: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_367c34:
    // 0x367c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_367c38:
    // 0x367c38: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367c38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_367c3c:
    // 0x367c3c: 0x10000080  b           . + 4 + (0x80 << 2)
label_367c40:
    if (ctx->pc == 0x367C40u) {
        ctx->pc = 0x367C44u;
        goto label_367c44;
    }
    ctx->pc = 0x367C3Cu;
    {
        const bool branch_taken_0x367c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367c3c) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367C44u;
label_367c44:
    // 0x367c44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c48:
    // 0x367c48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c4c:
    // 0x367c4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_367c50:
    // 0x367c50: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x367c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_367c54:
    // 0x367c54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367c58:
    // 0x367c58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_367c5c:
    // 0x367c5c: 0xc0965d0  jal         func_259740
label_367c60:
    if (ctx->pc == 0x367C60u) {
        ctx->pc = 0x367C64u;
        goto label_367c64;
    }
    ctx->pc = 0x367C5Cu;
    SET_GPR_U32(ctx, 31, 0x367C64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367C5Cu, 0x367C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C64u;
label_367c64:
    // 0x367c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c68:
    // 0x367c68: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_367c6c:
    // 0x367c6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367c70:
    // 0x367c70: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367c74:
    // 0x367c74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c78:
    // 0x367c78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367c78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_367c7c:
    // 0x367c7c: 0xc096b40  jal         func_25AD00
label_367c80:
    if (ctx->pc == 0x367C80u) {
        ctx->pc = 0x367C84u;
        goto label_367c84;
    }
    ctx->pc = 0x367C7Cu;
    SET_GPR_U32(ctx, 31, 0x367C84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367C7Cu, 0x367C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C84u;
label_367c84:
    // 0x367c84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c88:
    // 0x367c88: 0xc05cd10  jal         func_173440
label_367c8c:
    if (ctx->pc == 0x367C8Cu) {
        ctx->pc = 0x367C90u;
        goto label_367c90;
    }
    ctx->pc = 0x367C88u;
    SET_GPR_U32(ctx, 31, 0x367C90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x367C88u, 0x367C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C90u;
label_367c90:
    // 0x367c90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367c94:
    // 0x367c94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367c94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_367c98:
    // 0x367c98: 0xc05cec4  jal         func_173B10
label_367c9c:
    if (ctx->pc == 0x367C9Cu) {
        ctx->pc = 0x367CA0u;
        goto label_367ca0;
    }
    ctx->pc = 0x367C98u;
    SET_GPR_U32(ctx, 31, 0x367CA0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367C98u, 0x367CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CA0u;
label_367ca0:
    // 0x367ca0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367ca4:
    // 0x367ca4: 0xc097478  jal         func_25D1E0
label_367ca8:
    if (ctx->pc == 0x367CA8u) {
        ctx->pc = 0x367CACu;
        goto label_367cac;
    }
    ctx->pc = 0x367CA4u;
    SET_GPR_U32(ctx, 31, 0x367CACu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367CA4u, 0x367CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CACu;
label_367cac:
    // 0x367cac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367cb0:
    // 0x367cb0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_367cb4:
    // 0x367cb4: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_367cb8:
    if (ctx->pc == 0x367CB8u) {
        ctx->pc = 0x367CBCu;
        goto label_367cbc;
    }
    ctx->pc = 0x367CB4u;
    {
        const bool branch_taken_0x367cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367cb4) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367CBCu;
label_367cbc:
    // 0x367cbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367cc0:
    // 0x367cc0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_367cc4:
    // 0x367cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_367cc8:
    // 0x367cc8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_367ccc:
    // 0x367ccc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_367cd0:
    if (ctx->pc == 0x367CD0u) {
        ctx->pc = 0x367CD4u;
        goto label_367cd4;
    }
    ctx->pc = 0x367CCCu;
    {
        const bool branch_taken_0x367ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367ccc) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367CD4u;
label_367cd4:
    // 0x367cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367cd8:
    // 0x367cd8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367cdc:
    // 0x367cdc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_367ce0:
    // 0x367ce0: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x367ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_367ce4:
    // 0x367ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367ce8:
    // 0x367ce8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_367cec:
    // 0x367cec: 0xc0965d0  jal         func_259740
label_367cf0:
    if (ctx->pc == 0x367CF0u) {
        ctx->pc = 0x367CF4u;
        goto label_367cf4;
    }
    ctx->pc = 0x367CECu;
    SET_GPR_U32(ctx, 31, 0x367CF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367CECu, 0x367CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CF4u;
label_367cf4:
    // 0x367cf4: 0xc067694  jal         func_19DA50
label_367cf8:
    if (ctx->pc == 0x367CF8u) {
        ctx->pc = 0x367CFCu;
        goto label_367cfc;
    }
    ctx->pc = 0x367CF4u;
    SET_GPR_U32(ctx, 31, 0x367CFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367CF4u, 0x367CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CFCu;
label_367cfc:
    // 0x367cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367d00:
    // 0x367d00: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_367d04:
    // 0x367d04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_367d08:
    // 0x367d08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x367d08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_367d0c:
    // 0x367d0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d10:
    // 0x367d10: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_367d14:
    // 0x367d14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d18:
    // 0x367d18: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_367d1c:
    // 0x367d1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367d20:
    // 0x367d20: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367d24:
    // 0x367d24: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d28:
    // 0x367d28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_367d2c:
    // 0x367d2c: 0xc096b40  jal         func_25AD00
label_367d30:
    if (ctx->pc == 0x367D30u) {
        ctx->pc = 0x367D34u;
        goto label_367d34;
    }
    ctx->pc = 0x367D2Cu;
    SET_GPR_U32(ctx, 31, 0x367D34u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367D2Cu, 0x367D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D34u;
label_367d34:
    // 0x367d34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d38:
    // 0x367d38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_367d3c:
    // 0x367d3c: 0xc05cec4  jal         func_173B10
label_367d40:
    if (ctx->pc == 0x367D40u) {
        ctx->pc = 0x367D44u;
        goto label_367d44;
    }
    ctx->pc = 0x367D3Cu;
    SET_GPR_U32(ctx, 31, 0x367D44u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367D3Cu, 0x367D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D44u;
label_367d44:
    // 0x367d44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d48:
    // 0x367d48: 0xc097478  jal         func_25D1E0
label_367d4c:
    if (ctx->pc == 0x367D4Cu) {
        ctx->pc = 0x367D50u;
        goto label_367d50;
    }
    ctx->pc = 0x367D48u;
    SET_GPR_U32(ctx, 31, 0x367D50u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367D48u, 0x367D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D50u;
label_367d50:
    // 0x367d50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d54:
    // 0x367d54: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x367d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_367d58:
    // 0x367d58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_367d5c:
    if (ctx->pc == 0x367D5Cu) {
        ctx->pc = 0x367D60u;
        goto label_367d60;
    }
    ctx->pc = 0x367D58u;
    {
        const bool branch_taken_0x367d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367d58) {
            ctx->pc = 0x367D78u;
            goto label_367d78;
        }
    }
    ctx->pc = 0x367D60u;
label_367d60:
    // 0x367d60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d64:
    // 0x367d64: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x367d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_367d68:
    // 0x367d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x367d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_367d6c:
    // 0x367d6c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x367d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_367d70:
    // 0x367d70: 0x10000033  b           . + 4 + (0x33 << 2)
label_367d74:
    if (ctx->pc == 0x367D74u) {
        ctx->pc = 0x367D78u;
        goto label_367d78;
    }
    ctx->pc = 0x367D70u;
    {
        const bool branch_taken_0x367d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367d70) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367D78u;
label_367d78:
    // 0x367d78: 0xc067694  jal         func_19DA50
label_367d7c:
    if (ctx->pc == 0x367D7Cu) {
        ctx->pc = 0x367D80u;
        goto label_367d80;
    }
    ctx->pc = 0x367D78u;
    SET_GPR_U32(ctx, 31, 0x367D80u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367D78u, 0x367D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D80u;
label_367d80:
    // 0x367d80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367d84:
    // 0x367d84: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_367d88:
    // 0x367d88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_367d8c:
    // 0x367d8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x367d8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_367d90:
    // 0x367d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367d94:
    // 0x367d94: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367d94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_367d98:
    // 0x367d98: 0xc067694  jal         func_19DA50
label_367d9c:
    if (ctx->pc == 0x367D9Cu) {
        ctx->pc = 0x367DA0u;
        goto label_367da0;
    }
    ctx->pc = 0x367D98u;
    SET_GPR_U32(ctx, 31, 0x367DA0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367D98u, 0x367DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DA0u;
label_367da0:
    // 0x367da0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x367da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367da4:
    // 0x367da4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x367da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_367da8:
    // 0x367da8: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_367dac:
    if (ctx->pc == 0x367DACu) {
        ctx->pc = 0x367DB0u;
        goto label_367db0;
    }
    ctx->pc = 0x367DA8u;
    {
        const bool branch_taken_0x367da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x367da8) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367DB0u;
label_367db0:
    // 0x367db0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367db4:
    // 0x367db4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_367db8:
    // 0x367db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_367dbc:
    // 0x367dbc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_367dc0:
    // 0x367dc0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_367dc4:
    if (ctx->pc == 0x367DC4u) {
        ctx->pc = 0x367DC8u;
        goto label_367dc8;
    }
    ctx->pc = 0x367DC0u;
    {
        const bool branch_taken_0x367dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367dc0) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367DC8u;
label_367dc8:
    // 0x367dc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367dcc:
    // 0x367dcc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367dd0:
    // 0x367dd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_367dd4:
    // 0x367dd4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x367dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_367dd8:
    // 0x367dd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_367ddc:
    // 0x367ddc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_367de0:
    // 0x367de0: 0xc0965d0  jal         func_259740
label_367de4:
    if (ctx->pc == 0x367DE4u) {
        ctx->pc = 0x367DE8u;
        goto label_367de8;
    }
    ctx->pc = 0x367DE0u;
    SET_GPR_U32(ctx, 31, 0x367DE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367DE0u, 0x367DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DE8u;
label_367de8:
    // 0x367de8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367dec:
    // 0x367dec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_367df0:
    // 0x367df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_367df4:
    // 0x367df4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_367df8:
    // 0x367df8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367dfc:
    // 0x367dfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_367e00:
    // 0x367e00: 0xc096b40  jal         func_25AD00
label_367e04:
    if (ctx->pc == 0x367E04u) {
        ctx->pc = 0x367E08u;
        goto label_367e08;
    }
    ctx->pc = 0x367E00u;
    SET_GPR_U32(ctx, 31, 0x367E08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367E00u, 0x367E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E08u;
label_367e08:
    // 0x367e08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367e0c:
    // 0x367e0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_367e10:
    // 0x367e10: 0xc05cec4  jal         func_173B10
label_367e14:
    if (ctx->pc == 0x367E14u) {
        ctx->pc = 0x367E18u;
        goto label_367e18;
    }
    ctx->pc = 0x367E10u;
    SET_GPR_U32(ctx, 31, 0x367E18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367E10u, 0x367E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E18u;
label_367e18:
    // 0x367e18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367e1c:
    // 0x367e1c: 0xc097478  jal         func_25D1E0
label_367e20:
    if (ctx->pc == 0x367E20u) {
        ctx->pc = 0x367E24u;
        goto label_367e24;
    }
    ctx->pc = 0x367E1Cu;
    SET_GPR_U32(ctx, 31, 0x367E24u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367E1Cu, 0x367E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E24u;
label_367e24:
    // 0x367e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367e28:
    // 0x367e28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_367e2c:
    // 0x367e2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_367e30:
    if (ctx->pc == 0x367E30u) {
        ctx->pc = 0x367E34u;
        goto label_367e34;
    }
    ctx->pc = 0x367E2Cu;
    {
        const bool branch_taken_0x367e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367e2c) {
            ctx->pc = 0x367E40u;
            goto label_367e40;
        }
    }
    ctx->pc = 0x367E34u;
label_367e34:
    // 0x367e34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x367e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_367e38:
    // 0x367e38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367e3c:
    // 0x367e3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x367e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_367e40:
    // 0x367e40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x367e40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367e44:
    // 0x367e44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x367e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_367e48:
    // 0x367e48: 0x3e00008  jr          $ra
label_367e4c:
    if (ctx->pc == 0x367E4Cu) {
        ctx->pc = 0x367E50u;
        goto label_fallthrough_0x367e48;
    }
    ctx->pc = 0x367E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x367e48:
    ctx->pc = 0x367E50u;
}
