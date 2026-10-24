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

// Function: entry_00189348
// Address: 0x189348 - 0x189398
void entry_00189348_0x189348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189348_0x189348");
#endif

    switch (ctx->pc) {
        case 0x189380u: goto label_189380;
        default: break;
    }

    ctx->pc = 0x189348u;

    // 0x189348: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18934c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18934Cu;
    {
        const bool branch_taken_0x18934c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18934c) {
            ctx->pc = 0x189398u;
            return;
        }
    }
    ctx->pc = 0x189354u;
    // 0x189354: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x189354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x189358: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x189358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18935c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189360: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x189360u;
    {
        const bool branch_taken_0x189360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189360) {
            ctx->pc = 0x189398u;
            return;
        }
    }
    ctx->pc = 0x189368u;
    // 0x189368: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x189368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18936c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x18936cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x189370: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x189374: 0x244624f0  addiu       $a2, $v0, 0x24F0
    ctx->pc = 0x189374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
    // 0x189378: 0xc062550  jal         func_189540
    ctx->pc = 0x189378u;
    SET_GPR_U32(ctx, 31, 0x189380u);
    ctx->pc = 0x189540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189540u, 0x189378u, 0x189380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189380u;
label_189380:
    // 0x189380: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x189380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x189384: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x189384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x189388: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x189388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18938c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189390: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x189390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x189394: 0x0  nop
    ctx->pc = 0x189394u;
    // NOP
    ctx->pc = 0x189398u;
}
