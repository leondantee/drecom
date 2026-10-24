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

// Function: _doMC
// Address: 0x104b18 - 0x104ca4
void _doMC_0x104b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doMC_0x104b18");
#endif

    switch (ctx->pc) {
        case 0x104b18u: goto label_104b18;
        case 0x104b1cu: goto label_104b1c;
        case 0x104b20u: goto label_104b20;
        case 0x104b24u: goto label_104b24;
        case 0x104b28u: goto label_104b28;
        case 0x104b2cu: goto label_104b2c;
        case 0x104b30u: goto label_104b30;
        case 0x104b34u: goto label_104b34;
        case 0x104b38u: goto label_104b38;
        case 0x104b3cu: goto label_104b3c;
        case 0x104b40u: goto label_104b40;
        case 0x104b44u: goto label_104b44;
        case 0x104b48u: goto label_104b48;
        case 0x104b4cu: goto label_104b4c;
        case 0x104b50u: goto label_104b50;
        case 0x104b54u: goto label_104b54;
        case 0x104b58u: goto label_104b58;
        case 0x104b5cu: goto label_104b5c;
        case 0x104b60u: goto label_104b60;
        case 0x104b64u: goto label_104b64;
        case 0x104b68u: goto label_104b68;
        case 0x104b6cu: goto label_104b6c;
        case 0x104b70u: goto label_104b70;
        case 0x104b74u: goto label_104b74;
        case 0x104b78u: goto label_104b78;
        case 0x104b7cu: goto label_104b7c;
        case 0x104b80u: goto label_104b80;
        case 0x104b84u: goto label_104b84;
        case 0x104b88u: goto label_104b88;
        case 0x104b8cu: goto label_104b8c;
        case 0x104b90u: goto label_104b90;
        case 0x104b94u: goto label_104b94;
        case 0x104b98u: goto label_104b98;
        case 0x104b9cu: goto label_104b9c;
        case 0x104ba0u: goto label_104ba0;
        case 0x104ba4u: goto label_104ba4;
        case 0x104ba8u: goto label_104ba8;
        case 0x104bacu: goto label_104bac;
        case 0x104bb0u: goto label_104bb0;
        case 0x104bb4u: goto label_104bb4;
        case 0x104bb8u: goto label_104bb8;
        case 0x104bbcu: goto label_104bbc;
        case 0x104bc0u: goto label_104bc0;
        case 0x104bc4u: goto label_104bc4;
        case 0x104bc8u: goto label_104bc8;
        case 0x104bccu: goto label_104bcc;
        case 0x104bd0u: goto label_104bd0;
        case 0x104bd4u: goto label_104bd4;
        case 0x104bd8u: goto label_104bd8;
        case 0x104bdcu: goto label_104bdc;
        case 0x104be0u: goto label_104be0;
        case 0x104be4u: goto label_104be4;
        case 0x104be8u: goto label_104be8;
        case 0x104becu: goto label_104bec;
        case 0x104bf0u: goto label_104bf0;
        case 0x104bf4u: goto label_104bf4;
        case 0x104bf8u: goto label_104bf8;
        case 0x104bfcu: goto label_104bfc;
        case 0x104c00u: goto label_104c00;
        case 0x104c04u: goto label_104c04;
        case 0x104c08u: goto label_104c08;
        case 0x104c0cu: goto label_104c0c;
        case 0x104c10u: goto label_104c10;
        case 0x104c14u: goto label_104c14;
        case 0x104c18u: goto label_104c18;
        case 0x104c1cu: goto label_104c1c;
        case 0x104c20u: goto label_104c20;
        case 0x104c24u: goto label_104c24;
        case 0x104c28u: goto label_104c28;
        case 0x104c2cu: goto label_104c2c;
        case 0x104c30u: goto label_104c30;
        case 0x104c34u: goto label_104c34;
        case 0x104c38u: goto label_104c38;
        case 0x104c3cu: goto label_104c3c;
        case 0x104c40u: goto label_104c40;
        case 0x104c44u: goto label_104c44;
        case 0x104c48u: goto label_104c48;
        case 0x104c4cu: goto label_104c4c;
        case 0x104c50u: goto label_104c50;
        case 0x104c54u: goto label_104c54;
        case 0x104c58u: goto label_104c58;
        case 0x104c5cu: goto label_104c5c;
        case 0x104c60u: goto label_104c60;
        case 0x104c64u: goto label_104c64;
        case 0x104c68u: goto label_104c68;
        case 0x104c6cu: goto label_104c6c;
        case 0x104c70u: goto label_104c70;
        case 0x104c74u: goto label_104c74;
        case 0x104c78u: goto label_104c78;
        case 0x104c7cu: goto label_104c7c;
        case 0x104c80u: goto label_104c80;
        case 0x104c84u: goto label_104c84;
        case 0x104c88u: goto label_104c88;
        case 0x104c8cu: goto label_104c8c;
        case 0x104c90u: goto label_104c90;
        case 0x104c94u: goto label_104c94;
        case 0x104c98u: goto label_104c98;
        case 0x104c9cu: goto label_104c9c;
        case 0x104ca0u: goto label_104ca0;
        default: break;
    }

    ctx->pc = 0x104b18u;

label_104b18:
    // 0x104b18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x104b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_104b1c:
    // 0x104b1c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_104b20:
    // 0x104b20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x104b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_104b24:
    // 0x104b24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x104b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104b28:
    // 0x104b28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x104b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_104b2c:
    // 0x104b2c: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x104b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_104b30:
    // 0x104b30: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_104b34:
    // 0x104b34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x104b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_104b38:
    // 0x104b38: 0x26a441f8  addiu       $a0, $s5, 0x41F8
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
label_104b3c:
    // 0x104b3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x104b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_104b40:
    // 0x104b40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x104b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_104b44:
    // 0x104b44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_104b48:
    // 0x104b48: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_104b4c:
    // 0x104b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_104b50:
    // 0x104b50: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_104b54:
    // 0x104b54: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_104b58:
    if (ctx->pc == 0x104B58u) {
        ctx->pc = 0x104B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B54u;
        // 0x104b58: 0x2483012c  addiu       $v1, $a0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104B5Cu;
        goto label_104b5c;
    }
    ctx->pc = 0x104B54u;
    {
        const bool branch_taken_0x104b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B54u;
        // 0x104b58: 0x2483012c  addiu       $v1, $a0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b54) {
            ctx->pc = 0x104BB8u;
            goto label_104bb8;
        }
    }
    ctx->pc = 0x104B5Cu;
label_104b5c:
    // 0x104b5c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x104b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_104b60:
    // 0x104b60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x104b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_104b64:
    // 0x104b64: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_104b68:
    if (ctx->pc == 0x104B68u) {
        ctx->pc = 0x104B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B64u;
        // 0x104b68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104B6Cu;
        goto label_104b6c;
    }
    ctx->pc = 0x104B64u;
    {
        const bool branch_taken_0x104b64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x104B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B64u;
        // 0x104b68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b64) {
            ctx->pc = 0x104BB8u;
            goto label_104bb8;
        }
    }
    ctx->pc = 0x104B6Cu;
label_104b6c:
    // 0x104b6c: 0x24a20048  addiu       $v0, $a1, 0x48
    ctx->pc = 0x104b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
label_104b70:
    // 0x104b70: 0x24830038  addiu       $v1, $a0, 0x38
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_104b74:
    // 0x104b74: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x104b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_104b78:
    // 0x104b78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x104b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_104b7c:
    // 0x104b7c: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x104b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_104b80:
    // 0x104b80: 0x8e02fff0  lw          $v0, -0x10($s0)
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_104b84:
    // 0x104b84: 0x0  nop
    ctx->pc = 0x104b84u;
    // NOP
label_104b88:
    // 0x104b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x104b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104b8c:
    // 0x104b8c: 0x40f809  jalr        $v0
label_104b90:
    if (ctx->pc == 0x104B90u) {
        ctx->pc = 0x104B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B8Cu;
        // 0x104b90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104B94u;
        goto label_104b94;
    }
    ctx->pc = 0x104B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104B94u);
        ctx->pc = 0x104B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B8Cu;
        // 0x104b90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B8Cu, 0x104B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104B94u;
label_104b94:
    // 0x104b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x104b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104b98:
    // 0x104b98: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x104b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_104b9c:
    // 0x104b9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_104ba0:
    // 0x104ba0: 0x60f809  jalr        $v1
label_104ba4:
    if (ctx->pc == 0x104BA4u) {
        ctx->pc = 0x104BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BA0u;
        // 0x104ba4: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BA8u;
        goto label_104ba8;
    }
    ctx->pc = 0x104BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x104BA8u);
        ctx->pc = 0x104BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BA0u;
        // 0x104ba4: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104BA0u, 0x104BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104BA8u;
label_104ba8:
    // 0x104ba8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x104ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_104bac:
    // 0x104bac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x104bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_104bb0:
    // 0x104bb0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_104bb4:
    if (ctx->pc == 0x104BB4u) {
        ctx->pc = 0x104BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BB0u;
        // 0x104bb4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BB8u;
        goto label_104bb8;
    }
    ctx->pc = 0x104BB0u;
    {
        const bool branch_taken_0x104bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104bb0) {
            ctx->pc = 0x104BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104BB0u;
            // 0x104bb4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104b88;
        }
    }
    ctx->pc = 0x104BB8u;
label_104bb8:
    // 0x104bb8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_104bbc:
    // 0x104bbc: 0x26a541f8  addiu       $a1, $s5, 0x41F8
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
label_104bc0:
    // 0x104bc0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x104bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_104bc4:
    // 0x104bc4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x104bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_104bc8:
    // 0x104bc8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x104bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_104bcc:
    // 0x104bcc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_104bd0:
    if (ctx->pc == 0x104BD0u) {
        ctx->pc = 0x104BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BCCu;
        // 0x104bd0: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BD4u;
        goto label_104bd4;
    }
    ctx->pc = 0x104BCCu;
    {
        const bool branch_taken_0x104bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BCCu;
        // 0x104bd0: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bcc) {
            ctx->pc = 0x104BF0u;
            goto label_104bf0;
        }
    }
    ctx->pc = 0x104BD4u;
label_104bd4:
    // 0x104bd4: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x104bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_104bd8:
    // 0x104bd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_104bdc:
    if (ctx->pc == 0x104BDCu) {
        ctx->pc = 0x104BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD8u;
        // 0x104bdc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BE0u;
        goto label_104be0;
    }
    ctx->pc = 0x104BD8u;
    {
        const bool branch_taken_0x104bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD8u;
        // 0x104bdc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bd8) {
            ctx->pc = 0x104BE8u;
            goto label_104be8;
        }
    }
    ctx->pc = 0x104BE0u;
label_104be0:
    // 0x104be0: 0xc042b36  jal         func_10ACD8
label_104be4:
    if (ctx->pc == 0x104BE4u) {
        ctx->pc = 0x104BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BE0u;
        // 0x104be4: 0x2484c648  addiu       $a0, $a0, -0x39B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104BE8u;
        goto label_104be8;
    }
    ctx->pc = 0x104BE0u;
    SET_GPR_U32(ctx, 31, 0x104BE8u);
    ctx->pc = 0x104BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BE0u;
    // 0x104be4: 0x2484c648  addiu       $a0, $a0, -0x39B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x104BE0u, 0x104BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BE8u;
label_104be8:
    // 0x104be8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_104bec:
    // 0x104bec: 0x26a541f8  addiu       $a1, $s5, 0x41F8
    ctx->pc = 0x104becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16888));
label_104bf0:
    // 0x104bf0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x104bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_104bf4:
    // 0x104bf4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x104bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_104bf8:
    // 0x104bf8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x104bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_104bfc:
    // 0x104bfc: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_104c00:
    if (ctx->pc == 0x104C00u) {
        ctx->pc = 0x104C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BFCu;
        // 0x104c00: 0x8c43013c  lw          $v1, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104C04u;
        goto label_104c04;
    }
    ctx->pc = 0x104BFCu;
    {
        const bool branch_taken_0x104bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104bfc) {
            ctx->pc = 0x104C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104BFCu;
            // 0x104c00: 0x8c43013c  lw          $v1, 0x13C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104C34u;
            goto label_104c34;
        }
    }
    ctx->pc = 0x104C04u;
label_104c04:
    // 0x104c04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104c04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104c08:
    // 0x104c08: 0x8c440128  lw          $a0, 0x128($v0)
    ctx->pc = 0x104c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_104c0c:
    // 0x104c0c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x104c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_104c10:
    // 0x104c10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_104c14:
    // 0x104c14: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104c14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_104c18:
    // 0x104c18: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104c18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_104c1c:
    // 0x104c1c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_104c20:
    // 0x104c20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_104c24:
    // 0x104c24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_104c28:
    // 0x104c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104c2c:
    // 0x104c2c: 0x8041686  j           func_105A18
label_104c30:
    if (ctx->pc == 0x104C30u) {
        ctx->pc = 0x104C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C2Cu;
        // 0x104c30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104C34u;
        goto label_104c34;
    }
    ctx->pc = 0x104C2Cu;
    ctx->pc = 0x104C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C2Cu;
    // 0x104c30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A18u;
    _copyRefImage_0x105a18(rdram, ctx, runtime); return;
    ctx->pc = 0x104C34u;
label_104c34:
    // 0x104c34: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_104c38:
    if (ctx->pc == 0x104C38u) {
        ctx->pc = 0x104C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C34u;
        // 0x104c38: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104C3Cu;
        goto label_104c3c;
    }
    ctx->pc = 0x104C34u;
    {
        const bool branch_taken_0x104c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c34) {
            ctx->pc = 0x104C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104C34u;
            // 0x104c38: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104C6Cu;
            goto label_104c6c;
        }
    }
    ctx->pc = 0x104C3Cu;
label_104c3c:
    // 0x104c3c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x104c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_104c40:
    // 0x104c40: 0x8c440128  lw          $a0, 0x128($v0)
    ctx->pc = 0x104c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_104c44:
    // 0x104c44: 0x8c653bf0  lw          $a1, 0x3BF0($v1)
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15344)));
label_104c48:
    // 0x104c48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_104c4c:
    // 0x104c4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104c4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_104c50:
    // 0x104c50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104c50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_104c54:
    // 0x104c54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_104c58:
    // 0x104c58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_104c5c:
    // 0x104c5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_104c60:
    // 0x104c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104c64:
    // 0x104c64: 0x8041686  j           func_105A18
label_104c68:
    if (ctx->pc == 0x104C68u) {
        ctx->pc = 0x104C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C64u;
        // 0x104c68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104C6Cu;
        goto label_104c6c;
    }
    ctx->pc = 0x104C64u;
    ctx->pc = 0x104C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C64u;
    // 0x104c68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A18u;
    _copyRefImage_0x105a18(rdram, ctx, runtime); return;
    ctx->pc = 0x104C6Cu;
label_104c6c:
    // 0x104c6c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_104c70:
    // 0x104c70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104c74:
    // 0x104c74: 0x8cc53bf0  lw          $a1, 0x3BF0($a2)
    ctx->pc = 0x104c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15344)));
label_104c78:
    // 0x104c78: 0x8c640128  lw          $a0, 0x128($v1)
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
label_104c7c:
    // 0x104c7c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_104c80:
    // 0x104c80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_104c84:
    // 0x104c84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_104c88:
    // 0x104c88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_104c8c:
    // 0x104c8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_104c90:
    // 0x104c90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_104c94:
    // 0x104c94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_104c98:
    // 0x104c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104c9c:
    // 0x104c9c: 0x804166e  j           func_1059B8
label_104ca0:
    if (ctx->pc == 0x104CA0u) {
        ctx->pc = 0x104CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C9Cu;
        // 0x104ca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104CA4u;
        goto label_fallthrough_0x104c9c;
    }
    ctx->pc = 0x104C9Cu;
    ctx->pc = 0x104CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C9Cu;
    // 0x104ca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1059B8u;
    _copyAddRefImage_0x1059b8(rdram, ctx, runtime); return;
label_fallthrough_0x104c9c:
    ctx->pc = 0x104CA4u;
}
