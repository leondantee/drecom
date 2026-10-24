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

// Function: entry_00135ab0
// Address: 0x135ab0 - 0x135b74
void entry_00135ab0_0x135ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ab0_0x135ab0");
#endif

    switch (ctx->pc) {
        case 0x135aecu: goto label_135aec;
        case 0x135b10u: goto label_135b10;
        case 0x135b1cu: goto label_135b1c;
        case 0x135b54u: goto label_135b54;
        default: break;
    }

    ctx->pc = 0x135ab0u;

    // 0x135ab0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135ab4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135ab8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135abc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135ac0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135ac4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135ac8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135acc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135ad4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x135ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135ad8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x135ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135adc: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135ae0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x135ae4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x135AE4u;
    SET_GPR_U32(ctx, 31, 0x135AECu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x135AE4u, 0x135AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AECu;
label_135aec:
    // 0x135aec: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x135aecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x135af0: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x135AF0u;
    {
        const bool branch_taken_0x135af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x135af0) {
            ctx->pc = 0x135BB0u;
            return;
        }
    }
    ctx->pc = 0x135AF8u;
    // 0x135af8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x135afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x135afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b00: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x135b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135b04: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x135b04u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b08: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x135B08u;
    SET_GPR_U32(ctx, 31, 0x135B10u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x135B08u, 0x135B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B10u;
label_135b10:
    // 0x135b10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x135b10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x135b14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x135B14u;
    SET_GPR_U32(ctx, 31, 0x135B1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x135B14u, 0x135B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B1Cu;
label_135b1c:
    // 0x135b1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135b20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x135b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135b24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x135B24u;
    {
        const bool branch_taken_0x135b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b24) {
            ctx->pc = 0x135B74u;
            return;
        }
    }
    ctx->pc = 0x135B2Cu;
    // 0x135b2c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135b30: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135b34: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135b38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135b3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135b40: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135b44: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x135b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x135b48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135b48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135b4c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135B4Cu;
    SET_GPR_U32(ctx, 31, 0x135B54u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135B4Cu, 0x135B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B54u;
label_135b54:
    // 0x135b54: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x135b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135b58: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135b5c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135b60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135b64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135b68: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135b6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135B6Cu;
    {
        const bool branch_taken_0x135b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b6c) {
            ctx->pc = 0x135BB0u;
            return;
        }
    }
    ctx->pc = 0x135B74u;
}
