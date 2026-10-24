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

// Function: entry_00243fe0
// Address: 0x243fe0 - 0x244094
void entry_00243fe0_0x243fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243fe0_0x243fe0");
#endif

    ctx->pc = 0x243fe0u;

    // 0x243fe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x243fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243fe4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x243fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x243fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243fec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x243fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x243ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243ff4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x243ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243ff8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243ffc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x243ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x244000: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x244000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x244004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244008: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24400c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244010: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x244010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x244014: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x244014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244018: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24401c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24401cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244020: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244024: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244028: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x244028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24402c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244030: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x244034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244038: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24403c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244040: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x244040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x244044: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x244044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x244048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24404c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24404cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244054: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244058: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x24405c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x24405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x244060: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244068: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24406c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244070: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x244074: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244078: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24407c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244080: 0x3406b404  ori         $a2, $zero, 0xB404
    ctx->pc = 0x244080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46084);
    // 0x244084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24408c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x24408Cu;
    SET_GPR_U32(ctx, 31, 0x244094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x24408Cu, 0x244094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244094u;
}
