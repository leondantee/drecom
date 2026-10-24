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

// Function: entry_0016eedc
// Address: 0x16eedc - 0x16eee8
void entry_0016eedc_0x16eedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eedc_0x16eedc");
#endif

    ctx->pc = 0x16eedcu;

    // 0x16eedc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x16eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x16eee0: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x16eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x16eee4: 0x0  nop
    ctx->pc = 0x16eee4u;
    // NOP
    ctx->pc = 0x16eee8u;
}
