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

// Function: entry_0037b350
// Address: 0x37b350 - 0x37b36c
void entry_0037b350_0x37b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b350_0x37b350");
#endif

    ctx->pc = 0x37b350u;

    // 0x37b350: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b354: 0xac200a70  sw          $zero, 0xA70($at)
    ctx->pc = 0x37b354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0A70u, _value); } while (0);
    // 0x37b358: 0x8e235dd0  lw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24016)));
    // 0x37b35c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37b360: 0xae235dd0  sw          $v1, 0x5DD0($s1)
    ctx->pc = 0x37b360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 3));
    // 0x37b364: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x37B364u;
    {
        const bool branch_taken_0x37b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b364) {
            ctx->pc = 0x37B46Cu;
            return;
        }
    }
    ctx->pc = 0x37B36Cu;
}
