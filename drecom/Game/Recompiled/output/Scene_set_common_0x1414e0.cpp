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

// Function: Scene_set_common
// Address: 0x1414e0 - 0x141590
void Scene_set_common_0x1414e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scene_set_common_0x1414e0");
#endif

    ctx->pc = 0x1414e0u;

    // 0x1414e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1414e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1414e4: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x1414e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x1414e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1414e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1414ec: 0xac230074  sw          $v1, 0x74($at)
    ctx->pc = 0x1414ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0074u, _value); } while (0);
    // 0x1414f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1414f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1414f4: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1414f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1414f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1414fc: 0xac230078  sw          $v1, 0x78($at)
    ctx->pc = 0x1414fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0078u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0078u, _value); } while (0);
    // 0x141500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141504: 0x8c23fe1c  lw          $v1, -0x1E4($at)
    ctx->pc = 0x141504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFE1Cu));
    // 0x141508: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14150c: 0xac230068  sw          $v1, 0x68($at)
    ctx->pc = 0x14150cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0068u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0068u, _value); } while (0);
    // 0x141510: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141514: 0x8c23fe20  lw          $v1, -0x1E0($at)
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFE20u));
    // 0x141518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14151c: 0xac23006c  sw          $v1, 0x6C($at)
    ctx->pc = 0x14151cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D006Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D006Cu, _value); } while (0);
    // 0x141520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141524: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141528: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x141528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x14152c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14152cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x141530: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141534: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141538: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x141538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x14153c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141540: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141544: 0xa023dbc0  sb          $v1, -0x2440($at)
    ctx->pc = 0x141544u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x141548: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14154c: 0xa020dbc1  sb          $zero, -0x243F($at)
    ctx->pc = 0x14154cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x141550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141554: 0xa020dbc2  sb          $zero, -0x243E($at)
    ctx->pc = 0x141554u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x141558: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14155c: 0xa020dbc3  sb          $zero, -0x243D($at)
    ctx->pc = 0x14155cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x141560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141564: 0xac20dbc4  sw          $zero, -0x243C($at)
    ctx->pc = 0x141564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x141568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14156c: 0xac200008  sw          $zero, 0x8($at)
    ctx->pc = 0x14156cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0008u, _value); } while (0);
    // 0x141570: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141574: 0xa020edae  sb          $zero, -0x1252($at)
    ctx->pc = 0x141574u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x141578: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14157c: 0xa020ec68  sb          $zero, -0x1398($at)
    ctx->pc = 0x14157cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x141580: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141584: 0xac20efa8  sw          $zero, -0x1058($at)
    ctx->pc = 0x141584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFA8u, _value); } while (0);
    // 0x141588: 0x3e00008  jr          $ra
    ctx->pc = 0x141588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141590u;
}
