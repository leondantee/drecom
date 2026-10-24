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

// Function: entry_00139178
// Address: 0x139178 - 0x1391b0
void entry_00139178_0x139178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139178_0x139178");
#endif

    ctx->pc = 0x139178u;

    // 0x139178: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x139178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13917c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x13917cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x139180: 0x24834eb8  addiu       $v1, $a0, 0x4EB8
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20152));
    // 0x139184: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x139188: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x139188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13918c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x13918cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139190: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x139194: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x139194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x139198: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13919c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1391a0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1391a4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1391a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1391a8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1391ac: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1391acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1391b0u;
}
