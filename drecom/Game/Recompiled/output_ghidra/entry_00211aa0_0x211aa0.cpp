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

// Function: entry_00211aa0
// Address: 0x211aa0 - 0x211b48
void entry_00211aa0_0x211aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211aa0_0x211aa0");
#endif

    ctx->pc = 0x211aa0u;

    // 0x211aa0: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x211aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x211aa4: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x211aa4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x211aa8: 0x8ea70034  lw          $a3, 0x34($s5)
    ctx->pc = 0x211aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x211aac: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x211aacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x211ab0: 0x960810a4  lhu         $t0, 0x10A4($s0)
    ctx->pc = 0x211ab0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x211ab4: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x211ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x211ab8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211abc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x211abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x211ac0: 0x24669500  addiu       $a2, $v1, -0x6B00
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
    // 0x211ac4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x211ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x211ac8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x211ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211acc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211ad0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x211ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x211ad4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x211ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x211ad8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x211ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x211adc: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x211ae0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x211ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x211ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211ae8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x211ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x211aec: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x211aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x211af0: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x211af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x211af4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x211af8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211afc: 0x30a31fff  andi        $v1, $a1, 0x1FFF
    ctx->pc = 0x211afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
    // 0x211b00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x211b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x211b04: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x211b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x211b08: 0x8c24a2f0  lw          $a0, -0x5D10($at)
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38A2F0u));
    // 0x211b0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211b10: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x211b14: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x211b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x211b18: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x211b1c: 0x8c660058  lw          $a2, 0x58($v1)
    ctx->pc = 0x211b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x211b20: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x211b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x211b24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x211b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x211b28: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x211b28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x211b2c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x211b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x211b30: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x211b34: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x211b38: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x211b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x211b3c: 0x30c31fff  andi        $v1, $a2, 0x1FFF
    ctx->pc = 0x211b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8191);
    // 0x211b40: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x211b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x211b44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x211b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x211b48u;
}
