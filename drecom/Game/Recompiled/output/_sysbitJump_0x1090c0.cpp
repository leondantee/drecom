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

// Function: _sysbitJump
// Address: 0x1090c0 - 0x109114
void _sysbitJump_0x1090c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitJump_0x1090c0");
#endif

    ctx->pc = 0x1090c0u;

    // 0x1090c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1090c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090c4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1090c8: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1090c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1090cc: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1090ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1090d0: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x1090d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1090d4: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1090d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1090d8: 0x22778  dsll        $a0, $v0, 29
    ctx->pc = 0x1090d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x1090dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1090dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1090e0: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x1090e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x1090e4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1090e8: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1090e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1090ec: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x1090ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1090f0: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x1090f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x1090f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1090F4u;
    {
        const bool branch_taken_0x1090f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1090F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090F4u;
        // 0x1090f8: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090f4) {
            ctx->pc = 0x109108u;
            goto label_109108;
        }
    }
    ctx->pc = 0x1090FCu;
    // 0x1090fc: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x1090fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x109100: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x109100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x109104: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x109104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_109108:
    // 0x109108: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10910c: 0x80423e4  j           func_108F90
    ctx->pc = 0x10910Cu;
    ctx->pc = 0x109110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10910Cu;
    // 0x109110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F90u;
    _sysbitFlush_0x108f90(rdram, ctx, runtime); return;
    ctx->pc = 0x109114u;
}
