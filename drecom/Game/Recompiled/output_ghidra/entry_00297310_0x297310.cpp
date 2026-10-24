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

// Function: entry_00297310
// Address: 0x297310 - 0x297328
void entry_00297310_0x297310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297310_0x297310");
#endif

    ctx->pc = 0x297310u;

    // 0x297310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297314: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x297314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x297318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29731c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x29731cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x297320: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x297320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x297324: 0x0  nop
    ctx->pc = 0x297324u;
    // NOP
    ctx->pc = 0x297328u;
}
