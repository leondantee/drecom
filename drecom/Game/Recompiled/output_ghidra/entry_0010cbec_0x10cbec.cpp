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

// Function: entry_0010cbec
// Address: 0x10cbec - 0x10cc38
void entry_0010cbec_0x10cbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cbec_0x10cbec");
#endif

    ctx->pc = 0x10cbecu;

    // 0x10cbec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10cbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10cbf0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10CBF0u;
    {
        const bool branch_taken_0x10cbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBF0u;
        // 0x10cbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbf0) {
            ctx->pc = 0x10CC38u;
            return;
        }
    }
    ctx->pc = 0x10CBF8u;
    // 0x10cbf8: 0x90c20066  lbu         $v0, 0x66($a2)
    ctx->pc = 0x10cbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
    // 0x10cbfc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10cbfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10cc00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10CC00u;
    {
        const bool branch_taken_0x10cc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC00u;
        // 0x10cc04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc00) {
            ctx->pc = 0x10CC38u;
            return;
        }
    }
    ctx->pc = 0x10CC08u;
    // 0x10cc08: 0x90c5007a  lbu         $a1, 0x7A($a2)
    ctx->pc = 0x10cc08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x10cc0c: 0x90c4007c  lbu         $a0, 0x7C($a2)
    ctx->pc = 0x10cc0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x10cc10: 0x90c3007b  lbu         $v1, 0x7B($a2)
    ctx->pc = 0x10cc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 123)));
    // 0x10cc14: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x10cc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x10cc18: 0x90c20079  lbu         $v0, 0x79($a2)
    ctx->pc = 0x10cc18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 121)));
    // 0x10cc1c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x10cc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x10cc20: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x10cc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x10cc24: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x10cc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x10cc28: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x10cc28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x10cc2c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x10cc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x10cc30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10cc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10cc34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10cc34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x10cc38u;
}
