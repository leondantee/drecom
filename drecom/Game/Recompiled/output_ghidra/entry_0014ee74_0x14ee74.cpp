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

// Function: entry_0014ee74
// Address: 0x14ee74 - 0x14ee98
void entry_0014ee74_0x14ee74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee74_0x14ee74");
#endif

    ctx->pc = 0x14ee74u;

    // 0x14ee74: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x14ee74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x14ee78: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x14ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x14ee7c: 0x2c6303e7  sltiu       $v1, $v1, 0x3E7
    ctx->pc = 0x14ee7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
    // 0x14ee80: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EE80u;
    {
        const bool branch_taken_0x14ee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ee80) {
            ctx->pc = 0x14EE98u;
            return;
        }
    }
    ctx->pc = 0x14EE88u;
    // 0x14ee88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ee8c: 0x846413aa  lh          $a0, 0x13AA($v1)
    ctx->pc = 0x14ee8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5034)));
    // 0x14ee90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ee94: 0xa46413a8  sh          $a0, 0x13A8($v1)
    ctx->pc = 0x14ee94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5032), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x14ee98u;
}
