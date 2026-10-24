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

// Function: entry_0018cacc
// Address: 0x18cacc - 0x18cae4
void entry_0018cacc_0x18cacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cacc_0x18cacc");
#endif

    ctx->pc = 0x18caccu;

    // 0x18cacc: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CACCu;
    {
        const bool branch_taken_0x18cacc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cacc) {
            ctx->pc = 0x18CAE4u;
            return;
        }
    }
    ctx->pc = 0x18CAD4u;
    // 0x18cad4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cad8: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18cad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
    // 0x18cadc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18cae0: 0xa2020343  sb          $v0, 0x343($s0)
    ctx->pc = 0x18cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 835), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cae4u;
}
