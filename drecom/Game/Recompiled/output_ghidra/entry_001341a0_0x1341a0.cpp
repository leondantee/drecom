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

// Function: entry_001341a0
// Address: 0x1341a0 - 0x1341d0
void entry_001341a0_0x1341a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001341a0_0x1341a0");
#endif

    ctx->pc = 0x1341a0u;

    // 0x1341a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1341a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1341a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1341a8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1341a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1341ac: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1341acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1341b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1341b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1341b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1341b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1341b8: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1341b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1341bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1341bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1341c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1341c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1341c4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1341c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1341c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1341c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1341cc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1341ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1341d0u;
}
