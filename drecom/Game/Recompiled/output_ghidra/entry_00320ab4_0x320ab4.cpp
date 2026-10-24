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

// Function: entry_00320ab4
// Address: 0x320ab4 - 0x320b00
void entry_00320ab4_0x320ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320ab4_0x320ab4");
#endif

    ctx->pc = 0x320ab4u;

    // 0x320ab4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ab8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x320ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320abc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x320abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x320ac0: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x320ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320ac4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ac8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x320ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320acc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320ad0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x320ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x320ad4: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x320ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x320ad8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x320ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320adc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x320adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ae0: 0xa0c5034b  sb          $a1, 0x34B($a2)
    ctx->pc = 0x320ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 843), (uint8_t)GPR_U32(ctx, 5));
    // 0x320ae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320ae8: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x320ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x320aec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320af0: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x320af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x320af4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320af4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320af8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320AF8u;
    {
        const bool branch_taken_0x320af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320af8) {
            ctx->pc = 0x320B28u;
            return;
        }
    }
    ctx->pc = 0x320B00u;
}
