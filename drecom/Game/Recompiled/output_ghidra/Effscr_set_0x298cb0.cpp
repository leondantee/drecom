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

// Function: Effscr_set
// Address: 0x298cb0 - 0x298ee4
void Effscr_set_0x298cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Effscr_set_0x298cb0");
#endif

    switch (ctx->pc) {
        case 0x298cd4u: goto label_298cd4;
        case 0x298d44u: goto label_298d44;
        case 0x298d50u: goto label_298d50;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d68u: goto label_298d68;
        default: break;
    }

    ctx->pc = 0x298cb0u;

    // 0x298cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298cb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x298cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x298cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298cbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x298cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298cc0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x298cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x298cc4: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x298cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x298cc8: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x298cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x298ccc: 0xc0a630c  jal         func_298C30
    ctx->pc = 0x298CCCu;
    SET_GPR_U32(ctx, 31, 0x298CD4u);
    ctx->pc = 0x298C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C30u, 0x298CCCu, 0x298CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298CD4u;
label_298cd4:
    // 0x298cd4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x298cd4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x298cd8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x298cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x298cdc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x298cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x298ce0: 0x1203007b  beq         $s0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x298CE0u;
    {
        const bool branch_taken_0x298ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x298ce0) {
            ctx->pc = 0x298ED0u;
            goto label_298ed0;
        }
    }
    ctx->pc = 0x298CE8u;
    // 0x298ce8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x298ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x298cec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x298cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x298cf0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x298cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298cf4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x298cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x298cf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298cfc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x298cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x298d00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x298d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298d04: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x298d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x298d08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298d0c: 0x0  nop
    ctx->pc = 0x298d0cu;
    // NOP
    // 0x298d10: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x298d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x298d14: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x298d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x298d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x298d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298d1c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x298d1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298d20: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x298d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x298d24: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x298d24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x298d28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x298d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298d2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x298d2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298d30: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x298d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x298d34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x298d34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x298d38: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x298d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x298d3c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x298D3Cu;
    SET_GPR_U32(ctx, 31, 0x298D44u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x298D3Cu, 0x298D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D44u;
label_298d44:
    // 0x298d44: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x298d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x298d48: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x298D48u;
    SET_GPR_U32(ctx, 31, 0x298D50u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x298D48u, 0x298D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D50u;
label_298d50:
    // 0x298d50: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x298d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x298d54: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x298D54u;
    SET_GPR_U32(ctx, 31, 0x298D5Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x298D54u, 0x298D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D5Cu;
label_298d5c:
    // 0x298d5c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x298d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x298d60: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x298D60u;
    SET_GPR_U32(ctx, 31, 0x298D68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x298D60u, 0x298D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D68u;
label_298d68:
    // 0x298d68: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298d70: 0x0  nop
    ctx->pc = 0x298d70u;
    // NOP
    // 0x298d74: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x298d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x298d78: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298d80: 0x0  nop
    ctx->pc = 0x298d80u;
    // NOP
    // 0x298d84: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x298d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x298d88: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298d90: 0x0  nop
    ctx->pc = 0x298d90u;
    // NOP
    // 0x298d94: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x298d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x298d98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x298d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x298d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298da0: 0x0  nop
    ctx->pc = 0x298da0u;
    // NOP
    // 0x298da4: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x298da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x298da8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298db0: 0x0  nop
    ctx->pc = 0x298db0u;
    // NOP
    // 0x298db4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x298db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x298db8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298dc0: 0x0  nop
    ctx->pc = 0x298dc0u;
    // NOP
    // 0x298dc4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x298dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x298dc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298dd0: 0x0  nop
    ctx->pc = 0x298dd0u;
    // NOP
    // 0x298dd4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x298dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x298dd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298de0: 0x0  nop
    ctx->pc = 0x298de0u;
    // NOP
    // 0x298de4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x298de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x298de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298df0: 0x0  nop
    ctx->pc = 0x298df0u;
    // NOP
    // 0x298df4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x298df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x298df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e00: 0x0  nop
    ctx->pc = 0x298e00u;
    // NOP
    // 0x298e04: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x298e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x298e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e10: 0x0  nop
    ctx->pc = 0x298e10u;
    // NOP
    // 0x298e14: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x298e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x298e18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e20: 0x0  nop
    ctx->pc = 0x298e20u;
    // NOP
    // 0x298e24: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x298e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x298e28: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x298e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x298e2c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x298e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x298e30: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x298e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x298e34: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x298e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x298e38: 0xa20001c4  sb          $zero, 0x1C4($s0)
    ctx->pc = 0x298e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 452), (uint8_t)GPR_U32(ctx, 0));
    // 0x298e3c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x298e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x298e40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x298e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x298e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e48: 0x0  nop
    ctx->pc = 0x298e48u;
    // NOP
    // 0x298e4c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x298e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x298e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e54: 0x0  nop
    ctx->pc = 0x298e54u;
    // NOP
    // 0x298e58: 0xe600018c  swc1        $f0, 0x18C($s0)
    ctx->pc = 0x298e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 396), bits); }
    // 0x298e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e60: 0x0  nop
    ctx->pc = 0x298e60u;
    // NOP
    // 0x298e64: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x298e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x298e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e70: 0x0  nop
    ctx->pc = 0x298e70u;
    // NOP
    // 0x298e74: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x298e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x298e78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e80: 0x0  nop
    ctx->pc = 0x298e80u;
    // NOP
    // 0x298e84: 0xe60001b4  swc1        $f0, 0x1B4($s0)
    ctx->pc = 0x298e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x298e88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x298e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x298e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298e90: 0x0  nop
    ctx->pc = 0x298e90u;
    // NOP
    // 0x298e94: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x298e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x298e98: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x298e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x298e9c: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x298e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x298ea0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x298ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298ea4: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x298ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x298ea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x298ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x298eac: 0xfe020168  sd          $v0, 0x168($s0)
    ctx->pc = 0x298eacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 2));
    // 0x298eb0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x298eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x298eb4: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x298eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
    // 0x298eb8: 0xfe020180  sd          $v0, 0x180($s0)
    ctx->pc = 0x298eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
    // 0x298ebc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x298ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x298ec0: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x298ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x298ec4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x298ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298ec8: 0xfe020160  sd          $v0, 0x160($s0)
    ctx->pc = 0x298ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 2));
    // 0x298ecc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x298eccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_298ed0:
    // 0x298ed0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x298ed0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ed8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x298ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x298edc: 0x3e00008  jr          $ra
    ctx->pc = 0x298EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EE4u;
}
