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

// Function: entry_001fed00
// Address: 0x1fed00 - 0x1fed4c
void entry_001fed00_0x1fed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed00_0x1fed00");
#endif

    ctx->pc = 0x1fed00u;

    // 0x1fed00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed04: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fed04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fed08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed0c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fed0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fed10: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1FED10u;
    {
        const bool branch_taken_0x1fed10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed10) {
            ctx->pc = 0x1FEB8Cu;
            return;
        }
    }
    ctx->pc = 0x1FED18u;
    // 0x1fed18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed1c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fed1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fed20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fed20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed28: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fed28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fed2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fed34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fed34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed3c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fed3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fed40: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fed40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fed44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FED44u;
    {
        const bool branch_taken_0x1fed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed44) {
            ctx->pc = 0x1FED88u;
            return;
        }
    }
    ctx->pc = 0x1FED4Cu;
}
