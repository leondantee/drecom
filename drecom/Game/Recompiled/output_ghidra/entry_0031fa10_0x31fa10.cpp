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

// Function: entry_0031fa10
// Address: 0x31fa10 - 0x31fa68
void entry_0031fa10_0x31fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fa10_0x31fa10");
#endif

    switch (ctx->pc) {
        case 0x31fa5cu: goto label_31fa5c;
        default: break;
    }

    ctx->pc = 0x31fa10u;

    // 0x31fa10: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x31fa10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x31fa14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa18: 0xa0640345  sb          $a0, 0x345($v1)
    ctx->pc = 0x31fa18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x31fa1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa20: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x31fa20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x31fa24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fa28: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31fa2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fa2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fa30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa34: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x31fa34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x31fa38: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31fa3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa40: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31fa44: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31fa48: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x31fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31fa4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fa50: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31fa54: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x31FA54u;
    SET_GPR_U32(ctx, 31, 0x31FA5Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x31FA5Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FA5Cu) { return; }
    ctx->pc = 0x31FA5Cu;
label_31fa5c:
    // 0x31fa5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31fa5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31fa60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31FA60u;
    {
        const bool branch_taken_0x31fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa60) {
            ctx->pc = 0x31FAD0u;
            return;
        }
    }
    ctx->pc = 0x31FA68u;
}
