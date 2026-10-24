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

// Function: entry_003209bc
// Address: 0x3209bc - 0x320a3c
void entry_003209bc_0x3209bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003209bc_0x3209bc");
#endif

    ctx->pc = 0x3209bcu;

    // 0x3209bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3209bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209c0: 0x9063034f  lbu         $v1, 0x34F($v1)
    ctx->pc = 0x3209c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x3209c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3209c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3209c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3209c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209cc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3209ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3209d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3209d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3209d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3209d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3209d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3209d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209dc: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x3209dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x3209e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3209e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3209e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3209e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3209e8: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3209E8u;
    {
        const bool branch_taken_0x3209e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3209e8) {
            ctx->pc = 0x320A9Cu;
            return;
        }
    }
    ctx->pc = 0x3209F0u;
    // 0x3209f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3209f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3209f4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x3209f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x3209f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3209f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3209fc: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x3209fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a04: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320a08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x320a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x320a10: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x320a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x320a14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320a18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a1c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320a20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320a24: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x320a28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320a2c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x320a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x320a30: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320a30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320a34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x320A34u;
    {
        const bool branch_taken_0x320a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320a34) {
            ctx->pc = 0x320A78u;
            return;
        }
    }
    ctx->pc = 0x320A3Cu;
}
