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

// Function: entry_00328860
// Address: 0x328860 - 0x3288ac
void entry_00328860_0x328860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328860_0x328860");
#endif

    ctx->pc = 0x328860u;

    // 0x328860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328864: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328868: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32886c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x32886cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328870: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x328870u;
    {
        const bool branch_taken_0x328870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328870) {
            ctx->pc = 0x328834u;
            return;
        }
    }
    ctx->pc = 0x328878u;
    // 0x328878: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32887c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x32887cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x328880: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x328880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328888: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x328888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x32888c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328890: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x328890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x328894: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x328894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32889c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x32889cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x3288a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3288a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3288a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3288A4u;
    {
        const bool branch_taken_0x3288a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3288a4) {
            ctx->pc = 0x3288E8u;
            return;
        }
    }
    ctx->pc = 0x3288ACu;
}
