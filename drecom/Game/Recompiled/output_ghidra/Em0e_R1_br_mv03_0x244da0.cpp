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

// Function: Em0e_R1_br_mv03
// Address: 0x244da0 - 0x245090
void Em0e_R1_br_mv03_0x244da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_br_mv03_0x244da0");
#endif

    switch (ctx->pc) {
        case 0x244df4u: goto label_244df4;
        case 0x244e18u: goto label_244e18;
        case 0x244e60u: goto label_244e60;
        case 0x244e84u: goto label_244e84;
        case 0x244f40u: goto label_244f40;
        case 0x244f64u: goto label_244f64;
        case 0x244facu: goto label_244fac;
        case 0x244fd0u: goto label_244fd0;
        case 0x24501cu: goto label_24501c;
        case 0x245064u: goto label_245064;
        default: break;
    }

    ctx->pc = 0x244da0u;

    // 0x244da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244da4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x244da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x244da8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x244da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x244dac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244db0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x244db4: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x244DB4u;
    {
        const bool branch_taken_0x244db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244db4) {
            ctx->pc = 0x244ED0u;
            goto label_244ed0;
        }
    }
    ctx->pc = 0x244DBCu;
    // 0x244dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244dc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244dc4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244dd0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x244dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244dd8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244ddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244de0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x244de0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244de4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244de8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244dec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244DECu;
    SET_GPR_U32(ctx, 31, 0x244DF4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244DECu, 0x244DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DF4u;
label_244df4:
    // 0x244df4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244df8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x244df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x244dfc: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x244dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x244e00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x244e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x244e04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244e04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244e08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e0c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x244e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244e10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244E10u;
    SET_GPR_U32(ctx, 31, 0x244E18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244E10u, 0x244E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E18u;
label_244e18:
    // 0x244e18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244e1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x244e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x244e20: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x244E20u;
    {
        const bool branch_taken_0x244e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244e20) {
            ctx->pc = 0x245080u;
            goto label_245080;
        }
    }
    ctx->pc = 0x244E28u;
    // 0x244e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244e2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e30: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244e34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x244e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244e38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e3c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x244e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244e40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e44: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e4c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x244e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244e50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e54: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244e58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244E58u;
    SET_GPR_U32(ctx, 31, 0x244E60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244E58u, 0x244E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E60u;
label_244e60:
    // 0x244e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244e64: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x244e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x244e68: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x244e6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x244e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x244e70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244e74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e78: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x244e78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244e7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244E7Cu;
    SET_GPR_U32(ctx, 31, 0x244E84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244E7Cu, 0x244E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E84u;
label_244e84:
    // 0x244e84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244e88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x244e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x244e8c: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x244E8Cu;
    {
        const bool branch_taken_0x244e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244e8c) {
            ctx->pc = 0x245080u;
            goto label_245080;
        }
    }
    ctx->pc = 0x244E94u;
    // 0x244e94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244e98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x244e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x244ea0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244ea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244ea8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x244ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x244eac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x244eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244eb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244eb4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x244eb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244ebc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x244ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244ec0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244ec4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x244ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x244ec8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x244EC8u;
    {
        const bool branch_taken_0x244ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ec8) {
            ctx->pc = 0x245080u;
            goto label_245080;
        }
    }
    ctx->pc = 0x244ED0u;
label_244ed0:
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
            goto label_245080;
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
            goto label_245014;
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
            goto label_245014;
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
label_245014:
    // 0x245014: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245014u;
    SET_GPR_U32(ctx, 31, 0x24501Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245014u, 0x24501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24501Cu;
label_24501c:
    // 0x24501c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245020: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x245020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x245024: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x245024u;
    {
        const bool branch_taken_0x245024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x245024) {
            ctx->pc = 0x245080u;
            goto label_245080;
        }
    }
    ctx->pc = 0x24502Cu;
    // 0x24502c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245034: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x245038: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24503c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245040: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245040u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245048: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x245048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24504c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245050: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245058: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x24505c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24505Cu;
    SET_GPR_U32(ctx, 31, 0x245064u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24505Cu, 0x245064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245064u;
label_245064:
    // 0x245064: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x245064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245068: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x245068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x24506c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x24506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x245070: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x245070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x245074: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245074u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x245078: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x245078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24507c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x24507cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_245080:
    // 0x245080: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x245080u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245084: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x245084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x245088: 0x3e00008  jr          $ra
    ctx->pc = 0x245088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245090u;
}
