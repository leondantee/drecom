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

// Function: entry_002d8394
// Address: 0x2d8394 - 0x2d8410
void entry_002d8394_0x2d8394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8394_0x2d8394");
#endif

    ctx->pc = 0x2d8394u;

    // 0x2d8394: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8398: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x2d8398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x2d839c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83a0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2d83a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d83a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d83ac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2d83acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2d83b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d83b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d83b4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D83B4u;
    {
        const bool branch_taken_0x2d83b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83b4) {
            ctx->pc = 0x2D8448u;
            return;
        }
    }
    ctx->pc = 0x2D83BCu;
    // 0x2d83bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83c0: 0x948311f6  lhu         $v1, 0x11F6($a0)
    ctx->pc = 0x2d83c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x2d83c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d83c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d83c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d83cc: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D83CCu;
    {
        const bool branch_taken_0x2d83cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d83cc) {
            ctx->pc = 0x2D8410u;
            return;
        }
    }
    ctx->pc = 0x2D83D4u;
    // 0x2d83d4: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d83d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d83d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d83d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d83dc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2d83dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d83e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D83E0u;
    {
        const bool branch_taken_0x2d83e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d83e0) {
            ctx->pc = 0x2D8410u;
            return;
        }
    }
    ctx->pc = 0x2D83E8u;
    // 0x2d83e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d83e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d83ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d83f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d83f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2d83f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d83f8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d83fc: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d83fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d8400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8404: 0xa20300d5  sb          $v1, 0xD5($s0)
    ctx->pc = 0x2d8404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8408: 0x100002dd  b           . + 4 + (0x2DD << 2)
    ctx->pc = 0x2D8408u;
    {
        const bool branch_taken_0x2d8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8408) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D8410u;
}
