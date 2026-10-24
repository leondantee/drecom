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

// Function: entry_001dacd0
// Address: 0x1dacd0 - 0x1dae00
void entry_001dacd0_0x1dacd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dacd0_0x1dacd0");
#endif

    ctx->pc = 0x1dacd0u;

    // 0x1dacd0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dacd4: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1dacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1dacd8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dacdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dace0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dace4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dace8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1dace8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1dacec: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dacf0: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x1dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x1dacf4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dacf8: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x1dacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1dacfc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dad00: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1dad00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dad04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1dad04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dad08: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dad0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dad10: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1dad14: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x1dad14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dad18: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1dad18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1dad1c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1dad1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1dad20: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1dad20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1dad24: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1dad24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dad28: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dad2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dad30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dad34: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad38: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dad38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dad3c: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1dad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1dad40: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1dad40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad44: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1dad44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1dad48: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1dad4c: 0x34640004  ori         $a0, $v1, 0x4
    ctx->pc = 0x1dad4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dad50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad54: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1dad54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1dad58: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dad5c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dad60: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dad64: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dad68: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1dad68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dad6c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x1dad6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x1dad70: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1dad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1dad74: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1dad78: 0x34850002  ori         $a1, $a0, 0x2
    ctx->pc = 0x1dad78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1dad7c: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1dad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1dad80: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad84: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1dad84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1dad88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad8c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1dad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1dad90: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x1dad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x1dad94: 0x344203fe  ori         $v0, $v0, 0x3FE
    ctx->pc = 0x1dad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1022);
    // 0x1dad98: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dad9c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1dada0: 0x8fb100ac  lw          $s1, 0xAC($sp)
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dada4: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1dada4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1dada8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1dada8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dadac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dadb0: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DADB0u;
    {
        const bool branch_taken_0x1dadb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dadb0) {
            ctx->pc = 0x1DAE00u;
            return;
        }
    }
    ctx->pc = 0x1DADB8u;
    // 0x1dadb8: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x1dadb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x1dadbc: 0x2622bd20  addiu       $v0, $s1, -0x42E0
    ctx->pc = 0x1dadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950176));
    // 0x1dadc0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dadc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dadc4: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dadc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dadc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dadcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dadccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dadd0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dadd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dadd4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dadd8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1dadd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1daddc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1daddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dade0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1dade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dade4: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x1dade4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
    // 0x1dade8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dadec: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1dadecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1dadf0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dadf4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1dadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1dadf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DADF8u;
    {
        const bool branch_taken_0x1dadf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dadf8) {
            ctx->pc = 0x1DAE20u;
            return;
        }
    }
    ctx->pc = 0x1DAE00u;
}
