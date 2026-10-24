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

// Function: entry_001ffeb8
// Address: 0x1ffeb8 - 0x1fff04
void entry_001ffeb8_0x1ffeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffeb8_0x1ffeb8");
#endif

    ctx->pc = 0x1ffeb8u;

    // 0x1ffeb8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffebc: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1ffebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffec0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1ffec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ffec4: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1ffec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffec8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffecc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffed0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffed4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ffed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ffed8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffedc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffee0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffee4: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1ffee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffee8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffeec: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1ffeecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1ffef0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ffef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ffef4: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1ffef4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffef8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffef8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffefc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFEFCu;
    {
        const bool branch_taken_0x1ffefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffefc) {
            ctx->pc = 0x1FFF40u;
            return;
        }
    }
    ctx->pc = 0x1FFF04u;
}
