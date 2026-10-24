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

// Function: entry_00138910
// Address: 0x138910 - 0x138948
void entry_00138910_0x138910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138910_0x138910");
#endif

    ctx->pc = 0x138910u;

    // 0x138910: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x138910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138914: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138918: 0x24634eb8  addiu       $v1, $v1, 0x4EB8
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20152));
    // 0x13891c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138920: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138924: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x138924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138928: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13892c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x138930: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138934: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138938: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13893c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13893cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138940: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x138940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138944: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x138944u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x138948u;
}
