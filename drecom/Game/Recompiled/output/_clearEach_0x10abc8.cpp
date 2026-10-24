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

// Function: _clearEach
// Address: 0x10abc8 - 0x10ac98
void _clearEach_0x10abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearEach_0x10abc8");
#endif

    switch (ctx->pc) {
        case 0x10abe0u: goto label_10abe0;
        default: break;
    }

    ctx->pc = 0x10abc8u;

    // 0x10abc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10abcc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10abd0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10abd4: 0xac403e3c  sw          $zero, 0x3E3C($v0)
    ctx->pc = 0x10abd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x383E3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383E3Cu, _value); } while (0);
    // 0x10abd8: 0xac833c24  sw          $v1, 0x3C24($a0)
    ctx->pc = 0x10abd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x383C24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C24u, _value); } while (0);
    // 0x10abdc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_10abe0:
    // 0x10abe0: 0x42000039  di
    ctx->pc = 0x10abe0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10abe4: 0x40f  sync.p
    ctx->pc = 0x10abe4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10abe8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10abec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10abf0: 0x0  nop
    ctx->pc = 0x10abf0u;
    // NOP
    // 0x10abf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10ABF4u;
    {
        const bool branch_taken_0x10abf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10abf4) {
            ctx->pc = 0x10ABE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10abe0;
        }
    }
    ctx->pc = 0x10ABFCu;
    // 0x10abfc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac00: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x10ac00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x10ac04: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10ac04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10ac08: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10ac10: 0x34a5f590  ori         $a1, $a1, 0xF590
    ctx->pc = 0x10ac10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62864);
    // 0x10ac14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac18: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10ac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10ac20: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10ac20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10ac24: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10ac24u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2)); // MMIO: 0x1000f590
    // 0x10ac28: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10ac28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10ac2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10ac2cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x10ac30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10ac34u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x10ac38: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x10ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x10ac3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10ac3cu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0)); // MMIO: 0x1000d400
    // 0x10ac40: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x10ac44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10ac48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10ac4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ac50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10ac54: 0x42000038  ei
    ctx->pc = 0x10ac54u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10ac58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac60: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10ac64: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10ac64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10ac68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10ac68u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x10ac6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10ac70u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x10ac74: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x10ac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x10ac78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10ac78u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x10ac7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac80: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10ac84: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10ac88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10ac88u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x10ac8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac90: 0x8042e8a  j           func_10BA28
    ctx->pc = 0x10AC90u;
    ctx->pc = 0x10AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC90u;
    // 0x10ac94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BA28u;
    sceIpuSync_0x10ba28(rdram, ctx, runtime); return;
    ctx->pc = 0x10AC98u;
}
