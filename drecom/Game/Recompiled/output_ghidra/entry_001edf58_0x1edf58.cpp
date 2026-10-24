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

// Function: entry_001edf58
// Address: 0x1edf58 - 0x1ee03c
void entry_001edf58_0x1edf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edf58_0x1edf58");
#endif

    ctx->pc = 0x1edf58u;

    // 0x1edf58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edf60: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1edf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1edf64: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EDF64u;
    {
        const bool branch_taken_0x1edf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf64) {
            ctx->pc = 0x1EE054u;
            return;
        }
    }
    ctx->pc = 0x1EDF6Cu;
    // 0x1edf6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edf74: 0x84630076  lh          $v1, 0x76($v1)
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1edf78: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EDF78u;
    {
        const bool branch_taken_0x1edf78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf78) {
            ctx->pc = 0x1EE054u;
            return;
        }
    }
    ctx->pc = 0x1EDF80u;
    // 0x1edf80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf8c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1edf90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1edf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edfa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1edfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edfa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1edfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1edfb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edfb4: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1edfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1edfb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1edfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1edfbc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1edfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1edfc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edfc4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1edfc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1edfc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edfd0: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1edfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1edfd4: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x1edfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1edfd8: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1edfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1edfdc: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1edfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1edfe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edfe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edfe8: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1edfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1edfec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edff0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1edff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1edff4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1edff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1edff8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edff8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edffc: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1edffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ee000: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE000u;
    {
        const bool branch_taken_0x1ee000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee000) {
            ctx->pc = 0x1EE03Cu;
            return;
        }
    }
    ctx->pc = 0x1EE008u;
    // 0x1ee008: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee00c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ee00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ee010: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ee010u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ee014: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ee014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ee018: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE018u;
    {
        const bool branch_taken_0x1ee018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee018) {
            ctx->pc = 0x1EE03Cu;
            return;
        }
    }
    ctx->pc = 0x1EE020u;
    // 0x1ee020: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ee024: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ee024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ee028: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ee028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee02c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee030: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ee034: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ee034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ee038: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ee038u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ee03cu;
}
