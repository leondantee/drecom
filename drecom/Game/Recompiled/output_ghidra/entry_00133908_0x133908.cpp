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

// Function: entry_00133908
// Address: 0x133908 - 0x133938
void entry_00133908_0x133908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133908_0x133908");
#endif

    ctx->pc = 0x133908u;

    // 0x133908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13390c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133910: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x133910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x133914: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133918: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13391c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133920: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x133920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x133924: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13392c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13392cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133930: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133934: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x133938u;
}
