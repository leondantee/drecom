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

// Function: caseD_3
// Address: 0x2099a8 - 0x2099d8
void caseD_3_0x2099a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2099a8");
#endif

    ctx->pc = 0x2099a8u;

    // 0x2099a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2099a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2099ac: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2099acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2099b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2099b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2099b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2099b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2099b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2099b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2099bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2099bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2099c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2099c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2099c4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2099c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2099c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2099c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2099cc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2099ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2099d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2099d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2099d4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2099d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2099d8u;
}
