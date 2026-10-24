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

// Function: entry_001ef0a8
// Address: 0x1ef0a8 - 0x1ef160
void entry_001ef0a8_0x1ef0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef0a8_0x1ef0a8");
#endif

    ctx->pc = 0x1ef0a8u;

    // 0x1ef0a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef0b0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1ef0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef0b4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1EF0B4u;
    {
        const bool branch_taken_0x1ef0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0b4) {
            ctx->pc = 0x1EF178u;
            return;
        }
    }
    ctx->pc = 0x1EF0BCu;
    // 0x1ef0bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef0c0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef0c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef0c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ef0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ef0cc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1EF0CCu;
    {
        const bool branch_taken_0x1ef0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0cc) {
            ctx->pc = 0x1EF178u;
            return;
        }
    }
    ctx->pc = 0x1EF0D4u;
    // 0x1ef0d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef0d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ef0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef0e0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ef0e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ef0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef0ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ef0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef0f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ef0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef0fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ef100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ef104: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef108: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef10c: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ef10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef110: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef114: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ef118: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef11c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef11cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef120: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ef120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ef124: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF124u;
    {
        const bool branch_taken_0x1ef124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef124) {
            ctx->pc = 0x1EF160u;
            return;
        }
    }
    ctx->pc = 0x1EF12Cu;
    // 0x1ef12c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef130: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef134: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef138: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ef138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ef13c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF13Cu;
    {
        const bool branch_taken_0x1ef13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef13c) {
            ctx->pc = 0x1EF160u;
            return;
        }
    }
    ctx->pc = 0x1EF144u;
    // 0x1ef144: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef148: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ef14c: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef14cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef150: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ef150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef154: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ef158: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ef158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ef15c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef15cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ef160u;
}
