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

// Function: entry_00133e28
// Address: 0x133e28 - 0x133ef8
void entry_00133e28_0x133e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e28_0x133e28");
#endif

    switch (ctx->pc) {
        case 0x133e58u: goto label_133e58;
        case 0x133ec0u: goto label_133ec0;
        case 0x133eccu: goto label_133ecc;
        default: break;
    }

    ctx->pc = 0x133e28u;

    // 0x133e28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e2c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x133e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e34: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x133e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x133e38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x133e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x133e44: 0x2406051e  addiu       $a2, $zero, 0x51E
    ctx->pc = 0x133e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x133e48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x133e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133e50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133E50u;
    SET_GPR_U32(ctx, 31, 0x133E58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133E50u, 0x133E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E58u;
label_133e58:
    // 0x133e58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133e5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e60: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x133e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x133e64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133e6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133e70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133e74: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133e7c: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x133e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x133e80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133e84: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x133e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x133e88: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x133e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x133e8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x133e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x133e90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133e94: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x133e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x133e98: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x133e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x133e9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x133e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x133ea0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x133ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133ea4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ea8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x133eac: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x133eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x133eb0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x133eb4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x133eb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133eb8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x133EB8u;
    SET_GPR_U32(ctx, 31, 0x133EC0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x133EB8u, 0x133EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133EC0u;
label_133ec0:
    // 0x133ec0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ec4: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x133EC4u;
    SET_GPR_U32(ctx, 31, 0x133ECCu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x133EC4u, 0x133ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133ECCu;
label_133ecc:
    // 0x133ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133ed0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ed4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133ed8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x133ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x133edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133ee0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ee4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x133ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x133ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133eec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133ef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133ef4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133ef8u;
}
