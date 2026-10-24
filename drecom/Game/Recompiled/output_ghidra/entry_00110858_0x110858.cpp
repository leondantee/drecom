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

// Function: entry_00110858
// Address: 0x110858 - 0x110868
void entry_00110858_0x110858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110858_0x110858");
#endif

    ctx->pc = 0x110858u;

    // 0x110858: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x110858u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x11085c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x110860: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110864: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x110864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110868u;
}
