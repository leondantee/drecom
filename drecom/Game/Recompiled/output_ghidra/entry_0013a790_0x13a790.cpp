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

// Function: entry_0013a790
// Address: 0x13a790 - 0x13a81c
void entry_0013a790_0x13a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a790_0x13a790");
#endif

    switch (ctx->pc) {
        case 0x13a7b4u: goto label_13a7b4;
        case 0x13a80cu: goto label_13a80c;
        default: break;
    }

    ctx->pc = 0x13a790u;

    // 0x13a790: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x13a794: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x13a798: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x13a798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x13a79c: 0x8c25df28  lw          $a1, -0x20D8($at)
    ctx->pc = 0x13a79cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDF28u));
    // 0x13a7a0: 0x240600b3  addiu       $a2, $zero, 0xB3
    ctx->pc = 0x13a7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x13a7a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13a7a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a7a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13a7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13a7ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13A7ACu;
    SET_GPR_U32(ctx, 31, 0x13A7B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13A7ACu, 0x13A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7B4u;
label_13a7b4:
    // 0x13a7b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7b8: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x13a7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a7bc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x13a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13a7c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7c4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x13a7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x13a7c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a7cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7d0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x13a7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7dc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x13a7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x13a7e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7e4: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x13a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x13a7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7ec: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x13a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x13a7f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a7f4: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x13a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x13a7f8: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x13a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x13a7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a800: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x13a800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13a804: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x13A804u;
    SET_GPR_U32(ctx, 31, 0x13A80Cu);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x13A804u, 0x13A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A80Cu;
label_13a80c:
    // 0x13a80c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a810: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13a814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a818: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13a81cu;
}
