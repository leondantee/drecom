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

// Function: entry_002fece8
// Address: 0x2fece8 - 0x2fed10
void entry_002fece8_0x2fece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fece8_0x2fece8");
#endif

    ctx->pc = 0x2fece8u;

    // 0x2fece8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecec: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecf0: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2fecf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2fecf4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FECF4u;
    {
        const bool branch_taken_0x2fecf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fecf4) {
            ctx->pc = 0x2FED10u;
            return;
        }
    }
    ctx->pc = 0x2FECFCu;
    // 0x2fecfc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fed00: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fed04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fed08: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2FED08u;
    {
        const bool branch_taken_0x2fed08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed08) {
            ctx->pc = 0x2FEEB8u;
            return;
        }
    }
    ctx->pc = 0x2FED10u;
}
