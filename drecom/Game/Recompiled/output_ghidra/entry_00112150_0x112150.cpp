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

// Function: entry_00112150
// Address: 0x112150 - 0x112164
void entry_00112150_0x112150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112150_0x112150");
#endif

    ctx->pc = 0x112150u;

    // 0x112150: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x112150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x112154: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x112154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x112158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11215c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11215Cu;
    {
        const bool branch_taken_0x11215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11215Cu;
        // 0x112160: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11215c) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x112164u;
}
