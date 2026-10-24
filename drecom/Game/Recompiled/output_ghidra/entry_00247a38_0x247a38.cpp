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

// Function: entry_00247a38
// Address: 0x247a38 - 0x247b28
void entry_00247a38_0x247a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247a38_0x247a38");
#endif

    switch (ctx->pc) {
        case 0x247a50u: goto label_247a50;
        case 0x247ad0u: goto label_247ad0;
        default: break;
    }

    ctx->pc = 0x247a38u;

    // 0x247a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a3c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x247a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x247a40: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x247A40u;
    {
        const bool branch_taken_0x247a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247a40) {
            ctx->pc = 0x247C10u;
            return;
        }
    }
    ctx->pc = 0x247A48u;
    // 0x247a48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247A48u;
    SET_GPR_U32(ctx, 31, 0x247A50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247A48u, 0x247A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A50u;
label_247a50:
    // 0x247a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247a54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x247a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x247a58: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x247a5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x247a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247a60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x247a60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x247a64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x247a68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x247a6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x247a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247a74: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x247a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x247a78: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x247a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x247a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x247a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x247a80: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x247a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x247a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a88: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x247a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x247a8c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x247a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x247a90: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x247a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x247a94: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x247a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x247a98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247aa0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x247aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x247aa4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x247aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247aac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247ab0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ab4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x247ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247abc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247ac0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ac4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x247ac8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247AC8u;
    SET_GPR_U32(ctx, 31, 0x247AD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247AC8u, 0x247AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AD0u;
label_247ad0:
    // 0x247ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247ad8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x247AD8u;
    {
        const bool branch_taken_0x247ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ad8) {
            ctx->pc = 0x247B28u;
            return;
        }
    }
    ctx->pc = 0x247AE0u;
    // 0x247ae0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ae4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247ae8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x247ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x247aec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x247aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x247af0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x247AF0u;
    {
        const bool branch_taken_0x247af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247af0) {
            ctx->pc = 0x247B28u;
            return;
        }
    }
    ctx->pc = 0x247AF8u;
    // 0x247af8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247afc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x247b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x247b04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x247b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247b08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b0c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247b10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b14: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x247b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b18: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x247b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b1c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x247b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x247b28u;
}
