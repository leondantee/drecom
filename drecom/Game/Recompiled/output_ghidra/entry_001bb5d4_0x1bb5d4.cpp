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

// Function: entry_001bb5d4
// Address: 0x1bb5d4 - 0x1bb5fc
void entry_001bb5d4_0x1bb5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb5d4_0x1bb5d4");
#endif

    ctx->pc = 0x1bb5d4u;

    // 0x1bb5d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb5d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bb5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bb5dc: 0x1060014c  beqz        $v1, . + 4 + (0x14C << 2)
    ctx->pc = 0x1BB5DCu;
    {
        const bool branch_taken_0x1bb5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5dc) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB5E4u;
    // 0x1bb5e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb5e8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bb5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bb5ec: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bb5f0: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bb5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bb5f4: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x1BB5F4u;
    {
        const bool branch_taken_0x1bb5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5f4) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB5FCu;
}
