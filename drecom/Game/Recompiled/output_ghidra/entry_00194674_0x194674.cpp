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

// Function: entry_00194674
// Address: 0x194674 - 0x1946ec
void entry_00194674_0x194674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194674_0x194674");
#endif

    ctx->pc = 0x194674u;

    // 0x194674: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x194678: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x194678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19467c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194680: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x194680u;
    {
        const bool branch_taken_0x194680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194680) {
            ctx->pc = 0x1946ECu;
            return;
        }
    }
    ctx->pc = 0x194688u;
    // 0x194688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19468c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x19468cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x194690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194698: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19469c: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1946a0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1946a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1946a4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1946a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1946a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1946ac: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1946acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1946b0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1946b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1946b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1946b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1946b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1946b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1946bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1946bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1946c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1946c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1946c4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1946c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1946c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1946c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1946cc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1946ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1946d0: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1946d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1946d4: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x1946d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1946d8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1946d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1946dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1946dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1946e0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1946e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1946e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1946E4u;
    {
        const bool branch_taken_0x1946e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1946e4) {
            ctx->pc = 0x194728u;
            return;
        }
    }
    ctx->pc = 0x1946ECu;
}
