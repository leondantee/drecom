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

// Function: caseD_1
// Address: 0x1bbda4 - 0x1bbdd0
void caseD_1_0x1bbda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1bbda4");
#endif

    ctx->pc = 0x1bbda4u;

    // 0x1bbda4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbda8: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1bbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1bbdac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBDACu;
    {
        const bool branch_taken_0x1bbdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdac) {
            ctx->pc = 0x1BBDD0u;
            return;
        }
    }
    ctx->pc = 0x1BBDB4u;
    // 0x1bbdb4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbdb8: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bbdbc: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1bbdc0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bbdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bbdc4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bbdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1bbdc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbdcc: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bbdccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bbdd0u;
}
