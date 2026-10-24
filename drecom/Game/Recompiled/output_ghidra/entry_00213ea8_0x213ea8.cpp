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

// Function: entry_00213ea8
// Address: 0x213ea8 - 0x213eb0
void entry_00213ea8_0x213ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213ea8_0x213ea8");
#endif

    ctx->pc = 0x213ea8u;

    // 0x213ea8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x213ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x213eac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x213eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x213eb0u;
}
