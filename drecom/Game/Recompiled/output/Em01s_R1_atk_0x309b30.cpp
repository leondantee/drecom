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

// Function: Em01s_R1_atk
// Address: 0x309b30 - 0x309f04
void Em01s_R1_atk_0x309b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_atk_0x309b30");
#endif

    switch (ctx->pc) {
        case 0x309b30u: goto label_309b30;
        case 0x309b34u: goto label_309b34;
        case 0x309b38u: goto label_309b38;
        case 0x309b3cu: goto label_309b3c;
        case 0x309b40u: goto label_309b40;
        case 0x309b44u: goto label_309b44;
        case 0x309b48u: goto label_309b48;
        case 0x309b4cu: goto label_309b4c;
        case 0x309b50u: goto label_309b50;
        case 0x309b54u: goto label_309b54;
        case 0x309b58u: goto label_309b58;
        case 0x309b5cu: goto label_309b5c;
        case 0x309b60u: goto label_309b60;
        case 0x309b64u: goto label_309b64;
        case 0x309b68u: goto label_309b68;
        case 0x309b6cu: goto label_309b6c;
        case 0x309b70u: goto label_309b70;
        case 0x309b74u: goto label_309b74;
        case 0x309b78u: goto label_309b78;
        case 0x309b7cu: goto label_309b7c;
        case 0x309b80u: goto label_309b80;
        case 0x309b84u: goto label_309b84;
        case 0x309b88u: goto label_309b88;
        case 0x309b8cu: goto label_309b8c;
        case 0x309b90u: goto label_309b90;
        case 0x309b94u: goto label_309b94;
        case 0x309b98u: goto label_309b98;
        case 0x309b9cu: goto label_309b9c;
        case 0x309ba0u: goto label_309ba0;
        case 0x309ba4u: goto label_309ba4;
        case 0x309ba8u: goto label_309ba8;
        case 0x309bacu: goto label_309bac;
        case 0x309bb0u: goto label_309bb0;
        case 0x309bb4u: goto label_309bb4;
        case 0x309bb8u: goto label_309bb8;
        case 0x309bbcu: goto label_309bbc;
        case 0x309bc0u: goto label_309bc0;
        case 0x309bc4u: goto label_309bc4;
        case 0x309bc8u: goto label_309bc8;
        case 0x309bccu: goto label_309bcc;
        case 0x309bd0u: goto label_309bd0;
        case 0x309bd4u: goto label_309bd4;
        case 0x309bd8u: goto label_309bd8;
        case 0x309bdcu: goto label_309bdc;
        case 0x309be0u: goto label_309be0;
        case 0x309be4u: goto label_309be4;
        case 0x309be8u: goto label_309be8;
        case 0x309becu: goto label_309bec;
        case 0x309bf0u: goto label_309bf0;
        case 0x309bf4u: goto label_309bf4;
        case 0x309bf8u: goto label_309bf8;
        case 0x309bfcu: goto label_309bfc;
        case 0x309c00u: goto label_309c00;
        case 0x309c04u: goto label_309c04;
        case 0x309c08u: goto label_309c08;
        case 0x309c0cu: goto label_309c0c;
        case 0x309c10u: goto label_309c10;
        case 0x309c14u: goto label_309c14;
        case 0x309c18u: goto label_309c18;
        case 0x309c1cu: goto label_309c1c;
        case 0x309c20u: goto label_309c20;
        case 0x309c24u: goto label_309c24;
        case 0x309c28u: goto label_309c28;
        case 0x309c2cu: goto label_309c2c;
        case 0x309c30u: goto label_309c30;
        case 0x309c34u: goto label_309c34;
        case 0x309c38u: goto label_309c38;
        case 0x309c3cu: goto label_309c3c;
        case 0x309c40u: goto label_309c40;
        case 0x309c44u: goto label_309c44;
        case 0x309c48u: goto label_309c48;
        case 0x309c4cu: goto label_309c4c;
        case 0x309c50u: goto label_309c50;
        case 0x309c54u: goto label_309c54;
        case 0x309c58u: goto label_309c58;
        case 0x309c5cu: goto label_309c5c;
        case 0x309c60u: goto label_309c60;
        case 0x309c64u: goto label_309c64;
        case 0x309c68u: goto label_309c68;
        case 0x309c6cu: goto label_309c6c;
        case 0x309c70u: goto label_309c70;
        case 0x309c74u: goto label_309c74;
        case 0x309c78u: goto label_309c78;
        case 0x309c7cu: goto label_309c7c;
        case 0x309c80u: goto label_309c80;
        case 0x309c84u: goto label_309c84;
        case 0x309c88u: goto label_309c88;
        case 0x309c8cu: goto label_309c8c;
        case 0x309c90u: goto label_309c90;
        case 0x309c94u: goto label_309c94;
        case 0x309c98u: goto label_309c98;
        case 0x309c9cu: goto label_309c9c;
        case 0x309ca0u: goto label_309ca0;
        case 0x309ca4u: goto label_309ca4;
        case 0x309ca8u: goto label_309ca8;
        case 0x309cacu: goto label_309cac;
        case 0x309cb0u: goto label_309cb0;
        case 0x309cb4u: goto label_309cb4;
        case 0x309cb8u: goto label_309cb8;
        case 0x309cbcu: goto label_309cbc;
        case 0x309cc0u: goto label_309cc0;
        case 0x309cc4u: goto label_309cc4;
        case 0x309cc8u: goto label_309cc8;
        case 0x309cccu: goto label_309ccc;
        case 0x309cd0u: goto label_309cd0;
        case 0x309cd4u: goto label_309cd4;
        case 0x309cd8u: goto label_309cd8;
        case 0x309cdcu: goto label_309cdc;
        case 0x309ce0u: goto label_309ce0;
        case 0x309ce4u: goto label_309ce4;
        case 0x309ce8u: goto label_309ce8;
        case 0x309cecu: goto label_309cec;
        case 0x309cf0u: goto label_309cf0;
        case 0x309cf4u: goto label_309cf4;
        case 0x309cf8u: goto label_309cf8;
        case 0x309cfcu: goto label_309cfc;
        case 0x309d00u: goto label_309d00;
        case 0x309d04u: goto label_309d04;
        case 0x309d08u: goto label_309d08;
        case 0x309d0cu: goto label_309d0c;
        case 0x309d10u: goto label_309d10;
        case 0x309d14u: goto label_309d14;
        case 0x309d18u: goto label_309d18;
        case 0x309d1cu: goto label_309d1c;
        case 0x309d20u: goto label_309d20;
        case 0x309d24u: goto label_309d24;
        case 0x309d28u: goto label_309d28;
        case 0x309d2cu: goto label_309d2c;
        case 0x309d30u: goto label_309d30;
        case 0x309d34u: goto label_309d34;
        case 0x309d38u: goto label_309d38;
        case 0x309d3cu: goto label_309d3c;
        case 0x309d40u: goto label_309d40;
        case 0x309d44u: goto label_309d44;
        case 0x309d48u: goto label_309d48;
        case 0x309d4cu: goto label_309d4c;
        case 0x309d50u: goto label_309d50;
        case 0x309d54u: goto label_309d54;
        case 0x309d58u: goto label_309d58;
        case 0x309d5cu: goto label_309d5c;
        case 0x309d60u: goto label_309d60;
        case 0x309d64u: goto label_309d64;
        case 0x309d68u: goto label_309d68;
        case 0x309d6cu: goto label_309d6c;
        case 0x309d70u: goto label_309d70;
        case 0x309d74u: goto label_309d74;
        case 0x309d78u: goto label_309d78;
        case 0x309d7cu: goto label_309d7c;
        case 0x309d80u: goto label_309d80;
        case 0x309d84u: goto label_309d84;
        case 0x309d88u: goto label_309d88;
        case 0x309d8cu: goto label_309d8c;
        case 0x309d90u: goto label_309d90;
        case 0x309d94u: goto label_309d94;
        case 0x309d98u: goto label_309d98;
        case 0x309d9cu: goto label_309d9c;
        case 0x309da0u: goto label_309da0;
        case 0x309da4u: goto label_309da4;
        case 0x309da8u: goto label_309da8;
        case 0x309dacu: goto label_309dac;
        case 0x309db0u: goto label_309db0;
        case 0x309db4u: goto label_309db4;
        case 0x309db8u: goto label_309db8;
        case 0x309dbcu: goto label_309dbc;
        case 0x309dc0u: goto label_309dc0;
        case 0x309dc4u: goto label_309dc4;
        case 0x309dc8u: goto label_309dc8;
        case 0x309dccu: goto label_309dcc;
        case 0x309dd0u: goto label_309dd0;
        case 0x309dd4u: goto label_309dd4;
        case 0x309dd8u: goto label_309dd8;
        case 0x309ddcu: goto label_309ddc;
        case 0x309de0u: goto label_309de0;
        case 0x309de4u: goto label_309de4;
        case 0x309de8u: goto label_309de8;
        case 0x309decu: goto label_309dec;
        case 0x309df0u: goto label_309df0;
        case 0x309df4u: goto label_309df4;
        case 0x309df8u: goto label_309df8;
        case 0x309dfcu: goto label_309dfc;
        case 0x309e00u: goto label_309e00;
        case 0x309e04u: goto label_309e04;
        case 0x309e08u: goto label_309e08;
        case 0x309e0cu: goto label_309e0c;
        case 0x309e10u: goto label_309e10;
        case 0x309e14u: goto label_309e14;
        case 0x309e18u: goto label_309e18;
        case 0x309e1cu: goto label_309e1c;
        case 0x309e20u: goto label_309e20;
        case 0x309e24u: goto label_309e24;
        case 0x309e28u: goto label_309e28;
        case 0x309e2cu: goto label_309e2c;
        case 0x309e30u: goto label_309e30;
        case 0x309e34u: goto label_309e34;
        case 0x309e38u: goto label_309e38;
        case 0x309e3cu: goto label_309e3c;
        case 0x309e40u: goto label_309e40;
        case 0x309e44u: goto label_309e44;
        case 0x309e48u: goto label_309e48;
        case 0x309e4cu: goto label_309e4c;
        case 0x309e50u: goto label_309e50;
        case 0x309e54u: goto label_309e54;
        case 0x309e58u: goto label_309e58;
        case 0x309e5cu: goto label_309e5c;
        case 0x309e60u: goto label_309e60;
        case 0x309e64u: goto label_309e64;
        case 0x309e68u: goto label_309e68;
        case 0x309e6cu: goto label_309e6c;
        case 0x309e70u: goto label_309e70;
        case 0x309e74u: goto label_309e74;
        case 0x309e78u: goto label_309e78;
        case 0x309e7cu: goto label_309e7c;
        case 0x309e80u: goto label_309e80;
        case 0x309e84u: goto label_309e84;
        case 0x309e88u: goto label_309e88;
        case 0x309e8cu: goto label_309e8c;
        case 0x309e90u: goto label_309e90;
        case 0x309e94u: goto label_309e94;
        case 0x309e98u: goto label_309e98;
        case 0x309e9cu: goto label_309e9c;
        case 0x309ea0u: goto label_309ea0;
        case 0x309ea4u: goto label_309ea4;
        case 0x309ea8u: goto label_309ea8;
        case 0x309eacu: goto label_309eac;
        case 0x309eb0u: goto label_309eb0;
        case 0x309eb4u: goto label_309eb4;
        case 0x309eb8u: goto label_309eb8;
        case 0x309ebcu: goto label_309ebc;
        case 0x309ec0u: goto label_309ec0;
        case 0x309ec4u: goto label_309ec4;
        case 0x309ec8u: goto label_309ec8;
        case 0x309eccu: goto label_309ecc;
        case 0x309ed0u: goto label_309ed0;
        case 0x309ed4u: goto label_309ed4;
        case 0x309ed8u: goto label_309ed8;
        case 0x309edcu: goto label_309edc;
        case 0x309ee0u: goto label_309ee0;
        case 0x309ee4u: goto label_309ee4;
        case 0x309ee8u: goto label_309ee8;
        case 0x309eecu: goto label_309eec;
        case 0x309ef0u: goto label_309ef0;
        case 0x309ef4u: goto label_309ef4;
        case 0x309ef8u: goto label_309ef8;
        case 0x309efcu: goto label_309efc;
        case 0x309f00u: goto label_309f00;
        default: break;
    }

    ctx->pc = 0x309b30u;

label_309b30:
    // 0x309b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_309b34:
    // 0x309b34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x309b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_309b38:
    // 0x309b38: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x309b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_309b3c:
    // 0x309b3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309b40:
    // 0x309b40: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x309b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_309b44:
    // 0x309b44: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x309b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_309b48:
    // 0x309b48: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x309b48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_309b4c:
    // 0x309b4c: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
label_309b50:
    if (ctx->pc == 0x309B50u) {
        ctx->pc = 0x309B54u;
        goto label_309b54;
    }
    ctx->pc = 0x309B4Cu;
    {
        const bool branch_taken_0x309b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x309b4c) {
            ctx->pc = 0x309EF4u;
            goto label_309ef4;
        }
    }
    ctx->pc = 0x309B54u;
label_309b54:
    // 0x309b54: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x309b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_309b58:
    // 0x309b58: 0x24641bd0  addiu       $a0, $v1, 0x1BD0
    ctx->pc = 0x309b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
label_309b5c:
    // 0x309b5c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x309b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_309b60:
    // 0x309b60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_309b64:
    // 0x309b64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x309b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_309b68:
    // 0x309b68: 0x600008  jr          $v1
label_309b6c:
    if (ctx->pc == 0x309B6Cu) {
        ctx->pc = 0x309B70u;
        goto label_309b70;
    }
    ctx->pc = 0x309B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309B68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x309B70u;
label_309b70:
    // 0x309b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309b74:
    // 0x309b74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309b78:
    // 0x309b78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_309b7c:
    // 0x309b7c: 0x24062839  addiu       $a2, $zero, 0x2839
    ctx->pc = 0x309b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10297));
label_309b80:
    // 0x309b80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309b84:
    // 0x309b84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_309b88:
    // 0x309b88: 0xc0965d0  jal         func_259740
label_309b8c:
    if (ctx->pc == 0x309B8Cu) {
        ctx->pc = 0x309B90u;
        goto label_309b90;
    }
    ctx->pc = 0x309B88u;
    SET_GPR_U32(ctx, 31, 0x309B90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309B88u, 0x309B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309B90u;
label_309b90:
    // 0x309b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309b94:
    // 0x309b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309b98:
    // 0x309b98: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x309b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_309b9c:
    // 0x309b9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ba0:
    // 0x309ba0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_309ba4:
    // 0x309ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_309ba8:
    // 0x309ba8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309bac:
    // 0x309bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309bb0:
    // 0x309bb0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x309bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_309bb4:
    // 0x309bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x309bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_309bb8:
    // 0x309bb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_309bbc:
    // 0x309bbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_309bc0:
    if (ctx->pc == 0x309BC0u) {
        ctx->pc = 0x309BC4u;
        goto label_309bc4;
    }
    ctx->pc = 0x309BBCu;
    {
        const bool branch_taken_0x309bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309bbc) {
            ctx->pc = 0x309C0Cu;
            goto label_309c0c;
        }
    }
    ctx->pc = 0x309BC4u;
label_309bc4:
    // 0x309bc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309bc8:
    // 0x309bc8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x309bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309bcc:
    // 0x309bcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309bd0:
    // 0x309bd0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_309bd4:
    // 0x309bd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x309bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_309bd8:
    // 0x309bd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_309bdc:
    // 0x309bdc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x309bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_309be0:
    // 0x309be0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x309be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_309be4:
    // 0x309be4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x309be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
label_309be8:
    // 0x309be8: 0xc05c848  jal         func_172120
label_309bec:
    if (ctx->pc == 0x309BECu) {
        ctx->pc = 0x309BF0u;
        goto label_309bf0;
    }
    ctx->pc = 0x309BE8u;
    SET_GPR_U32(ctx, 31, 0x309BF0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x309BE8u, 0x309BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BF0u;
label_309bf0:
    // 0x309bf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309bf4:
    // 0x309bf4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x309bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309bf8:
    // 0x309bf8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309bf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_309bfc:
    // 0x309bfc: 0xc058fec  jal         func_163FB0
label_309c00:
    if (ctx->pc == 0x309C00u) {
        ctx->pc = 0x309C04u;
        goto label_309c04;
    }
    ctx->pc = 0x309BFCu;
    SET_GPR_U32(ctx, 31, 0x309C04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x309BFCu, 0x309C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C04u;
label_309c04:
    // 0x309c04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c08:
    // 0x309c08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x309c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_309c0c:
    // 0x309c0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c10:
    // 0x309c10: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x309c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309c14:
    // 0x309c14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c18:
    // 0x309c18: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x309c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309c1c:
    // 0x309c1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x309c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_309c20:
    // 0x309c20: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x309c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_309c24:
    // 0x309c24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c28:
    // 0x309c28: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x309c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309c2c:
    // 0x309c2c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x309c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_309c30:
    // 0x309c30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x309c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_309c34:
    // 0x309c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309c38:
    // 0x309c38: 0x0  nop
    ctx->pc = 0x309c38u;
    // NOP
label_309c3c:
    // 0x309c3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_309c40:
    // 0x309c40: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x309c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_309c44:
    // 0x309c44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c48:
    // 0x309c48: 0xc05cd10  jal         func_173440
label_309c4c:
    if (ctx->pc == 0x309C4Cu) {
        ctx->pc = 0x309C50u;
        goto label_309c50;
    }
    ctx->pc = 0x309C48u;
    SET_GPR_U32(ctx, 31, 0x309C50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309C48u, 0x309C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C50u;
label_309c50:
    // 0x309c50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c54:
    // 0x309c54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_309c58:
    // 0x309c58: 0xc05cec4  jal         func_173B10
label_309c5c:
    if (ctx->pc == 0x309C5Cu) {
        ctx->pc = 0x309C60u;
        goto label_309c60;
    }
    ctx->pc = 0x309C58u;
    SET_GPR_U32(ctx, 31, 0x309C60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309C58u, 0x309C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C60u;
label_309c60:
    // 0x309c60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c64:
    // 0x309c64: 0xc0974c8  jal         func_25D320
label_309c68:
    if (ctx->pc == 0x309C68u) {
        ctx->pc = 0x309C6Cu;
        goto label_309c6c;
    }
    ctx->pc = 0x309C64u;
    SET_GPR_U32(ctx, 31, 0x309C6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309C64u, 0x309C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309C6Cu;
label_309c6c:
    // 0x309c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c70:
    // 0x309c70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309c70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_309c74:
    // 0x309c74: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_309c78:
    if (ctx->pc == 0x309C78u) {
        ctx->pc = 0x309C7Cu;
        goto label_309c7c;
    }
    ctx->pc = 0x309C74u;
    {
        const bool branch_taken_0x309c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309c74) {
            ctx->pc = 0x309EF4u;
            goto label_309ef4;
        }
    }
    ctx->pc = 0x309C7Cu;
label_309c7c:
    // 0x309c7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c80:
    // 0x309c80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x309c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_309c84:
    // 0x309c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_309c88:
    // 0x309c88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x309c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_309c8c:
    // 0x309c8c: 0x10000099  b           . + 4 + (0x99 << 2)
label_309c90:
    if (ctx->pc == 0x309C90u) {
        ctx->pc = 0x309C94u;
        goto label_309c94;
    }
    ctx->pc = 0x309C8Cu;
    {
        const bool branch_taken_0x309c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309c8c) {
            ctx->pc = 0x309EF4u;
            goto label_309ef4;
        }
    }
    ctx->pc = 0x309C94u;
label_309c94:
    // 0x309c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c98:
    // 0x309c98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309c9c:
    // 0x309c9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_309ca0:
    // 0x309ca0: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x309ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_309ca4:
    // 0x309ca4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309ca8:
    // 0x309ca8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_309cac:
    // 0x309cac: 0xc0965d0  jal         func_259740
label_309cb0:
    if (ctx->pc == 0x309CB0u) {
        ctx->pc = 0x309CB4u;
        goto label_309cb4;
    }
    ctx->pc = 0x309CACu;
    SET_GPR_U32(ctx, 31, 0x309CB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309CACu, 0x309CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309CB4u;
label_309cb4:
    // 0x309cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309cb8:
    // 0x309cb8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_309cbc:
    // 0x309cbc: 0x3c023e97  lui         $v0, 0x3E97
    ctx->pc = 0x309cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16023 << 16));
label_309cc0:
    // 0x309cc0: 0x3442e9d8  ori         $v0, $v0, 0xE9D8
    ctx->pc = 0x309cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59864);
label_309cc4:
    // 0x309cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309cc8:
    // 0x309cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ccc:
    // 0x309ccc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x309cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_309cd0:
    // 0x309cd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309cd4:
    // 0x309cd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_309cd8:
    // 0x309cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_309cdc:
    // 0x309cdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309ce0:
    // 0x309ce0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x309ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_309ce4:
    // 0x309ce4: 0x24429730  addiu       $v0, $v0, -0x68D0
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940464));
label_309ce8:
    // 0x309ce8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x309ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_309cec:
    // 0x309cec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x309cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_309cf0:
    // 0x309cf0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x309cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_309cf4:
    // 0x309cf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309cf8:
    // 0x309cf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x309cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_309cfc:
    // 0x309cfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d00:
    // 0x309d00: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x309d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
label_309d04:
    // 0x309d04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x309d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_309d08:
    // 0x309d08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x309d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_309d0c:
    // 0x309d0c: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x309d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
label_309d10:
    // 0x309d10: 0xc06d02c  jal         func_1B40B0
label_309d14:
    if (ctx->pc == 0x309D14u) {
        ctx->pc = 0x309D18u;
        goto label_309d18;
    }
    ctx->pc = 0x309D10u;
    SET_GPR_U32(ctx, 31, 0x309D18u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x309D10u, 0x309D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309D18u;
label_309d18:
    // 0x309d18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d1c:
    // 0x309d1c: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x309d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309d20:
    // 0x309d20: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x309d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_309d24:
    // 0x309d24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x309d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_309d28:
    // 0x309d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309d2c:
    // 0x309d2c: 0x0  nop
    ctx->pc = 0x309d2cu;
    // NOP
label_309d30:
    // 0x309d30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_309d34:
    // 0x309d34: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x309d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_309d38:
    // 0x309d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309d3c:
    // 0x309d3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d40:
    // 0x309d40: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_309d44:
    // 0x309d44: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x309d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
label_309d48:
    // 0x309d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309d4c:
    // 0x309d4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d50:
    // 0x309d50: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_309d54:
    // 0x309d54: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x309d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_309d58:
    // 0x309d58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d5c:
    // 0x309d5c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_309d60:
    // 0x309d60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x309d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309d64:
    // 0x309d64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d68:
    // 0x309d68: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x309d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309d6c:
    // 0x309d6c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309d6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_309d70:
    // 0x309d70: 0xc058fec  jal         func_163FB0
label_309d74:
    if (ctx->pc == 0x309D74u) {
        ctx->pc = 0x309D78u;
        goto label_309d78;
    }
    ctx->pc = 0x309D70u;
    SET_GPR_U32(ctx, 31, 0x309D78u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x309D70u, 0x309D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309D78u;
label_309d78:
    // 0x309d78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d7c:
    // 0x309d7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_309d80:
    // 0x309d80: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x309d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_309d84:
    // 0x309d84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d88:
    // 0x309d88: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x309d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_309d8c:
    // 0x309d8c: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x309d8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_309d90:
    // 0x309d90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x309d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_309d94:
    // 0x309d94: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x309d94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_309d98:
    // 0x309d98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309d9c:
    // 0x309d9c: 0xc05cd10  jal         func_173440
label_309da0:
    if (ctx->pc == 0x309DA0u) {
        ctx->pc = 0x309DA4u;
        goto label_309da4;
    }
    ctx->pc = 0x309D9Cu;
    SET_GPR_U32(ctx, 31, 0x309DA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309D9Cu, 0x309DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DA4u;
label_309da4:
    // 0x309da4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309da8:
    // 0x309da8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_309dac:
    // 0x309dac: 0xc05cec4  jal         func_173B10
label_309db0:
    if (ctx->pc == 0x309DB0u) {
        ctx->pc = 0x309DB4u;
        goto label_309db4;
    }
    ctx->pc = 0x309DACu;
    SET_GPR_U32(ctx, 31, 0x309DB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309DACu, 0x309DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DB4u;
label_309db4:
    // 0x309db4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309db8:
    // 0x309db8: 0xc0974c8  jal         func_25D320
label_309dbc:
    if (ctx->pc == 0x309DBCu) {
        ctx->pc = 0x309DC0u;
        goto label_309dc0;
    }
    ctx->pc = 0x309DB8u;
    SET_GPR_U32(ctx, 31, 0x309DC0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309DB8u, 0x309DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DC0u;
label_309dc0:
    // 0x309dc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309dc4:
    // 0x309dc4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x309dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_309dc8:
    // 0x309dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_309dcc:
    // 0x309dcc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x309dccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_309dd0:
    // 0x309dd0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x309dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_309dd4:
    // 0x309dd4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x309dd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_309dd8:
    // 0x309dd8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x309dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_309ddc:
    // 0x309ddc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x309ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_309de0:
    // 0x309de0: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x309de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
label_309de4:
    // 0x309de4: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
label_309de8:
    if (ctx->pc == 0x309DE8u) {
        ctx->pc = 0x309DECu;
        goto label_309dec;
    }
    ctx->pc = 0x309DE4u;
    {
        const bool branch_taken_0x309de4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x309de4) {
            ctx->pc = 0x309EF4u;
            goto label_309ef4;
        }
    }
    ctx->pc = 0x309DECu;
label_309dec:
    // 0x309dec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309df0:
    // 0x309df0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x309df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_309df4:
    // 0x309df4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_309df8:
    // 0x309df8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x309df8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_309dfc:
    // 0x309dfc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_309e00:
    if (ctx->pc == 0x309E00u) {
        ctx->pc = 0x309E04u;
        goto label_309e04;
    }
    ctx->pc = 0x309DFCu;
    {
        const bool branch_taken_0x309dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309dfc) {
            ctx->pc = 0x309EF4u;
            goto label_309ef4;
        }
    }
    ctx->pc = 0x309E04u;
label_309e04:
    // 0x309e04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e08:
    // 0x309e08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e0c:
    // 0x309e0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_309e10:
    // 0x309e10: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x309e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_309e14:
    // 0x309e14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309e18:
    // 0x309e18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_309e1c:
    // 0x309e1c: 0xc0965d0  jal         func_259740
label_309e20:
    if (ctx->pc == 0x309E20u) {
        ctx->pc = 0x309E24u;
        goto label_309e24;
    }
    ctx->pc = 0x309E1Cu;
    SET_GPR_U32(ctx, 31, 0x309E24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309E1Cu, 0x309E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E24u;
label_309e24:
    // 0x309e24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e28:
    // 0x309e28: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x309e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_309e2c:
    // 0x309e2c: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x309e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_309e30:
    // 0x309e30: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x309e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_309e34:
    // 0x309e34: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x309e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_309e38:
    // 0x309e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309e3c:
    // 0x309e3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e40:
    // 0x309e40: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x309e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_309e44:
    // 0x309e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e48:
    // 0x309e48: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x309e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_309e4c:
    // 0x309e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_309e50:
    // 0x309e50: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309e54:
    // 0x309e54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e58:
    // 0x309e58: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x309e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309e5c:
    // 0x309e5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e60:
    // 0x309e60: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x309e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_309e64:
    // 0x309e64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x309e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_309e68:
    // 0x309e68: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x309e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_309e6c:
    // 0x309e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e70:
    // 0x309e70: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x309e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_309e74:
    // 0x309e74: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x309e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_309e78:
    // 0x309e78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x309e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_309e7c:
    // 0x309e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_309e80:
    // 0x309e80: 0x0  nop
    ctx->pc = 0x309e80u;
    // NOP
label_309e84:
    // 0x309e84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_309e88:
    // 0x309e88: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x309e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_309e8c:
    // 0x309e8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e90:
    // 0x309e90: 0xc05cd10  jal         func_173440
label_309e94:
    if (ctx->pc == 0x309E94u) {
        ctx->pc = 0x309E98u;
        goto label_309e98;
    }
    ctx->pc = 0x309E90u;
    SET_GPR_U32(ctx, 31, 0x309E98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309E90u, 0x309E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309E98u;
label_309e98:
    // 0x309e98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309e9c:
    // 0x309e9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_309ea0:
    // 0x309ea0: 0xc05cec4  jal         func_173B10
label_309ea4:
    if (ctx->pc == 0x309EA4u) {
        ctx->pc = 0x309EA8u;
        goto label_309ea8;
    }
    ctx->pc = 0x309EA0u;
    SET_GPR_U32(ctx, 31, 0x309EA8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309EA0u, 0x309EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EA8u;
label_309ea8:
    // 0x309ea8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309eac:
    // 0x309eac: 0xc0974c8  jal         func_25D320
label_309eb0:
    if (ctx->pc == 0x309EB0u) {
        ctx->pc = 0x309EB4u;
        goto label_309eb4;
    }
    ctx->pc = 0x309EACu;
    SET_GPR_U32(ctx, 31, 0x309EB4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309EACu, 0x309EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EB4u;
label_309eb4:
    // 0x309eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309eb8:
    // 0x309eb8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_309ebc:
    // 0x309ebc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_309ec0:
    if (ctx->pc == 0x309EC0u) {
        ctx->pc = 0x309EC4u;
        goto label_309ec4;
    }
    ctx->pc = 0x309EBCu;
    {
        const bool branch_taken_0x309ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ebc) {
            ctx->pc = 0x309EF4u;
            goto label_309ef4;
        }
    }
    ctx->pc = 0x309EC4u;
label_309ec4:
    // 0x309ec4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309ec8:
    // 0x309ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ecc:
    // 0x309ecc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_309ed0:
    // 0x309ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309ed4:
    // 0x309ed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ed8:
    // 0x309ed8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_309edc:
    // 0x309edc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ee0:
    // 0x309ee0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_309ee4:
    // 0x309ee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ee8:
    // 0x309ee8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_309eec:
    // 0x309eec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_309ef0:
    // 0x309ef0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_309ef4:
    // 0x309ef4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x309ef4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_309ef8:
    // 0x309ef8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x309ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_309efc:
    // 0x309efc: 0x3e00008  jr          $ra
label_309f00:
    if (ctx->pc == 0x309F00u) {
        ctx->pc = 0x309F04u;
        goto label_fallthrough_0x309efc;
    }
    ctx->pc = 0x309EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x309efc:
    ctx->pc = 0x309F04u;
}
