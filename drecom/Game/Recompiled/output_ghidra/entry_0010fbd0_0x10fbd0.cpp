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

// Function: entry_0010fbd0
// Address: 0x10fbd0 - 0x10fbdc
void entry_0010fbd0_0x10fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbd0_0x10fbd0");
#endif

    ctx->pc = 0x10fbd0u;

    // 0x10fbd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10fbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10fbd4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10fbd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10fbd8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x10fbd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x10fbdcu;
}
