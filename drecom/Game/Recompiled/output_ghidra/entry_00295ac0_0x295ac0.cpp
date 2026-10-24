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

// Function: entry_00295ac0
// Address: 0x295ac0 - 0x295b90
void entry_00295ac0_0x295ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295ac0_0x295ac0");
#endif

    switch (ctx->pc) {
        case 0x295b3cu: goto label_295b3c;
        case 0x295b8cu: goto label_295b8c;
        default: break;
    }

    ctx->pc = 0x295ac0u;

label_295ac0:
    // 0x295ac0: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x295ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295ac4: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x295ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295ac8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x295ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x295acc: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x295accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x295ad0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x295ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x295ad4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x295ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295ad8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295adc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x295adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x295ae0: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x295AE0u;
    {
        const bool branch_taken_0x295ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ae0) {
            ctx->pc = 0x295AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295ac0;
        }
    }
    ctx->pc = 0x295AE8u;
    // 0x295ae8: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x295AE8u;
    {
        const bool branch_taken_0x295ae8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ae8) {
            ctx->pc = 0x295B90u;
            return;
        }
    }
    ctx->pc = 0x295AF0u;
    // 0x295af0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295af4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x295af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x295af8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295afc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295afcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295b00: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295b04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295b08: 0x3c021d06  lui         $v0, 0x1D06
    ctx->pc = 0x295b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7430 << 16));
    // 0x295b0c: 0x34421c00  ori         $v0, $v0, 0x1C00
    ctx->pc = 0x295b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7168);
    // 0x295b10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295b14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295b18: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295b1c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x295b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295b20: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x295b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x295b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x295b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295b28: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295b2c: 0x24451810  addiu       $a1, $v0, 0x1810
    ctx->pc = 0x295b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6160));
    // 0x295b30: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x295b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x295b34: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295B34u;
    SET_GPR_U32(ctx, 31, 0x295B3Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295B34u, 0x295B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B3Cu;
label_295b3c:
    // 0x295b3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x295b40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x295b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x295b44: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x295b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295b48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x295b48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x295b4c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x295b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x295b50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x295b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295b54: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x295b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x295b58: 0x34421c00  ori         $v0, $v0, 0x1C00
    ctx->pc = 0x295b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7168);
    // 0x295b5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295b60: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x295b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x295b64: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x295b68: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x295b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x295b6c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x295b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x295b70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x295b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x295b74: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x295b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x295b78: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x295b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x295b7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295b80: 0x24451810  addiu       $a1, $v0, 0x1810
    ctx->pc = 0x295b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6160));
    // 0x295b84: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295B84u;
    SET_GPR_U32(ctx, 31, 0x295B8Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295B84u, 0x295B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B8Cu;
label_295b8c:
    // 0x295b8c: 0x0  nop
    ctx->pc = 0x295b8cu;
    // NOP
    ctx->pc = 0x295b90u;
}
