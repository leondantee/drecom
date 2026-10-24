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

// Function: entry_001fb558
// Address: 0x1fb558 - 0x1fb5b4
void entry_001fb558_0x1fb558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb558_0x1fb558");
#endif

    ctx->pc = 0x1fb558u;

    // 0x1fb558: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb55c: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1fb560: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FB560u;
    {
        const bool branch_taken_0x1fb560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb560) {
            ctx->pc = 0x1FB628u;
            return;
        }
    }
    ctx->pc = 0x1FB568u;
    // 0x1fb568: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb56c: 0x90a30348  lbu         $v1, 0x348($a1)
    ctx->pc = 0x1fb56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1fb570: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb574: 0xa0a40348  sb          $a0, 0x348($a1)
    ctx->pc = 0x1fb574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb578: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb57c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fb57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb580: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb584: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1fb584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fb588: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1fb58c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb590: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb594: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fb594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fb598: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1fb598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb59c: 0x92030345  lbu         $v1, 0x345($s0)
    ctx->pc = 0x1fb59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 837)));
    // 0x1fb5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb5a4: 0xa2030345  sb          $v1, 0x345($s0)
    ctx->pc = 0x1fb5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb5a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb5a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb5ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB5ACu;
    {
        const bool branch_taken_0x1fb5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb5ac) {
            ctx->pc = 0x1FB5F0u;
            return;
        }
    }
    ctx->pc = 0x1FB5B4u;
}
