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

// Function: entry_002581dc
// Address: 0x2581dc - 0x2581fc
void entry_002581dc_0x2581dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002581dc_0x2581dc");
#endif

    ctx->pc = 0x2581dcu;

    // 0x2581dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2581dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2581e0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2581e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2581e4: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x2581e8: 0x34630700  ori         $v1, $v1, 0x700
    ctx->pc = 0x2581e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x2581ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2581ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2581f0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x2581f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x2581f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2581F4u;
    {
        const bool branch_taken_0x2581f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581f4) {
            ctx->pc = 0x2582A0u;
            return;
        }
    }
    ctx->pc = 0x2581FCu;
}
