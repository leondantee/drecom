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

// Function: entry_002a939c
// Address: 0x2a939c - 0x2a9454
void entry_002a939c_0x2a939c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a939c_0x2a939c");
#endif

    switch (ctx->pc) {
        case 0x2a93d8u: goto label_2a93d8;
        case 0x2a93ecu: goto label_2a93ec;
        case 0x2a9400u: goto label_2a9400;
        case 0x2a940cu: goto label_2a940c;
        default: break;
    }

    ctx->pc = 0x2a939cu;

    // 0x2a939c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a93a4: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x2a93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x2a93a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a93a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a93ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a93acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a93b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2a93b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2a93b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2a93b8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a93bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a93bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a93c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2a93c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2a93c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2a93c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2a93c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a93c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a93ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a93d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A93D0u;
    SET_GPR_U32(ctx, 31, 0x2A93D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A93D0u, 0x2A93D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93D8u;
label_2a93d8:
    // 0x2a93d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93e0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2a93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a93e4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2A93E4u;
    SET_GPR_U32(ctx, 31, 0x2A93ECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2A93E4u, 0x2A93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93ECu;
label_2a93ec:
    // 0x2a93ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a93ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a93f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a93f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a93f8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x2A93F8u;
    SET_GPR_U32(ctx, 31, 0x2A9400u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x2A93F8u, 0x2A9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9400u;
label_2a9400:
    // 0x2a9400: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a9400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9404: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2A9404u;
    SET_GPR_U32(ctx, 31, 0x2A940Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2A9404u, 0x2A940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A940Cu;
label_2a940c:
    // 0x2a940c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9410: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a9410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a9414: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A9414u;
    {
        const bool branch_taken_0x2a9414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9414) {
            ctx->pc = 0x2A9454u;
            return;
        }
    }
    ctx->pc = 0x2A941Cu;
    // 0x2a941c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9420: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9424: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a9424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9428: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a942c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2a942cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9434: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a9434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9438: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a943c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a943cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9440: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a9444: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9448: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2a9448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2a944c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9450: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2a9450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2a9454u;
}
