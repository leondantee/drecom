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

// Function: entry_001028b4
// Address: 0x1028b4 - 0x1028bc
void entry_001028b4_0x1028b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001028b4_0x1028b4");
#endif

    ctx->pc = 0x1028b4u;

    // 0x1028b4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1028b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1028b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1028b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x1028bcu;
}
