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

// Function: entry_00378284
// Address: 0x378284 - 0x3782b0
void entry_00378284_0x378284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378284_0x378284");
#endif

    ctx->pc = 0x378284u;

    // 0x378284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378288: 0x16230009  bne         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x378288u;
    {
        const bool branch_taken_0x378288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x378288) {
            ctx->pc = 0x3782B0u;
            return;
        }
    }
    ctx->pc = 0x378290u;
    // 0x378290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x378290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x378294: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x378294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x378298: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x378298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x37829c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x37829cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3782a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3782a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3782a4: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x3782a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x3782a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3782A8u;
    {
        const bool branch_taken_0x3782a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3782a8) {
            ctx->pc = 0x3782D0u;
            return;
        }
    }
    ctx->pc = 0x3782B0u;
}
