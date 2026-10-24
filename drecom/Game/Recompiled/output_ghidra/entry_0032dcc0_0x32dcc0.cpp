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

// Function: entry_0032dcc0
// Address: 0x32dcc0 - 0x32decc
void entry_0032dcc0_0x32dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032dcc0_0x32dcc0");
#endif

    switch (ctx->pc) {
        case 0x32dd4cu: goto label_32dd4c;
        case 0x32dd64u: goto label_32dd64;
        case 0x32dda4u: goto label_32dda4;
        case 0x32ddbcu: goto label_32ddbc;
        case 0x32ddfcu: goto label_32ddfc;
        case 0x32de14u: goto label_32de14;
        case 0x32de54u: goto label_32de54;
        case 0x32de6cu: goto label_32de6c;
        default: break;
    }

    ctx->pc = 0x32dcc0u;

    // 0x32dcc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32dcc4: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32dcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32dcc8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32dccc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x32dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32dcd0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32dcd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32dcd8: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x32dcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32dcdc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32dce0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32dce4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32dce8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32dcec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dcf0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dcf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32dcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32dcf8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dcfc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32dd00: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd04: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32dd08: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd0c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32dd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32dd10: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd14: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32dd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32dd18: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd1c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32dd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32dd20: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd24: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32dd28: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd2c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32dd30: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32dd34: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x32dd34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32dd38: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32dd38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dd3c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd40: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dd40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dd44: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DD44u;
    SET_GPR_U32(ctx, 31, 0x32DD4Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DD44u, 0x32DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD4Cu;
label_32dd4c:
    // 0x32dd4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32dd50: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32dd54: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32dd54u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32dd58: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32dd5c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DD5Cu;
    SET_GPR_U32(ctx, 31, 0x32DD64u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DD5Cu, 0x32DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD64u;
label_32dd64:
    // 0x32dd64: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32dd68: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32dd6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32dd70: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32dd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32dd74: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32dd78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dd7c: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x32dd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32dd80: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32dd84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dd88: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32dd8c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32dd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32dd90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32dd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dd94: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd98: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dd98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dd9c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DD9Cu;
    SET_GPR_U32(ctx, 31, 0x32DDA4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DD9Cu, 0x32DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDA4u;
label_32dda4:
    // 0x32dda4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32dda8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32ddac: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32ddacu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32ddb0: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32ddb4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DDB4u;
    SET_GPR_U32(ctx, 31, 0x32DDBCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DDB4u, 0x32DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDBCu;
label_32ddbc:
    // 0x32ddbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32ddc0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x32ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32ddc4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32ddc8: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x32ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32ddcc: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x32ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32ddd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32ddd4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x32ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32ddd8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32dddc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dde0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32dde4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32dde8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32dde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ddec: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ddf0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ddf0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ddf4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DDF4u;
    SET_GPR_U32(ctx, 31, 0x32DDFCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DDF4u, 0x32DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDFCu;
label_32ddfc:
    // 0x32ddfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32de00: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32de04: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32de04u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32de08: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32de0c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DE0Cu;
    SET_GPR_U32(ctx, 31, 0x32DE14u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DE0Cu, 0x32DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE14u;
label_32de14:
    // 0x32de14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32de14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32de18: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32de1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32de20: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x32de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32de24: 0x2606003c  addiu       $a2, $s0, 0x3C
    ctx->pc = 0x32de24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32de28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32de28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32de2c: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x32de2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32de30: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x32de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32de34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32de34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32de38: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32de38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32de3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32de40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32de40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32de44: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32de48: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32de48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32de4c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DE4Cu;
    SET_GPR_U32(ctx, 31, 0x32DE54u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DE4Cu, 0x32DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE54u;
label_32de54:
    // 0x32de54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32de54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32de58: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x32de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32de5c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x32de5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32de60: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32de64: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DE64u;
    SET_GPR_U32(ctx, 31, 0x32DE6Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DE64u, 0x32DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE6Cu;
label_32de6c:
    // 0x32de6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32de70: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32de74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32de74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32de78: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32de78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32de7c: 0x2602004c  addiu       $v0, $s0, 0x4C
    ctx->pc = 0x32de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32de80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32de80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32de84: 0x341efffb  ori         $fp, $zero, 0xFFFB
    ctx->pc = 0x32de84u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32de88: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x32de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32de8c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x32de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x32de90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32de94: 0x2442e870  addiu       $v0, $v0, -0x1790
    ctx->pc = 0x32de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x32de98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32de98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32de9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32dea0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x32dea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32dea4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32dea8: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32dea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32deac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DEACu;
    {
        const bool branch_taken_0x32deac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32deac) {
            ctx->pc = 0x32DECCu;
            return;
        }
    }
    ctx->pc = 0x32DEB4u;
    // 0x32deb4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32deb8: 0x24621a14  addiu       $v0, $v1, 0x1A14
    ctx->pc = 0x32deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x32debc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32debcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dec0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32dec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32dec4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32DEC4u;
    SET_GPR_U32(ctx, 31, 0x32DECCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32DEC4u, 0x32DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DECCu;
}
