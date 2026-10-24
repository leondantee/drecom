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

// Function: R106_sword_move
// Address: 0x27dce0 - 0x27e084
void R106_sword_move_0x27dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_sword_move_0x27dce0");
#endif

    switch (ctx->pc) {
        case 0x27df48u: goto label_27df48;
        case 0x27e054u: goto label_27e054;
        case 0x27e070u: goto label_27e070;
        default: break;
    }

    ctx->pc = 0x27dce0u;

    // 0x27dce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27dce4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27dce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27dcec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dcf0: 0x8c30f9fc  lw          $s0, -0x604($at)
    ctx->pc = 0x27dcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9FCu));
    // 0x27dcf4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dcf8: 0x3c024692  lui         $v0, 0x4692
    ctx->pc = 0x27dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18066 << 16));
    // 0x27dcfc: 0x34425400  ori         $v0, $v0, 0x5400
    ctx->pc = 0x27dcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    // 0x27dd00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd04: 0x0  nop
    ctx->pc = 0x27dd04u;
    // NOP
    // 0x27dd08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27dd08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd0c: 0x0  nop
    ctx->pc = 0x27dd0cu;
    // NOP
    // 0x27dd10: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x27DD10u;
    {
        const bool branch_taken_0x27dd10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dd10) {
            ctx->pc = 0x27DD44u;
            goto label_27dd44;
        }
    }
    ctx->pc = 0x27DD18u;
    // 0x27dd18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dd1c: 0xc4211b50  lwc1        $f1, 0x1B50($at)
    ctx->pc = 0x27dd1cu;
    { uint32_t bits = FAST_READ32(0x621B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd20: 0x3c023d61  lui         $v0, 0x3D61
    ctx->pc = 0x27dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15713 << 16));
    // 0x27dd24: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x27dd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x27dd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd2c: 0x0  nop
    ctx->pc = 0x27dd2cu;
    // NOP
    // 0x27dd30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27dd30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27dd34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dd38: 0xe4201b50  swc1        $f0, 0x1B50($at)
    ctx->pc = 0x27dd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B50u, _value); } while (0); }
    // 0x27dd3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27DD3Cu;
    {
        const bool branch_taken_0x27dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dd3c) {
            ctx->pc = 0x27DD68u;
            goto label_27dd68;
        }
    }
    ctx->pc = 0x27DD44u;
label_27dd44:
    // 0x27dd44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dd48: 0xc4211b50  lwc1        $f1, 0x1B50($at)
    ctx->pc = 0x27dd48u;
    { uint32_t bits = FAST_READ32(0x621B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd4c: 0x3c023d61  lui         $v0, 0x3D61
    ctx->pc = 0x27dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15713 << 16));
    // 0x27dd50: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x27dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x27dd54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd58: 0x0  nop
    ctx->pc = 0x27dd58u;
    // NOP
    // 0x27dd5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27dd5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27dd60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dd64: 0xe4201b50  swc1        $f0, 0x1B50($at)
    ctx->pc = 0x27dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B50u, _value); } while (0); }
label_27dd68:
    // 0x27dd68: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd6c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x27dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x27dd70: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x27dd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd78: 0x0  nop
    ctx->pc = 0x27dd78u;
    // NOP
    // 0x27dd7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27dd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27dd80: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x27dd84: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd88: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x27dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x27dd8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27dd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd94: 0x0  nop
    ctx->pc = 0x27dd94u;
    // NOP
    // 0x27dd98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27dd98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd9c: 0x0  nop
    ctx->pc = 0x27dd9cu;
    // NOP
    // 0x27dda0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27DDA0u;
    {
        const bool branch_taken_0x27dda0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dda0) {
            ctx->pc = 0x27DDC4u;
            goto label_27ddc4;
        }
    }
    ctx->pc = 0x27DDA8u;
    // 0x27dda8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x27dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ddac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x27ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x27ddb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27ddb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddb8: 0x0  nop
    ctx->pc = 0x27ddb8u;
    // NOP
    // 0x27ddbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ddc0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x27ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_27ddc4:
    // 0x27ddc4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ddc8: 0x3c024691  lui         $v0, 0x4691
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18065 << 16));
    // 0x27ddcc: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x27ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x27ddd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddd4: 0x0  nop
    ctx->pc = 0x27ddd4u;
    // NOP
    // 0x27ddd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27ddd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dddc: 0x0  nop
    ctx->pc = 0x27dddcu;
    // NOP
    // 0x27dde0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27DDE0u;
    {
        const bool branch_taken_0x27dde0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dde0) {
            ctx->pc = 0x27DE08u;
            goto label_27de08;
        }
    }
    ctx->pc = 0x27DDE8u;
    // 0x27dde8: 0x3c024691  lui         $v0, 0x4691
    ctx->pc = 0x27dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18065 << 16));
    // 0x27ddec: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x27ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x27ddf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddf4: 0x0  nop
    ctx->pc = 0x27ddf4u;
    // NOP
    // 0x27ddf8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27ddf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27ddfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27ddfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de04: 0xe4201b50  swc1        $f0, 0x1B50($at)
    ctx->pc = 0x27de04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B50u, _value); } while (0); }
label_27de08:
    // 0x27de08: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de10: 0xc4201b50  lwc1        $f0, 0x1B50($at)
    ctx->pc = 0x27de10u;
    { uint32_t bits = FAST_READ32(0x621B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27de14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27de18: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27de1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de20: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de20u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de24: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27de28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27de28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27de2c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27DE2Cu;
    {
        const bool branch_taken_0x27de2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27de2c) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DE34u;
    // 0x27de34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de38: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de38u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de3c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x27de40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de44: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27de48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de4c: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de4cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27de54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27de54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27de58: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DE58u;
    {
        const bool branch_taken_0x27de58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x27de58) {
            ctx->pc = 0x27DE80u;
            goto label_27de80;
        }
    }
    ctx->pc = 0x27DE60u;
    // 0x27de60: 0x2402fe20  addiu       $v0, $zero, -0x1E0
    ctx->pc = 0x27de60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966816));
    // 0x27de64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de68: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27de6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de70: 0x0  nop
    ctx->pc = 0x27de70u;
    // NOP
    // 0x27de74: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27de74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27de78: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27DE78u;
    {
        const bool branch_taken_0x27de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de78) {
            ctx->pc = 0x27DF3Cu;
            goto label_27df3c;
        }
    }
    ctx->pc = 0x27DE80u;
label_27de80:
    // 0x27de80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27de80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27de84: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27de84u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27de88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27de88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de8c: 0x0  nop
    ctx->pc = 0x27de8cu;
    // NOP
    // 0x27de90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27de90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27de94: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x27de94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x27de98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de9c: 0x0  nop
    ctx->pc = 0x27de9cu;
    // NOP
    // 0x27dea0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27dea0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27dea4: 0x0  nop
    ctx->pc = 0x27dea4u;
    // NOP
    // 0x27dea8: 0x0  nop
    ctx->pc = 0x27dea8u;
    // NOP
    // 0x27deac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27deb0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27DEB0u;
    {
        const bool branch_taken_0x27deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27deb0) {
            ctx->pc = 0x27DF3Cu;
            goto label_27df3c;
        }
    }
    ctx->pc = 0x27DEB8u;
label_27deb8:
    // 0x27deb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27deb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27debc: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27debcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27dec0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x27dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x27dec4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27dec8: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27dec8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27decc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27ded0: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27ded0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27ded4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27ded8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27ded8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27dedc: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27DEDCu;
    {
        const bool branch_taken_0x27dedc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27dedc) {
            ctx->pc = 0x27DF08u;
            goto label_27df08;
        }
    }
    ctx->pc = 0x27DEE4u;
    // 0x27dee4: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x27dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x27dee8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27dee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27deec: 0xa4221b4e  sh          $v0, 0x1B4E($at)
    ctx->pc = 0x27deecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B4Eu, _value); } while (0);
    // 0x27def0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27def4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27def8: 0x0  nop
    ctx->pc = 0x27def8u;
    // NOP
    // 0x27defc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27df00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27DF00u;
    {
        const bool branch_taken_0x27df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27df00) {
            ctx->pc = 0x27DF3Cu;
            goto label_27df3c;
        }
    }
    ctx->pc = 0x27DF08u;
label_27df08:
    // 0x27df08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27df08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27df0c: 0x84221b4e  lh          $v0, 0x1B4E($at)
    ctx->pc = 0x27df0cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x621B4Eu));
    // 0x27df10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27df14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27df14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27df18: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x27df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x27df1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df20: 0x0  nop
    ctx->pc = 0x27df20u;
    // NOP
    // 0x27df24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27df24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27df28: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x27df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x27df2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df30: 0x0  nop
    ctx->pc = 0x27df30u;
    // NOP
    // 0x27df34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27df34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27df38: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27df38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27df3c:
    // 0x27df3c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x27df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27df40: 0xc09f824  jal         func_27E090
    ctx->pc = 0x27DF40u;
    SET_GPR_U32(ctx, 31, 0x27DF48u);
    ctx->pc = 0x27E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E090u, 0x27DF40u, 0x27DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF48u;
label_27df48:
    // 0x27df48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27df48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df4c: 0x0  nop
    ctx->pc = 0x27df4cu;
    // NOP
    // 0x27df50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27df54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x27df54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x27df58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df5c: 0x0  nop
    ctx->pc = 0x27df5cu;
    // NOP
    // 0x27df60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27df60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27df64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27df64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df68: 0x0  nop
    ctx->pc = 0x27df68u;
    // NOP
    // 0x27df6c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27df70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27df74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df78: 0x0  nop
    ctx->pc = 0x27df78u;
    // NOP
    // 0x27df7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27df7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27df80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27df84: 0x8c30f9fc  lw          $s0, -0x604($at)
    ctx->pc = 0x27df84u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9FCu));
    // 0x27df88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27df88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27df8c: 0x90221b4b  lbu         $v0, 0x1B4B($at)
    ctx->pc = 0x27df8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Bu));
    // 0x27df90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27df94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27df98: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x27df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x27df9c: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x27df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x27dfa0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dfa4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x27dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x27dfa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27dfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27dfac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27dfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfb4: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x27dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
    // 0x27dfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dfbc: 0x0  nop
    ctx->pc = 0x27dfbcu;
    // NOP
    // 0x27dfc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27dfc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27dfc4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27dfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27dfc8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dfcc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dfd0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dfd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dfd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dfdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dfe0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27dfe4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27dfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27dfe8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27dfec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27dff0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27dff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27dff8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27dffc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27e000: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27e004: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27e004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27e008: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27e008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27e00c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e010: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27e014: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x27e014u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x27e018: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27e018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27e01c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e020: 0x90221b4b  lbu         $v0, 0x1B4B($at)
    ctx->pc = 0x27e020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Bu));
    // 0x27e024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e02c: 0xa0221b4b  sb          $v0, 0x1B4B($at)
    ctx->pc = 0x27e02cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Bu, _value); } while (0);
    // 0x27e030: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27e030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27e034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e038: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x27e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e03c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27e03cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e040: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e044: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e048: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27e048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e04c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x27E04Cu;
    SET_GPR_U32(ctx, 31, 0x27E054u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x27E04Cu, 0x27E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E054u;
label_27e054:
    // 0x27e054: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27e054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27e058: 0x94221b46  lhu         $v0, 0x1B46($at)
    ctx->pc = 0x27e058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B46u));
    // 0x27e05c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27e05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27e060: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x27e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x27e064: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e068: 0xc05db20  jal         func_176C80
    ctx->pc = 0x27E068u;
    SET_GPR_U32(ctx, 31, 0x27E070u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x27E068u, 0x27E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E070u;
label_27e070:
    // 0x27e070: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27e070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E084u;
}
