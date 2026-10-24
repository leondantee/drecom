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

// Function: entry_001ddca0
// Address: 0x1ddca0 - 0x1ddd40
void entry_001ddca0_0x1ddca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddca0_0x1ddca0");
#endif

    ctx->pc = 0x1ddca0u;

    // 0x1ddca0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddca4: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1ddca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddca8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddcac: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x1ddcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1ddcb0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DDCB0u;
    {
        const bool branch_taken_0x1ddcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcb0) {
            ctx->pc = 0x1DDD40u;
            return;
        }
    }
    ctx->pc = 0x1DDCB8u;
    // 0x1ddcb8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddcbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddcbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddcc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ddcc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddcc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddccc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddcd0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1ddcd4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddcd8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1ddcdc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1ddcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1ddce0: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1DDCE0u;
    {
        const bool branch_taken_0x1ddce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddce0) {
            ctx->pc = 0x1DDEB8u;
            return;
        }
    }
    ctx->pc = 0x1DDCE8u;
    // 0x1ddce8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddcec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddcecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddcf0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ddcf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddcf8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddcfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1ddd00: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1ddd04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ddd08: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1ddd0c: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x1ddd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x1ddd10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ddd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ddd14: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1ddd18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ddd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd1c: 0xa3a300ff  sb          $v1, 0xFF($sp)
    ctx->pc = 0x1ddd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ddd20: 0x93a200ff  lbu         $v0, 0xFF($sp)
    ctx->pc = 0x1ddd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x1ddd24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd28: 0x93a200fe  lbu         $v0, 0xFE($sp)
    ctx->pc = 0x1ddd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x1ddd2c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ddd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd30: 0x14640061  bne         $v1, $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1DDD30u;
    {
        const bool branch_taken_0x1ddd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ddd30) {
            ctx->pc = 0x1DDEB8u;
            return;
        }
    }
    ctx->pc = 0x1DDD38u;
    // 0x1ddd38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DDD38u;
    {
        const bool branch_taken_0x1ddd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd38) {
            ctx->pc = 0x1DDD78u;
            return;
        }
    }
    ctx->pc = 0x1DDD40u;
}
