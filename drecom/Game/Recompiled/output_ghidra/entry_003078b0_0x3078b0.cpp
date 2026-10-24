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

// Function: entry_003078b0
// Address: 0x3078b0 - 0x3078dc
void entry_003078b0_0x3078b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003078b0_0x3078b0");
#endif

    ctx->pc = 0x3078b0u;

    // 0x3078b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078b4: 0x8c761210  lw          $s6, 0x1210($v1)
    ctx->pc = 0x3078b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x3078b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3078b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078bc: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3078bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3078c0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3078c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3078c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3078C4u;
    {
        const bool branch_taken_0x3078c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3078c4) {
            ctx->pc = 0x3078DCu;
            return;
        }
    }
    ctx->pc = 0x3078CCu;
    // 0x3078cc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3078ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3078d0: 0x84a311f2  lh          $v1, 0x11F2($a1)
    ctx->pc = 0x3078d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4594)));
    // 0x3078d4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x3078d4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3078d8: 0xa4a411f2  sh          $a0, 0x11F2($a1)
    ctx->pc = 0x3078d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4594), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3078dcu;
}
