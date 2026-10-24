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

// Function: entry_0018a198
// Address: 0x18a198 - 0x18a1b4
void entry_0018a198_0x18a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a198_0x18a198");
#endif

    ctx->pc = 0x18a198u;

    // 0x18a198: 0x2e0200a8  sltiu       $v0, $s0, 0xA8
    ctx->pc = 0x18a198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18a19c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18A19Cu;
    {
        const bool branch_taken_0x18a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a19c) {
            ctx->pc = 0x18A16Cu;
            return;
        }
    }
    ctx->pc = 0x18A1A4u;
    // 0x18a1a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a1a8: 0xac20a620  sw          $zero, -0x59E0($at)
    ctx->pc = 0x18a1a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53A620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A620u, _value); } while (0);
    // 0x18a1ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x18A1ACu;
    {
        const bool branch_taken_0x18a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a1ac) {
            ctx->pc = 0x18A298u;
            return;
        }
    }
    ctx->pc = 0x18A1B4u;
}
