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

// Function: entry_002d79f4
// Address: 0x2d79f4 - 0x2d7ad4
void entry_002d79f4_0x2d79f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d79f4_0x2d79f4");
#endif

    switch (ctx->pc) {
        case 0x2d7a00u: goto label_2d7a00;
        default: break;
    }

    ctx->pc = 0x2d79f4u;

    // 0x2d79f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79f8: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D79F8u;
    SET_GPR_U32(ctx, 31, 0x2D7A00u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D79F8u, 0x2D7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A00u;
label_2d7a00:
    // 0x2d7a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d7a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d7a08: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D7A08u;
    {
        const bool branch_taken_0x2d7a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7a08) {
            ctx->pc = 0x2D7AD4u;
            return;
        }
    }
    ctx->pc = 0x2D7A10u;
    // 0x2d7a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a14: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7a18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d7a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7a1c: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d7a20: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d7a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7a28: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d7a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7a30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7a38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7a3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d7a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7a44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d7a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7a4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d7a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7a54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7a5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a60: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7a64: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x2d7a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x2d7a68: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7a6c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7a70: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7a74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a78: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7a7c: 0x24700c80  addiu       $s0, $v1, 0xC80
    ctx->pc = 0x2d7a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2d7a80: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7a80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7a84: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7a88: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7a8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7a90: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7a94: 0x24700fa0  addiu       $s0, $v1, 0xFA0
    ctx->pc = 0x2d7a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2d7a98: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7a9c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7aa0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7aa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7aa8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7aac: 0x247012c0  addiu       $s0, $v1, 0x12C0
    ctx->pc = 0x2d7aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2d7ab0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7ab4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7ab8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7abc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7ac0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d7ac4: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2d7ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2d7ac8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7acc: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7ad0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d7ad4u;
}
