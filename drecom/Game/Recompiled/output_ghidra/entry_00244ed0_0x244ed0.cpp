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

// Function: entry_00244ed0
// Address: 0x244ed0 - 0x245014
void entry_00244ed0_0x244ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244ed0_0x244ed0");
#endif

    switch (ctx->pc) {
        case 0x244f40u: goto label_244f40;
        case 0x244f64u: goto label_244f64;
        case 0x244facu: goto label_244fac;
        case 0x244fd0u: goto label_244fd0;
        default: break;
    }

    ctx->pc = 0x244ed0u;

    // 0x244ed0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x244ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244ed4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x244ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x244ed8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x244edc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x244edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244ee4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x244ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ee8: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x244ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x244eec: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x244eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x244ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244ef4: 0x0  nop
    ctx->pc = 0x244ef4u;
    // NOP
    // 0x244ef8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244ef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244efc: 0x0  nop
    ctx->pc = 0x244efcu;
    // NOP
    // 0x244f00: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x244F00u;
    {
        const bool branch_taken_0x244f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244f00) {
            ctx->pc = 0x245080u;
            return;
        }
    }
    ctx->pc = 0x244F08u;
    // 0x244f08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244f0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244f18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f1c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x244f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244f20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f24: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244f28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x244f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244f30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244f38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244F38u;
    SET_GPR_U32(ctx, 31, 0x244F40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244F38u, 0x244F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F40u;
label_244f40:
    // 0x244f40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244f44: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x244f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x244f48: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x244f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x244f4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x244f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x244f50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244f50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244f54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f58: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x244f58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244f5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244F5Cu;
    SET_GPR_U32(ctx, 31, 0x244F64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244F5Cu, 0x244F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F64u;
label_244f64:
    // 0x244f64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244f68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244f6c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x244F6Cu;
    {
        const bool branch_taken_0x244f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244f6c) {
            ctx->pc = 0x245014u;
            return;
        }
    }
    ctx->pc = 0x244F74u;
    // 0x244f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244f78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f7c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244f80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x244f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244f84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f88: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x244f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244f8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244f94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244f98: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x244f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244f9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244fa0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244fa4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244FA4u;
    SET_GPR_U32(ctx, 31, 0x244FACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244FA4u, 0x244FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FACu;
label_244fac:
    // 0x244fac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244fb0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x244fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x244fb4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x244fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x244fb8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x244fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x244fbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244fbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244fc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244fc4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x244fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244fc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244FC8u;
    SET_GPR_U32(ctx, 31, 0x244FD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244FC8u, 0x244FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FD0u;
label_244fd0:
    // 0x244fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244fd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244fd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x244FD8u;
    {
        const bool branch_taken_0x244fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244fd8) {
            ctx->pc = 0x245014u;
            return;
        }
    }
    ctx->pc = 0x244FE0u;
    // 0x244fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244fe8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244fec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x244fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244ff0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244ff4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x244ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244ff8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x244ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244ffc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245000: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x245000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x245004: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245008: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x24500c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245010: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x245014u;
}
