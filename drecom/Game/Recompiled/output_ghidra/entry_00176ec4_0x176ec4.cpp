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

// Function: entry_00176ec4
// Address: 0x176ec4 - 0x176ec8
void entry_00176ec4_0x176ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176ec4_0x176ec4");
#endif

    ctx->pc = 0x176ec4u;

    // 0x176ec4: 0x94250b62  lhu         $a1, 0xB62($at)
    ctx->pc = 0x176ec4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 2914)));
    ctx->pc = 0x176ec8u;
}
