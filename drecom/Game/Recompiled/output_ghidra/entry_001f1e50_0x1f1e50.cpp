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

// Function: entry_001f1e50
// Address: 0x1f1e50 - 0x1f1fd4
void entry_001f1e50_0x1f1e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1e50_0x1f1e50");
#endif

    switch (ctx->pc) {
        case 0x1f1eb8u: goto label_1f1eb8;
        case 0x1f1ef0u: goto label_1f1ef0;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f28u: goto label_1f1f28;
        case 0x1f1f34u: goto label_1f1f34;
        case 0x1f1f70u: goto label_1f1f70;
        default: break;
    }

    ctx->pc = 0x1f1e50u;

    // 0x1f1e50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1e54: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1e54u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1e58: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e60: 0x0  nop
    ctx->pc = 0x1f1e60u;
    // NOP
    // 0x1f1e64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1e68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1e6c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1e70: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x1f1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x1f1e74: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f1e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f1e78: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1f1e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f1e7c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e80: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e84: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e88: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x1f1e8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1e90: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1f1e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f1e94: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f1e98: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f1e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1e9c: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x1f1e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1ea0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ea4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1ea8: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x1f1ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1f1eac: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1f1eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1f1eb0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x1F1EB0u;
    SET_GPR_U32(ctx, 31, 0x1F1EB8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x1F1EB0u, 0x1F1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EB8u;
label_1f1eb8:
    // 0x1f1eb8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ebc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1ebcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1ec0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1ec8: 0x0  nop
    ctx->pc = 0x1f1ec8u;
    // NOP
    // 0x1f1ecc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f1eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1ed0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ed4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1ed8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1edc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1ee0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1f1ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1ee4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1ee4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1ee8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1EE8u;
    SET_GPR_U32(ctx, 31, 0x1F1EF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1EE8u, 0x1F1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EF0u;
label_1f1ef0:
    // 0x1f1ef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1ef4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f1ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f1ef8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1efc: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f1efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1f00: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1f04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1f04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1f08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1F08u;
    SET_GPR_U32(ctx, 31, 0x1F1F10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1F08u, 0x1F1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f14: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f1f18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f1f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1f20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F1F20u;
    SET_GPR_U32(ctx, 31, 0x1F1F28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F1F20u, 0x1F1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F28u;
label_1f1f28:
    // 0x1f1f28: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f2c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F1F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F34u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F1F2Cu, 0x1F1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F34u;
label_1f1f34:
    // 0x1f1f34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f38: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x1f1f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x1f1f3c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F1F3Cu;
    {
        const bool branch_taken_0x1f1f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f3c) {
            ctx->pc = 0x1F1FD4u;
            return;
        }
    }
    ctx->pc = 0x1F1F44u;
    // 0x1f1f44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1f48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f4c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f1f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1f50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f54: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f1f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f1f5c: 0x24063c29  addiu       $a2, $zero, 0x3C29
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15401));
    // 0x1f1f60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1f64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f1f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1f68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F1F68u;
    SET_GPR_U32(ctx, 31, 0x1F1F70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F1F68u, 0x1F1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F70u;
label_1f1f70:
    // 0x1f1f70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1f74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1f7c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f1f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f1f80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f1f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1f88: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1f90: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f1f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f1f94: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1f1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1f1f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1f9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1fa4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f1fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f1fa8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f1fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1fb0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1fb8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f1fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f1fbc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fc0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1fc4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f1fc8: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f1fcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f1fd0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1f1fd4u;
}
