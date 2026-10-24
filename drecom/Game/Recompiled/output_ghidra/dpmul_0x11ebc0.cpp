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

// Function: dpmul
// Address: 0x11ebc0 - 0x11ee68
void dpmul_0x11ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x11ebc0");
#endif

    switch (ctx->pc) {
        case 0x11ebfcu: goto label_11ebfc;
        case 0x11ec0cu: goto label_11ec0c;
        case 0x11ecd8u: goto label_11ecd8;
        case 0x11ece8u: goto label_11ece8;
        case 0x11ecf8u: goto label_11ecf8;
        case 0x11ed08u: goto label_11ed08;
        case 0x11ed80u: goto label_11ed80;
        case 0x11edd8u: goto label_11edd8;
        case 0x11ee3cu: goto label_11ee3c;
        default: break;
    }

    ctx->pc = 0x11ebc0u;

    // 0x11ebc0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x11ebc4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x11ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x11ebc8: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x11ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x11ebcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11ebd0: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x11ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x11ebd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebd8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x11ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x11ebdc: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x11ebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x11ebe0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x11ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x11ebe4: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x11ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x11ebe8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x11ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x11ebec: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x11ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x11ebf0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x11ebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x11ebf4: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EBF4u;
    SET_GPR_U32(ctx, 31, 0x11EBFCu);
    ctx->pc = 0x11EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBF4u;
    // 0x11ebf8: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EBF4u, 0x11EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBFCu;
label_11ebfc:
    // 0x11ebfc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11ebfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11ec00: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x11ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x11ec04: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EC04u;
    SET_GPR_U32(ctx, 31, 0x11EC0Cu);
    ctx->pc = 0x11EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC04u;
    // 0x11ec08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EC04u, 0x11EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC0Cu;
label_11ec0c:
    // 0x11ec0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec10: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x11ec10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11ec14: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11EC14u;
    {
        const bool branch_taken_0x11ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC14u;
        // 0x11ec18: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec14) {
            ctx->pc = 0x11EC70u;
            goto label_11ec70;
        }
    }
    ctx->pc = 0x11EC1Cu;
    // 0x11ec1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec20: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11ec20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11ec24: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x11EC24u;
    {
        const bool branch_taken_0x11ec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ec24) {
            ctx->pc = 0x11EC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EC24u;
            // 0x11ec28: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC98u;
            goto label_11ec98;
        }
    }
    ctx->pc = 0x11EC2Cu;
    // 0x11ec2c: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x11ec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x11ec30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EC30u;
    {
        const bool branch_taken_0x11ec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC30u;
        // 0x11ec34: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec30) {
            ctx->pc = 0x11EC4Cu;
            goto label_11ec4c;
        }
    }
    ctx->pc = 0x11EC38u;
    // 0x11ec38: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11ec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11ec3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11EC3Cu;
    {
        const bool branch_taken_0x11ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC3Cu;
        // 0x11ec40: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec3c) {
            ctx->pc = 0x11EC5Cu;
            goto label_11ec5c;
        }
    }
    ctx->pc = 0x11EC44u;
    // 0x11ec44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11EC44u;
    {
        const bool branch_taken_0x11ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC44u;
        // 0x11ec48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec44) {
            ctx->pc = 0x11EC78u;
            goto label_11ec78;
        }
    }
    ctx->pc = 0x11EC4Cu;
label_11ec4c:
    // 0x11ec4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EC4Cu;
    {
        const bool branch_taken_0x11ec4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC4Cu;
        // 0x11ec50: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec4c) {
            ctx->pc = 0x11EC68u;
            goto label_11ec68;
        }
    }
    ctx->pc = 0x11EC54u;
    // 0x11ec54: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11EC54u;
    {
        const bool branch_taken_0x11ec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC54u;
        // 0x11ec58: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec54) {
            ctx->pc = 0x11EC98u;
            goto label_11ec98;
        }
    }
    ctx->pc = 0x11EC5Cu;
label_11ec5c:
    // 0x11ec5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ec60: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x11EC60u;
    {
        const bool branch_taken_0x11ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC60u;
        // 0x11ec64: 0x24446800  addiu       $a0, $v0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec60) {
            ctx->pc = 0x11EE34u;
            goto label_11ee34;
        }
    }
    ctx->pc = 0x11EC68u;
label_11ec68:
    // 0x11ec68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EC68u;
    {
        const bool branch_taken_0x11ec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC68u;
        // 0x11ec6c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec68) {
            ctx->pc = 0x11EC8Cu;
            goto label_11ec8c;
        }
    }
    ctx->pc = 0x11EC70u;
label_11ec70:
    // 0x11ec70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11ec74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ec78:
    // 0x11ec78: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x11ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x11ec7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11ec80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11ec80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ec84: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11EC84u;
    {
        const bool branch_taken_0x11ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC84u;
        // 0x11ec88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec84) {
            ctx->pc = 0x11EE34u;
            goto label_11ee34;
        }
    }
    ctx->pc = 0x11EC8Cu;
label_11ec8c:
    // 0x11ec8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EC8Cu;
    {
        const bool branch_taken_0x11ec8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC8Cu;
        // 0x11ec90: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec8c) {
            ctx->pc = 0x11ECB0u;
            goto label_11ecb0;
        }
    }
    ctx->pc = 0x11EC94u;
    // 0x11ec94: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x11ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_11ec98:
    // 0x11ec98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11eca0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11eca4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11eca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11eca8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x11ECA8u;
    {
        const bool branch_taken_0x11eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECA8u;
        // 0x11ecac: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eca8) {
            ctx->pc = 0x11EE34u;
            goto label_11ee34;
        }
    }
    ctx->pc = 0x11ECB0u;
label_11ecb0:
    // 0x11ecb0: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x11ecb0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x11ecb4: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x11ecb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x11ecb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11ecb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ecbc: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x11ecbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x11ecc0: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x11ecc0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x11ecc4: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x11ecc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x11ecc8: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x11ecc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x11eccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ecccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecd0: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x11ECD0u;
    SET_GPR_U32(ctx, 31, 0x11ECD8u);
    ctx->pc = 0x11ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ECD0u;
    // 0x11ecd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x11ECD0u, 0x11ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECD8u;
label_11ecd8:
    // 0x11ecd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11ecd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ecdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ece0: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x11ECE0u;
    SET_GPR_U32(ctx, 31, 0x11ECE8u);
    ctx->pc = 0x11ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ECE0u;
    // 0x11ece4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x11ECE0u, 0x11ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECE8u;
label_11ece8:
    // 0x11ece8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11ece8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecf0: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x11ECF0u;
    SET_GPR_U32(ctx, 31, 0x11ECF8u);
    ctx->pc = 0x11ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ECF0u;
    // 0x11ecf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x11ECF0u, 0x11ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECF8u;
label_11ecf8:
    // 0x11ecf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ecf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ecfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed00: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x11ED00u;
    SET_GPR_U32(ctx, 31, 0x11ED08u);
    ctx->pc = 0x11ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED00u;
    // 0x11ed04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x11ED00u, 0x11ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED08u;
label_11ed08:
    // 0x11ed08: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x11ed08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x11ed0c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x11ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ed10: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x11ed10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11ed14: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x11ed14u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11ed18: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x11ed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x11ed1c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x11ed1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x11ed20: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x11ed20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ed24: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x11ed24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x11ed28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11ed2c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x11ed2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x11ed30: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x11ed30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x11ed34: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x11ed34u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x11ed38: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x11ed38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x11ed3c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x11ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11ed40: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x11ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x11ed44: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x11ed44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x11ed48: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11ed4c: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x11ed4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x11ed50: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11ed50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11ed54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ed58: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x11ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x11ed5c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x11ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x11ed60: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x11ed60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11ed64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11ED64u;
    {
        const bool branch_taken_0x11ed64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED64u;
        // 0x11ed68: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed64) {
            ctx->pc = 0x11EDACu;
            goto label_11edac;
        }
    }
    ctx->pc = 0x11ED6Cu;
    // 0x11ed6c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x11ed6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11ed70: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x11ed70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x11ed74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ed78: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x11ed78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x11ed7c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x11ed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_11ed80:
    // 0x11ed80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ed84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11ed84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11ed88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11ED88u;
    {
        const bool branch_taken_0x11ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED88u;
        // 0x11ed8c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed88) {
            ctx->pc = 0x11ED98u;
            goto label_11ed98;
        }
    }
    ctx->pc = 0x11ED90u;
    // 0x11ed90: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x11ed90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x11ed94: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x11ed94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_11ed98:
    // 0x11ed98: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x11ed98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x11ed9c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x11ed9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11eda0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11EDA0u;
    {
        const bool branch_taken_0x11eda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDA0u;
        // 0x11eda4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eda0) {
            ctx->pc = 0x11ED80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ed80;
        }
    }
    ctx->pc = 0x11EDA8u;
    // 0x11eda8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x11eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_11edac:
    // 0x11edac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11edb0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x11edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x11edb4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x11edb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11edb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EDB8u;
    {
        const bool branch_taken_0x11edb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDB8u;
        // 0x11edbc: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edb8) {
            ctx->pc = 0x11EE00u;
            goto label_11ee00;
        }
    }
    ctx->pc = 0x11EDC0u;
    // 0x11edc0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x11edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11edc4: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x11edc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11edc8: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x11edc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x11edcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11edccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11edd0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11edd4: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x11edd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_11edd8:
    // 0x11edd8: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x11edd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x11eddc: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x11eddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x11ede0: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x11ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x11ede4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11ede8: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x11ede8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x11edec: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x11edecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x11edf0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11EDF0u;
    {
        const bool branch_taken_0x11edf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDF0u;
        // 0x11edf4: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edf0) {
            ctx->pc = 0x11EDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11edd8;
        }
    }
    ctx->pc = 0x11EDF8u;
    // 0x11edf8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x11edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x11edfc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x11edfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_11ee00:
    // 0x11ee00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ee04: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EE04u;
    {
        const bool branch_taken_0x11ee04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ee04) {
            ctx->pc = 0x11EE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EE04u;
            // 0x11ee08: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EE28u;
            goto label_11ee28;
        }
    }
    ctx->pc = 0x11EE0Cu;
    // 0x11ee0c: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x11ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x11ee10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EE10u;
    {
        const bool branch_taken_0x11ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE10u;
        // 0x11ee14: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee10) {
            ctx->pc = 0x11EE20u;
            goto label_11ee20;
        }
    }
    ctx->pc = 0x11EE18u;
    // 0x11ee18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EE18u;
    {
        const bool branch_taken_0x11ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE18u;
        // 0x11ee1c: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee18) {
            ctx->pc = 0x11EE24u;
            goto label_11ee24;
        }
    }
    ctx->pc = 0x11EE20u;
label_11ee20:
    // 0x11ee20: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x11ee20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_11ee24:
    // 0x11ee24: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_11ee28:
    // 0x11ee28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ee2c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x11ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x11ee30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11ee34:
    // 0x11ee34: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11EE34u;
    SET_GPR_U32(ctx, 31, 0x11EE3Cu);
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11EE34u, 0x11EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE3Cu;
label_11ee3c:
    // 0x11ee3c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x11ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11ee40: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x11ee40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11ee44: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x11ee44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11ee48: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x11ee48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11ee4c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x11ee4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11ee50: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x11ee50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ee54: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11ee54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ee58: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x11ee58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ee5c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x11ee5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ee60: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE60u;
        // 0x11ee64: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE68u;
}
