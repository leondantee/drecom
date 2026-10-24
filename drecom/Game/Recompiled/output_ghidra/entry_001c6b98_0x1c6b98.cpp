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

// Function: entry_001c6b98
// Address: 0x1c6b98 - 0x1c6c04
void entry_001c6b98_0x1c6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b98_0x1c6b98");
#endif

    switch (ctx->pc) {
        case 0x1c6bbcu: goto label_1c6bbc;
        default: break;
    }

    ctx->pc = 0x1c6b98u;

    // 0x1c6b98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6b9c: 0x908309da  lbu         $v1, 0x9DA($a0)
    ctx->pc = 0x1c6b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
    // 0x1c6ba0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c6ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6ba4: 0x30a6003f  andi        $a2, $a1, 0x3F
    ctx->pc = 0x1c6ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1c6ba8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x1c6ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c6bac: 0x14c70015  bne         $a2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6BACu;
    {
        const bool branch_taken_0x1c6bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x1c6bac) {
            ctx->pc = 0x1C6C04u;
            return;
        }
    }
    ctx->pc = 0x1C6BB4u;
    // 0x1c6bb4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C6BB4u;
    SET_GPR_U32(ctx, 31, 0x1C6BBCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C6BB4u, 0x1C6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BBCu;
label_1c6bbc:
    // 0x1c6bbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c6bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6bc0: 0x30500003  andi        $s0, $v0, 0x3
    ctx->pc = 0x1c6bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c6bc4: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c6bc8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1c6bcc: 0x24649228  addiu       $a0, $v1, -0x6DD8
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
    // 0x1c6bd0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c6bd4: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x1c6bd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c6bd8: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1c6bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1c6bdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6be0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1c6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1c6be4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1c6be8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1c6be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c6bec: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1c6becu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6bf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c6bf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c6bf4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1c6bf8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c6bf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6bfc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C6BFCu;
    SET_GPR_U32(ctx, 31, 0x1C6C04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C6BFCu, 0x1C6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C04u;
}
