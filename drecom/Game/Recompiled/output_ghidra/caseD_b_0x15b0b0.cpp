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

// Function: caseD_b
// Address: 0x15b0b0 - 0x15b0e0
void caseD_b_0x15b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x15b0b0");
#endif

    ctx->pc = 0x15b0b0u;

    // 0x15b0b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b0b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b0b8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x15b0bc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15B0BCu;
    {
        const bool branch_taken_0x15b0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b0bc) {
            ctx->pc = 0x15B108u;
            return;
        }
    }
    ctx->pc = 0x15B0C4u;
    // 0x15b0c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b0c8: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15b0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x15b0cc: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x15b0d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b0d4: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15b0d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    // 0x15b0d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15B0D8u;
    {
        const bool branch_taken_0x15b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0d8) {
            ctx->pc = 0x15B108u;
            return;
        }
    }
    ctx->pc = 0x15B0E0u;
}
