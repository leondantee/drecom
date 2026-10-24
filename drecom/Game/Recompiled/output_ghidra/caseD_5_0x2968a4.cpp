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

// Function: caseD_5
// Address: 0x2968a4 - 0x2968ec
void caseD_5_0x2968a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2968a4");
#endif

    ctx->pc = 0x2968a4u;

    // 0x2968a4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x2968a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2968a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2968a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2968ac: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2968acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x2968b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2968b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2968b4: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2968b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x2968b8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2968b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2968bc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2968bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2968c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2968c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2968c4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2968c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x2968c8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2968c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2968cc: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2968ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x2968d0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2968d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2968d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2968d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2968d8: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x2968d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x2968dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2968dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2968e0: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x2968e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x2968e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2968E4u;
    {
        const bool branch_taken_0x2968e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2968e4) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x2968ECu;
}
