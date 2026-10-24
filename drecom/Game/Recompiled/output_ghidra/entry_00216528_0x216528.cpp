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

// Function: entry_00216528
// Address: 0x216528 - 0x216538
void entry_00216528_0x216528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216528_0x216528");
#endif

    ctx->pc = 0x216528u;

    // 0x216528: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x216528u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x21652c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x216530: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x216530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216534: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x216538u;
}
