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

// Function: caseD_f
// Address: 0x15b0e0 - 0x15b108
void caseD_f_0x15b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x15b0e0");
#endif

    ctx->pc = 0x15b0e0u;

    // 0x15b0e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b0e4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b0e8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x15b0ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B0ECu;
    {
        const bool branch_taken_0x15b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b0ec) {
            ctx->pc = 0x15B108u;
            return;
        }
    }
    ctx->pc = 0x15B0F4u;
    // 0x15b0f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b0f8: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x15b0fc: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x15b100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b104: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15b104u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x15b108u;
}
