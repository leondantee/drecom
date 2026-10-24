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

// Function: entry_00368c90
// Address: 0x368c90 - 0x368d88
void entry_00368c90_0x368c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368c90_0x368c90");
#endif

    switch (ctx->pc) {
        case 0x368ce8u: goto label_368ce8;
        case 0x368cfcu: goto label_368cfc;
        case 0x368d48u: goto label_368d48;
        default: break;
    }

    ctx->pc = 0x368c90u;

    // 0x368c90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x368c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x368c94: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368c98: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x368c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x368c9c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368ca0: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x368ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x368ca4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x368ca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x368ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x368cac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x368cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x368cb0: 0x2442af30  addiu       $v0, $v0, -0x50D0
    ctx->pc = 0x368cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946608));
    // 0x368cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368cb8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x368cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368cbc: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x368cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x368cc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x368cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368cc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x368cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x368cc8: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x368cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x368ccc: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x368cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x368cd0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368cd4: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x368cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x368cd8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x368cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368cdc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x368cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x368ce0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x368CE0u;
    SET_GPR_U32(ctx, 31, 0x368CE8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x368CE0u, 0x368CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CE8u;
label_368ce8:
    // 0x368ce8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x368ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x368cec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x368cf0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x368cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368cf4: 0xc067844  jal         func_19E110
    ctx->pc = 0x368CF4u;
    SET_GPR_U32(ctx, 31, 0x368CFCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x368CF4u, 0x368CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368CFCu;
label_368cfc:
    // 0x368cfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x368cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x368d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d04: 0x0  nop
    ctx->pc = 0x368d04u;
    // NOP
    // 0x368d08: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x368d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x368d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d10: 0x0  nop
    ctx->pc = 0x368d10u;
    // NOP
    // 0x368d14: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x368d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x368d18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d1c: 0x0  nop
    ctx->pc = 0x368d1cu;
    // NOP
    // 0x368d20: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x368d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x368d24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x368d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x368d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d2c: 0x0  nop
    ctx->pc = 0x368d2cu;
    // NOP
    // 0x368d30: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x368d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x368d34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x368d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x368d38: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x368d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x368d3c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x368d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x368d40: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x368D40u;
    SET_GPR_U32(ctx, 31, 0x368D48u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x368D48u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x368D48u) { return; }
    ctx->pc = 0x368D48u;
label_368d48:
    // 0x368d48: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x368d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368d4c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x368d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x368d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d58: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x368d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x368d60: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x368d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368d64: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x368d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x368d6c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x368d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x368d70: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x368d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d74: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x368d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x368d78: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x368d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x368d7c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x368d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x368d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368d84: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x368d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x368d88u;
}
