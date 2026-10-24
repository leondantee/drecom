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

// Function: entry_00255ab0
// Address: 0x255ab0 - 0x255c00
void entry_00255ab0_0x255ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255ab0_0x255ab0");
#endif

    ctx->pc = 0x255ab0u;

    // 0x255ab0: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x255ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255ab4: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x255ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x255ab8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255abc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x255abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255ac0: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x255ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255ac4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x255ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x255ac8: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x255ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x255acc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255ad0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x255ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x255ad4: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255ad8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255adc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255ae0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255ae4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x255ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255ae8: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x255ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x255aec: 0x3213c  dsll32      $a0, $v1, 4
    ctx->pc = 0x255aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 4));
    // 0x255af0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x255af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x255af4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x255af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x255af8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255afc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b00: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255b04: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x255b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255b08: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x255b08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255b0c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b10: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x255b10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x255b14: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b18: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x255b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x255b1c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x255b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x255b20: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x255b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x255b24: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b28: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x255b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x255b2c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255b30: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x255b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x255b34: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255b38: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255b3c: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x255b3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b40: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x255b40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x255b44: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x255b44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x255b48: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255b4c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x255b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x255b50: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x255b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x255b54: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x255b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b58: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x255b58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x255b5c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b60: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x255b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x255b64: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x255b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x255b68: 0x344203fe  ori         $v0, $v0, 0x3FE
    ctx->pc = 0x255b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1022);
    // 0x255b6c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b70: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x255b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x255b74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255b78: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x255b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255b7c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x255b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x255b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x255b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255b88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255b8c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x255b90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255b94: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255b98: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x255b98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x255b9c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255ba0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x255ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x255ba4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255ba8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x255ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x255bac: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x255bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255bb0: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x255bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x255bb4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255bb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255bbc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x255bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x255bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255bc4: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x255bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x255bc8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x255bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x255bcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x255bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x255bd0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255bd4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x255bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x255bd8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x255bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x255bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255be0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x255be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x255be4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x255be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x255be8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x255be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255bec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x255BECu;
    {
        const bool branch_taken_0x255bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x255bec) {
            ctx->pc = 0x255C00u;
            return;
        }
    }
    ctx->pc = 0x255BF4u;
    // 0x255bf4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x255bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x255bf8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x255bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x255bfc: 0x0  nop
    ctx->pc = 0x255bfcu;
    // NOP
    ctx->pc = 0x255c00u;
}
