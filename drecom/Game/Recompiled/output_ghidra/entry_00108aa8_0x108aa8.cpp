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

// Function: entry_00108aa8
// Address: 0x108aa8 - 0x108b28
void entry_00108aa8_0x108aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108aa8_0x108aa8");
#endif

    switch (ctx->pc) {
        case 0x108b04u: goto label_108b04;
        case 0x108b1cu: goto label_108b1c;
        default: break;
    }

    ctx->pc = 0x108aa8u;

label_108aa8:
    // 0x108aa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108aac: 0x0  nop
    ctx->pc = 0x108aacu;
    // NOP
    // 0x108ab0: 0x0  nop
    ctx->pc = 0x108ab0u;
    // NOP
    // 0x108ab4: 0x0  nop
    ctx->pc = 0x108ab4u;
    // NOP
    // 0x108ab8: 0x0  nop
    ctx->pc = 0x108ab8u;
    // NOP
    // 0x108abc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108ABCu;
    {
        const bool branch_taken_0x108abc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108abc) {
            ctx->pc = 0x108AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108aa8;
        }
    }
    ctx->pc = 0x108AC4u;
    // 0x108ac4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x108ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x108ac8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108acc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x108ad0: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x108ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x108ad4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x108ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x108ad8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108adc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x108adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x108ae0: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x108ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x108ae4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x108ae4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 7));
    // 0x108ae8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108aec: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x108aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x108af0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x108af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x108af4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x108af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108af8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3));
    // 0x108afc: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x108AFCu;
    SET_GPR_U32(ctx, 31, 0x108B04u);
    ctx->pc = 0x108B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108AFCu;
    // 0x108b00: 0xa42025  or          $a0, $a1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x108AFCu, 0x108B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B04u;
label_108b04:
    // 0x108b04: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108b08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x108b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x108b0c: 0x8c443bf4  lw          $a0, 0x3BF4($v0)
    ctx->pc = 0x108b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x108b10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b14: 0xc042914  jal         func_10A450
    ctx->pc = 0x108B14u;
    SET_GPR_U32(ctx, 31, 0x108B1Cu);
    ctx->pc = 0x108B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B14u;
    // 0x108b18: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x108B14u, 0x108B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B1Cu;
label_108b1c:
    // 0x108b1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108b20: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x108b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x108b24: 0x0  nop
    ctx->pc = 0x108b24u;
    // NOP
    ctx->pc = 0x108b28u;
}
