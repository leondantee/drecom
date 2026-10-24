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

// Function: entry_002450d0
// Address: 0x2450d0 - 0x245184
void entry_002450d0_0x2450d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002450d0_0x2450d0");
#endif

    switch (ctx->pc) {
        case 0x245100u: goto label_245100;
        default: break;
    }

    ctx->pc = 0x2450d0u;

    // 0x2450d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2450d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2450d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2450d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2450d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2450dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2450dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2450e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2450e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2450e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2450e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2450ec: 0x3406f002  ori         $a2, $zero, 0xF002
    ctx->pc = 0x2450ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61442);
    // 0x2450f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2450f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2450f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2450f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2450f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2450F8u;
    SET_GPR_U32(ctx, 31, 0x245100u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2450F8u, 0x245100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245100u;
label_245100:
    // 0x245100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245108: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24510c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x245110: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
    // 0x245114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245118: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24511c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245120: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x245120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x245124: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x245128: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x245128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245130: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245138: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x245138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24513c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x245140: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x245140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x245144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245148: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24514c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245150: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x245150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x245154: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x245158: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x245158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24515c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24515cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245160: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245164: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x245164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245168: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x245168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x24516c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x24516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x245170: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x245170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x245174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245178: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24517c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x245180: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x245180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->pc = 0x245184u;
}
