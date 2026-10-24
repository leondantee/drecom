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

// Function: Sce_scheduler_init
// Address: 0x211b90 - 0x211d58
void Sce_scheduler_init_0x211b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_scheduler_init_0x211b90");
#endif

    switch (ctx->pc) {
        case 0x211b90u: goto label_211b90;
        case 0x211b94u: goto label_211b94;
        case 0x211b98u: goto label_211b98;
        case 0x211b9cu: goto label_211b9c;
        case 0x211ba0u: goto label_211ba0;
        case 0x211ba4u: goto label_211ba4;
        case 0x211ba8u: goto label_211ba8;
        case 0x211bacu: goto label_211bac;
        case 0x211bb0u: goto label_211bb0;
        case 0x211bb4u: goto label_211bb4;
        case 0x211bb8u: goto label_211bb8;
        case 0x211bbcu: goto label_211bbc;
        case 0x211bc0u: goto label_211bc0;
        case 0x211bc4u: goto label_211bc4;
        case 0x211bc8u: goto label_211bc8;
        case 0x211bccu: goto label_211bcc;
        case 0x211bd0u: goto label_211bd0;
        case 0x211bd4u: goto label_211bd4;
        case 0x211bd8u: goto label_211bd8;
        case 0x211bdcu: goto label_211bdc;
        case 0x211be0u: goto label_211be0;
        case 0x211be4u: goto label_211be4;
        case 0x211be8u: goto label_211be8;
        case 0x211becu: goto label_211bec;
        case 0x211bf0u: goto label_211bf0;
        case 0x211bf4u: goto label_211bf4;
        case 0x211bf8u: goto label_211bf8;
        case 0x211bfcu: goto label_211bfc;
        case 0x211c00u: goto label_211c00;
        case 0x211c04u: goto label_211c04;
        case 0x211c08u: goto label_211c08;
        case 0x211c0cu: goto label_211c0c;
        case 0x211c10u: goto label_211c10;
        case 0x211c14u: goto label_211c14;
        case 0x211c18u: goto label_211c18;
        case 0x211c1cu: goto label_211c1c;
        case 0x211c20u: goto label_211c20;
        case 0x211c24u: goto label_211c24;
        case 0x211c28u: goto label_211c28;
        case 0x211c2cu: goto label_211c2c;
        case 0x211c30u: goto label_211c30;
        case 0x211c34u: goto label_211c34;
        case 0x211c38u: goto label_211c38;
        case 0x211c3cu: goto label_211c3c;
        case 0x211c40u: goto label_211c40;
        case 0x211c44u: goto label_211c44;
        case 0x211c48u: goto label_211c48;
        case 0x211c4cu: goto label_211c4c;
        case 0x211c50u: goto label_211c50;
        case 0x211c54u: goto label_211c54;
        case 0x211c58u: goto label_211c58;
        case 0x211c5cu: goto label_211c5c;
        case 0x211c60u: goto label_211c60;
        case 0x211c64u: goto label_211c64;
        case 0x211c68u: goto label_211c68;
        case 0x211c6cu: goto label_211c6c;
        case 0x211c70u: goto label_211c70;
        case 0x211c74u: goto label_211c74;
        case 0x211c78u: goto label_211c78;
        case 0x211c7cu: goto label_211c7c;
        case 0x211c80u: goto label_211c80;
        case 0x211c84u: goto label_211c84;
        case 0x211c88u: goto label_211c88;
        case 0x211c8cu: goto label_211c8c;
        case 0x211c90u: goto label_211c90;
        case 0x211c94u: goto label_211c94;
        case 0x211c98u: goto label_211c98;
        case 0x211c9cu: goto label_211c9c;
        case 0x211ca0u: goto label_211ca0;
        case 0x211ca4u: goto label_211ca4;
        case 0x211ca8u: goto label_211ca8;
        case 0x211cacu: goto label_211cac;
        case 0x211cb0u: goto label_211cb0;
        case 0x211cb4u: goto label_211cb4;
        case 0x211cb8u: goto label_211cb8;
        case 0x211cbcu: goto label_211cbc;
        case 0x211cc0u: goto label_211cc0;
        case 0x211cc4u: goto label_211cc4;
        case 0x211cc8u: goto label_211cc8;
        case 0x211cccu: goto label_211ccc;
        case 0x211cd0u: goto label_211cd0;
        case 0x211cd4u: goto label_211cd4;
        case 0x211cd8u: goto label_211cd8;
        case 0x211cdcu: goto label_211cdc;
        case 0x211ce0u: goto label_211ce0;
        case 0x211ce4u: goto label_211ce4;
        case 0x211ce8u: goto label_211ce8;
        case 0x211cecu: goto label_211cec;
        case 0x211cf0u: goto label_211cf0;
        case 0x211cf4u: goto label_211cf4;
        case 0x211cf8u: goto label_211cf8;
        case 0x211cfcu: goto label_211cfc;
        case 0x211d00u: goto label_211d00;
        case 0x211d04u: goto label_211d04;
        case 0x211d08u: goto label_211d08;
        case 0x211d0cu: goto label_211d0c;
        case 0x211d10u: goto label_211d10;
        case 0x211d14u: goto label_211d14;
        case 0x211d18u: goto label_211d18;
        case 0x211d1cu: goto label_211d1c;
        case 0x211d20u: goto label_211d20;
        case 0x211d24u: goto label_211d24;
        case 0x211d28u: goto label_211d28;
        case 0x211d2cu: goto label_211d2c;
        case 0x211d30u: goto label_211d30;
        case 0x211d34u: goto label_211d34;
        case 0x211d38u: goto label_211d38;
        case 0x211d3cu: goto label_211d3c;
        case 0x211d40u: goto label_211d40;
        case 0x211d44u: goto label_211d44;
        case 0x211d48u: goto label_211d48;
        case 0x211d4cu: goto label_211d4c;
        case 0x211d50u: goto label_211d50;
        case 0x211d54u: goto label_211d54;
        default: break;
    }

    ctx->pc = 0x211b90u;

label_211b90:
    // 0x211b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_211b94:
    // 0x211b94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x211b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_211b98:
    // 0x211b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_211b9c:
    // 0x211b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_211ba0:
    // 0x211ba0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211ba4:
    // 0x211ba4: 0x8c22fcac  lw          $v0, -0x354($at)
    ctx->pc = 0x211ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966444)));
label_211ba8:
    // 0x211ba8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x211ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_211bac:
    // 0x211bac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211bb0:
    // 0x211bb0: 0xac2096d0  sw          $zero, -0x6930($at)
    ctx->pc = 0x211bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940368), GPR_U32(ctx, 0));
label_211bb4:
    // 0x211bb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x211bb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_211bb8:
    // 0x211bb8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_211bbc:
    if (ctx->pc == 0x211BBCu) {
        ctx->pc = 0x211BC0u;
        goto label_211bc0;
    }
    ctx->pc = 0x211BB8u;
    {
        const bool branch_taken_0x211bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211bb8) {
            ctx->pc = 0x211C28u;
            goto label_211c28;
        }
    }
    ctx->pc = 0x211BC0u;
label_211bc0:
    // 0x211bc0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x211bc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_211bc4:
    // 0x211bc4: 0xc084900  jal         func_212400
label_211bc8:
    if (ctx->pc == 0x211BC8u) {
        ctx->pc = 0x211BCCu;
        goto label_211bcc;
    }
    ctx->pc = 0x211BC4u;
    SET_GPR_U32(ctx, 31, 0x211BCCu);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x211BC4u, 0x211BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BCCu;
label_211bcc:
    // 0x211bcc: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x211bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_211bd0:
    // 0x211bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211bd4:
    // 0x211bd4: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x211bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_211bd8:
    // 0x211bd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x211bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_211bdc:
    // 0x211bdc: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x211bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_211be0:
    // 0x211be0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x211be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_211be4:
    // 0x211be4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_211be8:
    // 0x211be8: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
label_211bec:
    // 0x211bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211bf0:
    // 0x211bf0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x211bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_211bf4:
    // 0x211bf4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x211bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_211bf8:
    // 0x211bf8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x211bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_211bfc:
    // 0x211bfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_211c00:
    // 0x211c00: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x211c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
label_211c04:
    // 0x211c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211c08:
    // 0x211c08: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x211c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_211c0c:
    // 0x211c0c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x211c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_211c10:
    // 0x211c10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x211c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_211c14:
    // 0x211c14: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x211c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
label_211c18:
    // 0x211c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211c1c:
    // 0x211c1c: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x211c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
label_211c20:
    // 0x211c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_211c24:
    // 0x211c24: 0x0  nop
    ctx->pc = 0x211c24u;
    // NOP
label_211c28:
    // 0x211c28: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x211c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_211c2c:
    // 0x211c2c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_211c30:
    if (ctx->pc == 0x211C30u) {
        ctx->pc = 0x211C34u;
        goto label_211c34;
    }
    ctx->pc = 0x211C2Cu;
    {
        const bool branch_taken_0x211c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211c2c) {
            ctx->pc = 0x211BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211bc0;
        }
    }
    ctx->pc = 0x211C34u;
label_211c34:
    // 0x211c34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x211c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_211c38:
    // 0x211c38: 0xa02095a0  sb          $zero, -0x6A60($at)
    ctx->pc = 0x211c38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940064), (uint8_t)GPR_U32(ctx, 0));
label_211c3c:
    // 0x211c3c: 0xc084758  jal         func_211D60
label_211c40:
    if (ctx->pc == 0x211C40u) {
        ctx->pc = 0x211C44u;
        goto label_211c44;
    }
    ctx->pc = 0x211C3Cu;
    SET_GPR_U32(ctx, 31, 0x211C44u);
    ctx->pc = 0x211D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211D60u, 0x211C3Cu, 0x211C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C44u;
label_211c44:
    // 0x211c44: 0xc084818  jal         func_212060
label_211c48:
    if (ctx->pc == 0x211C48u) {
        ctx->pc = 0x211C4Cu;
        goto label_211c4c;
    }
    ctx->pc = 0x211C44u;
    SET_GPR_U32(ctx, 31, 0x211C4Cu);
    ctx->pc = 0x212060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212060u, 0x211C44u, 0x211C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C4Cu;
label_211c4c:
    // 0x211c4c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_211c50:
    // 0x211c50: 0x247195d0  addiu       $s1, $v1, -0x6A30
    ctx->pc = 0x211c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940112));
label_211c54:
    // 0x211c54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x211c54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_211c58:
    // 0x211c58: 0x10000005  b           . + 4 + (0x5 << 2)
label_211c5c:
    if (ctx->pc == 0x211C5Cu) {
        ctx->pc = 0x211C60u;
        goto label_211c60;
    }
    ctx->pc = 0x211C58u;
    {
        const bool branch_taken_0x211c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211c58) {
            ctx->pc = 0x211C70u;
            goto label_211c70;
        }
    }
    ctx->pc = 0x211C60u;
label_211c60:
    // 0x211c60: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x211c60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_211c64:
    // 0x211c64: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x211c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_211c68:
    // 0x211c68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_211c6c:
    // 0x211c6c: 0x0  nop
    ctx->pc = 0x211c6cu;
    // NOP
label_211c70:
    // 0x211c70: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x211c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_211c74:
    // 0x211c74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_211c78:
    if (ctx->pc == 0x211C78u) {
        ctx->pc = 0x211C7Cu;
        goto label_211c7c;
    }
    ctx->pc = 0x211C74u;
    {
        const bool branch_taken_0x211c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211c74) {
            ctx->pc = 0x211C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211c60;
        }
    }
    ctx->pc = 0x211C7Cu;
label_211c7c:
    // 0x211c7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211c80:
    // 0x211c80: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x211c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6720)));
label_211c84:
    // 0x211c84: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x211c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_211c88:
    // 0x211c88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x211c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_211c8c:
    // 0x211c8c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_211c90:
    if (ctx->pc == 0x211C90u) {
        ctx->pc = 0x211C94u;
        goto label_211c94;
    }
    ctx->pc = 0x211C8Cu;
    {
        const bool branch_taken_0x211c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211c8c) {
            ctx->pc = 0x211D40u;
            goto label_211d40;
        }
    }
    ctx->pc = 0x211C94u;
label_211c94:
    // 0x211c94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211c98:
    // 0x211c98: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x211c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_211c9c:
    // 0x211c9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211ca0:
    // 0x211ca0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_211ca4:
    // 0x211ca4: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x211ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_211ca8:
    // 0x211ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211cac:
    // 0x211cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211cb0:
    // 0x211cb0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_211cb4:
    if (ctx->pc == 0x211CB4u) {
        ctx->pc = 0x211CB8u;
        goto label_211cb8;
    }
    ctx->pc = 0x211CB0u;
    {
        const bool branch_taken_0x211cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211cb0) {
            ctx->pc = 0x211D30u;
            goto label_211d30;
        }
    }
    ctx->pc = 0x211CB8u;
label_211cb8:
    // 0x211cb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211cbc:
    // 0x211cbc: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x211cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_211cc0:
    // 0x211cc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211cc4:
    // 0x211cc4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x211cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_211cc8:
    // 0x211cc8: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x211cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_211ccc:
    // 0x211ccc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x211cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211cd0:
    // 0x211cd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211cd4:
    // 0x211cd4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x211cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_211cd8:
    // 0x211cd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_211cdc:
    // 0x211cdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211ce0:
    // 0x211ce0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211ce4:
    // 0x211ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211ce8:
    // 0x211ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x211ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211cec:
    // 0x211cec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_211cf0:
    if (ctx->pc == 0x211CF0u) {
        ctx->pc = 0x211CF4u;
        goto label_211cf4;
    }
    ctx->pc = 0x211CECu;
    {
        const bool branch_taken_0x211cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211cec) {
            ctx->pc = 0x211D30u;
            goto label_211d30;
        }
    }
    ctx->pc = 0x211CF4u;
label_211cf4:
    // 0x211cf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211cf8:
    // 0x211cf8: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x211cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_211cfc:
    // 0x211cfc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211d00:
    // 0x211d00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x211d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_211d04:
    // 0x211d04: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x211d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
label_211d08:
    // 0x211d08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x211d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211d0c:
    // 0x211d0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_211d10:
    // 0x211d10: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x211d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_211d14:
    // 0x211d14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_211d18:
    // 0x211d18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x211d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_211d1c:
    // 0x211d1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211d20:
    // 0x211d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211d24:
    // 0x211d24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x211d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_211d28:
    // 0x211d28: 0x40f809  jalr        $v0
label_211d2c:
    if (ctx->pc == 0x211D2Cu) {
        ctx->pc = 0x211D30u;
        goto label_211d30;
    }
    ctx->pc = 0x211D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211D30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D28u, 0x211D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211D30u;
label_211d30:
    // 0x211d30: 0xc084884  jal         func_212210
label_211d34:
    if (ctx->pc == 0x211D34u) {
        ctx->pc = 0x211D38u;
        goto label_211d38;
    }
    ctx->pc = 0x211D30u;
    SET_GPR_U32(ctx, 31, 0x211D38u);
    ctx->pc = 0x212210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212210u, 0x211D30u, 0x211D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D38u;
label_211d38:
    // 0x211d38: 0xc084774  jal         func_211DD0
label_211d3c:
    if (ctx->pc == 0x211D3Cu) {
        ctx->pc = 0x211D40u;
        goto label_211d40;
    }
    ctx->pc = 0x211D38u;
    SET_GPR_U32(ctx, 31, 0x211D40u);
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x211D38u, 0x211D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211D40u;
label_211d40:
    // 0x211d40: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x211d40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_211d44:
    // 0x211d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_211d48:
    // 0x211d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_211d4c:
    // 0x211d4c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x211d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_211d50:
    // 0x211d50: 0x3e00008  jr          $ra
label_211d54:
    if (ctx->pc == 0x211D54u) {
        ctx->pc = 0x211D58u;
        goto label_fallthrough_0x211d50;
    }
    ctx->pc = 0x211D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x211d50:
    ctx->pc = 0x211D58u;
}
