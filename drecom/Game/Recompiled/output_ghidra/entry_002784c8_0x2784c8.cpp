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

// Function: entry_002784c8
// Address: 0x2784c8 - 0x2785a4
void entry_002784c8_0x2784c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002784c8_0x2784c8");
#endif

    switch (ctx->pc) {
        case 0x2784e0u: goto label_2784e0;
        case 0x2784ecu: goto label_2784ec;
        case 0x2784f8u: goto label_2784f8;
        case 0x278504u: goto label_278504;
        default: break;
    }

    ctx->pc = 0x2784c8u;

    // 0x2784c8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2784cc: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x2784ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2784d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2784d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2784d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2784d8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x2784D8u;
    SET_GPR_U32(ctx, 31, 0x2784E0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x2784D8u, 0x2784E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784E0u;
label_2784e0:
    // 0x2784e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2784e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2784e4: 0xc084964  jal         func_212590
    ctx->pc = 0x2784E4u;
    SET_GPR_U32(ctx, 31, 0x2784ECu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2784E4u, 0x2784ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784ECu;
label_2784ec:
    // 0x2784ec: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2784ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2784f0: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x2784F0u;
    SET_GPR_U32(ctx, 31, 0x2784F8u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x2784F0u, 0x2784F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784F8u;
label_2784f8:
    // 0x2784f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2784f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2784fc: 0xc084964  jal         func_212590
    ctx->pc = 0x2784FCu;
    SET_GPR_U32(ctx, 31, 0x278504u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2784FCu, 0x278504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278504u;
label_278504:
    // 0x278504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278508: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x278508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27850c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27850cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x278510: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x278510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x278514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278518: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27851c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278520: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278524: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x278524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x278528: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27852c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278530: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278534: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27853c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27853cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278540: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x278540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x278544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x278548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27854c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27854cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278550: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278558: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27855c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x27855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x278560: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x278564: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27856c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27856cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x278570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278574: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278578: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x278578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27857c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x27857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x278580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278588: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x278588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27858c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27858cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278590: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x278590u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x278594: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x278594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x278598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x278598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27859c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2785a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2785a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x2785a4u;
}
