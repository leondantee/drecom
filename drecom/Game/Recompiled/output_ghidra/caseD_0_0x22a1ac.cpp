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

// Function: caseD_0
// Address: 0x22a1ac - 0x22a2ec
void caseD_0_0x22a1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x22a1ac");
#endif

    switch (ctx->pc) {
        case 0x22a1c4u: goto label_22a1c4;
        case 0x22a278u: goto label_22a278;
        case 0x22a284u: goto label_22a284;
        default: break;
    }

    ctx->pc = 0x22a1acu;

    // 0x22a1ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a1b0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22a1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22a1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a1b8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22a1bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22A1BCu;
    SET_GPR_U32(ctx, 31, 0x22A1C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A1BCu, 0x22A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A1C4u;
label_22a1c4:
    // 0x22a1c4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x22a1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22a1c8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x22a1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x22a1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22a1d0: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x22a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x22a1d4: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x22a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a1d8: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x22a1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a1dc: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x22a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x22a1e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22a1e4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x22a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x22a1e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a1ec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a1f0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22a1f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22a1f8: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x22a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
    // 0x22a1fc: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x22a1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x22a200: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a204: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a208: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a20c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22a210: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22a214: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22a218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a21c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a220: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x22a220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22a224: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x22a224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x22a228: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x22a22c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22a230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a234: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a238: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a23c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x22a23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x22a240: 0x3c063c49  lui         $a2, 0x3C49
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15433 << 16));
    // 0x22a244: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x22a248: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22a248u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a24c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a250: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a254: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x22a254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x22a258: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a25c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a260: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x22a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x22a264: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x22a264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x22a268: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a26c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a270: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22A270u;
    SET_GPR_U32(ctx, 31, 0x22A278u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A270u, 0x22A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A278u;
label_22a278:
    // 0x22a278: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22a278u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22a27c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22A27Cu;
    SET_GPR_U32(ctx, 31, 0x22A284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A27Cu, 0x22A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A284u;
label_22a284:
    // 0x22a284: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22a284u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22a288: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22a288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22a28c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x22a28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22a290: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x22a294: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22a294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22a298: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22a298u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22a29c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a2a0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x22a2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x22a2a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a2a8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x22a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a2ac: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x22a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x22a2b0: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x22a2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x22a2b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22a2b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a2b8: 0x0  nop
    ctx->pc = 0x22a2b8u;
    // NOP
    // 0x22a2bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a2c0: 0x0  nop
    ctx->pc = 0x22a2c0u;
    // NOP
    // 0x22a2c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x22A2C4u;
    {
        const bool branch_taken_0x22a2c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a2c4) {
            ctx->pc = 0x22A2ECu;
            return;
        }
    }
    ctx->pc = 0x22A2CCu;
    // 0x22a2cc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a2d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a2d4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x22a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x22a2d8: 0x24067824  addiu       $a2, $zero, 0x7824
    ctx->pc = 0x22a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30756));
    // 0x22a2dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22a2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a2e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22a2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a2e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22A2E4u;
    SET_GPR_U32(ctx, 31, 0x22A2ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22A2E4u, 0x22A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A2ECu;
}
