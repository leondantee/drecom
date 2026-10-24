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

// Function: entry_00191c14
// Address: 0x191c14 - 0x191c8c
void entry_00191c14_0x191c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c14_0x191c14");
#endif

    ctx->pc = 0x191c14u;

    // 0x191c14: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x191c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x191c18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191c1c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x191c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x191c20: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x191C20u;
    {
        const bool branch_taken_0x191c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c20) {
            ctx->pc = 0x191C8Cu;
            return;
        }
    }
    ctx->pc = 0x191C28u;
    // 0x191c28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191c2c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x191c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x191c30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191c34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191c38: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x191c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191c3c: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x191c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x191c40: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x191c40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x191c44: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x191c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x191c48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x191c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x191c4c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x191c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x191c50: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x191c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x191c54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x191c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x191c58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x191c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191c64: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x191c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x191c68: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x191c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191c6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x191c6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x191c70: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x191c70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191c74: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x191c78: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x191c78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191c7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x191c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x191c80: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x191c80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x191c84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x191C84u;
    {
        const bool branch_taken_0x191c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191c84) {
            ctx->pc = 0x191CC8u;
            return;
        }
    }
    ctx->pc = 0x191C8Cu;
}
