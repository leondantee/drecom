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

// Function: entry_0031accc
// Address: 0x31accc - 0x31ad4c
void entry_0031accc_0x31accc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031accc_0x31accc");
#endif

    switch (ctx->pc) {
        case 0x31ad14u: goto label_31ad14;
        default: break;
    }

    ctx->pc = 0x31acccu;

    // 0x31accc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31acd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acd4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x31acd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x31acd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acdc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x31acdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ace0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ace4: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x31ace4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ace8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31acec: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31acecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31acf0: 0xa022ae97  sb          $v0, -0x5169($at)
    ctx->pc = 0x31acf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE97u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE97u, _value); } while (0);
    // 0x31acf4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31acf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31acf8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31acf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31acfc: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x31acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31ad00: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31ad04: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31ad08: 0x2447ae90  addiu       $a3, $v0, -0x5170
    ctx->pc = 0x31ad08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x31ad0c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x31AD0Cu;
    SET_GPR_U32(ctx, 31, 0x31AD14u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x31AD0Cu, 0x31AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD14u;
label_31ad14:
    // 0x31ad14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ad18: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ad1c: 0xa023ae97  sb          $v1, -0x5169($at)
    ctx->pc = 0x31ad1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AE97u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE97u, _value); } while (0);
    // 0x31ad20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31ad24: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x31ad24u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31ad28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31ad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31ad2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31ad2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31ad30: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AD30u;
    {
        const bool branch_taken_0x31ad30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31ad30) {
            ctx->pc = 0x31AD4Cu;
            return;
        }
    }
    ctx->pc = 0x31AD38u;
    // 0x31ad38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ad3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad40: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x31ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
    // 0x31ad44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31AD44u;
    {
        const bool branch_taken_0x31ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad44) {
            ctx->pc = 0x31AD58u;
            return;
        }
    }
    ctx->pc = 0x31AD4Cu;
}
