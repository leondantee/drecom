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

// Function: entry_0033344c
// Address: 0x33344c - 0x3334ac
void entry_0033344c_0x33344c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033344c_0x33344c");
#endif

    ctx->pc = 0x33344cu;

    // 0x33344c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x33344cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333450: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333454: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x333454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333458: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33345c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x33345cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x333460: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x333460u;
    {
        const bool branch_taken_0x333460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333460) {
            ctx->pc = 0x3334B8u;
            return;
        }
    }
    ctx->pc = 0x333468u;
    // 0x333468: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33346c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333470: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x333470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
    // 0x333474: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333478: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x333478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x33347c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x333480: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x333484: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x333484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x333488: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33348c: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x33348cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x333490: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x333490u;
    {
        const bool branch_taken_0x333490 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x333490) {
            ctx->pc = 0x3334ACu;
            return;
        }
    }
    ctx->pc = 0x333498u;
    // 0x333498: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x333498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33349c: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x33349cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x3334a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3334a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3334a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3334a8: 0xac222720  sw          $v0, 0x2720($at)
    ctx->pc = 0x3334a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    ctx->pc = 0x3334acu;
}
