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

// Function: entry_002e4af0
// Address: 0x2e4af0 - 0x2e4b68
void entry_002e4af0_0x2e4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4af0_0x2e4af0");
#endif

    switch (ctx->pc) {
        case 0x2e4b14u: goto label_2e4b14;
        case 0x2e4b20u: goto label_2e4b20;
        case 0x2e4b38u: goto label_2e4b38;
        default: break;
    }

    ctx->pc = 0x2e4af0u;

    // 0x2e4af0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e4af4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2e4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e4af8: 0x84620086  lh          $v0, 0x86($v1)
    ctx->pc = 0x2e4af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x2e4afc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e4b00: 0xa4620086  sh          $v0, 0x86($v1)
    ctx->pc = 0x2e4b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4b04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4b08: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2e4b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4b0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E4B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E4B14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4B14u) { return; }
    ctx->pc = 0x2E4B14u;
label_2e4b14:
    // 0x2e4b14: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2e4b14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e4b18: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2E4B18u;
    SET_GPR_U32(ctx, 31, 0x2E4B20u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2E4B18u, 0x2E4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B20u;
label_2e4b20:
    // 0x2e4b20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e4b24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e4b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4b28: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2e4b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4b2c: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2e4b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2e4b30: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2E4B30u;
    SET_GPR_U32(ctx, 31, 0x2E4B38u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2E4B30u, 0x2E4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B38u;
label_2e4b38:
    // 0x2e4b38: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2e4b38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e4b3c: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2E4B3Cu;
    {
        const bool branch_taken_0x2e4b3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b3c) {
            ctx->pc = 0x2E4B68u;
            return;
        }
    }
    ctx->pc = 0x2E4B44u;
    // 0x2e4b44: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2e4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e4b48: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2e4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e4b4c: 0x84630086  lh          $v1, 0x86($v1)
    ctx->pc = 0x2e4b4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x2e4b50: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e4b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e4b54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e4b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e4b58: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x2e4b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x2e4b5c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4B5Cu;
    {
        const bool branch_taken_0x2e4b5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b5c) {
            ctx->pc = 0x2E4B98u;
            return;
        }
    }
    ctx->pc = 0x2E4B64u;
    // 0x2e4b64: 0x0  nop
    ctx->pc = 0x2e4b64u;
    // NOP
    ctx->pc = 0x2e4b68u;
}
