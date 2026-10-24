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

// Function: entry_002e3c80
// Address: 0x2e3c80 - 0x2e3d70
void entry_002e3c80_0x2e3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3c80_0x2e3c80");
#endif

    switch (ctx->pc) {
        case 0x2e3c9cu: goto label_2e3c9c;
        case 0x2e3cc8u: goto label_2e3cc8;
        case 0x2e3ce8u: goto label_2e3ce8;
        case 0x2e3d48u: goto label_2e3d48;
        case 0x2e3d64u: goto label_2e3d64;
        default: break;
    }

    ctx->pc = 0x2e3c80u;

    // 0x2e3c80: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2e3c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e3c84: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E3C84u;
    {
        const bool branch_taken_0x2e3c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c84) {
            ctx->pc = 0x2E3C38u;
            return;
        }
    }
    ctx->pc = 0x2E3C8Cu;
    // 0x2e3c8c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3c90: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2e3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e3c94: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2E3C94u;
    SET_GPR_U32(ctx, 31, 0x2E3C9Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2E3C94u, 0x2E3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C9Cu;
label_2e3c9c:
    // 0x2e3c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3ca0: 0x0  nop
    ctx->pc = 0x2e3ca0u;
    // NOP
    // 0x2e3ca4: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x2e3ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x2e3ca8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3cb0: 0x0  nop
    ctx->pc = 0x2e3cb0u;
    // NOP
    // 0x2e3cb4: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x2e3cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x2e3cb8: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x2e3cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3cbc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3cc0: 0xc0b8fa4  jal         func_2E3E90
    ctx->pc = 0x2E3CC0u;
    SET_GPR_U32(ctx, 31, 0x2E3CC8u);
    ctx->pc = 0x2E3E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3E90u, 0x2E3CC0u, 0x2E3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CC8u;
label_2e3cc8:
    // 0x2e3cc8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3ccc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3cd0: 0xa0431218  sb          $v1, 0x1218($v0)
    ctx->pc = 0x2e3cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4632), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3cd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3cd8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3cdc: 0x24451214  addiu       $a1, $v0, 0x1214
    ctx->pc = 0x2e3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4628));
    // 0x2e3ce0: 0xc06299c  jal         func_18A670
    ctx->pc = 0x2E3CE0u;
    SET_GPR_U32(ctx, 31, 0x2E3CE8u);
    ctx->pc = 0x18A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A670u, 0x2E3CE0u, 0x2E3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CE8u;
label_2e3ce8:
    // 0x2e3ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3cec: 0x0  nop
    ctx->pc = 0x2e3cecu;
    // NOP
    // 0x2e3cf0: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x2e3cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x2e3cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3cfc: 0x0  nop
    ctx->pc = 0x2e3cfcu;
    // NOP
    // 0x2e3d00: 0xe64000dc  swc1        $f0, 0xDC($s2)
    ctx->pc = 0x2e3d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    // 0x2e3d04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3d0c: 0x0  nop
    ctx->pc = 0x2e3d0cu;
    // NOP
    // 0x2e3d10: 0xe64000bc  swc1        $f0, 0xBC($s2)
    ctx->pc = 0x2e3d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
    // 0x2e3d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3d18: 0x0  nop
    ctx->pc = 0x2e3d18u;
    // NOP
    // 0x2e3d1c: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2e3d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2e3d20: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2e3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2e3d24: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2e3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2e3d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3d2c: 0x0  nop
    ctx->pc = 0x2e3d2cu;
    // NOP
    // 0x2e3d30: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x2e3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x2e3d34: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2e3d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2e3d38: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x2e3d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x2e3d3c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x2e3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x2e3d40: 0xc05da88  jal         func_176A20
    ctx->pc = 0x2E3D40u;
    SET_GPR_U32(ctx, 31, 0x2E3D48u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x2E3D40u, 0x2E3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D48u;
label_2e3d48:
    // 0x2e3d48: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x2e3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x2e3d4c: 0xa24000ea  sb          $zero, 0xEA($s2)
    ctx->pc = 0x2e3d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 234), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3d50: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3d54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e3d58: 0x24458d10  addiu       $a1, $v0, -0x72F0
    ctx->pc = 0x2e3d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x2e3d5c: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x2E3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D64u);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x2E3D5Cu, 0x2E3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D64u;
label_2e3d64:
    // 0x2e3d64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e3d64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3d68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3D68u;
    {
        const bool branch_taken_0x2e3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d68) {
            ctx->pc = 0x2E3D80u;
            return;
        }
    }
    ctx->pc = 0x2E3D70u;
}
