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

// Function: __smakebuf
// Address: 0x117dc0 - 0x117f10
void ps2___smakebuf_0x117dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___smakebuf_0x117dc0");
#endif

    switch (ctx->pc) {
        case 0x117e14u: goto label_117e14;
        case 0x117e88u: goto label_117e88;
        case 0x117ee4u: goto label_117ee4;
        default: break;
    }

    ctx->pc = 0x117dc0u;

    // 0x117dc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x117dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x117dc4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x117dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x117dc8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x117dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x117dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x117dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x117dd4: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x117dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x117dd8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x117dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117ddc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x117ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x117de0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117DE0u;
    {
        const bool branch_taken_0x117de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DE0u;
        // 0x117de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117de0) {
            ctx->pc = 0x117DFCu;
            goto label_117dfc;
        }
    }
    ctx->pc = 0x117DE8u;
    // 0x117de8: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x117dec: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x117decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x117df0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x117df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x117df4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x117DF4u;
    {
        const bool branch_taken_0x117df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DF4u;
        // 0x117df8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117df4) {
            ctx->pc = 0x117EF8u;
            goto label_117ef8;
        }
    }
    ctx->pc = 0x117DFCu;
label_117dfc:
    // 0x117dfc: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x117dfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x117e00: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x117E00u;
    {
        const bool branch_taken_0x117e00 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x117E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E00u;
        // 0x117e04: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e00) {
            ctx->pc = 0x117E24u;
            goto label_117e24;
        }
    }
    ctx->pc = 0x117E08u;
    // 0x117e08: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117e0c: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117E0Cu;
    SET_GPR_U32(ctx, 31, 0x117E14u);
    ctx->pc = 0x117E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E0Cu;
    // 0x117e10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1177A0u, 0x117E0Cu, 0x117E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E14u;
label_117e14:
    // 0x117e14: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117E14u;
    {
        const bool branch_taken_0x117e14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E14u;
        // 0x117e18: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e14) {
            ctx->pc = 0x117E34u;
            goto label_117e34;
        }
    }
    ctx->pc = 0x117E1Cu;
    // 0x117e1c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x117e1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117e20: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x117e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_117e24:
    // 0x117e24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x117e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e28: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117e2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x117E2Cu;
    {
        const bool branch_taken_0x117e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E2Cu;
        // 0x117e30: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e2c) {
            ctx->pc = 0x117E7Cu;
            goto label_117e7c;
        }
    }
    ctx->pc = 0x117E34u;
label_117e34:
    // 0x117e34: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x117e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x117e38: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x117e3c: 0x3051f000  andi        $s1, $v0, 0xF000
    ctx->pc = 0x117e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x117e40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x117e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e44: 0x3a232000  xori        $v1, $s1, 0x2000
    ctx->pc = 0x117e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
    // 0x117e48: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117E48u;
    {
        const bool branch_taken_0x117e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x117E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E48u;
        // 0x117e4c: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e48) {
            ctx->pc = 0x117E70u;
            goto label_117e70;
        }
    }
    ctx->pc = 0x117E50u;
    // 0x117e50: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x117e54: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x117e58: 0x2442aa78  addiu       $v0, $v0, -0x5588
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945400));
    // 0x117e5c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117E5Cu;
    {
        const bool branch_taken_0x117e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E5Cu;
        // 0x117e60: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e5c) {
            ctx->pc = 0x117E74u;
            goto label_117e74;
        }
    }
    ctx->pc = 0x117E64u;
    // 0x117e64: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x117e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x117e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117E68u;
    {
        const bool branch_taken_0x117e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E68u;
        // 0x117e6c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e68) {
            ctx->pc = 0x117E78u;
            goto label_117e78;
        }
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x117e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_117e74:
    // 0x117e74: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x117e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_117e78:
    // 0x117e78: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_117e7c:
    // 0x117e7c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x117e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117e80: 0xc04605a  jal         func_118168
    ctx->pc = 0x117E80u;
    SET_GPR_U32(ctx, 31, 0x117E88u);
    ctx->pc = 0x117E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E80u;
    // 0x117e84: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118168u;
    {
        ctx->pc = 0x117E88u;
        ps2_stubs::malloc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117E88u) { return; }
    ctx->pc = 0x117E88u;
label_117e88:
    // 0x117e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e8c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x117E8Cu;
    {
        const bool branch_taken_0x117e8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E8Cu;
        // 0x117e90: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e8c) {
            ctx->pc = 0x117EB4u;
            goto label_117eb4;
        }
    }
    ctx->pc = 0x117E94u;
    // 0x117e94: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x117e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x117e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x117e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117e9c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x117e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x117ea0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x117ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x117ea4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x117ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x117ea8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117eac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x117EACu;
    {
        const bool branch_taken_0x117eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EACu;
        // 0x117eb0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117eac) {
            ctx->pc = 0x117EF8u;
            goto label_117ef8;
        }
    }
    ctx->pc = 0x117EB4u;
label_117eb4:
    // 0x117eb4: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x117eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x117eb8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x117eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117ebc: 0x24637260  addiu       $v1, $v1, 0x7260
    ctx->pc = 0x117ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29280));
    // 0x117ec0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x117ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x117ec4: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x117ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x117ec8: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x117ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x117ecc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117ed0: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x117ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x117ed4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x117ED4u;
    {
        const bool branch_taken_0x117ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117ED4u;
        // 0x117ed8: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ed4) {
            ctx->pc = 0x117EF8u;
            goto label_117ef8;
        }
    }
    ctx->pc = 0x117EDCu;
    // 0x117edc: 0xc084c48  jal         func_213120
    ctx->pc = 0x117EDCu;
    SET_GPR_U32(ctx, 31, 0x117EE4u);
    ctx->pc = 0x117EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EDCu;
    // 0x117ee0: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213120u, 0x117EDCu, 0x117EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EE4u;
label_117ee4:
    // 0x117ee4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117EE4u;
    {
        const bool branch_taken_0x117ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EE4u;
        // 0x117ee8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ee4) {
            ctx->pc = 0x117EFCu;
            goto label_117efc;
        }
    }
    ctx->pc = 0x117EECu;
    // 0x117eec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x117eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117ef0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x117ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x117ef4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_117ef8:
    // 0x117ef8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x117ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_117efc:
    // 0x117efc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x117efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117f00: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x117f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117f04: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x117f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117f08: 0x3e00008  jr          $ra
    ctx->pc = 0x117F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F08u;
        // 0x117f0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F10u;
}
