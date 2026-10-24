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

// Function: entry_00337984
// Address: 0x337984 - 0x3379f4
void entry_00337984_0x337984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337984_0x337984");
#endif

    ctx->pc = 0x337984u;

    // 0x337984: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337988: 0x24424eb8  addiu       $v0, $v0, 0x4EB8
    ctx->pc = 0x337988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20152));
    // 0x33798c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337990: 0xac224ec0  sw          $v0, 0x4EC0($at)
    ctx->pc = 0x337990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894EC0u, _value); } while (0);
    // 0x337994: 0x8e036628  lw          $v1, 0x6628($s0)
    ctx->pc = 0x337994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x337998: 0x90620088  lbu         $v0, 0x88($v1)
    ctx->pc = 0x337998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x33799c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3379a0: 0x8c234ec0  lw          $v1, 0x4EC0($at)
    ctx->pc = 0x3379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894EC0u));
    // 0x3379a4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3379a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3379a8: 0x8e026628  lw          $v0, 0x6628($s0)
    ctx->pc = 0x3379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26152)));
    // 0x3379ac: 0x90430089  lbu         $v1, 0x89($v0)
    ctx->pc = 0x3379acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
    // 0x3379b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3379b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3379b4: 0x8c224ec0  lw          $v0, 0x4EC0($at)
    ctx->pc = 0x3379b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894EC0u));
    // 0x3379b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3379b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3379bc: 0x8e045dd4  lw          $a0, 0x5DD4($s0)
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x3379c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3379c4: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x3379C4u;
    {
        const bool branch_taken_0x3379c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3379c4) {
            ctx->pc = 0x337E30u;
            return;
        }
    }
    ctx->pc = 0x3379CCu;
    // 0x3379cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3379ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3379d0: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x3379D0u;
    {
        const bool branch_taken_0x3379d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3379d0) {
            ctx->pc = 0x337BECu;
            return;
        }
    }
    ctx->pc = 0x3379D8u;
    // 0x3379d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3379d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3379dc: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3379DCu;
    {
        const bool branch_taken_0x3379dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3379dc) {
            ctx->pc = 0x337BA0u;
            return;
        }
    }
    ctx->pc = 0x3379E4u;
    // 0x3379e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3379E4u;
    {
        const bool branch_taken_0x3379e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379e4) {
            ctx->pc = 0x3379F4u;
            return;
        }
    }
    ctx->pc = 0x3379ECu;
    // 0x3379ec: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x3379ECu;
    {
        const bool branch_taken_0x3379ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379ec) {
            ctx->pc = 0x337E30u;
            return;
        }
    }
    ctx->pc = 0x3379F4u;
}
