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

// Function: entry_00192aa4
// Address: 0x192aa4 - 0x192b38
void entry_00192aa4_0x192aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192aa4_0x192aa4");
#endif

    ctx->pc = 0x192aa4u;

    // 0x192aa4: 0x8ec20ac0  lw          $v0, 0xAC0($s6)
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2752)));
    // 0x192aa8: 0x8ec20ac4  lw          $v0, 0xAC4($s6)
    ctx->pc = 0x192aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2756)));
    // 0x192aac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x192aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x192ab0: 0x92c20b1c  lbu         $v0, 0xB1C($s6)
    ctx->pc = 0x192ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2844)));
    // 0x192ab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x192ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192ab8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x192ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x192abc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192ac0: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x192ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x192ac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x192ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x192ac8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x192ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x192acc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x192ACCu;
    {
        const bool branch_taken_0x192acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192acc) {
            ctx->pc = 0x192B38u;
            return;
        }
    }
    ctx->pc = 0x192AD4u;
    // 0x192ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192ad8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x192ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x192adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192ae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192ae4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x192ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x192ae8: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x192ae8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x192aec: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x192aecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192af0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x192af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x192af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x192af8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x192af8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x192afc: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x192afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x192b00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x192b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x192b04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192b0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192b10: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x192b14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x192b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x192b18: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x192b18u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x192b1c: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x192b1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x192b20: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x192b20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x192b24: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x192b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192b28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x192b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x192b2c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x192b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x192b30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x192B30u;
    {
        const bool branch_taken_0x192b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b30) {
            ctx->pc = 0x192B74u;
            return;
        }
    }
    ctx->pc = 0x192B38u;
}
