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

// Function: entry_00133d50
// Address: 0x133d50 - 0x133d80
void entry_00133d50_0x133d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d50_0x133d50");
#endif

    ctx->pc = 0x133d50u;

    // 0x133d50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133d58: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x133d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x133d5c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133d60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133d68: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x133d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x133d6c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133d70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d74: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133d78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133d7c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x133d80u;
}
