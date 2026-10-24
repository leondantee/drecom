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

// Function: entry_0032af38
// Address: 0x32af38 - 0x32af50
void entry_0032af38_0x32af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032af38_0x32af38");
#endif

    ctx->pc = 0x32af38u;

    // 0x32af38: 0x920328b8  lbu         $v1, 0x28B8($s0)
    ctx->pc = 0x32af38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10424)));
    // 0x32af3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32af3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32af40: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x32af40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32af44: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x32AF44u;
    {
        const bool branch_taken_0x32af44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32af44) {
            ctx->pc = 0x32ADB0u;
            return;
        }
    }
    ctx->pc = 0x32AF4Cu;
    // 0x32af4c: 0x0  nop
    ctx->pc = 0x32af4cu;
    // NOP
    ctx->pc = 0x32af50u;
}
