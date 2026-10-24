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

// Function: entry_00205d7c
// Address: 0x205d7c - 0x205e3c
void entry_00205d7c_0x205d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205d7c_0x205d7c");
#endif

    switch (ctx->pc) {
        case 0x205da4u: goto label_205da4;
        case 0x205df0u: goto label_205df0;
        default: break;
    }

    ctx->pc = 0x205d7cu;

    // 0x205d7c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x205d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d88: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x205d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x205d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d94: 0xc46c0188  lwc1        $f12, 0x188($v1)
    ctx->pc = 0x205d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205d98: 0xc44d0184  lwc1        $f13, 0x184($v0)
    ctx->pc = 0x205d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205d9c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x205D9Cu;
    SET_GPR_U32(ctx, 31, 0x205DA4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x205D9Cu, 0x205DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DA4u;
label_205da4:
    // 0x205da4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x205da8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205dac: 0x0  nop
    ctx->pc = 0x205dacu;
    // NOP
    // 0x205db0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205db0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x205db4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x205db4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x205db8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dbc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205dc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x205dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dc8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x205dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dd0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205dd4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x205dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x205dd8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x205dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x205ddc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x205ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x205de0: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x205de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205de4: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x205de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205de8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x205DE8u;
    SET_GPR_U32(ctx, 31, 0x205DF0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x205DE8u, 0x205DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205df4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205df8: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x205df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x205dfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205e00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e04: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x205e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205e08: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x205e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x205e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205e10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e14: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x205e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205e18: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x205e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x205e1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e20: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x205e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205e24: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x205e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x205e28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x205e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x205e2c: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x205e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x205e30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e34: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x205E34u;
    SET_GPR_U32(ctx, 31, 0x205E3Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x205E34u, 0x205E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E3Cu;
}
