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

// Function: entry_003202e8
// Address: 0x3202e8 - 0x320334
void entry_003202e8_0x3202e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003202e8_0x3202e8");
#endif

    ctx->pc = 0x3202e8u;

    // 0x3202e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3202e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3202ec: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3202ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3202f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3202f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3202f4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3202f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3202f8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3202F8u;
    {
        const bool branch_taken_0x3202f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3202f8) {
            ctx->pc = 0x320230u;
            return;
        }
    }
    ctx->pc = 0x320300u;
    // 0x320300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320304: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x320304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x320308: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32030c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320310: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320314: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320318: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32031c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32031cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320320: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320324: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x320324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x320328: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320328u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32032c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32032Cu;
    {
        const bool branch_taken_0x32032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32032c) {
            ctx->pc = 0x320370u;
            return;
        }
    }
    ctx->pc = 0x320334u;
}
