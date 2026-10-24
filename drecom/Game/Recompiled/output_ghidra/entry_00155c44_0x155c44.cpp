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

// Function: entry_00155c44
// Address: 0x155c44 - 0x155cd0
void entry_00155c44_0x155c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c44_0x155c44");
#endif

    ctx->pc = 0x155c44u;

    // 0x155c44: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155c48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155c4c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155c50: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155c54: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155c58: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155c5c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155c60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155c64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155c68: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x155C68u;
    {
        const bool branch_taken_0x155c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155c68) {
            ctx->pc = 0x155CD0u;
            return;
        }
    }
    ctx->pc = 0x155C70u;
    // 0x155c70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c74: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x155c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x155c78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155c7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155c80: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x155c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x155c84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155c88: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155c8c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x155c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x155c90: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155c94: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x155c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x155c98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x155c98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x155c9c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x155c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x155ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x155ca4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ca8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x155ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x155cac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x155cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155cb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155cb4: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x155cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x155cb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x155cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x155cbc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x155cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x155cc0: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x155cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x155cc4: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x155cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x155cc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155CC8u;
    {
        const bool branch_taken_0x155cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155cc8) {
            ctx->pc = 0x155CE8u;
            return;
        }
    }
    ctx->pc = 0x155CD0u;
}
