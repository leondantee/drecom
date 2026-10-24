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

// Function: entry_001422c0
// Address: 0x1422c0 - 0x142328
void entry_001422c0_0x1422c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001422c0_0x1422c0");
#endif

    ctx->pc = 0x1422c0u;

    // 0x1422c0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x1422c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1422c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1422c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1422c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1422c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1422cc: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x1422ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1422d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1422d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1422d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1422d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1422d8: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1422d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1422dc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1422dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1422e0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1422E0u;
    {
        const bool branch_taken_0x1422e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1422e0) {
            ctx->pc = 0x142328u;
            return;
        }
    }
    ctx->pc = 0x1422E8u;
    // 0x1422e8: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x1422e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1422ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1422ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1422f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1422F0u;
    {
        const bool branch_taken_0x1422f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1422f0) {
            ctx->pc = 0x142328u;
            return;
        }
    }
    ctx->pc = 0x1422F8u;
    // 0x1422f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1422fc: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x142300: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x142300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x142304: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x142304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142308: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14230c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x14230cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x142310: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x142310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x142314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142318: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x14231c: 0x24452510  addiu       $a1, $v0, 0x2510
    ctx->pc = 0x14231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9488));
    // 0x142320: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x142320u;
    SET_GPR_U32(ctx, 31, 0x142328u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x142320u, 0x142328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142328u;
}
