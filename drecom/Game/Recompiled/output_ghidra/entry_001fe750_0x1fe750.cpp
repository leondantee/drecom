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

// Function: entry_001fe750
// Address: 0x1fe750 - 0x1fe79c
void entry_001fe750_0x1fe750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe750_0x1fe750");
#endif

    ctx->pc = 0x1fe750u;

    // 0x1fe750: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe754: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe758: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fe75c: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe75cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe760: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe764: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe768: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe76c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe770: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fe770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fe774: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe778: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe77c: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fe77cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe780: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe784: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1fe784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1fe788: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe78c: 0xa0850345  sb          $a1, 0x345($a0)
    ctx->pc = 0x1fe78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe790: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe790u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe794: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE794u;
    {
        const bool branch_taken_0x1fe794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe794) {
            ctx->pc = 0x1FE7D8u;
            return;
        }
    }
    ctx->pc = 0x1FE79Cu;
}
