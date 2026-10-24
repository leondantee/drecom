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

// Function: entry_00295364
// Address: 0x295364 - 0x295368
void entry_00295364_0x295364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295364_0x295364");
#endif

    ctx->pc = 0x295364u;

    // 0x295364: 0xfec00008  sd          $zero, 0x8($s6)
    ctx->pc = 0x295364u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 0));
    ctx->pc = 0x295368u;
}
