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

// Function: entry_00212394
// Address: 0x212394 - 0x2123ac
void entry_00212394_0x212394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212394_0x212394");
#endif

    ctx->pc = 0x212394u;

    // 0x212394: 0x8fb10020  lw          $s1, 0x20($sp)
    ctx->pc = 0x212394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212398: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21239c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2123a0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2123a4: 0x246396e0  addiu       $v1, $v1, -0x6920
    ctx->pc = 0x2123a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x2123a8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x2123acu;
}
