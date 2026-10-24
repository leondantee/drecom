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

// Function: entry_001c8ce4
// Address: 0x1c8ce4 - 0x1c8d8c
void entry_001c8ce4_0x1c8ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ce4_0x1c8ce4");
#endif

    switch (ctx->pc) {
        case 0x1c8cf4u: goto label_1c8cf4;
        case 0x1c8d04u: goto label_1c8d04;
        case 0x1c8d1cu: goto label_1c8d1c;
        case 0x1c8d2cu: goto label_1c8d2c;
        default: break;
    }

    ctx->pc = 0x1c8ce4u;

    // 0x1c8ce4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8ce8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8ce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8cec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C8CECu;
    SET_GPR_U32(ctx, 31, 0x1C8CF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C8CECu, 0x1C8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8CF4u;
label_1c8cf4:
    // 0x1c8cf4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8cf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8cf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8cfc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C8CFCu;
    SET_GPR_U32(ctx, 31, 0x1C8D04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C8CFCu, 0x1C8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D04u;
label_1c8d04:
    // 0x1c8d04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8d04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8d08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8d0c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8d14: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C8D14u;
    SET_GPR_U32(ctx, 31, 0x1C8D1Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C8D14u, 0x1C8D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D1Cu;
label_1c8d1c:
    // 0x1c8d1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c8d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8d20: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8d24: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C8D24u;
    SET_GPR_U32(ctx, 31, 0x1C8D2Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C8D24u, 0x1C8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D2Cu;
label_1c8d2c:
    // 0x1c8d2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8d2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8d30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d34: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c8d38: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1c8d3c: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1c8d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c8d40: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8D40u;
    {
        const bool branch_taken_0x1c8d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d40) {
            ctx->pc = 0x1C8D8Cu;
            return;
        }
    }
    ctx->pc = 0x1C8D48u;
    // 0x1c8d48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8d4c: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c8d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d50: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1c8d50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c8d54: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x1c8d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c8d58: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d5c: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x1c8d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c8d60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c8d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8d68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8d70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c8d78: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8d7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d80: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8d84: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C8D84u;
    {
        const bool branch_taken_0x1c8d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d84) {
            ctx->pc = 0x1C8EA4u;
            return;
        }
    }
    ctx->pc = 0x1C8D8Cu;
}
