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

// Function: entry_001fba54
// Address: 0x1fba54 - 0x1fbaa0
void entry_001fba54_0x1fba54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fba54_0x1fba54");
#endif

    ctx->pc = 0x1fba54u;

    // 0x1fba54: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba58: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1fba58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fba5c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1fba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fba60: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1fba60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fba64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba68: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fba68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fba6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fba70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fba74: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fba78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fba78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fba7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba80: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fba80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fba84: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fba84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba88: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1fba88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fba8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fba90: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1fba90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fba94: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fba94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fba98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FBA98u;
    {
        const bool branch_taken_0x1fba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba98) {
            ctx->pc = 0x1FBAD8u;
            return;
        }
    }
    ctx->pc = 0x1FBAA0u;
}
