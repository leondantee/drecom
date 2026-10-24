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

// Function: entry_00329a2c
// Address: 0x329a2c - 0x329aa8
void entry_00329a2c_0x329a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329a2c_0x329a2c");
#endif

    ctx->pc = 0x329a2cu;

    // 0x329a2c: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329a30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329a34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329a38: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x329A38u;
    {
        const bool branch_taken_0x329a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329a38) {
            ctx->pc = 0x329AD0u;
            return;
        }
    }
    ctx->pc = 0x329A40u;
    // 0x329a40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329a44: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x329a48: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x329a4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329a50: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x329A50u;
    {
        const bool branch_taken_0x329a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a50) {
            ctx->pc = 0x329AA8u;
            return;
        }
    }
    ctx->pc = 0x329A58u;
    // 0x329a58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329a5c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x329a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x329a60: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x329a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x329a64: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329A64u;
    {
        const bool branch_taken_0x329a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a64) {
            ctx->pc = 0x329AA8u;
            return;
        }
    }
    ctx->pc = 0x329A6Cu;
    // 0x329a6c: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x329a6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x329a70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329a74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329a74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329a78: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x329A78u;
    {
        const bool branch_taken_0x329a78 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x329a78) {
            ctx->pc = 0x329AA8u;
            return;
        }
    }
    ctx->pc = 0x329A80u;
    // 0x329a80: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x329a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x329a84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329a88: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329A88u;
    {
        const bool branch_taken_0x329a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a88) {
            ctx->pc = 0x329AA8u;
            return;
        }
    }
    ctx->pc = 0x329A90u;
    // 0x329a90: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a98: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329a9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329aa0: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329aa4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329aa8u;
}
