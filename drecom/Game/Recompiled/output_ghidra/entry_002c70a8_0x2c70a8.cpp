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

// Function: entry_002c70a8
// Address: 0x2c70a8 - 0x2c720c
void entry_002c70a8_0x2c70a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c70a8_0x2c70a8");
#endif

    switch (ctx->pc) {
        case 0x2c712cu: goto label_2c712c;
        default: break;
    }

    ctx->pc = 0x2c70a8u;

    // 0x2c70a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c70a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c70ac: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c70acu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c70b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c70b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c70b8: 0x0  nop
    ctx->pc = 0x2c70b8u;
    // NOP
    // 0x2c70bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c70bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c70c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c70c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c70c4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c70c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70cc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2c70ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2c70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2c70d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c70d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c70d8: 0x0  nop
    ctx->pc = 0x2c70d8u;
    // NOP
    // 0x2c70dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c70dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c70e0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c70e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2c70e4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2c70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2c70e8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c70e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c70ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c70ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c70f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70f4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2c70f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70fc: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2c70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2c7100: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c7100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c7104: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2c7104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c7108: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c7108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c710c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2c710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7110: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x2c7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c7114: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c7114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c7118: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c7118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c711c: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2c7120: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x2c7120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2c7124: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C7124u;
    SET_GPR_U32(ctx, 31, 0x2C712Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C7124u, 0x2C712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C712Cu;
label_2c712c:
    // 0x2c712c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c7130: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c7130u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7134: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c713c: 0x0  nop
    ctx->pc = 0x2c713cu;
    // NOP
    // 0x2c7140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c7144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c7148: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c7148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c714c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7150: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c7154: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c7158: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2c7158u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c715c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C715Cu;
    {
        const bool branch_taken_0x2c715c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c715c) {
            ctx->pc = 0x2C7218u;
            return;
        }
    }
    ctx->pc = 0x2C7164u;
    // 0x2c7164: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7168: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c716c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c716cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7170: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c7170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c7174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7178: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c717c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7180: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c7184: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c718c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7190: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7194: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c7198: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c719c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71a0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c71a4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c71a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c71a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c71ac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c71acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c71b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71b4: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2c71b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c71b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c71c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c71c8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c71cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71d4: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x2c71d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c71d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71e0: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c71e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c71e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c71e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c71e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c71ec: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c71ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c71f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C71F0u;
    {
        const bool branch_taken_0x2c71f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c71f0) {
            ctx->pc = 0x2C720Cu;
            return;
        }
    }
    ctx->pc = 0x2C71F8u;
    // 0x2c71f8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c71fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c71fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7200: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7204: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7208: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    ctx->pc = 0x2c720cu;
}
