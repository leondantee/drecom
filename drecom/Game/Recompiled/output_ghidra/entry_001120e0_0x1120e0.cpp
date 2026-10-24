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

// Function: entry_001120e0
// Address: 0x1120e0 - 0x112108
void entry_001120e0_0x1120e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001120e0_0x1120e0");
#endif

    ctx->pc = 0x1120e0u;

    // 0x1120e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1120e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1120e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1120e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1120e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1120e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1120ec: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1120ECu;
    {
        const bool branch_taken_0x1120ec = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120ECu;
        // 0x1120f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120ec) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x1120F4u;
    // 0x1120f4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1120f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1120f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1120f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1120fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1120fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112100: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x112100u;
    {
        const bool branch_taken_0x112100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112100u;
        // 0x112104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112100) {
            ctx->pc = 0x112310u;
            return;
        }
    }
    ctx->pc = 0x112108u;
}
