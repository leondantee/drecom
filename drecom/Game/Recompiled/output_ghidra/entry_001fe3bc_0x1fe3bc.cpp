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

// Function: entry_001fe3bc
// Address: 0x1fe3bc - 0x1fe43c
void entry_001fe3bc_0x1fe3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe3bc_0x1fe3bc");
#endif

    ctx->pc = 0x1fe3bcu;

    // 0x1fe3bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3c0: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x1fe3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1fe3c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe3c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3cc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fe3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe3d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe3d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe3d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3dc: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x1fe3dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fe3e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe3e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1fe3e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe3e8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FE3E8u;
    {
        const bool branch_taken_0x1fe3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3e8) {
            ctx->pc = 0x1FE4A0u;
            return;
        }
    }
    ctx->pc = 0x1FE3F0u;
    // 0x1fe3f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe3f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe3f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe3fc: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe404: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fe404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe40c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe410: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe414: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe418: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe41c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe420: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe424: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fe424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fe428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe42c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1fe42cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe430: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe430u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe434: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE434u;
    {
        const bool branch_taken_0x1fe434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe434) {
            ctx->pc = 0x1FE478u;
            return;
        }
    }
    ctx->pc = 0x1FE43Cu;
}
