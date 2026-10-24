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

// Function: entry_0021bf18
// Address: 0x21bf18 - 0x21bf28
void entry_0021bf18_0x21bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bf18_0x21bf18");
#endif

    ctx->pc = 0x21bf18u;

    // 0x21bf18: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x21bf18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21bf1c: 0x1460ff3f  bnez        $v1, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x21BF1Cu;
    {
        const bool branch_taken_0x21bf1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf1c) {
            ctx->pc = 0x21BC1Cu;
            return;
        }
    }
    ctx->pc = 0x21BF24u;
    // 0x21bf24: 0x0  nop
    ctx->pc = 0x21bf24u;
    // NOP
    ctx->pc = 0x21bf28u;
}
