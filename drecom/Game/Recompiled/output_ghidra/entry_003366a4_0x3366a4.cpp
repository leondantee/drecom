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

// Function: entry_003366a4
// Address: 0x3366a4 - 0x3366d8
void entry_003366a4_0x3366a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003366a4_0x3366a4");
#endif

    ctx->pc = 0x3366a4u;

    // 0x3366a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3366a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3366a8: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x3366a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x3366ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3366acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3366b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3366b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3366b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3366B4u;
    {
        const bool branch_taken_0x3366b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3366b4) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x3366BCu;
    // 0x3366bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3366bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3366c0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3366c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3366c4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3366c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3366c8: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x3366c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x3366cc: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x3366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x3366d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3366d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3366d4: 0xac203430  sw          $zero, 0x3430($at)
    ctx->pc = 0x3366d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893430u, _value); } while (0);
    ctx->pc = 0x3366d8u;
}
