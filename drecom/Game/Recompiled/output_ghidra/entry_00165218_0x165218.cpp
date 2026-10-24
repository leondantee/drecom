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

// Function: entry_00165218
// Address: 0x165218 - 0x165240
void entry_00165218_0x165218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165218_0x165218");
#endif

    ctx->pc = 0x165218u;

    // 0x165218: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16521c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16521Cu;
    {
        const bool branch_taken_0x16521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16521c) {
            ctx->pc = 0x165204u;
            return;
        }
    }
    ctx->pc = 0x165224u;
    // 0x165224: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x165224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x165228: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x165228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16522c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x16522cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x165230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x165234: 0xac230aec  sw          $v1, 0xAEC($at)
    ctx->pc = 0x165234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AECu, _value); } while (0);
    // 0x165238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165238u;
    {
        const bool branch_taken_0x165238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165238) {
            ctx->pc = 0x16524Cu;
            return;
        }
    }
    ctx->pc = 0x165240u;
}
