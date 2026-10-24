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

// Function: entry_00299cec
// Address: 0x299cec - 0x299d5c
void entry_00299cec_0x299cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299cec_0x299cec");
#endif

    switch (ctx->pc) {
        case 0x299d18u: goto label_299d18;
        case 0x299d54u: goto label_299d54;
        default: break;
    }

    ctx->pc = 0x299cecu;

    // 0x299cec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299cf0: 0x8c4201a4  lw          $v0, 0x1A4($v0)
    ctx->pc = 0x299cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x299cf4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x299CF4u;
    {
        const bool branch_taken_0x299cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299cf4) {
            ctx->pc = 0x299D94u;
            return;
        }
    }
    ctx->pc = 0x299CFCu;
    // 0x299cfc: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d00: 0x8fb201a8  lw          $s2, 0x1A8($sp)
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d04: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x299d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x299d08: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x299d08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x299d0c: 0x8e4501a4  lw          $a1, 0x1A4($s2)
    ctx->pc = 0x299d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
    // 0x299d10: 0xc040ca2  jal         func_103288
    ctx->pc = 0x299D10u;
    SET_GPR_U32(ctx, 31, 0x299D18u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x299D18u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299D18u) { return; }
    ctx->pc = 0x299D18u;
label_299d18:
    // 0x299d18: 0x8fb501a8  lw          $s5, 0x1A8($sp)
    ctx->pc = 0x299d18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d1c: 0x96a201a8  lhu         $v0, 0x1A8($s5)
    ctx->pc = 0x299d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 424)));
    // 0x299d20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x299d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299d24: 0x30520002  andi        $s2, $v0, 0x2
    ctx->pc = 0x299d24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x299d28: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x299D28u;
    {
        const bool branch_taken_0x299d28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d28) {
            ctx->pc = 0x299D5Cu;
            return;
        }
    }
    ctx->pc = 0x299D30u;
    // 0x299d30: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d34: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299d38: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x299d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x299d3c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x299d3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x299d40: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x299d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x299d44: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x299d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x299d48: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x299d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299d4c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x299D4Cu;
    SET_GPR_U32(ctx, 31, 0x299D54u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x299D4Cu, 0x299D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D54u;
label_299d54:
    // 0x299d54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299D54u;
    {
        const bool branch_taken_0x299d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d54) {
            ctx->pc = 0x299D78u;
            return;
        }
    }
    ctx->pc = 0x299D5Cu;
}
