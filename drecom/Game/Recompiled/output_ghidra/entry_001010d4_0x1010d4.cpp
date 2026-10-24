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

// Function: entry_001010d4
// Address: 0x1010d4 - 0x10111c
void entry_001010d4_0x1010d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001010d4_0x1010d4");
#endif

    ctx->pc = 0x1010d4u;

    // 0x1010d4: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x1010d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1010d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1010d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1010dc: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x1010dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x1010e0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1010e4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1010e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1010e8: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x1010e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1010ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1010ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1010f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1010f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1010f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1010f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1010f8: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1010F8u;
    {
        const bool branch_taken_0x1010f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1010FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010F8u;
        // 0x1010fc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010f8) {
            ctx->pc = 0x101130u;
            return;
        }
    }
    ctx->pc = 0x101100u;
    // 0x101100: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101104: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101108: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10110c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x10110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x101110: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x101114: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x101114u;
    {
        const bool branch_taken_0x101114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101114u;
        // 0x101118: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101114) {
            ctx->pc = 0x101140u;
            return;
        }
    }
    ctx->pc = 0x10111Cu;
}
