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

// Function: entry_002e3890
// Address: 0x2e3890 - 0x2e38d0
void entry_002e3890_0x2e3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3890_0x2e3890");
#endif

    ctx->pc = 0x2e3890u;

    // 0x2e3890: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e3890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e3894: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2e3894u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e3898: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e3898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e389c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e38a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2e38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e38a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e38a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e38ac: 0xac600204  sw          $zero, 0x204($v1)
    ctx->pc = 0x2e38acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 0));
    // 0x2e38b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e38b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e38b4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2e38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e38b8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e38bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e38c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2e38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e38c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e38c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e38cc: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2e38ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
    ctx->pc = 0x2e38d0u;
}
