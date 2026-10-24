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

// Function: entry_002010a4
// Address: 0x2010a4 - 0x201100
void entry_002010a4_0x2010a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002010a4_0x2010a4");
#endif

    ctx->pc = 0x2010a4u;

    // 0x2010a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010a8: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2010a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2010ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010b0: 0x904200d1  lbu         $v0, 0xD1($v0)
    ctx->pc = 0x2010b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 209)));
    // 0x2010b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2010b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2010b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2010b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2010bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2010BCu;
    {
        const bool branch_taken_0x2010bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2010bc) {
            ctx->pc = 0x201100u;
            return;
        }
    }
    ctx->pc = 0x2010C4u;
    // 0x2010c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010c8: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x2010c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2010cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2010ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2010d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010d4: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x2010d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x2010d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2010d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010dc: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x2010dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x2010e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2010e4: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x2010e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x2010e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010ec: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x2010ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2010f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010f4: 0xa04000d0  sb          $zero, 0xD0($v0)
    ctx->pc = 0x2010f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2010f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2010fc: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x2010fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    ctx->pc = 0x201100u;
}
