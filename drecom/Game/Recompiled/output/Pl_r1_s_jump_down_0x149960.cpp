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

// Function: Pl_r1_s_jump_down
// Address: 0x149960 - 0x149e20
void Pl_r1_s_jump_down_0x149960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_s_jump_down_0x149960");
#endif

    switch (ctx->pc) {
        case 0x149960u: goto label_149960;
        case 0x149964u: goto label_149964;
        case 0x149968u: goto label_149968;
        case 0x14996cu: goto label_14996c;
        case 0x149970u: goto label_149970;
        case 0x149974u: goto label_149974;
        case 0x149978u: goto label_149978;
        case 0x14997cu: goto label_14997c;
        case 0x149980u: goto label_149980;
        case 0x149984u: goto label_149984;
        case 0x149988u: goto label_149988;
        case 0x14998cu: goto label_14998c;
        case 0x149990u: goto label_149990;
        case 0x149994u: goto label_149994;
        case 0x149998u: goto label_149998;
        case 0x14999cu: goto label_14999c;
        case 0x1499a0u: goto label_1499a0;
        case 0x1499a4u: goto label_1499a4;
        case 0x1499a8u: goto label_1499a8;
        case 0x1499acu: goto label_1499ac;
        case 0x1499b0u: goto label_1499b0;
        case 0x1499b4u: goto label_1499b4;
        case 0x1499b8u: goto label_1499b8;
        case 0x1499bcu: goto label_1499bc;
        case 0x1499c0u: goto label_1499c0;
        case 0x1499c4u: goto label_1499c4;
        case 0x1499c8u: goto label_1499c8;
        case 0x1499ccu: goto label_1499cc;
        case 0x1499d0u: goto label_1499d0;
        case 0x1499d4u: goto label_1499d4;
        case 0x1499d8u: goto label_1499d8;
        case 0x1499dcu: goto label_1499dc;
        case 0x1499e0u: goto label_1499e0;
        case 0x1499e4u: goto label_1499e4;
        case 0x1499e8u: goto label_1499e8;
        case 0x1499ecu: goto label_1499ec;
        case 0x1499f0u: goto label_1499f0;
        case 0x1499f4u: goto label_1499f4;
        case 0x1499f8u: goto label_1499f8;
        case 0x1499fcu: goto label_1499fc;
        case 0x149a00u: goto label_149a00;
        case 0x149a04u: goto label_149a04;
        case 0x149a08u: goto label_149a08;
        case 0x149a0cu: goto label_149a0c;
        case 0x149a10u: goto label_149a10;
        case 0x149a14u: goto label_149a14;
        case 0x149a18u: goto label_149a18;
        case 0x149a1cu: goto label_149a1c;
        case 0x149a20u: goto label_149a20;
        case 0x149a24u: goto label_149a24;
        case 0x149a28u: goto label_149a28;
        case 0x149a2cu: goto label_149a2c;
        case 0x149a30u: goto label_149a30;
        case 0x149a34u: goto label_149a34;
        case 0x149a38u: goto label_149a38;
        case 0x149a3cu: goto label_149a3c;
        case 0x149a40u: goto label_149a40;
        case 0x149a44u: goto label_149a44;
        case 0x149a48u: goto label_149a48;
        case 0x149a4cu: goto label_149a4c;
        case 0x149a50u: goto label_149a50;
        case 0x149a54u: goto label_149a54;
        case 0x149a58u: goto label_149a58;
        case 0x149a5cu: goto label_149a5c;
        case 0x149a60u: goto label_149a60;
        case 0x149a64u: goto label_149a64;
        case 0x149a68u: goto label_149a68;
        case 0x149a6cu: goto label_149a6c;
        case 0x149a70u: goto label_149a70;
        case 0x149a74u: goto label_149a74;
        case 0x149a78u: goto label_149a78;
        case 0x149a7cu: goto label_149a7c;
        case 0x149a80u: goto label_149a80;
        case 0x149a84u: goto label_149a84;
        case 0x149a88u: goto label_149a88;
        case 0x149a8cu: goto label_149a8c;
        case 0x149a90u: goto label_149a90;
        case 0x149a94u: goto label_149a94;
        case 0x149a98u: goto label_149a98;
        case 0x149a9cu: goto label_149a9c;
        case 0x149aa0u: goto label_149aa0;
        case 0x149aa4u: goto label_149aa4;
        case 0x149aa8u: goto label_149aa8;
        case 0x149aacu: goto label_149aac;
        case 0x149ab0u: goto label_149ab0;
        case 0x149ab4u: goto label_149ab4;
        case 0x149ab8u: goto label_149ab8;
        case 0x149abcu: goto label_149abc;
        case 0x149ac0u: goto label_149ac0;
        case 0x149ac4u: goto label_149ac4;
        case 0x149ac8u: goto label_149ac8;
        case 0x149accu: goto label_149acc;
        case 0x149ad0u: goto label_149ad0;
        case 0x149ad4u: goto label_149ad4;
        case 0x149ad8u: goto label_149ad8;
        case 0x149adcu: goto label_149adc;
        case 0x149ae0u: goto label_149ae0;
        case 0x149ae4u: goto label_149ae4;
        case 0x149ae8u: goto label_149ae8;
        case 0x149aecu: goto label_149aec;
        case 0x149af0u: goto label_149af0;
        case 0x149af4u: goto label_149af4;
        case 0x149af8u: goto label_149af8;
        case 0x149afcu: goto label_149afc;
        case 0x149b00u: goto label_149b00;
        case 0x149b04u: goto label_149b04;
        case 0x149b08u: goto label_149b08;
        case 0x149b0cu: goto label_149b0c;
        case 0x149b10u: goto label_149b10;
        case 0x149b14u: goto label_149b14;
        case 0x149b18u: goto label_149b18;
        case 0x149b1cu: goto label_149b1c;
        case 0x149b20u: goto label_149b20;
        case 0x149b24u: goto label_149b24;
        case 0x149b28u: goto label_149b28;
        case 0x149b2cu: goto label_149b2c;
        case 0x149b30u: goto label_149b30;
        case 0x149b34u: goto label_149b34;
        case 0x149b38u: goto label_149b38;
        case 0x149b3cu: goto label_149b3c;
        case 0x149b40u: goto label_149b40;
        case 0x149b44u: goto label_149b44;
        case 0x149b48u: goto label_149b48;
        case 0x149b4cu: goto label_149b4c;
        case 0x149b50u: goto label_149b50;
        case 0x149b54u: goto label_149b54;
        case 0x149b58u: goto label_149b58;
        case 0x149b5cu: goto label_149b5c;
        case 0x149b60u: goto label_149b60;
        case 0x149b64u: goto label_149b64;
        case 0x149b68u: goto label_149b68;
        case 0x149b6cu: goto label_149b6c;
        case 0x149b70u: goto label_149b70;
        case 0x149b74u: goto label_149b74;
        case 0x149b78u: goto label_149b78;
        case 0x149b7cu: goto label_149b7c;
        case 0x149b80u: goto label_149b80;
        case 0x149b84u: goto label_149b84;
        case 0x149b88u: goto label_149b88;
        case 0x149b8cu: goto label_149b8c;
        case 0x149b90u: goto label_149b90;
        case 0x149b94u: goto label_149b94;
        case 0x149b98u: goto label_149b98;
        case 0x149b9cu: goto label_149b9c;
        case 0x149ba0u: goto label_149ba0;
        case 0x149ba4u: goto label_149ba4;
        case 0x149ba8u: goto label_149ba8;
        case 0x149bacu: goto label_149bac;
        case 0x149bb0u: goto label_149bb0;
        case 0x149bb4u: goto label_149bb4;
        case 0x149bb8u: goto label_149bb8;
        case 0x149bbcu: goto label_149bbc;
        case 0x149bc0u: goto label_149bc0;
        case 0x149bc4u: goto label_149bc4;
        case 0x149bc8u: goto label_149bc8;
        case 0x149bccu: goto label_149bcc;
        case 0x149bd0u: goto label_149bd0;
        case 0x149bd4u: goto label_149bd4;
        case 0x149bd8u: goto label_149bd8;
        case 0x149bdcu: goto label_149bdc;
        case 0x149be0u: goto label_149be0;
        case 0x149be4u: goto label_149be4;
        case 0x149be8u: goto label_149be8;
        case 0x149becu: goto label_149bec;
        case 0x149bf0u: goto label_149bf0;
        case 0x149bf4u: goto label_149bf4;
        case 0x149bf8u: goto label_149bf8;
        case 0x149bfcu: goto label_149bfc;
        case 0x149c00u: goto label_149c00;
        case 0x149c04u: goto label_149c04;
        case 0x149c08u: goto label_149c08;
        case 0x149c0cu: goto label_149c0c;
        case 0x149c10u: goto label_149c10;
        case 0x149c14u: goto label_149c14;
        case 0x149c18u: goto label_149c18;
        case 0x149c1cu: goto label_149c1c;
        case 0x149c20u: goto label_149c20;
        case 0x149c24u: goto label_149c24;
        case 0x149c28u: goto label_149c28;
        case 0x149c2cu: goto label_149c2c;
        case 0x149c30u: goto label_149c30;
        case 0x149c34u: goto label_149c34;
        case 0x149c38u: goto label_149c38;
        case 0x149c3cu: goto label_149c3c;
        case 0x149c40u: goto label_149c40;
        case 0x149c44u: goto label_149c44;
        case 0x149c48u: goto label_149c48;
        case 0x149c4cu: goto label_149c4c;
        case 0x149c50u: goto label_149c50;
        case 0x149c54u: goto label_149c54;
        case 0x149c58u: goto label_149c58;
        case 0x149c5cu: goto label_149c5c;
        case 0x149c60u: goto label_149c60;
        case 0x149c64u: goto label_149c64;
        case 0x149c68u: goto label_149c68;
        case 0x149c6cu: goto label_149c6c;
        case 0x149c70u: goto label_149c70;
        case 0x149c74u: goto label_149c74;
        case 0x149c78u: goto label_149c78;
        case 0x149c7cu: goto label_149c7c;
        case 0x149c80u: goto label_149c80;
        case 0x149c84u: goto label_149c84;
        case 0x149c88u: goto label_149c88;
        case 0x149c8cu: goto label_149c8c;
        case 0x149c90u: goto label_149c90;
        case 0x149c94u: goto label_149c94;
        case 0x149c98u: goto label_149c98;
        case 0x149c9cu: goto label_149c9c;
        case 0x149ca0u: goto label_149ca0;
        case 0x149ca4u: goto label_149ca4;
        case 0x149ca8u: goto label_149ca8;
        case 0x149cacu: goto label_149cac;
        case 0x149cb0u: goto label_149cb0;
        case 0x149cb4u: goto label_149cb4;
        case 0x149cb8u: goto label_149cb8;
        case 0x149cbcu: goto label_149cbc;
        case 0x149cc0u: goto label_149cc0;
        case 0x149cc4u: goto label_149cc4;
        case 0x149cc8u: goto label_149cc8;
        case 0x149cccu: goto label_149ccc;
        case 0x149cd0u: goto label_149cd0;
        case 0x149cd4u: goto label_149cd4;
        case 0x149cd8u: goto label_149cd8;
        case 0x149cdcu: goto label_149cdc;
        case 0x149ce0u: goto label_149ce0;
        case 0x149ce4u: goto label_149ce4;
        case 0x149ce8u: goto label_149ce8;
        case 0x149cecu: goto label_149cec;
        case 0x149cf0u: goto label_149cf0;
        case 0x149cf4u: goto label_149cf4;
        case 0x149cf8u: goto label_149cf8;
        case 0x149cfcu: goto label_149cfc;
        case 0x149d00u: goto label_149d00;
        case 0x149d04u: goto label_149d04;
        case 0x149d08u: goto label_149d08;
        case 0x149d0cu: goto label_149d0c;
        case 0x149d10u: goto label_149d10;
        case 0x149d14u: goto label_149d14;
        case 0x149d18u: goto label_149d18;
        case 0x149d1cu: goto label_149d1c;
        case 0x149d20u: goto label_149d20;
        case 0x149d24u: goto label_149d24;
        case 0x149d28u: goto label_149d28;
        case 0x149d2cu: goto label_149d2c;
        case 0x149d30u: goto label_149d30;
        case 0x149d34u: goto label_149d34;
        case 0x149d38u: goto label_149d38;
        case 0x149d3cu: goto label_149d3c;
        case 0x149d40u: goto label_149d40;
        case 0x149d44u: goto label_149d44;
        case 0x149d48u: goto label_149d48;
        case 0x149d4cu: goto label_149d4c;
        case 0x149d50u: goto label_149d50;
        case 0x149d54u: goto label_149d54;
        case 0x149d58u: goto label_149d58;
        case 0x149d5cu: goto label_149d5c;
        case 0x149d60u: goto label_149d60;
        case 0x149d64u: goto label_149d64;
        case 0x149d68u: goto label_149d68;
        case 0x149d6cu: goto label_149d6c;
        case 0x149d70u: goto label_149d70;
        case 0x149d74u: goto label_149d74;
        case 0x149d78u: goto label_149d78;
        case 0x149d7cu: goto label_149d7c;
        case 0x149d80u: goto label_149d80;
        case 0x149d84u: goto label_149d84;
        case 0x149d88u: goto label_149d88;
        case 0x149d8cu: goto label_149d8c;
        case 0x149d90u: goto label_149d90;
        case 0x149d94u: goto label_149d94;
        case 0x149d98u: goto label_149d98;
        case 0x149d9cu: goto label_149d9c;
        case 0x149da0u: goto label_149da0;
        case 0x149da4u: goto label_149da4;
        case 0x149da8u: goto label_149da8;
        case 0x149dacu: goto label_149dac;
        case 0x149db0u: goto label_149db0;
        case 0x149db4u: goto label_149db4;
        case 0x149db8u: goto label_149db8;
        case 0x149dbcu: goto label_149dbc;
        case 0x149dc0u: goto label_149dc0;
        case 0x149dc4u: goto label_149dc4;
        case 0x149dc8u: goto label_149dc8;
        case 0x149dccu: goto label_149dcc;
        case 0x149dd0u: goto label_149dd0;
        case 0x149dd4u: goto label_149dd4;
        case 0x149dd8u: goto label_149dd8;
        case 0x149ddcu: goto label_149ddc;
        case 0x149de0u: goto label_149de0;
        case 0x149de4u: goto label_149de4;
        case 0x149de8u: goto label_149de8;
        case 0x149decu: goto label_149dec;
        case 0x149df0u: goto label_149df0;
        case 0x149df4u: goto label_149df4;
        case 0x149df8u: goto label_149df8;
        case 0x149dfcu: goto label_149dfc;
        case 0x149e00u: goto label_149e00;
        case 0x149e04u: goto label_149e04;
        case 0x149e08u: goto label_149e08;
        case 0x149e0cu: goto label_149e0c;
        case 0x149e10u: goto label_149e10;
        case 0x149e14u: goto label_149e14;
        case 0x149e18u: goto label_149e18;
        case 0x149e1cu: goto label_149e1c;
        default: break;
    }

    ctx->pc = 0x149960u;

label_149960:
    // 0x149960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_149964:
    // 0x149964: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x149964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_149968:
    // 0x149968: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x149968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_14996c:
    // 0x14996c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149970:
    // 0x149970: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x149970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149974:
    // 0x149974: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x149974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_149978:
    // 0x149978: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x149978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_14997c:
    // 0x14997c: 0x10200124  beqz        $at, . + 4 + (0x124 << 2)
label_149980:
    if (ctx->pc == 0x149980u) {
        ctx->pc = 0x149984u;
        goto label_149984;
    }
    ctx->pc = 0x14997Cu;
    {
        const bool branch_taken_0x14997c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14997c) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149984u;
label_149984:
    // 0x149984: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x149984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_149988:
    // 0x149988: 0x2464e800  addiu       $a0, $v1, -0x1800
    ctx->pc = 0x149988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961152));
label_14998c:
    // 0x14998c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14998cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_149990:
    // 0x149990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x149990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_149994:
    // 0x149994: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x149994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_149998:
    // 0x149998: 0x600008  jr          $v1
label_14999c:
    if (ctx->pc == 0x14999Cu) {
        ctx->pc = 0x1499A0u;
        goto label_1499a0;
    }
    ctx->pc = 0x149998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149998u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1499A0u;
label_1499a0:
    // 0x1499a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1499a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1499a4:
    // 0x1499a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1499a8:
    // 0x1499a8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1499a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1499ac:
    // 0x1499ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1499b0:
    // 0x1499b0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1499b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
label_1499b4:
    // 0x1499b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1499b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1499b8:
    // 0x1499b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1499b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1499bc:
    // 0x1499bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1499c0:
    if (ctx->pc == 0x1499C0u) {
        ctx->pc = 0x1499C4u;
        goto label_1499c4;
    }
    ctx->pc = 0x1499BCu;
    {
        const bool branch_taken_0x1499bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1499bc) {
            ctx->pc = 0x1499F8u;
            goto label_1499f8;
        }
    }
    ctx->pc = 0x1499C4u;
label_1499c4:
    // 0x1499c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1499c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1499c8:
    // 0x1499c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1499cc:
    // 0x1499cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1499ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1499d0:
    // 0x1499d0: 0x24060a2e  addiu       $a2, $zero, 0xA2E
    ctx->pc = 0x1499d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2606));
label_1499d4:
    // 0x1499d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1499d8:
    // 0x1499d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1499dc:
    // 0x1499dc: 0xc0965d0  jal         func_259740
label_1499e0:
    if (ctx->pc == 0x1499E0u) {
        ctx->pc = 0x1499E4u;
        goto label_1499e4;
    }
    ctx->pc = 0x1499DCu;
    SET_GPR_U32(ctx, 31, 0x1499E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1499DCu, 0x1499E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499E4u;
label_1499e4:
    // 0x1499e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1499e8:
    // 0x1499e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1499ec:
    // 0x1499ec: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1499ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1499f0:
    // 0x1499f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1499f4:
    if (ctx->pc == 0x1499F4u) {
        ctx->pc = 0x1499F8u;
        goto label_1499f8;
    }
    ctx->pc = 0x1499F0u;
    {
        const bool branch_taken_0x1499f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1499f0) {
            ctx->pc = 0x149A20u;
            goto label_149a20;
        }
    }
    ctx->pc = 0x1499F8u;
label_1499f8:
    // 0x1499f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1499f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1499fc:
    // 0x1499fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a00:
    // 0x149a00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149a04:
    // 0x149a04: 0x24060a2e  addiu       $a2, $zero, 0xA2E
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2606));
label_149a08:
    // 0x149a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149a0c:
    // 0x149a0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149a10:
    // 0x149a10: 0xc0965d0  jal         func_259740
label_149a14:
    if (ctx->pc == 0x149A14u) {
        ctx->pc = 0x149A18u;
        goto label_149a18;
    }
    ctx->pc = 0x149A10u;
    SET_GPR_U32(ctx, 31, 0x149A18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149A10u, 0x149A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A18u;
label_149a18:
    // 0x149a18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a1c:
    // 0x149a1c: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x149a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
label_149a20:
    // 0x149a20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a24:
    // 0x149a24: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x149a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149a28:
    // 0x149a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a2c:
    // 0x149a2c: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x149a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149a30:
    // 0x149a30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x149a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_149a34:
    // 0x149a34: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x149a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
label_149a38:
    // 0x149a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149a3c:
    // 0x149a3c: 0x0  nop
    ctx->pc = 0x149a3cu;
    // NOP
label_149a40:
    // 0x149a40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x149a40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_149a44:
    // 0x149a44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a48:
    // 0x149a48: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x149a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_149a4c:
    // 0x149a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149a50:
    // 0x149a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a54:
    // 0x149a54: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_149a58:
    // 0x149a58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a5c:
    // 0x149a5c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149a60:
    // 0x149a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149a64:
    // 0x149a64: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149a68:
    // 0x149a68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a6c:
    // 0x149a6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a70:
    // 0x149a70: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_149a74:
    // 0x149a74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_149a78:
    // 0x149a78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_149a7c:
    // 0x149a7c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x149a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149a80:
    // 0x149a80: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x149a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_149a84:
    // 0x149a84: 0xc058f50  jal         func_163D40
label_149a88:
    if (ctx->pc == 0x149A88u) {
        ctx->pc = 0x149A8Cu;
        goto label_149a8c;
    }
    ctx->pc = 0x149A84u;
    SET_GPR_U32(ctx, 31, 0x149A8Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149A84u, 0x149A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A8Cu;
label_149a8c:
    // 0x149a8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a90:
    // 0x149a90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_149a94:
    // 0x149a94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149a98:
    // 0x149a98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149a98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149a9c:
    // 0x149a9c: 0xc096b40  jal         func_25AD00
label_149aa0:
    if (ctx->pc == 0x149AA0u) {
        ctx->pc = 0x149AA4u;
        goto label_149aa4;
    }
    ctx->pc = 0x149A9Cu;
    SET_GPR_U32(ctx, 31, 0x149AA4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149A9Cu, 0x149AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AA4u;
label_149aa4:
    // 0x149aa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149aa8:
    // 0x149aa8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x149aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149aac:
    // 0x149aac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x149aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_149ab0:
    // 0x149ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149ab4:
    // 0x149ab4: 0x0  nop
    ctx->pc = 0x149ab4u;
    // NOP
label_149ab8:
    // 0x149ab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_149abc:
    // 0x149abc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_149ac0:
    // 0x149ac0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ac4:
    // 0x149ac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ac8:
    // 0x149ac8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149acc:
    // 0x149acc: 0xc05cd58  jal         func_173560
label_149ad0:
    if (ctx->pc == 0x149AD0u) {
        ctx->pc = 0x149AD4u;
        goto label_149ad4;
    }
    ctx->pc = 0x149ACCu;
    SET_GPR_U32(ctx, 31, 0x149AD4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149ACCu, 0x149AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AD4u;
label_149ad4:
    // 0x149ad4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149ad8:
    // 0x149ad8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149adc:
    // 0x149adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149ae0:
    // 0x149ae0: 0xc057480  jal         func_15D200
label_149ae4:
    if (ctx->pc == 0x149AE4u) {
        ctx->pc = 0x149AE8u;
        goto label_149ae8;
    }
    ctx->pc = 0x149AE0u;
    SET_GPR_U32(ctx, 31, 0x149AE8u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x149AE0u, 0x149AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AE8u;
label_149ae8:
    // 0x149ae8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149ae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149aec:
    // 0x149aec: 0xc097530  jal         func_25D4C0
label_149af0:
    if (ctx->pc == 0x149AF0u) {
        ctx->pc = 0x149AF4u;
        goto label_149af4;
    }
    ctx->pc = 0x149AECu;
    SET_GPR_U32(ctx, 31, 0x149AF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149AECu, 0x149AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AF4u;
label_149af4:
    // 0x149af4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149af8:
    // 0x149af8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x149af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_149afc:
    // 0x149afc: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_149b00:
    if (ctx->pc == 0x149B00u) {
        ctx->pc = 0x149B04u;
        goto label_149b04;
    }
    ctx->pc = 0x149AFCu;
    {
        const bool branch_taken_0x149afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149afc) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149B04u;
label_149b04:
    // 0x149b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b08:
    // 0x149b08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x149b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_149b0c:
    // 0x149b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_149b10:
    // 0x149b10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x149b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_149b14:
    // 0x149b14: 0x100000be  b           . + 4 + (0xBE << 2)
label_149b18:
    if (ctx->pc == 0x149B18u) {
        ctx->pc = 0x149B1Cu;
        goto label_149b1c;
    }
    ctx->pc = 0x149B14u;
    {
        const bool branch_taken_0x149b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b14) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149B1Cu;
label_149b1c:
    // 0x149b1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b20:
    // 0x149b20: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x149b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_149b24:
    // 0x149b24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_149b28:
    if (ctx->pc == 0x149B28u) {
        ctx->pc = 0x149B2Cu;
        goto label_149b2c;
    }
    ctx->pc = 0x149B24u;
    {
        const bool branch_taken_0x149b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b24) {
            ctx->pc = 0x149B54u;
            goto label_149b54;
        }
    }
    ctx->pc = 0x149B2Cu;
label_149b2c:
    // 0x149b2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b30:
    // 0x149b30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b34:
    // 0x149b34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149b38:
    // 0x149b38: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x149b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_149b3c:
    // 0x149b3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x149b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_149b40:
    // 0x149b40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149b44:
    // 0x149b44: 0xc0965d0  jal         func_259740
label_149b48:
    if (ctx->pc == 0x149B48u) {
        ctx->pc = 0x149B4Cu;
        goto label_149b4c;
    }
    ctx->pc = 0x149B44u;
    SET_GPR_U32(ctx, 31, 0x149B4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149B44u, 0x149B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B4Cu;
label_149b4c:
    // 0x149b4c: 0x10000009  b           . + 4 + (0x9 << 2)
label_149b50:
    if (ctx->pc == 0x149B50u) {
        ctx->pc = 0x149B54u;
        goto label_149b54;
    }
    ctx->pc = 0x149B4Cu;
    {
        const bool branch_taken_0x149b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b4c) {
            ctx->pc = 0x149B74u;
            goto label_149b74;
        }
    }
    ctx->pc = 0x149B54u;
label_149b54:
    // 0x149b54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b58:
    // 0x149b58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b5c:
    // 0x149b5c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149b60:
    // 0x149b60: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x149b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_149b64:
    // 0x149b64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149b68:
    // 0x149b68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149b6c:
    // 0x149b6c: 0xc0965d0  jal         func_259740
label_149b70:
    if (ctx->pc == 0x149B70u) {
        ctx->pc = 0x149B74u;
        goto label_149b74;
    }
    ctx->pc = 0x149B6Cu;
    SET_GPR_U32(ctx, 31, 0x149B74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149B6Cu, 0x149B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B74u;
label_149b74:
    // 0x149b74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b78:
    // 0x149b78: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149b7c:
    // 0x149b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149b80:
    // 0x149b80: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149b84:
    // 0x149b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b88:
    // 0x149b88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149b8c:
    // 0x149b8c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_149b90:
    // 0x149b90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_149b94:
    // 0x149b94: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_149b98:
    // 0x149b98: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x149b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149b9c:
    // 0x149b9c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x149b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_149ba0:
    // 0x149ba0: 0xc058f50  jal         func_163D40
label_149ba4:
    if (ctx->pc == 0x149BA4u) {
        ctx->pc = 0x149BA8u;
        goto label_149ba8;
    }
    ctx->pc = 0x149BA0u;
    SET_GPR_U32(ctx, 31, 0x149BA8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149BA0u, 0x149BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BA8u;
label_149ba8:
    // 0x149ba8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149bac:
    // 0x149bac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_149bb0:
    // 0x149bb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149bb4:
    // 0x149bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149bb8:
    // 0x149bb8: 0xc096b40  jal         func_25AD00
label_149bbc:
    if (ctx->pc == 0x149BBCu) {
        ctx->pc = 0x149BC0u;
        goto label_149bc0;
    }
    ctx->pc = 0x149BB8u;
    SET_GPR_U32(ctx, 31, 0x149BC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149BB8u, 0x149BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BC0u;
label_149bc0:
    // 0x149bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149bc4:
    // 0x149bc4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x149bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149bc8:
    // 0x149bc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_149bcc:
    // 0x149bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_149bd0:
    // 0x149bd0: 0x0  nop
    ctx->pc = 0x149bd0u;
    // NOP
label_149bd4:
    // 0x149bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x149bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_149bd8:
    // 0x149bd8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x149bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_149bdc:
    // 0x149bdc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149be0:
    // 0x149be0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149be4:
    // 0x149be4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149be8:
    // 0x149be8: 0xc05cd58  jal         func_173560
label_149bec:
    if (ctx->pc == 0x149BECu) {
        ctx->pc = 0x149BF0u;
        goto label_149bf0;
    }
    ctx->pc = 0x149BE8u;
    SET_GPR_U32(ctx, 31, 0x149BF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149BE8u, 0x149BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BF0u;
label_149bf0:
    // 0x149bf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149bf4:
    // 0x149bf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149bf8:
    // 0x149bf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149bf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149bfc:
    // 0x149bfc: 0xc057480  jal         func_15D200
label_149c00:
    if (ctx->pc == 0x149C00u) {
        ctx->pc = 0x149C04u;
        goto label_149c04;
    }
    ctx->pc = 0x149BFCu;
    SET_GPR_U32(ctx, 31, 0x149C04u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x149BFCu, 0x149C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C04u;
label_149c04:
    // 0x149c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c08:
    // 0x149c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c0c:
    // 0x149c0c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_149c10:
    // 0x149c10: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x149c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_149c14:
    // 0x149c14: 0xc05cf7c  jal         func_173DF0
label_149c18:
    if (ctx->pc == 0x149C18u) {
        ctx->pc = 0x149C1Cu;
        goto label_149c1c;
    }
    ctx->pc = 0x149C14u;
    SET_GPR_U32(ctx, 31, 0x149C1Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x149C14u, 0x149C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C1Cu;
label_149c1c:
    // 0x149c1c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x149c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_149c20:
    // 0x149c20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c24:
    // 0x149c24: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x149c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149c28:
    // 0x149c28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c2c:
    // 0x149c2c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149c30:
    // 0x149c30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_149c34:
    // 0x149c34: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_149c38:
    // 0x149c38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c3c:
    // 0x149c3c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x149c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149c40:
    // 0x149c40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c44:
    // 0x149c44: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x149c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149c48:
    // 0x149c48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x149c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_149c4c:
    // 0x149c4c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_149c50:
    // 0x149c50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c54:
    // 0x149c54: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x149c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149c58:
    // 0x149c58: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x149c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149c5c:
    // 0x149c5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x149c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_149c60:
    // 0x149c60: 0x0  nop
    ctx->pc = 0x149c60u;
    // NOP
label_149c64:
    // 0x149c64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_149c68:
    if (ctx->pc == 0x149C68u) {
        ctx->pc = 0x149C6Cu;
        goto label_149c6c;
    }
    ctx->pc = 0x149C64u;
    {
        const bool branch_taken_0x149c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149c64) {
            ctx->pc = 0x149C84u;
            goto label_149c84;
        }
    }
    ctx->pc = 0x149C6Cu;
label_149c6c:
    // 0x149c6c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x149c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_149c70:
    // 0x149c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c74:
    // 0x149c74: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_149c78:
    // 0x149c78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x149c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_149c7c:
    // 0x149c7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c80:
    // 0x149c80: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x149c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_149c84:
    // 0x149c84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149c88:
    // 0x149c88: 0xc097530  jal         func_25D4C0
label_149c8c:
    if (ctx->pc == 0x149C8Cu) {
        ctx->pc = 0x149C90u;
        goto label_149c90;
    }
    ctx->pc = 0x149C88u;
    SET_GPR_U32(ctx, 31, 0x149C90u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149C88u, 0x149C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C90u;
label_149c90:
    // 0x149c90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149c94:
    // 0x149c94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x149c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_149c98:
    // 0x149c98: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
label_149c9c:
    if (ctx->pc == 0x149C9Cu) {
        ctx->pc = 0x149CA0u;
        goto label_149ca0;
    }
    ctx->pc = 0x149C98u;
    {
        const bool branch_taken_0x149c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149c98) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149CA0u;
label_149ca0:
    // 0x149ca0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x149ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_149ca4:
    // 0x149ca4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ca8:
    // 0x149ca8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x149ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_149cac:
    // 0x149cac: 0x10000058  b           . + 4 + (0x58 << 2)
label_149cb0:
    if (ctx->pc == 0x149CB0u) {
        ctx->pc = 0x149CB4u;
        goto label_149cb4;
    }
    ctx->pc = 0x149CACu;
    {
        const bool branch_taken_0x149cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149cac) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149CB4u;
label_149cb4:
    // 0x149cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149cb8:
    // 0x149cb8: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x149cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_149cbc:
    // 0x149cbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_149cc0:
    if (ctx->pc == 0x149CC0u) {
        ctx->pc = 0x149CC4u;
        goto label_149cc4;
    }
    ctx->pc = 0x149CBCu;
    {
        const bool branch_taken_0x149cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149cbc) {
            ctx->pc = 0x149CECu;
            goto label_149cec;
        }
    }
    ctx->pc = 0x149CC4u;
label_149cc4:
    // 0x149cc4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149cc8:
    // 0x149cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ccc:
    // 0x149ccc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149cd0:
    // 0x149cd0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x149cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_149cd4:
    // 0x149cd4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x149cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_149cd8:
    // 0x149cd8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149cdc:
    // 0x149cdc: 0xc0965d0  jal         func_259740
label_149ce0:
    if (ctx->pc == 0x149CE0u) {
        ctx->pc = 0x149CE4u;
        goto label_149ce4;
    }
    ctx->pc = 0x149CDCu;
    SET_GPR_U32(ctx, 31, 0x149CE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149CDCu, 0x149CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CE4u;
label_149ce4:
    // 0x149ce4: 0x10000009  b           . + 4 + (0x9 << 2)
label_149ce8:
    if (ctx->pc == 0x149CE8u) {
        ctx->pc = 0x149CECu;
        goto label_149cec;
    }
    ctx->pc = 0x149CE4u;
    {
        const bool branch_taken_0x149ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ce4) {
            ctx->pc = 0x149D0Cu;
            goto label_149d0c;
        }
    }
    ctx->pc = 0x149CECu;
label_149cec:
    // 0x149cec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149cf0:
    // 0x149cf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149cf4:
    // 0x149cf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_149cf8:
    // 0x149cf8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x149cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_149cfc:
    // 0x149cfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149d00:
    // 0x149d00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_149d04:
    // 0x149d04: 0xc0965d0  jal         func_259740
label_149d08:
    if (ctx->pc == 0x149D08u) {
        ctx->pc = 0x149D0Cu;
        goto label_149d0c;
    }
    ctx->pc = 0x149D04u;
    SET_GPR_U32(ctx, 31, 0x149D0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149D04u, 0x149D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D0Cu;
label_149d0c:
    // 0x149d0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d10:
    // 0x149d10: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_149d14:
    // 0x149d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_149d18:
    // 0x149d18: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_149d1c:
    // 0x149d1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d20:
    // 0x149d20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149d24:
    // 0x149d24: 0xc096b40  jal         func_25AD00
label_149d28:
    if (ctx->pc == 0x149D28u) {
        ctx->pc = 0x149D2Cu;
        goto label_149d2c;
    }
    ctx->pc = 0x149D24u;
    SET_GPR_U32(ctx, 31, 0x149D2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149D24u, 0x149D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D2Cu;
label_149d2c:
    // 0x149d2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d30:
    // 0x149d30: 0xc05cd10  jal         func_173440
label_149d34:
    if (ctx->pc == 0x149D34u) {
        ctx->pc = 0x149D38u;
        goto label_149d38;
    }
    ctx->pc = 0x149D30u;
    SET_GPR_U32(ctx, 31, 0x149D38u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x149D30u, 0x149D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D38u;
label_149d38:
    // 0x149d38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_149d3c:
    // 0x149d3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d40:
    // 0x149d40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149d40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149d44:
    // 0x149d44: 0xc0573d8  jal         func_15CF60
label_149d48:
    if (ctx->pc == 0x149D48u) {
        ctx->pc = 0x149D4Cu;
        goto label_149d4c;
    }
    ctx->pc = 0x149D44u;
    SET_GPR_U32(ctx, 31, 0x149D4Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149D44u, 0x149D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D4Cu;
label_149d4c:
    // 0x149d4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149d4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_149d50:
    // 0x149d50: 0xc097530  jal         func_25D4C0
label_149d54:
    if (ctx->pc == 0x149D54u) {
        ctx->pc = 0x149D58u;
        goto label_149d58;
    }
    ctx->pc = 0x149D50u;
    SET_GPR_U32(ctx, 31, 0x149D58u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x149D50u, 0x149D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D58u;
label_149d58:
    // 0x149d58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d5c:
    // 0x149d5c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x149d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_149d60:
    // 0x149d60: 0xc057b54  jal         func_15ED50
label_149d64:
    if (ctx->pc == 0x149D64u) {
        ctx->pc = 0x149D68u;
        goto label_149d68;
    }
    ctx->pc = 0x149D60u;
    SET_GPR_U32(ctx, 31, 0x149D68u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x149D60u, 0x149D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D68u;
label_149d68:
    // 0x149d68: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_149d6c:
    if (ctx->pc == 0x149D6Cu) {
        ctx->pc = 0x149D70u;
        goto label_149d70;
    }
    ctx->pc = 0x149D68u;
    {
        const bool branch_taken_0x149d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d68) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149D70u;
label_149d70:
    // 0x149d70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d74:
    // 0x149d74: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x149d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_149d78:
    // 0x149d78: 0xc057b04  jal         func_15EC10
label_149d7c:
    if (ctx->pc == 0x149D7Cu) {
        ctx->pc = 0x149D80u;
        goto label_149d80;
    }
    ctx->pc = 0x149D78u;
    SET_GPR_U32(ctx, 31, 0x149D80u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x149D78u, 0x149D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D80u;
label_149d80:
    // 0x149d80: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_149d84:
    if (ctx->pc == 0x149D84u) {
        ctx->pc = 0x149D88u;
        goto label_149d88;
    }
    ctx->pc = 0x149D80u;
    {
        const bool branch_taken_0x149d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149d80) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149D88u;
label_149d88:
    // 0x149d88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149d8c:
    // 0x149d8c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x149d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_149d90:
    // 0x149d90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x149d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_149d94:
    // 0x149d94: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x149d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_149d98:
    // 0x149d98: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_149d9c:
    if (ctx->pc == 0x149D9Cu) {
        ctx->pc = 0x149DA0u;
        goto label_149da0;
    }
    ctx->pc = 0x149D98u;
    {
        const bool branch_taken_0x149d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149d98) {
            ctx->pc = 0x149DC4u;
            goto label_149dc4;
        }
    }
    ctx->pc = 0x149DA0u;
label_149da0:
    // 0x149da0: 0xc0585dc  jal         func_161770
label_149da4:
    if (ctx->pc == 0x149DA4u) {
        ctx->pc = 0x149DA8u;
        goto label_149da8;
    }
    ctx->pc = 0x149DA0u;
    SET_GPR_U32(ctx, 31, 0x149DA8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x149DA0u, 0x149DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149DA8u;
label_149da8:
    // 0x149da8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_149dac:
    if (ctx->pc == 0x149DACu) {
        ctx->pc = 0x149DB0u;
        goto label_149db0;
    }
    ctx->pc = 0x149DA8u;
    {
        const bool branch_taken_0x149da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149da8) {
            ctx->pc = 0x149DC4u;
            goto label_149dc4;
        }
    }
    ctx->pc = 0x149DB0u;
label_149db0:
    // 0x149db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149db4:
    // 0x149db4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149db8:
    // 0x149db8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x149db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_149dbc:
    // 0x149dbc: 0x10000014  b           . + 4 + (0x14 << 2)
label_149dc0:
    if (ctx->pc == 0x149DC0u) {
        ctx->pc = 0x149DC4u;
        goto label_149dc4;
    }
    ctx->pc = 0x149DBCu;
    {
        const bool branch_taken_0x149dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149dbc) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149DC4u;
label_149dc4:
    // 0x149dc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149dc8:
    // 0x149dc8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x149dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_149dcc:
    // 0x149dcc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_149dd0:
    if (ctx->pc == 0x149DD0u) {
        ctx->pc = 0x149DD4u;
        goto label_149dd4;
    }
    ctx->pc = 0x149DCCu;
    {
        const bool branch_taken_0x149dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149dcc) {
            ctx->pc = 0x149E10u;
            goto label_149e10;
        }
    }
    ctx->pc = 0x149DD4u;
label_149dd4:
    // 0x149dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149dd8:
    // 0x149dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149ddc:
    // 0x149ddc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x149ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
label_149de0:
    // 0x149de0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149de4:
    // 0x149de4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149de8:
    // 0x149de8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x149de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_149dec:
    // 0x149dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149df0:
    // 0x149df0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x149df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_149df4:
    // 0x149df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149df8:
    // 0x149df8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x149df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_149dfc:
    // 0x149dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149e00:
    // 0x149e00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x149e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_149e04:
    // 0x149e04: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x149e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_149e08:
    // 0x149e08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_149e0c:
    // 0x149e0c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_149e10:
    // 0x149e10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x149e10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_149e14:
    // 0x149e14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_149e18:
    // 0x149e18: 0x3e00008  jr          $ra
label_149e1c:
    if (ctx->pc == 0x149E1Cu) {
        ctx->pc = 0x149E20u;
        goto label_fallthrough_0x149e18;
    }
    ctx->pc = 0x149E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x149e18:
    ctx->pc = 0x149E20u;
}
