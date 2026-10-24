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

// Function: entry_00118794
// Address: 0x118794 - 0x1187c0
void entry_00118794_0x118794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118794_0x118794");
#endif

    ctx->pc = 0x118794u;

    // 0x118794: 0x26824928  addiu       $v0, $s4, 0x4928
    ctx->pc = 0x118794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    // 0x118798: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x118798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11879c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x11879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1187a0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1187a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1187a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1187a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1187a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1187a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1187ac: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1187acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1187b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1187B0u;
    {
        const bool branch_taken_0x1187b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1187B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187B0u;
        // 0x1187b4: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b0) {
            ctx->pc = 0x1187C0u;
            return;
        }
    }
    ctx->pc = 0x1187B8u;
    // 0x1187b8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1187B8u;
    {
        const bool branch_taken_0x1187b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187B8u;
        // 0x1187bc: 0x26864928  addiu       $a2, $s4, 0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187b8) {
            ctx->pc = 0x118888u;
            return;
        }
    }
    ctx->pc = 0x1187C0u;
}
