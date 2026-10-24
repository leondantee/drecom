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

// Function: entry_0010d1c4
// Address: 0x10d1c4 - 0x10d1cc
void entry_0010d1c4_0x10d1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d1c4_0x10d1c4");
#endif

    ctx->pc = 0x10d1c4u;

    // 0x10d1c4: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10d1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x10d1ccu;
}
