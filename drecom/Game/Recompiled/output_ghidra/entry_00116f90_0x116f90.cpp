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

// Function: entry_00116f90
// Address: 0x116f90 - 0x116fa8
void entry_00116f90_0x116f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f90_0x116f90");
#endif

    ctx->pc = 0x116f90u;

    // 0x116f90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x116f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116f94: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x116f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116f98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x116f98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116f9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116fa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x116fa8u;
}
