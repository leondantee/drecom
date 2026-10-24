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

// Function: entry_00336f70
// Address: 0x336f70 - 0x336f8c
void entry_00336f70_0x336f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336f70_0x336f70");
#endif

    ctx->pc = 0x336f70u;

    // 0x336f70: 0x8e245dd4  lw          $a0, 0x5DD4($s1)
    ctx->pc = 0x336f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24020)));
    // 0x336f74: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x336f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x336f78: 0xae225dd4  sw          $v0, 0x5DD4($s1)
    ctx->pc = 0x336f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 2));
    // 0x336f7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f80: 0xac204e20  sw          $zero, 0x4E20($at)
    ctx->pc = 0x336f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E20u, _value); } while (0);
    // 0x336f84: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x336F84u;
    {
        const bool branch_taken_0x336f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336f84) {
            ctx->pc = 0x3375ECu;
            return;
        }
    }
    ctx->pc = 0x336F8Cu;
}
