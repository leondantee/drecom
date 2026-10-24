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

// Function: entry_00318184
// Address: 0x318184 - 0x3181a0
void entry_00318184_0x318184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318184_0x318184");
#endif

    ctx->pc = 0x318184u;

    // 0x318184: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x318184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x318188: 0x9024edae  lbu         $a0, -0x1252($at)
    ctx->pc = 0x318188u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x31818c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31818Cu;
    {
        const bool branch_taken_0x31818c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31818c) {
            ctx->pc = 0x3181A0u;
            return;
        }
    }
    ctx->pc = 0x318194u;
    // 0x318194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318198: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x318198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31819c: 0xace21294  sw          $v0, 0x1294($a3)
    ctx->pc = 0x31819cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4756), GPR_U32(ctx, 2));
    ctx->pc = 0x3181a0u;
}
