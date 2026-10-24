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

// Function: entry_00136228
// Address: 0x136228 - 0x1362bc
void entry_00136228_0x136228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136228_0x136228");
#endif

    switch (ctx->pc) {
        case 0x13625cu: goto label_13625c;
        case 0x13626cu: goto label_13626c;
        case 0x136290u: goto label_136290;
        default: break;
    }

    ctx->pc = 0x136228u;

    // 0x136228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13622c: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x13622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x136230: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x136230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x136234: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x136234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x136238: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x136238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x13623c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136240: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x136240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x136244: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x136244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136248: 0x24452100  addiu       $a1, $v0, 0x2100
    ctx->pc = 0x136248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
    // 0x13624c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x136250: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x136250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x136254: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x136254u;
    SET_GPR_U32(ctx, 31, 0x13625Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x136254u, 0x13625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13625Cu;
label_13625c:
    // 0x13625c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x13625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136260: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136264: 0xc040c24  jal         func_103090
    ctx->pc = 0x136264u;
    SET_GPR_U32(ctx, 31, 0x13626Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x13626Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13626Cu) { return; }
    ctx->pc = 0x13626Cu;
label_13626c:
    // 0x13626c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13626cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136270: 0x0  nop
    ctx->pc = 0x136270u;
    // NOP
    // 0x136274: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x136274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x136278: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x136278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x13627c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13627cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x136280: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x136280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136284: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x136284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136288: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x136288u;
    SET_GPR_U32(ctx, 31, 0x136290u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x136290u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136290u) { return; }
    ctx->pc = 0x136290u;
label_136290:
    // 0x136290: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x136294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136298: 0x0  nop
    ctx->pc = 0x136298u;
    // NOP
    // 0x13629c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x13629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1362a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1362a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1362a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1362a8: 0x0  nop
    ctx->pc = 0x1362a8u;
    // NOP
    // 0x1362ac: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1362acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1362b0: 0x92020098  lbu         $v0, 0x98($s0)
    ctx->pc = 0x1362b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1362b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1362b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1362b8: 0xa2020098  sb          $v0, 0x98($s0)
    ctx->pc = 0x1362b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1362bcu;
}
