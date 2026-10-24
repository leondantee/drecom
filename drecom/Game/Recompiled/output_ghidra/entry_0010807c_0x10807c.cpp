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

// Function: entry_0010807c
// Address: 0x10807c - 0x108080
void entry_0010807c_0x10807c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010807c_0x10807c");
#endif

    ctx->pc = 0x10807cu;

    // 0x10807c: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x10807cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    ctx->pc = 0x108080u;
}
