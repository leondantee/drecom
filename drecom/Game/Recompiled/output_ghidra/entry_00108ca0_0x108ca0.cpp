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

// Function: entry_00108ca0
// Address: 0x108ca0 - 0x108d50
void entry_00108ca0_0x108ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108ca0_0x108ca0");
#endif

    switch (ctx->pc) {
        case 0x108cd0u: goto label_108cd0;
        case 0x108cecu: goto label_108cec;
        case 0x108d4cu: goto label_108d4c;
        default: break;
    }

    ctx->pc = 0x108ca0u;

label_108ca0:
    // 0x108ca0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x108ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
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
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18));
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
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5));
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
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
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
    ctx->pc = 0x108d50u;
}
