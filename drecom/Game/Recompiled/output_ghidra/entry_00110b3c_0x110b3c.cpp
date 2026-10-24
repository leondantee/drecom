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

// Function: entry_00110b3c
// Address: 0x110b3c - 0x110b48
void entry_00110b3c_0x110b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110b3c_0x110b3c");
#endif

    ctx->pc = 0x110b3cu;

    // 0x110b3c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x110b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x110b40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x110b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x110b44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x110b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110b48u;
}
