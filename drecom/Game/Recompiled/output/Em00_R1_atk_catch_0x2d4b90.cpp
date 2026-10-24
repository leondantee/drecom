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

// Function: Em00_R1_atk_catch
// Address: 0x2d4b90 - 0x2d4e64
void Em00_R1_atk_catch_0x2d4b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_catch_0x2d4b90");
#endif

    switch (ctx->pc) {
        case 0x2d4b90u: goto label_2d4b90;
        case 0x2d4b94u: goto label_2d4b94;
        case 0x2d4b98u: goto label_2d4b98;
        case 0x2d4b9cu: goto label_2d4b9c;
        case 0x2d4ba0u: goto label_2d4ba0;
        case 0x2d4ba4u: goto label_2d4ba4;
        case 0x2d4ba8u: goto label_2d4ba8;
        case 0x2d4bacu: goto label_2d4bac;
        case 0x2d4bb0u: goto label_2d4bb0;
        case 0x2d4bb4u: goto label_2d4bb4;
        case 0x2d4bb8u: goto label_2d4bb8;
        case 0x2d4bbcu: goto label_2d4bbc;
        case 0x2d4bc0u: goto label_2d4bc0;
        case 0x2d4bc4u: goto label_2d4bc4;
        case 0x2d4bc8u: goto label_2d4bc8;
        case 0x2d4bccu: goto label_2d4bcc;
        case 0x2d4bd0u: goto label_2d4bd0;
        case 0x2d4bd4u: goto label_2d4bd4;
        case 0x2d4bd8u: goto label_2d4bd8;
        case 0x2d4bdcu: goto label_2d4bdc;
        case 0x2d4be0u: goto label_2d4be0;
        case 0x2d4be4u: goto label_2d4be4;
        case 0x2d4be8u: goto label_2d4be8;
        case 0x2d4becu: goto label_2d4bec;
        case 0x2d4bf0u: goto label_2d4bf0;
        case 0x2d4bf4u: goto label_2d4bf4;
        case 0x2d4bf8u: goto label_2d4bf8;
        case 0x2d4bfcu: goto label_2d4bfc;
        case 0x2d4c00u: goto label_2d4c00;
        case 0x2d4c04u: goto label_2d4c04;
        case 0x2d4c08u: goto label_2d4c08;
        case 0x2d4c0cu: goto label_2d4c0c;
        case 0x2d4c10u: goto label_2d4c10;
        case 0x2d4c14u: goto label_2d4c14;
        case 0x2d4c18u: goto label_2d4c18;
        case 0x2d4c1cu: goto label_2d4c1c;
        case 0x2d4c20u: goto label_2d4c20;
        case 0x2d4c24u: goto label_2d4c24;
        case 0x2d4c28u: goto label_2d4c28;
        case 0x2d4c2cu: goto label_2d4c2c;
        case 0x2d4c30u: goto label_2d4c30;
        case 0x2d4c34u: goto label_2d4c34;
        case 0x2d4c38u: goto label_2d4c38;
        case 0x2d4c3cu: goto label_2d4c3c;
        case 0x2d4c40u: goto label_2d4c40;
        case 0x2d4c44u: goto label_2d4c44;
        case 0x2d4c48u: goto label_2d4c48;
        case 0x2d4c4cu: goto label_2d4c4c;
        case 0x2d4c50u: goto label_2d4c50;
        case 0x2d4c54u: goto label_2d4c54;
        case 0x2d4c58u: goto label_2d4c58;
        case 0x2d4c5cu: goto label_2d4c5c;
        case 0x2d4c60u: goto label_2d4c60;
        case 0x2d4c64u: goto label_2d4c64;
        case 0x2d4c68u: goto label_2d4c68;
        case 0x2d4c6cu: goto label_2d4c6c;
        case 0x2d4c70u: goto label_2d4c70;
        case 0x2d4c74u: goto label_2d4c74;
        case 0x2d4c78u: goto label_2d4c78;
        case 0x2d4c7cu: goto label_2d4c7c;
        case 0x2d4c80u: goto label_2d4c80;
        case 0x2d4c84u: goto label_2d4c84;
        case 0x2d4c88u: goto label_2d4c88;
        case 0x2d4c8cu: goto label_2d4c8c;
        case 0x2d4c90u: goto label_2d4c90;
        case 0x2d4c94u: goto label_2d4c94;
        case 0x2d4c98u: goto label_2d4c98;
        case 0x2d4c9cu: goto label_2d4c9c;
        case 0x2d4ca0u: goto label_2d4ca0;
        case 0x2d4ca4u: goto label_2d4ca4;
        case 0x2d4ca8u: goto label_2d4ca8;
        case 0x2d4cacu: goto label_2d4cac;
        case 0x2d4cb0u: goto label_2d4cb0;
        case 0x2d4cb4u: goto label_2d4cb4;
        case 0x2d4cb8u: goto label_2d4cb8;
        case 0x2d4cbcu: goto label_2d4cbc;
        case 0x2d4cc0u: goto label_2d4cc0;
        case 0x2d4cc4u: goto label_2d4cc4;
        case 0x2d4cc8u: goto label_2d4cc8;
        case 0x2d4cccu: goto label_2d4ccc;
        case 0x2d4cd0u: goto label_2d4cd0;
        case 0x2d4cd4u: goto label_2d4cd4;
        case 0x2d4cd8u: goto label_2d4cd8;
        case 0x2d4cdcu: goto label_2d4cdc;
        case 0x2d4ce0u: goto label_2d4ce0;
        case 0x2d4ce4u: goto label_2d4ce4;
        case 0x2d4ce8u: goto label_2d4ce8;
        case 0x2d4cecu: goto label_2d4cec;
        case 0x2d4cf0u: goto label_2d4cf0;
        case 0x2d4cf4u: goto label_2d4cf4;
        case 0x2d4cf8u: goto label_2d4cf8;
        case 0x2d4cfcu: goto label_2d4cfc;
        case 0x2d4d00u: goto label_2d4d00;
        case 0x2d4d04u: goto label_2d4d04;
        case 0x2d4d08u: goto label_2d4d08;
        case 0x2d4d0cu: goto label_2d4d0c;
        case 0x2d4d10u: goto label_2d4d10;
        case 0x2d4d14u: goto label_2d4d14;
        case 0x2d4d18u: goto label_2d4d18;
        case 0x2d4d1cu: goto label_2d4d1c;
        case 0x2d4d20u: goto label_2d4d20;
        case 0x2d4d24u: goto label_2d4d24;
        case 0x2d4d28u: goto label_2d4d28;
        case 0x2d4d2cu: goto label_2d4d2c;
        case 0x2d4d30u: goto label_2d4d30;
        case 0x2d4d34u: goto label_2d4d34;
        case 0x2d4d38u: goto label_2d4d38;
        case 0x2d4d3cu: goto label_2d4d3c;
        case 0x2d4d40u: goto label_2d4d40;
        case 0x2d4d44u: goto label_2d4d44;
        case 0x2d4d48u: goto label_2d4d48;
        case 0x2d4d4cu: goto label_2d4d4c;
        case 0x2d4d50u: goto label_2d4d50;
        case 0x2d4d54u: goto label_2d4d54;
        case 0x2d4d58u: goto label_2d4d58;
        case 0x2d4d5cu: goto label_2d4d5c;
        case 0x2d4d60u: goto label_2d4d60;
        case 0x2d4d64u: goto label_2d4d64;
        case 0x2d4d68u: goto label_2d4d68;
        case 0x2d4d6cu: goto label_2d4d6c;
        case 0x2d4d70u: goto label_2d4d70;
        case 0x2d4d74u: goto label_2d4d74;
        case 0x2d4d78u: goto label_2d4d78;
        case 0x2d4d7cu: goto label_2d4d7c;
        case 0x2d4d80u: goto label_2d4d80;
        case 0x2d4d84u: goto label_2d4d84;
        case 0x2d4d88u: goto label_2d4d88;
        case 0x2d4d8cu: goto label_2d4d8c;
        case 0x2d4d90u: goto label_2d4d90;
        case 0x2d4d94u: goto label_2d4d94;
        case 0x2d4d98u: goto label_2d4d98;
        case 0x2d4d9cu: goto label_2d4d9c;
        case 0x2d4da0u: goto label_2d4da0;
        case 0x2d4da4u: goto label_2d4da4;
        case 0x2d4da8u: goto label_2d4da8;
        case 0x2d4dacu: goto label_2d4dac;
        case 0x2d4db0u: goto label_2d4db0;
        case 0x2d4db4u: goto label_2d4db4;
        case 0x2d4db8u: goto label_2d4db8;
        case 0x2d4dbcu: goto label_2d4dbc;
        case 0x2d4dc0u: goto label_2d4dc0;
        case 0x2d4dc4u: goto label_2d4dc4;
        case 0x2d4dc8u: goto label_2d4dc8;
        case 0x2d4dccu: goto label_2d4dcc;
        case 0x2d4dd0u: goto label_2d4dd0;
        case 0x2d4dd4u: goto label_2d4dd4;
        case 0x2d4dd8u: goto label_2d4dd8;
        case 0x2d4ddcu: goto label_2d4ddc;
        case 0x2d4de0u: goto label_2d4de0;
        case 0x2d4de4u: goto label_2d4de4;
        case 0x2d4de8u: goto label_2d4de8;
        case 0x2d4decu: goto label_2d4dec;
        case 0x2d4df0u: goto label_2d4df0;
        case 0x2d4df4u: goto label_2d4df4;
        case 0x2d4df8u: goto label_2d4df8;
        case 0x2d4dfcu: goto label_2d4dfc;
        case 0x2d4e00u: goto label_2d4e00;
        case 0x2d4e04u: goto label_2d4e04;
        case 0x2d4e08u: goto label_2d4e08;
        case 0x2d4e0cu: goto label_2d4e0c;
        case 0x2d4e10u: goto label_2d4e10;
        case 0x2d4e14u: goto label_2d4e14;
        case 0x2d4e18u: goto label_2d4e18;
        case 0x2d4e1cu: goto label_2d4e1c;
        case 0x2d4e20u: goto label_2d4e20;
        case 0x2d4e24u: goto label_2d4e24;
        case 0x2d4e28u: goto label_2d4e28;
        case 0x2d4e2cu: goto label_2d4e2c;
        case 0x2d4e30u: goto label_2d4e30;
        case 0x2d4e34u: goto label_2d4e34;
        case 0x2d4e38u: goto label_2d4e38;
        case 0x2d4e3cu: goto label_2d4e3c;
        case 0x2d4e40u: goto label_2d4e40;
        case 0x2d4e44u: goto label_2d4e44;
        case 0x2d4e48u: goto label_2d4e48;
        case 0x2d4e4cu: goto label_2d4e4c;
        case 0x2d4e50u: goto label_2d4e50;
        case 0x2d4e54u: goto label_2d4e54;
        case 0x2d4e58u: goto label_2d4e58;
        case 0x2d4e5cu: goto label_2d4e5c;
        case 0x2d4e60u: goto label_2d4e60;
        default: break;
    }

    ctx->pc = 0x2d4b90u;

label_2d4b90:
    // 0x2d4b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d4b94:
    // 0x2d4b94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d4b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2d4b98:
    // 0x2d4b98: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_2d4b9c:
    // 0x2d4b9c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2d4ba0:
    // 0x2d4ba0: 0x246387b0  addiu       $v1, $v1, -0x7850
    ctx->pc = 0x2d4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936496));
label_2d4ba4:
    // 0x2d4ba4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d4ba8:
    // 0x2d4ba8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2d4ba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d4bac:
    // 0x2d4bac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d4bacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2d4bb0:
    // 0x2d4bb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4bb4:
    // 0x2d4bb4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d4bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d4bb8:
    // 0x2d4bb8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2d4bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d4bbc:
    // 0x2d4bbc: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x2d4bbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2d4bc0:
    // 0x2d4bc0: 0x102000a4  beqz        $at, . + 4 + (0xA4 << 2)
label_2d4bc4:
    if (ctx->pc == 0x2D4BC4u) {
        ctx->pc = 0x2D4BC8u;
        goto label_2d4bc8;
    }
    ctx->pc = 0x2D4BC0u;
    {
        const bool branch_taken_0x2d4bc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4bc0) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4BC8u;
label_2d4bc8:
    // 0x2d4bc8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2d4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2d4bcc:
    // 0x2d4bcc: 0x24641940  addiu       $a0, $v1, 0x1940
    ctx->pc = 0x2d4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6464));
label_2d4bd0:
    // 0x2d4bd0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2d4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2d4bd4:
    // 0x2d4bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d4bd8:
    // 0x2d4bd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d4bdc:
    // 0x2d4bdc: 0x600008  jr          $v1
label_2d4be0:
    if (ctx->pc == 0x2D4BE0u) {
        ctx->pc = 0x2D4BE4u;
        goto label_2d4be4;
    }
    ctx->pc = 0x2D4BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4BDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D4BE4u;
label_2d4be4:
    // 0x2d4be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4be8:
    // 0x2d4be8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4bec:
    // 0x2d4bec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2d4bf0:
    // 0x2d4bf0: 0x24065a10  addiu       $a2, $zero, 0x5A10
    ctx->pc = 0x2d4bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23056));
label_2d4bf4:
    // 0x2d4bf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4bf8:
    // 0x2d4bf8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d4bfc:
    // 0x2d4bfc: 0xc0965d0  jal         func_259740
label_2d4c00:
    if (ctx->pc == 0x2D4C00u) {
        ctx->pc = 0x2D4C04u;
        goto label_2d4c04;
    }
    ctx->pc = 0x2D4BFCu;
    SET_GPR_U32(ctx, 31, 0x2D4C04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4BFCu, 0x2D4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C04u;
label_2d4c04:
    // 0x2d4c04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c08:
    // 0x2d4c08: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4c08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2d4c0c:
    // 0x2d4c0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c10:
    // 0x2d4c10: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d4c14:
    // 0x2d4c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d4c18:
    // 0x2d4c18: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d4c1c:
    // 0x2d4c1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c20:
    // 0x2d4c20: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_2d4c24:
    // 0x2d4c24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2d4c28:
    if (ctx->pc == 0x2D4C28u) {
        ctx->pc = 0x2D4C2Cu;
        goto label_2d4c2c;
    }
    ctx->pc = 0x2D4C24u;
    {
        const bool branch_taken_0x2d4c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4c24) {
            ctx->pc = 0x2D4C60u;
            goto label_2d4c60;
        }
    }
    ctx->pc = 0x2D4C2Cu;
label_2d4c2c:
    // 0x2d4c2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c30:
    // 0x2d4c30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2d4c34:
    // 0x2d4c34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c38:
    // 0x2d4c38: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_2d4c3c:
    // 0x2d4c3c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d4c40:
    // 0x2d4c40: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2d4c44:
    // 0x2d4c44: 0x24478c1c  addiu       $a3, $v0, -0x73E4
    ctx->pc = 0x2d4c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937628));
label_2d4c48:
    // 0x2d4c48: 0xc06d02c  jal         func_1B40B0
label_2d4c4c:
    if (ctx->pc == 0x2D4C4Cu) {
        ctx->pc = 0x2D4C50u;
        goto label_2d4c50;
    }
    ctx->pc = 0x2D4C48u;
    SET_GPR_U32(ctx, 31, 0x2D4C50u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4C48u, 0x2D4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C50u;
label_2d4c50:
    // 0x2d4c50: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d4c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_2d4c54:
    // 0x2d4c54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d4c54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2d4c58:
    // 0x2d4c58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c5c:
    // 0x2d4c5c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d4c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2d4c60:
    // 0x2d4c60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c64:
    // 0x2d4c64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d4c68:
    // 0x2d4c68: 0xc096b40  jal         func_25AD00
label_2d4c6c:
    if (ctx->pc == 0x2D4C6Cu) {
        ctx->pc = 0x2D4C70u;
        goto label_2d4c70;
    }
    ctx->pc = 0x2D4C68u;
    SET_GPR_U32(ctx, 31, 0x2D4C70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4C68u, 0x2D4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C70u;
label_2d4c70:
    // 0x2d4c70: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c74:
    // 0x2d4c74: 0xc05cd10  jal         func_173440
label_2d4c78:
    if (ctx->pc == 0x2D4C78u) {
        ctx->pc = 0x2D4C7Cu;
        goto label_2d4c7c;
    }
    ctx->pc = 0x2D4C74u;
    SET_GPR_U32(ctx, 31, 0x2D4C7Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4C74u, 0x2D4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C7Cu;
label_2d4c7c:
    // 0x2d4c7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c80:
    // 0x2d4c80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4c80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d4c84:
    // 0x2d4c84: 0xc05cec4  jal         func_173B10
label_2d4c88:
    if (ctx->pc == 0x2D4C88u) {
        ctx->pc = 0x2D4C8Cu;
        goto label_2d4c8c;
    }
    ctx->pc = 0x2D4C84u;
    SET_GPR_U32(ctx, 31, 0x2D4C8Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4C84u, 0x2D4C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C8Cu;
label_2d4c8c:
    // 0x2d4c8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c90:
    // 0x2d4c90: 0xc0974c8  jal         func_25D320
label_2d4c94:
    if (ctx->pc == 0x2D4C94u) {
        ctx->pc = 0x2D4C98u;
        goto label_2d4c98;
    }
    ctx->pc = 0x2D4C90u;
    SET_GPR_U32(ctx, 31, 0x2D4C98u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4C90u, 0x2D4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C98u;
label_2d4c98:
    // 0x2d4c98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4c9c:
    // 0x2d4c9c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2d4ca0:
    // 0x2d4ca0: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_2d4ca4:
    if (ctx->pc == 0x2D4CA4u) {
        ctx->pc = 0x2D4CA8u;
        goto label_2d4ca8;
    }
    ctx->pc = 0x2D4CA0u;
    {
        const bool branch_taken_0x2d4ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ca0) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4CA8u;
label_2d4ca8:
    // 0x2d4ca8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4cac:
    // 0x2d4cac: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_2d4cb0:
    // 0x2d4cb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2d4cb4:
    if (ctx->pc == 0x2D4CB4u) {
        ctx->pc = 0x2D4CB8u;
        goto label_2d4cb8;
    }
    ctx->pc = 0x2D4CB0u;
    {
        const bool branch_taken_0x2d4cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4cb0) {
            ctx->pc = 0x2D4CD0u;
            goto label_2d4cd0;
        }
    }
    ctx->pc = 0x2D4CB8u;
label_2d4cb8:
    // 0x2d4cb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4cbc:
    // 0x2d4cbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d4cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2d4cc0:
    // 0x2d4cc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d4cc4:
    // 0x2d4cc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d4cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2d4cc8:
    // 0x2d4cc8: 0x10000062  b           . + 4 + (0x62 << 2)
label_2d4ccc:
    if (ctx->pc == 0x2D4CCCu) {
        ctx->pc = 0x2D4CD0u;
        goto label_2d4cd0;
    }
    ctx->pc = 0x2D4CC8u;
    {
        const bool branch_taken_0x2d4cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4cc8) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4CD0u;
label_2d4cd0:
    // 0x2d4cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4cd4:
    // 0x2d4cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4cd8:
    // 0x2d4cd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2d4cdc:
    // 0x2d4cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4ce0:
    // 0x2d4ce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4ce4:
    // 0x2d4ce4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d4ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_2d4ce8:
    // 0x2d4ce8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4cec:
    // 0x2d4cec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2d4cf0:
    // 0x2d4cf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4cf4:
    // 0x2d4cf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2d4cf8:
    // 0x2d4cf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4cfc:
    // 0x2d4cfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d4d00:
    // 0x2d4d00: 0x10000054  b           . + 4 + (0x54 << 2)
label_2d4d04:
    if (ctx->pc == 0x2D4D04u) {
        ctx->pc = 0x2D4D08u;
        goto label_2d4d08;
    }
    ctx->pc = 0x2D4D00u;
    {
        const bool branch_taken_0x2d4d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d00) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4D08u;
label_2d4d08:
    // 0x2d4d08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d0c:
    // 0x2d4d0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d10:
    // 0x2d4d10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2d4d14:
    // 0x2d4d14: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
label_2d4d18:
    // 0x2d4d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4d1c:
    // 0x2d4d1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d4d20:
    // 0x2d4d20: 0xc0965d0  jal         func_259740
label_2d4d24:
    if (ctx->pc == 0x2D4D24u) {
        ctx->pc = 0x2D4D28u;
        goto label_2d4d28;
    }
    ctx->pc = 0x2D4D20u;
    SET_GPR_U32(ctx, 31, 0x2D4D28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4D20u, 0x2D4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D28u;
label_2d4d28:
    // 0x2d4d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d2c:
    // 0x2d4d2c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2d4d30:
    // 0x2d4d30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d34:
    // 0x2d4d34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d4d38:
    // 0x2d4d38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d4d3c:
    // 0x2d4d3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d4d40:
    // 0x2d4d40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d44:
    // 0x2d4d44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d4d48:
    // 0x2d4d48: 0xc096b40  jal         func_25AD00
label_2d4d4c:
    if (ctx->pc == 0x2D4D4Cu) {
        ctx->pc = 0x2D4D50u;
        goto label_2d4d50;
    }
    ctx->pc = 0x2D4D48u;
    SET_GPR_U32(ctx, 31, 0x2D4D50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4D48u, 0x2D4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D50u;
label_2d4d50:
    // 0x2d4d50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d54:
    // 0x2d4d54: 0xc05cd10  jal         func_173440
label_2d4d58:
    if (ctx->pc == 0x2D4D58u) {
        ctx->pc = 0x2D4D5Cu;
        goto label_2d4d5c;
    }
    ctx->pc = 0x2D4D54u;
    SET_GPR_U32(ctx, 31, 0x2D4D5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4D54u, 0x2D4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D5Cu;
label_2d4d5c:
    // 0x2d4d5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d60:
    // 0x2d4d60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4d60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d4d64:
    // 0x2d4d64: 0xc05cec4  jal         func_173B10
label_2d4d68:
    if (ctx->pc == 0x2D4D68u) {
        ctx->pc = 0x2D4D6Cu;
        goto label_2d4d6c;
    }
    ctx->pc = 0x2D4D64u;
    SET_GPR_U32(ctx, 31, 0x2D4D6Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4D64u, 0x2D4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D6Cu;
label_2d4d6c:
    // 0x2d4d6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d70:
    // 0x2d4d70: 0xc0974c8  jal         func_25D320
label_2d4d74:
    if (ctx->pc == 0x2D4D74u) {
        ctx->pc = 0x2D4D78u;
        goto label_2d4d78;
    }
    ctx->pc = 0x2D4D70u;
    SET_GPR_U32(ctx, 31, 0x2D4D78u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4D70u, 0x2D4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D78u;
label_2d4d78:
    // 0x2d4d78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d7c:
    // 0x2d4d7c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2d4d80:
    // 0x2d4d80: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_2d4d84:
    if (ctx->pc == 0x2D4D84u) {
        ctx->pc = 0x2D4D88u;
        goto label_2d4d88;
    }
    ctx->pc = 0x2D4D80u;
    {
        const bool branch_taken_0x2d4d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d80) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4D88u;
label_2d4d88:
    // 0x2d4d88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4d8c:
    // 0x2d4d8c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d4d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2d4d90:
    // 0x2d4d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d4d94:
    // 0x2d4d94: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d4d94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_2d4d98:
    // 0x2d4d98: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2d4d9c:
    if (ctx->pc == 0x2D4D9Cu) {
        ctx->pc = 0x2D4DA0u;
        goto label_2d4da0;
    }
    ctx->pc = 0x2D4D98u;
    {
        const bool branch_taken_0x2d4d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4d98) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4DA0u;
label_2d4da0:
    // 0x2d4da0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4da4:
    // 0x2d4da4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4da8:
    // 0x2d4da8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_2d4dac:
    // 0x2d4dac: 0x24060a12  addiu       $a2, $zero, 0xA12
    ctx->pc = 0x2d4dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2578));
label_2d4db0:
    // 0x2d4db0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4db4:
    // 0x2d4db4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4db4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d4db8:
    // 0x2d4db8: 0xc0965d0  jal         func_259740
label_2d4dbc:
    if (ctx->pc == 0x2D4DBCu) {
        ctx->pc = 0x2D4DC0u;
        goto label_2d4dc0;
    }
    ctx->pc = 0x2D4DB8u;
    SET_GPR_U32(ctx, 31, 0x2D4DC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4DB8u, 0x2D4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DC0u;
label_2d4dc0:
    // 0x2d4dc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4dc4:
    // 0x2d4dc4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2d4dc8:
    // 0x2d4dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4dcc:
    // 0x2d4dcc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d4dd0:
    // 0x2d4dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2d4dd4:
    // 0x2d4dd4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d4dd8:
    // 0x2d4dd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4ddc:
    // 0x2d4ddc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d4de0:
    // 0x2d4de0: 0xc096b40  jal         func_25AD00
label_2d4de4:
    if (ctx->pc == 0x2D4DE4u) {
        ctx->pc = 0x2D4DE8u;
        goto label_2d4de8;
    }
    ctx->pc = 0x2D4DE0u;
    SET_GPR_U32(ctx, 31, 0x2D4DE8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4DE0u, 0x2D4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DE8u;
label_2d4de8:
    // 0x2d4de8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4dec:
    // 0x2d4dec: 0xc05cd10  jal         func_173440
label_2d4df0:
    if (ctx->pc == 0x2D4DF0u) {
        ctx->pc = 0x2D4DF4u;
        goto label_2d4df4;
    }
    ctx->pc = 0x2D4DECu;
    SET_GPR_U32(ctx, 31, 0x2D4DF4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4DECu, 0x2D4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DF4u;
label_2d4df4:
    // 0x2d4df4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4df8:
    // 0x2d4df8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4df8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2d4dfc:
    // 0x2d4dfc: 0xc05cec4  jal         func_173B10
label_2d4e00:
    if (ctx->pc == 0x2D4E00u) {
        ctx->pc = 0x2D4E04u;
        goto label_2d4e04;
    }
    ctx->pc = 0x2D4DFCu;
    SET_GPR_U32(ctx, 31, 0x2D4E04u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4DFCu, 0x2D4E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E04u;
label_2d4e04:
    // 0x2d4e04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e08:
    // 0x2d4e08: 0xc0974c8  jal         func_25D320
label_2d4e0c:
    if (ctx->pc == 0x2D4E0Cu) {
        ctx->pc = 0x2D4E10u;
        goto label_2d4e10;
    }
    ctx->pc = 0x2D4E08u;
    SET_GPR_U32(ctx, 31, 0x2D4E10u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4E08u, 0x2D4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E10u;
label_2d4e10:
    // 0x2d4e10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e14:
    // 0x2d4e14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_2d4e18:
    // 0x2d4e18: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2d4e1c:
    if (ctx->pc == 0x2D4E1Cu) {
        ctx->pc = 0x2D4E20u;
        goto label_2d4e20;
    }
    ctx->pc = 0x2D4E18u;
    {
        const bool branch_taken_0x2d4e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4e18) {
            ctx->pc = 0x2D4E54u;
            goto label_2d4e54;
        }
    }
    ctx->pc = 0x2D4E20u;
label_2d4e20:
    // 0x2d4e20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_2d4e24:
    // 0x2d4e24: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x2d4e24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962280), (uint8_t)GPR_U32(ctx, 0));
label_2d4e28:
    // 0x2d4e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d4e2c:
    // 0x2d4e2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e30:
    // 0x2d4e30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2d4e34:
    // 0x2d4e34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e38:
    // 0x2d4e38: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d4e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_2d4e3c:
    // 0x2d4e3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e40:
    // 0x2d4e40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_2d4e44:
    // 0x2d4e44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e48:
    // 0x2d4e48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_2d4e4c:
    // 0x2d4e4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d4e50:
    // 0x2d4e50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d4e54:
    // 0x2d4e54: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d4e54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4e58:
    // 0x2d4e58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d4e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d4e5c:
    // 0x2d4e5c: 0x3e00008  jr          $ra
label_2d4e60:
    if (ctx->pc == 0x2D4E60u) {
        ctx->pc = 0x2D4E64u;
        goto label_fallthrough_0x2d4e5c;
    }
    ctx->pc = 0x2D4E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d4e5c:
    ctx->pc = 0x2D4E64u;
}
