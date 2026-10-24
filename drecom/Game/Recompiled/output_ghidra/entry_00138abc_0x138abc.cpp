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

// Function: entry_00138abc
// Address: 0x138abc - 0x138b08
void entry_00138abc_0x138abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138abc_0x138abc");
#endif

    ctx->pc = 0x138abcu;

    // 0x138abc: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138ac0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138ac4: 0x24634ec8  addiu       $v1, $v1, 0x4EC8
    ctx->pc = 0x138ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20168));
    // 0x138ac8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x138ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138acc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x138accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138ad0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x138ad0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138ad4: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x138ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x138ad8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x138ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x138adc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x138adcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138ae0: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x138ae4: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x138ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x138ae8: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x138ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138aec: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138af0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138af4: 0xae840024  sw          $a0, 0x24($s4)
    ctx->pc = 0x138af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
    // 0x138af8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x138af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138afc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x138afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138b00: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x138b00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x138b04: 0x0  nop
    ctx->pc = 0x138b04u;
    // NOP
    ctx->pc = 0x138b08u;
}
