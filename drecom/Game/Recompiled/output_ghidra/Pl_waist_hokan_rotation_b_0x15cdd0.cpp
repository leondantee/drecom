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

// Function: Pl_waist_hokan_rotation_b
// Address: 0x15cdd0 - 0x15cf58
void Pl_waist_hokan_rotation_b_0x15cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_waist_hokan_rotation_b_0x15cdd0");
#endif

    switch (ctx->pc) {
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15cec4u: goto label_15cec4;
        case 0x15ced4u: goto label_15ced4;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cf04u: goto label_15cf04;
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf28u: goto label_15cf28;
        case 0x15cf44u: goto label_15cf44;
        default: break;
    }

    ctx->pc = 0x15cdd0u;

    // 0x15cdd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15cdd4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15cdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15cdd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cddc: 0xe7ac00a8  swc1        $f12, 0xA8($sp)
    ctx->pc = 0x15cddcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15cde0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15cde4: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15cde8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cdec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x15CDECu;
    SET_GPR_U32(ctx, 31, 0x15CDF4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x15CDF4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CDF4u) { return; }
    ctx->pc = 0x15CDF4u;
label_15cdf4:
    // 0x15cdf4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cdf8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cdfc: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ce00: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15CE00u;
    SET_GPR_U32(ctx, 31, 0x15CE08u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15CE08u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CE08u) { return; }
    ctx->pc = 0x15CE08u;
label_15ce08:
    // 0x15ce08: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ce10: 0x24450240  addiu       $a1, $v0, 0x240
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x15ce14: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15CE14u;
    SET_GPR_U32(ctx, 31, 0x15CE1Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15CE1Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CE1Cu) { return; }
    ctx->pc = 0x15CE1Cu;
label_15ce1c:
    // 0x15ce1c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce20: 0x24440240  addiu       $a0, $v0, 0x240
    ctx->pc = 0x15ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x15ce24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15CE24u;
    SET_GPR_U32(ctx, 31, 0x15CE2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15CE24u, 0x15CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE2Cu;
label_15ce2c:
    // 0x15ce2c: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce30: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce34: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x15ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x15ce38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ce3c: 0x24460210  addiu       $a2, $v0, 0x210
    ctx->pc = 0x15ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x15ce40: 0xc040c00  jal         func_103000
    ctx->pc = 0x15CE40u;
    SET_GPR_U32(ctx, 31, 0x15CE48u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15CE48u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CE48u) { return; }
    ctx->pc = 0x15CE48u;
label_15ce48:
    // 0x15ce48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ce4c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ce50: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ce54: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15CE54u;
    SET_GPR_U32(ctx, 31, 0x15CE5Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15CE5Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CE5Cu) { return; }
    ctx->pc = 0x15CE5Cu;
label_15ce5c:
    // 0x15ce5c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ce64: 0x24451e60  addiu       $a1, $v0, 0x1E60
    ctx->pc = 0x15ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x15ce68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15CE68u;
    SET_GPR_U32(ctx, 31, 0x15CE70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15CE70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CE70u) { return; }
    ctx->pc = 0x15CE70u;
label_15ce70:
    // 0x15ce70: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce74: 0x24441e60  addiu       $a0, $v0, 0x1E60
    ctx->pc = 0x15ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7776));
    // 0x15ce78: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15CE78u;
    SET_GPR_U32(ctx, 31, 0x15CE80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15CE78u, 0x15CE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE80u;
label_15ce80:
    // 0x15ce80: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce84: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ce88: 0x24641e30  addiu       $a0, $v1, 0x1E30
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7728));
    // 0x15ce8c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ce90: 0x24461e30  addiu       $a2, $v0, 0x1E30
    ctx->pc = 0x15ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x15ce94: 0xc040c00  jal         func_103000
    ctx->pc = 0x15CE94u;
    SET_GPR_U32(ctx, 31, 0x15CE9Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15CE9Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CE9Cu) { return; }
    ctx->pc = 0x15CE9Cu;
label_15ce9c:
    // 0x15ce9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cea0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cea4: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15cea8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15CEA8u;
    SET_GPR_U32(ctx, 31, 0x15CEB0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15CEB0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CEB0u) { return; }
    ctx->pc = 0x15CEB0u;
label_15ceb0:
    // 0x15ceb0: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ceb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ceb8: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x15ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x15cebc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15CEBCu;
    SET_GPR_U32(ctx, 31, 0x15CEC4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15CEC4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CEC4u) { return; }
    ctx->pc = 0x15CEC4u;
label_15cec4:
    // 0x15cec4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cec8: 0x24440280  addiu       $a0, $v0, 0x280
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x15cecc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15CECCu;
    SET_GPR_U32(ctx, 31, 0x15CED4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15CECCu, 0x15CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CED4u;
label_15ced4:
    // 0x15ced4: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15ced8: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cedc: 0x24640250  addiu       $a0, $v1, 0x250
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 592));
    // 0x15cee0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cee4: 0x24460250  addiu       $a2, $v0, 0x250
    ctx->pc = 0x15cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x15cee8: 0xc040c00  jal         func_103000
    ctx->pc = 0x15CEE8u;
    SET_GPR_U32(ctx, 31, 0x15CEF0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15CEF0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CEF0u) { return; }
    ctx->pc = 0x15CEF0u;
label_15cef0:
    // 0x15cef0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cef4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cef8: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15cef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15cefc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15CEFCu;
    SET_GPR_U32(ctx, 31, 0x15CF04u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15CF04u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CF04u) { return; }
    ctx->pc = 0x15CF04u;
label_15cf04:
    // 0x15cf04: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cf08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15cf0c: 0x24451ea0  addiu       $a1, $v0, 0x1EA0
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7840));
    // 0x15cf10: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15CF10u;
    SET_GPR_U32(ctx, 31, 0x15CF18u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15CF18u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CF18u) { return; }
    ctx->pc = 0x15CF18u;
label_15cf18:
    // 0x15cf18: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cf1c: 0x24441ea0  addiu       $a0, $v0, 0x1EA0
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7840));
    // 0x15cf20: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15CF20u;
    SET_GPR_U32(ctx, 31, 0x15CF28u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15CF20u, 0x15CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF28u;
label_15cf28:
    // 0x15cf28: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cf2c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x15cf30: 0x24641e70  addiu       $a0, $v1, 0x1E70
    ctx->pc = 0x15cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7792));
    // 0x15cf34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cf38: 0x24461e70  addiu       $a2, $v0, 0x1E70
    ctx->pc = 0x15cf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
    // 0x15cf3c: 0xc040c00  jal         func_103000
    ctx->pc = 0x15CF3Cu;
    SET_GPR_U32(ctx, 31, 0x15CF44u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15CF44u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15CF44u) { return; }
    ctx->pc = 0x15CF44u;
label_15cf44:
    // 0x15cf44: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15cf44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cf48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cf4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x15cf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15cf50: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CF58u;
}
