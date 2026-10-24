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

// Function: _doCSC2
// Address: 0x108c30 - 0x108de0
void _doCSC2_0x108c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doCSC2_0x108c30");
#endif

    switch (ctx->pc) {
        case 0x108ca0u: goto label_108ca0;
        case 0x108cd0u: goto label_108cd0;
        case 0x108cecu: goto label_108cec;
        case 0x108d4cu: goto label_108d4c;
        case 0x108d50u: goto label_108d50;
        case 0x108d84u: goto label_108d84;
        case 0x108d90u: goto label_108d90;
        case 0x108db4u: goto label_108db4;
        case 0x108dc0u: goto label_108dc0;
        default: break;
    }

    ctx->pc = 0x108c30u;

    // 0x108c30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x108c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x108c34: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x108c38: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x108c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x108c3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x108c40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x108c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x108c44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c48: 0x24b0fc01  addiu       $s0, $a1, -0x3FF
    ctx->pc = 0x108c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x108c4c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x108c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x108c50: 0x102280  sll         $a0, $s0, 10
    ctx->pc = 0x108c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x108c54: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x108c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x108c58: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x108c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x108c5c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x108c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x108c60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x108c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x108c64: 0x24c33b28  addiu       $v1, $a2, 0x3B28
    ctx->pc = 0x108c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15144));
    // 0x108c68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x108c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x108c6c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x108c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x108c70: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x108c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x108c74: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x108c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x108c78: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x108c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x108c7c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x108c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x108c80: 0xacc03b28  sw          $zero, 0x3B28($a2)
    ctx->pc = 0x108c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15144), GPR_U32(ctx, 0));
    // 0x108c84: 0x109180  sll         $s2, $s0, 6
    ctx->pc = 0x108c84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x108c88: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x108c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x108c8c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x108c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x108c90: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x108c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x108c94: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x108c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x108c98: 0xae803b20  sw          $zero, 0x3B20($s4)
    ctx->pc = 0x108c98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15136), GPR_U32(ctx, 0));
    // 0x108c9c: 0x0  nop
    ctx->pc = 0x108c9cu;
    // NOP
label_108ca0:
    // 0x108ca0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x108ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10002010
    // 0x108ca4: 0x0  nop
    ctx->pc = 0x108ca4u;
    // NOP
    // 0x108ca8: 0x0  nop
    ctx->pc = 0x108ca8u;
    // NOP
    // 0x108cac: 0x0  nop
    ctx->pc = 0x108cacu;
    // NOP
    // 0x108cb0: 0x0  nop
    ctx->pc = 0x108cb0u;
    // NOP
    // 0x108cb4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108CB4u;
    {
        const bool branch_taken_0x108cb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108cb4) {
            ctx->pc = 0x108CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108ca0;
        }
    }
    ctx->pc = 0x108CBCu;
    // 0x108cbc: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x108cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x108cc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108cc4: 0x24a58b78  addiu       $a1, $a1, -0x7488
    ctx->pc = 0x108cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937464));
    // 0x108cc8: 0xc0849cc  jal         func_212730
    ctx->pc = 0x108CC8u;
    SET_GPR_U32(ctx, 31, 0x108CD0u);
    ctx->pc = 0x108CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CC8u;
    // 0x108ccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212730u;
    {
        ctx->pc = 0x108CD0u;
        ps2_syscalls::AddDmacHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x108CD0u) { return; }
    ctx->pc = 0x108CD0u;
label_108cd0:
    // 0x108cd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x108cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cd4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x108cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x108cd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108cdc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x108cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108ce0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x108ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x108ce4: 0xc084d76  jal         func_2135D8
    ctx->pc = 0x108CE4u;
    SET_GPR_U32(ctx, 31, 0x108CECu);
    ctx->pc = 0x108CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CE4u;
    // 0x108ce8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2135D8u;
    {
        ctx->pc = 0x108CECu;
        ps2_syscalls::EnableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x108CECu) { return; }
    ctx->pc = 0x108CECu;
label_108cec:
    // 0x108cec: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x108cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x108cf0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108cf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x108cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x108cf8: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x108cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x108cfc: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x108d00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108d04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x108d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x108d08: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x108d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x108d0c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x108d0cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x108d10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108d14: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x108d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x108d18: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x108d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x108d1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108d20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x108d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x108d24: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x108d24u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x108d28: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x108d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x108d2c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x108d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x108d30: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108d34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x108d34u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x108d38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x108d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d3c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108d40: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x108d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x108d44: 0xc042914  jal         func_10A450
    ctx->pc = 0x108D44u;
    SET_GPR_U32(ctx, 31, 0x108D4Cu);
    ctx->pc = 0x108D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D44u;
    // 0x108d48: 0x8c443bf4  lw          $a0, 0x3BF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x108D44u, 0x108D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D4Cu;
label_108d4c:
    // 0x108d4c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x108d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_108d50:
    // 0x108d50: 0x8c623b28  lw          $v0, 0x3B28($v1)
    ctx->pc = 0x108d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15144)));
    // 0x108d54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x108d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x108d58: 0x0  nop
    ctx->pc = 0x108d58u;
    // NOP
    // 0x108d5c: 0x0  nop
    ctx->pc = 0x108d5cu;
    // NOP
    // 0x108d60: 0x0  nop
    ctx->pc = 0x108d60u;
    // NOP
    // 0x108d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108D64u;
    {
        const bool branch_taken_0x108d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108d64) {
            ctx->pc = 0x108D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d50;
        }
    }
    ctx->pc = 0x108D6Cu;
    // 0x108d6c: 0x8e823b20  lw          $v0, 0x3B20($s4)
    ctx->pc = 0x108d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15136)));
    // 0x108d70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108D70u;
    {
        const bool branch_taken_0x108d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D70u;
        // 0x108d74: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d70) {
            ctx->pc = 0x108D88u;
            goto label_108d88;
        }
    }
    ctx->pc = 0x108D78u;
    // 0x108d78: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x108d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x108d7c: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x108D7Cu;
    SET_GPR_U32(ctx, 31, 0x108D84u);
    ctx->pc = 0x108D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D7Cu;
    // 0x108d80: 0x2484c858  addiu       $a0, $a0, -0x37A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x108D7Cu, 0x108D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D84u;
label_108d84:
    // 0x108d84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_108d88:
    // 0x108d88: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x108d8c: 0x0  nop
    ctx->pc = 0x108d8cu;
    // NOP
label_108d90:
    // 0x108d90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108d90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x108d94: 0x0  nop
    ctx->pc = 0x108d94u;
    // NOP
    // 0x108d98: 0x0  nop
    ctx->pc = 0x108d98u;
    // NOP
    // 0x108d9c: 0x0  nop
    ctx->pc = 0x108d9cu;
    // NOP
    // 0x108da0: 0x0  nop
    ctx->pc = 0x108da0u;
    // NOP
    // 0x108da4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108DA4u;
    {
        const bool branch_taken_0x108da4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108da4) {
            ctx->pc = 0x108D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108d90;
        }
    }
    ctx->pc = 0x108DACu;
    // 0x108dac: 0xc084d5c  jal         func_213570
    ctx->pc = 0x108DACu;
    SET_GPR_U32(ctx, 31, 0x108DB4u);
    ctx->pc = 0x108DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DACu;
    // 0x108db0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213570u;
    {
        ctx->pc = 0x108DB4u;
        ps2_syscalls::DisableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x108DB4u) { return; }
    ctx->pc = 0x108DB4u;
label_108db4:
    // 0x108db4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108db8: 0xc0849d4  jal         func_212750
    ctx->pc = 0x108DB8u;
    SET_GPR_U32(ctx, 31, 0x108DC0u);
    ctx->pc = 0x108DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DB8u;
    // 0x108dbc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212750u;
    {
        ctx->pc = 0x108DC0u;
        ps2_syscalls::RemoveDmacHandler(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x108DC0u) { return; }
    ctx->pc = 0x108DC0u;
label_108dc0:
    // 0x108dc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x108dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108dc4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x108dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108dc8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x108dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108dcc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x108dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108dd0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x108dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108dd4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x108dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x108DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DD8u;
        // 0x108ddc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108DE0u;
}
