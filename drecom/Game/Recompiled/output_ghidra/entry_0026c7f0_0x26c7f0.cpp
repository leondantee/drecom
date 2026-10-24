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

// Function: entry_0026c7f0
// Address: 0x26c7f0 - 0x26c82c
void entry_0026c7f0_0x26c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c7f0_0x26c7f0");
#endif

    ctx->pc = 0x26c7f0u;

    // 0x26c7f0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c7f4: 0x910209e7  lbu         $v0, 0x9E7($t0)
    ctx->pc = 0x26c7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x26c7f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C7F8u;
    {
        const bool branch_taken_0x26c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7f8) {
            ctx->pc = 0x26C83Cu;
            return;
        }
    }
    ctx->pc = 0x26C800u;
    // 0x26c800: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c804: 0x8c821b68  lw          $v0, 0x1B68($a0)
    ctx->pc = 0x26c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7016)));
    // 0x26c808: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C808u;
    {
        const bool branch_taken_0x26c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c808) {
            ctx->pc = 0x26C82Cu;
            return;
        }
    }
    ctx->pc = 0x26C810u;
    // 0x26c810: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c814: 0xaca01b68  sw          $zero, 0x1B68($a1)
    ctx->pc = 0x26c814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7016), GPR_U32(ctx, 0));
    // 0x26c818: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x26c818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26c81c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c81cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c820: 0xace61b60  sw          $a2, 0x1B60($a3)
    ctx->pc = 0x26c820u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 6));
    // 0x26c824: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C824u;
    {
        const bool branch_taken_0x26c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c824) {
            ctx->pc = 0x26C83Cu;
            return;
        }
    }
    ctx->pc = 0x26C82Cu;
}
