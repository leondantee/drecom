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

// Function: entry_001fb7a0
// Address: 0x1fb7a0 - 0x1fb7ec
void entry_001fb7a0_0x1fb7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb7a0_0x1fb7a0");
#endif

    ctx->pc = 0x1fb7a0u;

    // 0x1fb7a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7a4: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fb7a8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1fb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb7ac: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1fb7acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb7b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7b4: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1fb7b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fb7b8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1fb7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb7bc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fb7c0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fb7c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb7c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7cc: 0xa083034b  sb          $v1, 0x34B($a0)
    ctx->pc = 0x1fb7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb7d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb7d4: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1fb7d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb7d8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1fb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb7dc: 0xa0650345  sb          $a1, 0x345($v1)
    ctx->pc = 0x1fb7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb7e0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb7e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb7e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB7E4u;
    {
        const bool branch_taken_0x1fb7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb7e4) {
            ctx->pc = 0x1FB828u;
            return;
        }
    }
    ctx->pc = 0x1FB7ECu;
}
