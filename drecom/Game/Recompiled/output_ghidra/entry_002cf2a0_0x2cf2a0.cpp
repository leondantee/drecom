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

// Function: entry_002cf2a0
// Address: 0x2cf2a0 - 0x2cf388
void entry_002cf2a0_0x2cf2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf2a0_0x2cf2a0");
#endif

    ctx->pc = 0x2cf2a0u;

    // 0x2cf2a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cf2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cf2a4: 0x32430003  andi        $v1, $s2, 0x3
    ctx->pc = 0x2cf2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x2cf2a8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2cf2a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2cf2ac: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf2b0: 0x2485134c  addiu       $a1, $a0, 0x134C
    ctx->pc = 0x2cf2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf2b4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf2b8: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x2cf2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cf2bc: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2cf2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2cf2c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf2c4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2cf2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cf2c8: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x2cf2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2cf2cc: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x2cf2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x2cf2d0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2cf2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2cf2d4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf2d8: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf2dc: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2cf2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf2e0: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x2cf2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2cf2e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf2e8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2cf2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf2ec: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x2cf2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2cf2f0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2cf2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2cf2f4: 0x921825  or          $v1, $a0, $s2
    ctx->pc = 0x2cf2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x2cf2f8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2cf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2cf2fc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2cf2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cf300: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2cf300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2cf304: 0x24868550  addiu       $a2, $a0, -0x7AB0
    ctx->pc = 0x2cf304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935888));
    // 0x2cf308: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2cf308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2cf30c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf310: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf314: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf318: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2cf318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2cf31c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf320: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x2cf320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2cf324: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2cf324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cf328: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2cf328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2cf32c: 0x8e330034  lw          $s3, 0x34($s1)
    ctx->pc = 0x2cf32cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2cf330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf334: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2cf334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf33c: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2cf33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2cf340: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x2cf340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2cf344: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cf344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cf348: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2cf348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf34c: 0x24c5134c  addiu       $a1, $a2, 0x134C
    ctx->pc = 0x2cf34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4940));
    // 0x2cf350: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf354: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2cf354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cf358: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cf358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cf35c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cf35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf360: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf364: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cf364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cf368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cf36c: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x2cf36cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2cf370: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cf370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf374: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2cf374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2cf378: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2cf378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2cf37c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2cf37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2cf380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cf384: 0x0  nop
    ctx->pc = 0x2cf384u;
    // NOP
    ctx->pc = 0x2cf388u;
}
