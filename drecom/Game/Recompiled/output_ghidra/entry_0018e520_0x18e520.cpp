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

// Function: entry_0018e520
// Address: 0x18e520 - 0x18e528
void entry_0018e520_0x18e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e520_0x18e520");
#endif

    ctx->pc = 0x18e520u;

    // 0x18e520: 0x8e730b24  lw          $s3, 0xB24($s3)
    ctx->pc = 0x18e520u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2852)));
    // 0x18e524: 0x0  nop
    ctx->pc = 0x18e524u;
    // NOP
    ctx->pc = 0x18e528u;
}
