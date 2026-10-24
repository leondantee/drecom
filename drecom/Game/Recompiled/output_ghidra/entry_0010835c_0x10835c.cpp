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

// Function: entry_0010835c
// Address: 0x10835c - 0x1083a4
void entry_0010835c_0x10835c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010835c_0x10835c");
#endif

    ctx->pc = 0x10835cu;

    // 0x10835c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x108360: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x108360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x108364: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x108364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108368: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x108368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10836c: 0x8c623bf4  lw          $v0, 0x3BF4($v1)
    ctx->pc = 0x10836cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383BF4u));
    // 0x108370: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x108374: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x108374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x108378: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x108378u;
    {
        const bool branch_taken_0x108378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x108378) {
            ctx->pc = 0x10837Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108378u;
            // 0x10837c: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083A4u;
            return;
        }
    }
    ctx->pc = 0x108380u;
    // 0x108380: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x108380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x108384: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x108384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x108388: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x108388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10838c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10838Cu;
    {
        const bool branch_taken_0x10838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10838Cu;
        // 0x108390: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10838c) {
            ctx->pc = 0x1083B8u;
            return;
        }
    }
    ctx->pc = 0x108394u;
    // 0x108394: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x108394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x108398: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x108398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10839c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10839Cu;
    {
        const bool branch_taken_0x10839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10839Cu;
        // 0x1083a0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10839c) {
            ctx->pc = 0x1083B8u;
            return;
        }
    }
    ctx->pc = 0x1083A4u;
}
