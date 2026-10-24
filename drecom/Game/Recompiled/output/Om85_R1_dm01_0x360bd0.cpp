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

// Function: Om85_R1_dm01
// Address: 0x360bd0 - 0x360f94
void Om85_R1_dm01_0x360bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om85_R1_dm01_0x360bd0");
#endif

    switch (ctx->pc) {
        case 0x360c34u: goto label_360c34;
        case 0x360c40u: goto label_360c40;
        case 0x360cbcu: goto label_360cbc;
        case 0x360cdcu: goto label_360cdc;
        case 0x360d4cu: goto label_360d4c;
        case 0x360d94u: goto label_360d94;
        case 0x360dbcu: goto label_360dbc;
        case 0x360dc8u: goto label_360dc8;
        case 0x360ddcu: goto label_360ddc;
        case 0x360e14u: goto label_360e14;
        case 0x360e5cu: goto label_360e5c;
        case 0x360ed4u: goto label_360ed4;
        case 0x360ee0u: goto label_360ee0;
        case 0x360f30u: goto label_360f30;
        case 0x360f3cu: goto label_360f3c;
        default: break;
    }

    ctx->pc = 0x360bd0u;

    // 0x360bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x360bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x360bd4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x360bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x360bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x360bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360be4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x360be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x360be8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x360be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x360bec: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x360becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x360bf0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x360bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360bf4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x360bf4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAC50u));
    // 0x360bf8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x360bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x360bfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x360c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x360c04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x360c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x360c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360c0c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x360C0Cu;
    {
        const bool branch_taken_0x360c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x360c0c) {
            ctx->pc = 0x360D28u;
            goto label_360d28;
        }
    }
    ctx->pc = 0x360C14u;
    // 0x360c14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x360C14u;
    {
        const bool branch_taken_0x360c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c14) {
            ctx->pc = 0x360C24u;
            goto label_360c24;
        }
    }
    ctx->pc = 0x360C1Cu;
    // 0x360c1c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x360C1Cu;
    {
        const bool branch_taken_0x360c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c1c) {
            ctx->pc = 0x360F78u;
            goto label_360f78;
        }
    }
    ctx->pc = 0x360C24u;
label_360c24:
    // 0x360c24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c28: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x360c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x360c2c: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x360C2Cu;
    SET_GPR_U32(ctx, 31, 0x360C34u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x360C2Cu, 0x360C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C34u;
label_360c34:
    // 0x360c34: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360c34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360c38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x360C38u;
    {
        const bool branch_taken_0x360c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c38) {
            ctx->pc = 0x360C68u;
            goto label_360c68;
        }
    }
    ctx->pc = 0x360C40u;
label_360c40:
    // 0x360c40: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x360c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c44: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x360c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x360c48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x360c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x360c4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x360c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x360c50: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x360c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x360c54: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x360c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x360c58: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x360c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x360c5c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x360c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x360c60: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x360c60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x360c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x360c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_360c68:
    // 0x360c68: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x360c68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x360c6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x360C6Cu;
    {
        const bool branch_taken_0x360c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x360c6c) {
            ctx->pc = 0x360C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360c40;
        }
    }
    ctx->pc = 0x360C74u;
    // 0x360c74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c78: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x360c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x360c7c: 0x24720630  addiu       $s2, $v1, 0x630
    ctx->pc = 0x360c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x360c80: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x360c80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x360c84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c88: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x360c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x360c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x360c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360c90: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x360C90u;
    {
        const bool branch_taken_0x360c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x360c90) {
            ctx->pc = 0x360CE4u;
            goto label_360ce4;
        }
    }
    ctx->pc = 0x360C98u;
    // 0x360c98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x360c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x360ca0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x360ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x360ca4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x360ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360ca8: 0x24040428  addiu       $a0, $zero, 0x428
    ctx->pc = 0x360ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x360cac: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x360cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x360cb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x360cb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360cb4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x360CB4u;
    SET_GPR_U32(ctx, 31, 0x360CBCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x360CB4u, 0x360CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CBCu;
label_360cbc:
    // 0x360cbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cc0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cc4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360cc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x360cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360ccc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x360cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360cd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360cd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360CD4u;
    SET_GPR_U32(ctx, 31, 0x360CDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360CD4u, 0x360CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CDCu;
label_360cdc:
    // 0x360cdc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x360CDCu;
    {
        const bool branch_taken_0x360cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360cdc) {
            ctx->pc = 0x360D18u;
            goto label_360d18;
        }
    }
    ctx->pc = 0x360CE4u;
label_360ce4:
    // 0x360ce4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x360ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360ce8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360cf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cf4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x360cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360cf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360d00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x360d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360d08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360d10: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x360D10u;
    {
        const bool branch_taken_0x360d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360d10) {
            ctx->pc = 0x360F78u;
            goto label_360f78;
        }
    }
    ctx->pc = 0x360D18u;
label_360d18:
    // 0x360d18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d1c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x360d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x360d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x360d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x360d24: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x360d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_360d28:
    // 0x360d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d2c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x360d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x360d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360d34: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x360d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x360d38: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x360D38u;
    {
        const bool branch_taken_0x360d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360d38) {
            ctx->pc = 0x360DF0u;
            goto label_360df0;
        }
    }
    ctx->pc = 0x360D40u;
    // 0x360d40: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360d40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360d44: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x360D44u;
    {
        const bool branch_taken_0x360d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360d44) {
            ctx->pc = 0x360DE0u;
            goto label_360de0;
        }
    }
    ctx->pc = 0x360D4Cu;
label_360d4c:
    // 0x360d4c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x360d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360d54: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x360d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x360d58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x360d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360d5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x360d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360d60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x360d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x360d64: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x360d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x360d68: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x360d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360d6c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x360d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x360d70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x360d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360d74: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x360d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360d78: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x360d78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x360d7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x360d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360d84: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x360d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360d88: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x360d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x360d8c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x360D8Cu;
    SET_GPR_U32(ctx, 31, 0x360D94u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x360D94u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x360D94u) { return; }
    ctx->pc = 0x360D94u;
label_360d94:
    // 0x360d94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x360d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x360d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360d9c: 0x0  nop
    ctx->pc = 0x360d9cu;
    // NOP
    // 0x360da0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x360da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x360da4: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x360da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x360da8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360da8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360dac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x360dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360db0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x360db0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360db4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x360DB4u;
    SET_GPR_U32(ctx, 31, 0x360DBCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x360DB4u, 0x360DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DBCu;
label_360dbc:
    // 0x360dbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x360dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x360dc0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x360DC0u;
    SET_GPR_U32(ctx, 31, 0x360DC8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x360DC0u, 0x360DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DC8u;
label_360dc8:
    // 0x360dc8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x360dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360dcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x360dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360dd0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x360dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360dd4: 0xc0d8840  jal         func_362100
    ctx->pc = 0x360DD4u;
    SET_GPR_U32(ctx, 31, 0x360DDCu);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x360DD4u, 0x360DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DDCu;
label_360ddc:
    // 0x360ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x360ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_360de0:
    // 0x360de0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x360de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x360de4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x360DE4u;
    {
        const bool branch_taken_0x360de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360de4) {
            ctx->pc = 0x360D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360d4c;
        }
    }
    ctx->pc = 0x360DECu;
    // 0x360dec: 0x0  nop
    ctx->pc = 0x360decu;
    // NOP
label_360df0:
    // 0x360df0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360df4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x360df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x360df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360dfc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x360dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x360e00: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x360E00u;
    {
        const bool branch_taken_0x360e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360e00) {
            ctx->pc = 0x360EF8u;
            goto label_360ef8;
        }
    }
    ctx->pc = 0x360E08u;
    // 0x360e08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360e08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360e0c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x360E0Cu;
    {
        const bool branch_taken_0x360e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360e0c) {
            ctx->pc = 0x360EE8u;
            goto label_360ee8;
        }
    }
    ctx->pc = 0x360E14u;
label_360e14:
    // 0x360e14: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x360e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360e1c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x360e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x360e20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x360e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360e24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x360e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360e28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x360e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x360e2c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x360e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x360e30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x360e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360e34: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x360e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x360e38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x360e38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360e3c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x360e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360e40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x360e40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x360e44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x360e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360e4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x360e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360e50: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x360e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x360e54: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x360E54u;
    SET_GPR_U32(ctx, 31, 0x360E5Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x360E5Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x360E5Cu) { return; }
    ctx->pc = 0x360E5Cu;
label_360e5c:
    // 0x360e5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x360e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360e64: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x360e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360e68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x360e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360e6c: 0x0  nop
    ctx->pc = 0x360e6cu;
    // NOP
    // 0x360e70: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x360E70u;
    {
        const bool branch_taken_0x360e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x360e70) {
            ctx->pc = 0x360EE0u;
            goto label_360ee0;
        }
    }
    ctx->pc = 0x360E78u;
    // 0x360e78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360e80: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x360e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x360e84: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x360e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x360e88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x360e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x360e8c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x360E8Cu;
    {
        const bool branch_taken_0x360e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360e8c) {
            ctx->pc = 0x360EE0u;
            goto label_360ee0;
        }
    }
    ctx->pc = 0x360E94u;
    // 0x360e94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360e98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360e9c: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x360e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x360ea0: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x360ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x360ea4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x360ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x360ea8: 0xac82128c  sw          $v0, 0x128C($a0)
    ctx->pc = 0x360ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 2));
    // 0x360eac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x360eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x360eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360eb4: 0x0  nop
    ctx->pc = 0x360eb4u;
    // NOP
    // 0x360eb8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x360eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x360ebc: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x360ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x360ec0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360ec4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x360ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360ec8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x360ec8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360ecc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x360ECCu;
    SET_GPR_U32(ctx, 31, 0x360ED4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x360ECCu, 0x360ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360ED4u;
label_360ed4:
    // 0x360ed4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x360ed4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x360ed8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x360ED8u;
    SET_GPR_U32(ctx, 31, 0x360EE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x360ED8u, 0x360EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EE0u;
label_360ee0:
    // 0x360ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x360ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x360ee4: 0x0  nop
    ctx->pc = 0x360ee4u;
    // NOP
label_360ee8:
    // 0x360ee8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x360ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x360eec: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x360EECu;
    {
        const bool branch_taken_0x360eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360eec) {
            ctx->pc = 0x360E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360e14;
        }
    }
    ctx->pc = 0x360EF4u;
    // 0x360ef4: 0x0  nop
    ctx->pc = 0x360ef4u;
    // NOP
label_360ef8:
    // 0x360ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360efc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x360efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x360f00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x360f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x360f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x360F08u;
    {
        const bool branch_taken_0x360f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f08) {
            ctx->pc = 0x360F24u;
            goto label_360f24;
        }
    }
    ctx->pc = 0x360F10u;
    // 0x360f10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f14: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x360f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x360f18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x360f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x360f1c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x360f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x360f20: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x360f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
label_360f24:
    // 0x360f24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f28: 0xc05cd10  jal         func_173440
    ctx->pc = 0x360F28u;
    SET_GPR_U32(ctx, 31, 0x360F30u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x360F28u, 0x360F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F30u;
label_360f30:
    // 0x360f30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f34: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x360F34u;
    SET_GPR_U32(ctx, 31, 0x360F3Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x360F34u, 0x360F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F3Cu;
label_360f3c:
    // 0x360f3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f40: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x360f44: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x360F44u;
    {
        const bool branch_taken_0x360f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f44) {
            ctx->pc = 0x360F78u;
            goto label_360f78;
        }
    }
    ctx->pc = 0x360F4Cu;
    // 0x360f4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x360f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360f50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360f58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f5c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x360f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360f60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360f68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x360f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360f70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_360f78:
    // 0x360f78: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x360f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360f7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360f88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x360f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x360f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x360F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360F94u;
}
