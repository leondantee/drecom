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

// Function: entry_00234c70
// Address: 0x234c70 - 0x234d24
void entry_00234c70_0x234c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234c70_0x234c70");
#endif

    switch (ctx->pc) {
        case 0x234cc8u: goto label_234cc8;
        case 0x234d1cu: goto label_234d1c;
        default: break;
    }

    ctx->pc = 0x234c70u;

    // 0x234c70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c74: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x234c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x234c78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x234c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234c7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x234c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x234c80: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x234c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x234c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234c88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x234c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234c8c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x234c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234c90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234c94: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234c98: 0x8462005e  lh          $v0, 0x5E($v1)
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x234c9c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x234c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x234ca0: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x234ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x234ca4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ca8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234cac: 0x8442005e  lh          $v0, 0x5E($v0)
    ctx->pc = 0x234cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x234cb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234cb8: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x234CB8u;
    {
        const bool branch_taken_0x234cb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234cb8) {
            ctx->pc = 0x234D24u;
            return;
        }
    }
    ctx->pc = 0x234CC0u;
    // 0x234cc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x234CC0u;
    SET_GPR_U32(ctx, 31, 0x234CC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x234CC0u, 0x234CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CC8u;
label_234cc8:
    // 0x234cc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x234cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234ccc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x234cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x234cd0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x234cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x234cd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x234cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x234cd8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x234cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234cdc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234ce0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234ce4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234ce8: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x234ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x234cec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234cf0: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x234cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x234cf4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x234cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234cf8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234cf8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x234cfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234d00: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x234d00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x234d04: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x234d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234d08: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x234d08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x234d0c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d10: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x234d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x234d14: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x234D14u;
    SET_GPR_U32(ctx, 31, 0x234D1Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x234D14u, 0x234D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D1Cu;
label_234d1c:
    // 0x234d1c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x234D1Cu;
    {
        const bool branch_taken_0x234d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d1c) {
            ctx->pc = 0x234EA4u;
            return;
        }
    }
    ctx->pc = 0x234D24u;
}
