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

// Function: entry_00111800
// Address: 0x111800 - 0x111804
void entry_00111800_0x111800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111800_0x111800");
#endif

    ctx->pc = 0x111800u;

    // 0x111800: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x111804u;
}
