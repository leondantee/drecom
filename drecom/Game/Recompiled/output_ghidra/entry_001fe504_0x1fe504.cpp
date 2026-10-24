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

// Function: entry_001fe504
// Address: 0x1fe504 - 0x1fe540
void entry_001fe504_0x1fe504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe504_0x1fe504");
#endif

    ctx->pc = 0x1fe504u;

    // 0x1fe504: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe508: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe50c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe510: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1fe510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe514: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1fe514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fe518: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe51c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1fe51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fe520: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x1fe520u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe524: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fe524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe528: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fe528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe52c: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1fe52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fe530: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fe534: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1fe534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1fe538: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe53c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fe53cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1fe540u;
}
