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

// Function: caseD_0
// Address: 0x14cf7c - 0x14d00c
void caseD_0_0x14cf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14cf7c");
#endif

    switch (ctx->pc) {
        case 0x14cf9cu: goto label_14cf9c;
        case 0x14cfe8u: goto label_14cfe8;
        case 0x14cffcu: goto label_14cffc;
        default: break;
    }

    ctx->pc = 0x14cf7cu;

    // 0x14cf7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf84: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14cf88: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x14cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x14cf8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cf90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14cf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14cf94: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14CF94u;
    SET_GPR_U32(ctx, 31, 0x14CF9Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14CF94u, 0x14CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF9Cu;
label_14cf9c:
    // 0x14cf9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14cfa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cfa4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14cfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14cfa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cfac: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x14cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cfb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cfb4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14cfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14cfb8: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x14cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x14cfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cfc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cfc4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14cfc8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x14cfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14cfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cfd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cfd4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14cfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x14cfd8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14cfdc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x14cfe0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CFE0u;
    SET_GPR_U32(ctx, 31, 0x14CFE8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CFE0u, 0x14CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFE8u;
label_14cfe8:
    // 0x14cfe8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x14cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x14cfec: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x14cfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x14cff0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x14cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x14cff4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14CFF4u;
    SET_GPR_U32(ctx, 31, 0x14CFFCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14CFF4u, 0x14CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CFFCu;
label_14cffc:
    // 0x14cffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d000: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d008: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d00cu;
}
