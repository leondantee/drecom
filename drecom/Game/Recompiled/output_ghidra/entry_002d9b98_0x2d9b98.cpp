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

// Function: entry_002d9b98
// Address: 0x2d9b98 - 0x2d9d5c
void entry_002d9b98_0x2d9b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9b98_0x2d9b98");
#endif

    switch (ctx->pc) {
        case 0x2d9bfcu: goto label_2d9bfc;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9cf4u: goto label_2d9cf4;
        default: break;
    }

    ctx->pc = 0x2d9b98u;

    // 0x2d9b98: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2d9b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d9b9c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D9B9Cu;
    {
        const bool branch_taken_0x2d9b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b9c) {
            ctx->pc = 0x2D9B50u;
            return;
        }
    }
    ctx->pc = 0x2D9BA4u;
    // 0x2d9ba4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9ba8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d9bac: 0x24573390  addiu       $s7, $v0, 0x3390
    ctx->pc = 0x2d9bacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x2d9bb0: 0x96e20140  lhu         $v0, 0x140($s7)
    ctx->pc = 0x2d9bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 320)));
    // 0x2d9bb4: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x2d9bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x2d9bb8: 0xa6e20140  sh          $v0, 0x140($s7)
    ctx->pc = 0x2d9bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9bbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9bc4: 0x0  nop
    ctx->pc = 0x2d9bc4u;
    // NOP
    // 0x2d9bc8: 0xe6e00128  swc1        $f0, 0x128($s7)
    ctx->pc = 0x2d9bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 296), bits); }
    // 0x2d9bcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9bd4: 0x0  nop
    ctx->pc = 0x2d9bd4u;
    // NOP
    // 0x2d9bd8: 0xe6e0012c  swc1        $f0, 0x12C($s7)
    ctx->pc = 0x2d9bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 300), bits); }
    // 0x2d9bdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9be4: 0x0  nop
    ctx->pc = 0x2d9be4u;
    // NOP
    // 0x2d9be8: 0xe6e00130  swc1        $f0, 0x130($s7)
    ctx->pc = 0x2d9be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 304), bits); }
    // 0x2d9bec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9bf0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x2d9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d9bf4: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2D9BF4u;
    SET_GPR_U32(ctx, 31, 0x2D9BFCu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2D9BF4u, 0x2D9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BFCu;
label_2d9bfc:
    // 0x2d9bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c00: 0x0  nop
    ctx->pc = 0x2d9c00u;
    // NOP
    // 0x2d9c04: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x2d9c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x2d9c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c10: 0x0  nop
    ctx->pc = 0x2d9c10u;
    // NOP
    // 0x2d9c14: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x2d9c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x2d9c18: 0xa24000d2  sb          $zero, 0xD2($s2)
    ctx->pc = 0x2d9c18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 210), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c1c: 0xa24000ce  sb          $zero, 0xCE($s2)
    ctx->pc = 0x2d9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c20: 0xa24000d5  sb          $zero, 0xD5($s2)
    ctx->pc = 0x2d9c20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c24: 0xa24000d6  sb          $zero, 0xD6($s2)
    ctx->pc = 0x2d9c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c28: 0xa24000d8  sb          $zero, 0xD8($s2)
    ctx->pc = 0x2d9c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c2c: 0xa24000d9  sb          $zero, 0xD9($s2)
    ctx->pc = 0x2d9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c34: 0x0  nop
    ctx->pc = 0x2d9c34u;
    // NOP
    // 0x2d9c38: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x2d9c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x2d9c3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c40: 0x0  nop
    ctx->pc = 0x2d9c40u;
    // NOP
    // 0x2d9c44: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x2d9c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x2d9c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c4c: 0x0  nop
    ctx->pc = 0x2d9c4cu;
    // NOP
    // 0x2d9c50: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x2d9c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2d9c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c58: 0x0  nop
    ctx->pc = 0x2d9c58u;
    // NOP
    // 0x2d9c5c: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x2d9c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2d9c60: 0xa24000db  sb          $zero, 0xDB($s2)
    ctx->pc = 0x2d9c60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c64: 0xa24000da  sb          $zero, 0xDA($s2)
    ctx->pc = 0x2d9c64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 218), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9c68: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x2d9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x2d9c6c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9c70: 0x24438b50  addiu       $v1, $v0, -0x74B0
    ctx->pc = 0x2d9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937424));
    // 0x2d9c74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9c78: 0xac430354  sw          $v1, 0x354($v0)
    ctx->pc = 0x2d9c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 3));
    // 0x2d9c7c: 0xa64000c0  sh          $zero, 0xC0($s2)
    ctx->pc = 0x2d9c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9c80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2d9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9c84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9c88: 0xa0431218  sb          $v1, 0x1218($v0)
    ctx->pc = 0x2d9c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4632), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9c8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9c90: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d9c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d9c94: 0x24451214  addiu       $a1, $v0, 0x1214
    ctx->pc = 0x2d9c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4628));
    // 0x2d9c98: 0xc06299c  jal         func_18A670
    ctx->pc = 0x2D9C98u;
    SET_GPR_U32(ctx, 31, 0x2D9CA0u);
    ctx->pc = 0x18A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A670u, 0x2D9C98u, 0x2D9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CA0u;
label_2d9ca0:
    // 0x2d9ca0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9ca8: 0x0  nop
    ctx->pc = 0x2d9ca8u;
    // NOP
    // 0x2d9cac: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x2d9cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x2d9cb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cb8: 0x0  nop
    ctx->pc = 0x2d9cb8u;
    // NOP
    // 0x2d9cbc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2d9cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2d9cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cc4: 0x0  nop
    ctx->pc = 0x2d9cc4u;
    // NOP
    // 0x2d9cc8: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x2d9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2d9ccc: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x2d9cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2d9cd0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2d9cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2d9cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9cd8: 0x0  nop
    ctx->pc = 0x2d9cd8u;
    // NOP
    // 0x2d9cdc: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2d9cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2d9ce0: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2d9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2d9ce4: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2d9ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2d9ce8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2d9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d9cec: 0xc05da88  jal         func_176A20
    ctx->pc = 0x2D9CECu;
    SET_GPR_U32(ctx, 31, 0x2D9CF4u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x2D9CECu, 0x2D9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CF4u;
label_2d9cf4:
    // 0x2d9cf4: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2d9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x2d9cf8: 0xa24000dd  sb          $zero, 0xDD($s2)
    ctx->pc = 0x2d9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9cfc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d00: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x2d9d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2d9d04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d9d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d9d08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d9d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d9d0c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9D0Cu;
    {
        const bool branch_taken_0x2d9d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d0c) {
            ctx->pc = 0x2D9D5Cu;
            return;
        }
    }
    ctx->pc = 0x2D9D14u;
    // 0x2d9d14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d9d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9d18: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d9d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d9d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d24: 0x8fb600b8  lw          $s6, 0xB8($sp)
    ctx->pc = 0x2d9d24u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d28: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x2d9d28u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9d2c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d9d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9d34: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d9d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9d3c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d9d44: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9d48: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d4c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2d9d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9d50: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x2d9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x2d9d54: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9D54u;
    {
        const bool branch_taken_0x2d9d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d54) {
            ctx->pc = 0x2D9DB4u;
            return;
        }
    }
    ctx->pc = 0x2D9D5Cu;
}
