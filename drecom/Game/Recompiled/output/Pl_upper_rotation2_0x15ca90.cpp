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

// Function: Pl_upper_rotation2
// Address: 0x15ca90 - 0x15cc88
void Pl_upper_rotation2_0x15ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_upper_rotation2_0x15ca90");
#endif

    ctx->pc = 0x15ca90u;

    // 0x15ca90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ca94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15ca98: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x15ca98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15ca9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15caa0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15caa4: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x15caa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x15caa8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15caa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15caac: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x15caacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cab4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cab8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cabc: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x15cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x15cac0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15cac4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15cac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cac8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cacc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15caccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cad0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cad4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cad8: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x15cad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x15cadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cae4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cae8: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x15cae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x15caec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15caf0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15caf4: 0x94830460  lhu         $v1, 0x460($a0)
    ctx->pc = 0x15caf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x15caf8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15cafc: 0xa4830460  sh          $v1, 0x460($a0)
    ctx->pc = 0x15cafcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1120), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cb00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cb00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cb04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb08: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb0c: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x15cb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x15cb10: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15cb14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15cb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cb18: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15cb1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cb20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb24: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb28: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x15cb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
    // 0x15cb2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cb2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cb30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb34: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb38: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x15cb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
    // 0x15cb3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb40: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb44: 0x94831400  lhu         $v1, 0x1400($a0)
    ctx->pc = 0x15cb44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x15cb48: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15cb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15cb4c: 0xa4831400  sh          $v1, 0x1400($a0)
    ctx->pc = 0x15cb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5120), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cb50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cb54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb58: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb5c: 0xe46013dc  swc1        $f0, 0x13DC($v1)
    ctx->pc = 0x15cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5084), bits); }
    // 0x15cb60: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15cb64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15cb64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cb68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15cb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cb70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb74: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb78: 0xe46013e0  swc1        $f0, 0x13E0($v1)
    ctx->pc = 0x15cb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5088), bits); }
    // 0x15cb7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cb7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cb80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb84: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb88: 0xe46013e4  swc1        $f0, 0x13E4($v1)
    ctx->pc = 0x15cb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5092), bits); }
    // 0x15cb8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb90: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cb94: 0x94831590  lhu         $v1, 0x1590($a0)
    ctx->pc = 0x15cb94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5520)));
    // 0x15cb98: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15cb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15cb9c: 0xa4831590  sh          $v1, 0x1590($a0)
    ctx->pc = 0x15cb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5520), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cba4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cba8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cbac: 0xe460156c  swc1        $f0, 0x156C($v1)
    ctx->pc = 0x15cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5484), bits); }
    // 0x15cbb0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15cbb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15cbb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cbb8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cbbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15cbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cbc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cbc4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cbc8: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x15cbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x15cbcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cbccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cbd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cbd4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cbd8: 0xe4601574  swc1        $f0, 0x1574($v1)
    ctx->pc = 0x15cbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5492), bits); }
    // 0x15cbdc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cbe0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cbe4: 0x948305f0  lhu         $v1, 0x5F0($a0)
    ctx->pc = 0x15cbe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1520)));
    // 0x15cbe8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15cbec: 0xa48305f0  sh          $v1, 0x5F0($a0)
    ctx->pc = 0x15cbecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1520), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cbf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cbf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cbf8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cbfc: 0xe46005cc  swc1        $f0, 0x5CC($v1)
    ctx->pc = 0x15cbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1484), bits); }
    // 0x15cc00: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15cc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15cc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cc08: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cc0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15cc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cc10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc14: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cc18: 0xe46005d0  swc1        $f0, 0x5D0($v1)
    ctx->pc = 0x15cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1488), bits); }
    // 0x15cc1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cc20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc24: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cc28: 0xe46005d4  swc1        $f0, 0x5D4($v1)
    ctx->pc = 0x15cc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1492), bits); }
    // 0x15cc2c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc30: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x15cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cc34: 0x94830780  lhu         $v1, 0x780($a0)
    ctx->pc = 0x15cc34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1920)));
    // 0x15cc38: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x15cc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x15cc3c: 0xa4830780  sh          $v1, 0x780($a0)
    ctx->pc = 0x15cc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1920), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cc40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cc40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cc44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc48: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cc4c: 0xe460075c  swc1        $f0, 0x75C($v1)
    ctx->pc = 0x15cc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1884), bits); }
    // 0x15cc50: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15cc54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15cc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cc58: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x15cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cc5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15cc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cc60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc64: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cc68: 0xe4600760  swc1        $f0, 0x760($v1)
    ctx->pc = 0x15cc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1888), bits); }
    // 0x15cc6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cc70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc74: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x15cc78: 0xe4600764  swc1        $f0, 0x764($v1)
    ctx->pc = 0x15cc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1892), bits); }
    // 0x15cc7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15cc80: 0x3e00008  jr          $ra
    ctx->pc = 0x15CC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CC88u;
}
