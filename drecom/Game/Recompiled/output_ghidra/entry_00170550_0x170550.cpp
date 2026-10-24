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

// Function: entry_00170550
// Address: 0x170550 - 0x170554
void entry_00170550_0x170550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170550_0x170550");
#endif

    ctx->pc = 0x170550u;

    // 0x170550: 0xafb20164  sw          $s2, 0x164($sp)
    ctx->pc = 0x170550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 18));
    ctx->pc = 0x170554u;
}
