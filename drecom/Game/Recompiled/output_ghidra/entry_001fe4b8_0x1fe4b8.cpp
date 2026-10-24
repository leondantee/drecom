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

// Function: entry_001fe4b8
// Address: 0x1fe4b8 - 0x1fe504
void entry_001fe4b8_0x1fe4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe4b8_0x1fe4b8");
#endif

    ctx->pc = 0x1fe4b8u;

    // 0x1fe4b8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4bc: 0x90c30348  lbu         $v1, 0x348($a2)
    ctx->pc = 0x1fe4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1fe4c0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe4c4: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x1fe4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe4c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4cc: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe4ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe4d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe4d4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1fe4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe4d8: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x1fe4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fe4dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe4e0: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1fe4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4e4: 0xa203034b  sb          $v1, 0x34B($s0)
    ctx->pc = 0x1fe4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe4e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe4ec: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1fe4ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fe4f0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe4f4: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1fe4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe4f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe4f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe4fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE4FCu;
    {
        const bool branch_taken_0x1fe4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4fc) {
            ctx->pc = 0x1FE540u;
            return;
        }
    }
    ctx->pc = 0x1FE504u;
}
