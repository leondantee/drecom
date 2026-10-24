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

// Function: entry_001d0adc
// Address: 0x1d0adc - 0x1d0b64
void entry_001d0adc_0x1d0adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0adc_0x1d0adc");
#endif

    switch (ctx->pc) {
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b58u: goto label_1d0b58;
        default: break;
    }

    ctx->pc = 0x1d0adcu;

    // 0x1d0adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0ae0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1d0ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1d0ae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0ae8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d0aec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D0AECu;
    {
        const bool branch_taken_0x1d0aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0aec) {
            ctx->pc = 0x1D0B64u;
            return;
        }
    }
    ctx->pc = 0x1D0AF4u;
    // 0x1d0af4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0af8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1D0AF8u;
    SET_GPR_U32(ctx, 31, 0x1D0B00u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1D0AF8u, 0x1D0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B00u;
label_1d0b00:
    // 0x1d0b00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b04: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x1d0b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1d0b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0b10: 0x34428200  ori         $v0, $v0, 0x8200
    ctx->pc = 0x1d0b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33280);
    // 0x1d0b14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d0b18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d0b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d0b1c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d0b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d0b20: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1d0b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0b28: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1d0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1d0b2c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1d0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1d0b30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d0b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d0b34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d0b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d0b38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d0b3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d0b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d0b40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d0b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d0b44: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1d0b44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d0b48: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x1d0b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1d0b4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d0b50: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1D0B50u;
    SET_GPR_U32(ctx, 31, 0x1D0B58u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1D0B50u, 0x1D0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d0b58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d0b5c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1D0B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B64u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1D0B5Cu, 0x1D0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B64u;
}
