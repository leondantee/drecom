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

// Function: entry_001dea6c
// Address: 0x1dea6c - 0x1deb30
void entry_001dea6c_0x1dea6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dea6c_0x1dea6c");
#endif

    ctx->pc = 0x1dea6cu;

    // 0x1dea6c: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1dea6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dea70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dea70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dea74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dea78: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1dea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dea7c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1dea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1dea80: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1dea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1dea84: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1dea84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dea88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dea8c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dea90: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dea94: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x1dea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x1dea98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dea9c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1deaa0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1deaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deaa4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1deaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1deaa8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1deaac: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1deaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1deab0: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1deab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1deab4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deab8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1deab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1deabc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1deac0: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x1deac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x1deac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1deac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1deac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1deac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deacc: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1deaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1dead0: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dead4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1dead4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dead8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1dead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1deadc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1deadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deae0: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x1deae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1deae4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1deae8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1deae8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1deaec: 0x8eb40034  lw          $s4, 0x34($s5)
    ctx->pc = 0x1deaecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1deaf0: 0x8eb30030  lw          $s3, 0x30($s5)
    ctx->pc = 0x1deaf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1deaf4: 0x8fd20004  lw          $s2, 0x4($fp)
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1deaf8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1deaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1deafc: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1deb00: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1deb00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1deb04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deb08: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x1deb0c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DEB0Cu;
    {
        const bool branch_taken_0x1deb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb0c) {
            ctx->pc = 0x1DEB30u;
            return;
        }
    }
    ctx->pc = 0x1DEB14u;
    // 0x1deb14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1deb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1deb18: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x1deb18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x1deb1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1deb20: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x1deb20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x1deb24: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1deb28: 0xaea30068  sw          $v1, 0x68($s5)
    ctx->pc = 0x1deb28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 3));
    // 0x1deb2c: 0x0  nop
    ctx->pc = 0x1deb2cu;
    // NOP
    ctx->pc = 0x1deb30u;
}
