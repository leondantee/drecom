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

// Function: entry_00310098
// Address: 0x310098 - 0x3100fc
void entry_00310098_0x310098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310098_0x310098");
#endif

    switch (ctx->pc) {
        case 0x3100acu: goto label_3100ac;
        case 0x3100e4u: goto label_3100e4;
        default: break;
    }

    ctx->pc = 0x310098u;

    // 0x310098: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x310098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31009c: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x31009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x3100a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3100a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100a4: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x3100A4u;
    SET_GPR_U32(ctx, 31, 0x3100ACu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x3100A4u, 0x3100ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100ACu;
label_3100ac:
    // 0x3100ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3100acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3100b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3100b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100b4: 0x8c7011a0  lw          $s0, 0x11A0($v1)
    ctx->pc = 0x3100b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4512)));
    // 0x3100b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3100b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3100bc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3100bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3100c0: 0xac6211a0  sw          $v0, 0x11A0($v1)
    ctx->pc = 0x3100c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4512), GPR_U32(ctx, 2));
    // 0x3100c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3100c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3100c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3100ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3100d0: 0x24065a22  addiu       $a2, $zero, 0x5A22
    ctx->pc = 0x3100d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23074));
    // 0x3100d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3100d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3100d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3100d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3100dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3100DCu;
    SET_GPR_U32(ctx, 31, 0x3100E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3100DCu, 0x3100E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100E4u;
label_3100e4:
    // 0x3100e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3100e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100e8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3100e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3100ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3100ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3100f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3100f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3100f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3100f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3100f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3100fcu;
}
