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

// Function: caseD_5
// Address: 0x2a7130 - 0x2a7254
void caseD_5_0x2a7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2a7130");
#endif

    switch (ctx->pc) {
        case 0x2a7140u: goto label_2a7140;
        case 0x2a719cu: goto label_2a719c;
        case 0x2a71c8u: goto label_2a71c8;
        case 0x2a71e4u: goto label_2a71e4;
        case 0x2a7214u: goto label_2a7214;
        case 0x2a7250u: goto label_2a7250;
        default: break;
    }

    ctx->pc = 0x2a7130u;

    // 0x2a7130: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a7130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7134: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a7134u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a7138: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A7138u;
    SET_GPR_U32(ctx, 31, 0x2A7140u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A7138u, 0x2A7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7140u;
label_2a7140:
    // 0x2a7140: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7140u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7144: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7148: 0xc4e101a4  lwc1        $f1, 0x1A4($a3)
    ctx->pc = 0x2a7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a714c: 0x3c043ae1  lui         $a0, 0x3AE1
    ctx->pc = 0x2a714cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15073 << 16));
    // 0x2a7150: 0x3483fc78  ori         $v1, $a0, 0xFC78
    ctx->pc = 0x2a7150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64632);
    // 0x2a7154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7158: 0x0  nop
    ctx->pc = 0x2a7158u;
    // NOP
    // 0x2a715c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a715cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a7160: 0xe4e001a4  swc1        $f0, 0x1A4($a3)
    ctx->pc = 0x2a7160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 420), bits); }
    // 0x2a7164: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a7164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7168: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x2a7168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2a716c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a7170: 0xa4a71278  sh          $a3, 0x1278($a1)
    ctx->pc = 0x2a7170u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a7174: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7178: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2a7178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2a717c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a7180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a7180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a7184: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2a7184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a7188: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A7188u;
    {
        const bool branch_taken_0x2a7188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7188) {
            ctx->pc = 0x2A7254u;
            return;
        }
    }
    ctx->pc = 0x2A7190u;
    // 0x2a7190: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a7190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a7194: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A7194u;
    SET_GPR_U32(ctx, 31, 0x2A719Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A7194u, 0x2A719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A719Cu;
label_2a719c:
    // 0x2a719c: 0x3c05c2c8  lui         $a1, 0xC2C8
    ctx->pc = 0x2a719cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49864 << 16));
    // 0x2a71a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a71a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a71a4: 0x0  nop
    ctx->pc = 0x2a71a4u;
    // NOP
    // 0x2a71a8: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a71a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a71ac: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a71acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2a71b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a71b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a71b4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a71b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a71b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a71bc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a71bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a71c0: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A71C0u;
    SET_GPR_U32(ctx, 31, 0x2A71C8u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A71C0u, 0x2A71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71C8u;
label_2a71c8:
    // 0x2a71c8: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2a71c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
    // 0x2a71cc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a71ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a71d0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a71d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a71d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a71d8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a71d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a71dc: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A71DCu;
    SET_GPR_U32(ctx, 31, 0x2A71E4u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A71DCu, 0x2A71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A71E4u;
label_2a71e4:
    // 0x2a71e4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2a71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2a71e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a71ec: 0x0  nop
    ctx->pc = 0x2a71ecu;
    // NOP
    // 0x2a71f0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a71f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a71f4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2a71f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a71f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a71fc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a7200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7204: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a7208: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a720c: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A720Cu;
    SET_GPR_U32(ctx, 31, 0x2A7214u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A720Cu, 0x2A7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7214u;
label_2a7214:
    // 0x2a7214: 0x3c05c348  lui         $a1, 0xC348
    ctx->pc = 0x2a7214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49992 << 16));
    // 0x2a7218: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a7218u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a721c: 0x0  nop
    ctx->pc = 0x2a721cu;
    // NOP
    // 0x2a7220: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a7220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a7224: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x2a7224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
    // 0x2a7228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a7228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a722c: 0x0  nop
    ctx->pc = 0x2a722cu;
    // NOP
    // 0x2a7230: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a7230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a7234: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a7234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2a7238: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a7238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a723c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7240: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7244: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a7244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a7248: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A7248u;
    SET_GPR_U32(ctx, 31, 0x2A7250u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A7248u, 0x2A7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7250u;
label_2a7250:
    // 0x2a7250: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a7254u;
}
