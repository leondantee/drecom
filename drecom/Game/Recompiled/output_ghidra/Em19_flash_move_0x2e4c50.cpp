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

// Function: Em19_flash_move
// Address: 0x2e4c50 - 0x2e4dec
void Em19_flash_move_0x2e4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_flash_move_0x2e4c50");
#endif

    switch (ctx->pc) {
        case 0x2e4d50u: goto label_2e4d50;
        case 0x2e4dccu: goto label_2e4dcc;
        default: break;
    }

    ctx->pc = 0x2e4c50u;

    // 0x2e4c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4c54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e4c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e4c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4c5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e4c60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4c64: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e4c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e4c68: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x2e4c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e4c6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e4c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e4c70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4c74: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E4C74u;
    {
        const bool branch_taken_0x2e4c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4c74) {
            ctx->pc = 0x2E4D7Cu;
            goto label_2e4d7c;
        }
    }
    ctx->pc = 0x2E4C7Cu;
    // 0x2e4c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4c80: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E4C80u;
    {
        const bool branch_taken_0x2e4c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4c80) {
            ctx->pc = 0x2E4CD4u;
            goto label_2e4cd4;
        }
    }
    ctx->pc = 0x2E4C88u;
    // 0x2e4c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4C88u;
    {
        const bool branch_taken_0x2e4c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c88) {
            ctx->pc = 0x2E4C98u;
            goto label_2e4c98;
        }
    }
    ctx->pc = 0x2E4C90u;
    // 0x2e4c90: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2E4C90u;
    {
        const bool branch_taken_0x2e4c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c90) {
            ctx->pc = 0x2E4DD8u;
            goto label_2e4dd8;
        }
    }
    ctx->pc = 0x2E4C98u;
label_2e4c98:
    // 0x2e4c98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4c9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4ca0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e4ca4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4ca8: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2E4CA8u;
    {
        const bool branch_taken_0x2e4ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ca8) {
            ctx->pc = 0x2E4DD8u;
            goto label_2e4dd8;
        }
    }
    ctx->pc = 0x2E4CB0u;
    // 0x2e4cb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cb4: 0x0  nop
    ctx->pc = 0x2e4cb4u;
    // NOP
    // 0x2e4cb8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2e4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2e4cbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cc0: 0x0  nop
    ctx->pc = 0x2e4cc0u;
    // NOP
    // 0x2e4cc4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2e4cc8: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x2e4cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e4ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e4cd0: 0xa20200a8  sb          $v0, 0xA8($s0)
    ctx->pc = 0x2e4cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 2));
label_2e4cd4:
    // 0x2e4cd4: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2e4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4cd8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e4cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ce0: 0x0  nop
    ctx->pc = 0x2e4ce0u;
    // NOP
    // 0x2e4ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4ce8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2e4ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2e4cec: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4cf0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cf8: 0x0  nop
    ctx->pc = 0x2e4cf8u;
    // NOP
    // 0x2e4cfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4d00: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2e4d04: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d08: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d10: 0x0  nop
    ctx->pc = 0x2e4d10u;
    // NOP
    // 0x2e4d14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4d18: 0x0  nop
    ctx->pc = 0x2e4d18u;
    // NOP
    // 0x2e4d1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4D1Cu;
    {
        const bool branch_taken_0x2e4d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4d1c) {
            ctx->pc = 0x2E4D34u;
            goto label_2e4d34;
        }
    }
    ctx->pc = 0x2E4D24u;
    // 0x2e4d24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d2c: 0x0  nop
    ctx->pc = 0x2e4d2cu;
    // NOP
    // 0x2e4d30: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_2e4d34:
    // 0x2e4d34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4d38: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2e4d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4d3c: 0xc60d00a4  lwc1        $f13, 0xA4($s0)
    ctx->pc = 0x2e4d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4d40: 0xc60e00a4  lwc1        $f14, 0xA4($s0)
    ctx->pc = 0x2e4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4d44: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2e4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e4d48: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2E4D48u;
    SET_GPR_U32(ctx, 31, 0x2E4D50u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2E4D48u, 0x2E4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D50u;
label_2e4d50:
    // 0x2e4d50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4d54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4d58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e4d5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4d60: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4D60u;
    {
        const bool branch_taken_0x2e4d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d60) {
            ctx->pc = 0x2E4DD8u;
            goto label_2e4dd8;
        }
    }
    ctx->pc = 0x2E4D68u;
    // 0x2e4d68: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x2e4d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e4d6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e4d70: 0xa20300a8  sb          $v1, 0xA8($s0)
    ctx->pc = 0x2e4d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4d74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E4D74u;
    {
        const bool branch_taken_0x2e4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d74) {
            ctx->pc = 0x2E4DD8u;
            goto label_2e4dd8;
        }
    }
    ctx->pc = 0x2E4D7Cu;
label_2e4d7c:
    // 0x2e4d7c: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2e4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d88: 0x0  nop
    ctx->pc = 0x2e4d88u;
    // NOP
    // 0x2e4d8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e4d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e4d90: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2e4d94: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d9c: 0x0  nop
    ctx->pc = 0x2e4d9cu;
    // NOP
    // 0x2e4da0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4da4: 0x0  nop
    ctx->pc = 0x2e4da4u;
    // NOP
    // 0x2e4da8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E4DA8u;
    {
        const bool branch_taken_0x2e4da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4da8) {
            ctx->pc = 0x2E4DD4u;
            goto label_2e4dd4;
        }
    }
    ctx->pc = 0x2E4DB0u;
    // 0x2e4db0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e4db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4db4: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2e4db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4db8: 0xc60d00a4  lwc1        $f13, 0xA4($s0)
    ctx->pc = 0x2e4db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4dbc: 0xc60e00a4  lwc1        $f14, 0xA4($s0)
    ctx->pc = 0x2e4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4dc0: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2e4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e4dc4: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2E4DC4u;
    SET_GPR_U32(ctx, 31, 0x2E4DCCu);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2E4DC4u, 0x2E4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DCCu;
label_2e4dcc:
    // 0x2e4dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4DCCu;
    {
        const bool branch_taken_0x2e4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4dcc) {
            ctx->pc = 0x2E4DD8u;
            goto label_2e4dd8;
        }
    }
    ctx->pc = 0x2E4DD4u;
label_2e4dd4:
    // 0x2e4dd4: 0xa20000a8  sb          $zero, 0xA8($s0)
    ctx->pc = 0x2e4dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 0));
label_2e4dd8:
    // 0x2e4dd8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e4dd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4de0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e4de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e4de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4DECu;
}
