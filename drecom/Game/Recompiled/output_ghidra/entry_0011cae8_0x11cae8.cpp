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

// Function: entry_0011cae8
// Address: 0x11cae8 - 0x11cb0c
void entry_0011cae8_0x11cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cae8_0x11cae8");
#endif

    ctx->pc = 0x11cae8u;

label_11cae8:
    // 0x11cae8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x11cae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11caec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11caf0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x11caf0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11caf4: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x11caf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11caf8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11caf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11cafc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CAFCu;
    {
        const bool branch_taken_0x11cafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cafc) {
            ctx->pc = 0x11CAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cae8;
        }
    }
    ctx->pc = 0x11CB04u;
    // 0x11cb04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11CB04u;
    {
        const bool branch_taken_0x11cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB04u;
        // 0x11cb08: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb04) {
            ctx->pc = 0x11CB28u;
            return;
        }
    }
    ctx->pc = 0x11CB0Cu;
}
