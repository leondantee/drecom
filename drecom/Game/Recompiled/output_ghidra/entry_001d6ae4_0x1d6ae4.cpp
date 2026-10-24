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

// Function: entry_001d6ae4
// Address: 0x1d6ae4 - 0x1d6cbc
void entry_001d6ae4_0x1d6ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6ae4_0x1d6ae4");
#endif

    switch (ctx->pc) {
        case 0x1d6ca0u: goto label_1d6ca0;
        default: break;
    }

    ctx->pc = 0x1d6ae4u;

    // 0x1d6ae4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6ae8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1d6ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d6aec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6af0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6af4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6af8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6afc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d6afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6b00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6b04: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x1d6b04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d6b08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6b0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6b10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6b14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6b1c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1d6b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6b20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6b24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6b24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6b28: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d6b2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d6b30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1d6b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6b34: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6b38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6b3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6b3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6b40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d6b44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d6b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6b4c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1d6b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1d6b50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d6b54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d6b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6b58: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1d6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d6b5c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d6b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d6b60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6b64: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d6b68: 0x3403eeee  ori         $v1, $zero, 0xEEEE
    ctx->pc = 0x1d6b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61166);
    // 0x1d6b6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6b70: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d6b74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6b78: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d6b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d6b7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d6b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d6b80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d6b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6b84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6b88: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1d6b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6b8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d6b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d6b90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6b94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6b98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6b9c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1d6b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d6ba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d6ba4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1d6ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1d6ba8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d6ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d6bac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6bb0: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1d6bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1d6bb4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d6bb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6bbc: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x1d6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1d6bc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6bc4: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x1d6bc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d6bc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6bcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6bd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d6bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6bd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6bd8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1d6bdc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6be0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6be4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6be8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6bec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6bf0: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1d6bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1d6bf4: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1d6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1d6bf8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6bfc: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x1d6bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1d6c00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6c04: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x1d6c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d6c08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1d6c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d6c0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d6c10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6c14: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x1d6c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1d6c18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6c1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6c20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6c24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6c28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6c2c: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x1d6c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x1d6c30: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1d6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1d6c34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6c38: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x1d6c38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1d6c3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6c40: 0xfc400040  sd          $zero, 0x40($v0)
    ctx->pc = 0x1d6c40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 0));
    // 0x1d6c44: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1d6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1d6c48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6c4c: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x1d6c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1d6c50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d6c54: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1d6c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d6c58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1d6c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d6c60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1d6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d6c64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d6c68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6c6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d6c70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6c74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6c78: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d6c7c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1d6c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c80: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1d6c80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1d6c84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d6c88: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1d6c88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1d6c8c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1d6c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6c90: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1d6c90u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1d6c94: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x1d6c94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6c98: 0xc075b30  jal         func_1D6CC0
    ctx->pc = 0x1D6C98u;
    SET_GPR_U32(ctx, 31, 0x1D6CA0u);
    ctx->pc = 0x1D6CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6CC0u, 0x1D6C98u, 0x1D6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CA0u;
label_1d6ca0:
    // 0x1d6ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6ca4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d6ca4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6cb0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1d6cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d6cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6CBCu;
}
