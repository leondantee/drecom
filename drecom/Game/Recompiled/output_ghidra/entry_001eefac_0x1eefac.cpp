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

// Function: entry_001eefac
// Address: 0x1eefac - 0x1ef090
void entry_001eefac_0x1eefac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eefac_0x1eefac");
#endif

    ctx->pc = 0x1eefacu;

    // 0x1eefac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eefb4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1eefb8: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EEFB8u;
    {
        const bool branch_taken_0x1eefb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eefb8) {
            ctx->pc = 0x1EF0A8u;
            return;
        }
    }
    ctx->pc = 0x1EEFC0u;
    // 0x1eefc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eefc8: 0x84630076  lh          $v1, 0x76($v1)
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1eefcc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EEFCCu;
    {
        const bool branch_taken_0x1eefcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eefcc) {
            ctx->pc = 0x1EF0A8u;
            return;
        }
    }
    ctx->pc = 0x1EEFD4u;
    // 0x1eefd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eefd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1eefdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eefe0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1eefe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefe8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1eefe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eefec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeff0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eeff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeff8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eeff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ef000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ef004: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef008: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef00c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef010: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ef010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ef014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef018: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ef018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ef01c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef020: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef024: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ef024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef028: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x1ef028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1ef02c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ef02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ef030: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ef030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ef034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef038: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef03c: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ef03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef040: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef044: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ef044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ef048: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef04c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef04cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef050: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ef050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ef054: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF054u;
    {
        const bool branch_taken_0x1ef054 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef054) {
            ctx->pc = 0x1EF090u;
            return;
        }
    }
    ctx->pc = 0x1EF05Cu;
    // 0x1ef05c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef060: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef064: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef064u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef068: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ef068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ef06c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF06Cu;
    {
        const bool branch_taken_0x1ef06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef06c) {
            ctx->pc = 0x1EF090u;
            return;
        }
    }
    ctx->pc = 0x1EF074u;
    // 0x1ef074: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef078: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ef078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ef07c: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef080: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef084: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ef088: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ef08c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef08cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ef090u;
}
