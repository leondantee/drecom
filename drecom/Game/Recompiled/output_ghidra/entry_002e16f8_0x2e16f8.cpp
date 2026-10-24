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

// Function: entry_002e16f8
// Address: 0x2e16f8 - 0x2e1730
void entry_002e16f8_0x2e16f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e16f8_0x2e16f8");
#endif

    ctx->pc = 0x2e16f8u;

    // 0x2e16f8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e16fc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e16fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e1700: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e1700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e1704: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e1704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e1708: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e1708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e170c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E170Cu;
    {
        const bool branch_taken_0x2e170c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e170c) {
            ctx->pc = 0x2E1730u;
            return;
        }
    }
    ctx->pc = 0x2E1714u;
    // 0x2e1714: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x2e1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x2e1718: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e1718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e171c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e171cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1720: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1724: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2e1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2e1728: 0xc0c9144  jal         func_324510
    ctx->pc = 0x2E1728u;
    SET_GPR_U32(ctx, 31, 0x2E1730u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E1728u, 0x2E1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1730u;
}
