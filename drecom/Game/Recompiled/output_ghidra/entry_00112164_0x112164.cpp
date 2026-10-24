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

// Function: entry_00112164
// Address: 0x112164 - 0x112178
void entry_00112164_0x112164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112164_0x112164");
#endif

    ctx->pc = 0x112164u;

    // 0x112164: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x112164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x112168: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x112168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11216c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11216cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112170: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x112170u;
    {
        const bool branch_taken_0x112170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112170u;
        // 0x112174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112170) {
            ctx->pc = 0x11230Cu;
            return;
        }
    }
    ctx->pc = 0x112178u;
}
