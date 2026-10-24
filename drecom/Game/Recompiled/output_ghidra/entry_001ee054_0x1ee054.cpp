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

// Function: entry_001ee054
// Address: 0x1ee054 - 0x1ee10c
void entry_001ee054_0x1ee054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee054_0x1ee054");
#endif

    ctx->pc = 0x1ee054u;

    // 0x1ee054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee058: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee05c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ee060: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1EE060u;
    {
        const bool branch_taken_0x1ee060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee060) {
            ctx->pc = 0x1EE124u;
            return;
        }
    }
    ctx->pc = 0x1EE068u;
    // 0x1ee068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee06c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee070: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ee070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee074: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ee078: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1EE078u;
    {
        const bool branch_taken_0x1ee078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee078) {
            ctx->pc = 0x1EE124u;
            return;
        }
    }
    ctx->pc = 0x1EE080u;
    // 0x1ee080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ee080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee084: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee088: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ee088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee08c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ee08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ee090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee094: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ee094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee098: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee09c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ee09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee0a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ee0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee0a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ee0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ee0b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee0b8: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ee0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ee0bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ee0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee0c0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ee0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ee0c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ee0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ee0c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ee0cc: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ee0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ee0d0: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE0D0u;
    {
        const bool branch_taken_0x1ee0d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0d0) {
            ctx->pc = 0x1EE10Cu;
            return;
        }
    }
    ctx->pc = 0x1EE0D8u;
    // 0x1ee0d8: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee0d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee0dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ee0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ee0e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ee0e4: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ee0e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ee0e8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE0E8u;
    {
        const bool branch_taken_0x1ee0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0e8) {
            ctx->pc = 0x1EE10Cu;
            return;
        }
    }
    ctx->pc = 0x1EE0F0u;
    // 0x1ee0f0: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee0f4: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ee0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ee0f8: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee0fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ee0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee100: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ee104: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ee104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ee108: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ee10cu;
}
