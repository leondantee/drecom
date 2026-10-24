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

// Function: entry_00133484
// Address: 0x133484 - 0x1334b4
void entry_00133484_0x133484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133484_0x133484");
#endif

    ctx->pc = 0x133484u;

    // 0x133484: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133488: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13348c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x13348cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x133490: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133494: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133498: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13349c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x13349cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1334a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1334a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1334a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1334a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1334a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1334a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1334ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1334acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1334b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1334b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1334b4u;
}
