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

// Function: entry_002668bc
// Address: 0x2668bc - 0x2668d0
void entry_002668bc_0x2668bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002668bc_0x2668bc");
#endif

    ctx->pc = 0x2668bcu;

    // 0x2668bc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668c0: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2668c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2668c4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2668c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2668c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2668c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2668cc: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x2668ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    ctx->pc = 0x2668d0u;
}
