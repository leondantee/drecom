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

// Function: entry_0016f1f8
// Address: 0x16f1f8 - 0x16f300
void entry_0016f1f8_0x16f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f1f8_0x16f1f8");
#endif

    switch (ctx->pc) {
        case 0x16f258u: goto label_16f258;
        case 0x16f268u: goto label_16f268;
        case 0x16f2f4u: goto label_16f2f4;
        default: break;
    }

    ctx->pc = 0x16f1f8u;

    // 0x16f1f8: 0xa2001308  sb          $zero, 0x1308($s0)
    ctx->pc = 0x16f1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f1fc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x16f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x16f200: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16f200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f204: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x16f204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f208: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16f20c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16f210: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x16f210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f214: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x16f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x16f218: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x16f21c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x16f21cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f220: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x16f224: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x16f224u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x16f228: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x16f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x16f22c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16f22cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f230: 0x26020170  addiu       $v0, $s0, 0x170
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x16f234: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16f234u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16f238: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x16f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f23c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x16f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x16f240: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x16f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f244: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x16f244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x16f248: 0x26110180  addiu       $s1, $s0, 0x180
    ctx->pc = 0x16f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x16f24c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x16f24cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16f250: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16F250u;
    SET_GPR_U32(ctx, 31, 0x16F258u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16F250u, 0x16F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F258u;
label_16f258:
    // 0x16f258: 0x26110190  addiu       $s1, $s0, 0x190
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x16f25c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x16f25cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x16f260: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16F260u;
    SET_GPR_U32(ctx, 31, 0x16F268u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16F260u, 0x16F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F268u;
label_16f268:
    // 0x16f268: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x16f26c: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x16f26cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f270: 0xa20010a9  sb          $zero, 0x10A9($s0)
    ctx->pc = 0x16f270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4265), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f274: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x16f278: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16f27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f280: 0x0  nop
    ctx->pc = 0x16f280u;
    // NOP
    // 0x16f284: 0xe60011e8  swc1        $f0, 0x11E8($s0)
    ctx->pc = 0x16f284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4584), bits); }
    // 0x16f288: 0xa20010a8  sb          $zero, 0x10A8($s0)
    ctx->pc = 0x16f288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f28c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16f290: 0x244257c0  addiu       $v0, $v0, 0x57C0
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22464));
    // 0x16f294: 0xae021228  sw          $v0, 0x1228($s0)
    ctx->pc = 0x16f294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4648), GPR_U32(ctx, 2));
    // 0x16f298: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16f29c: 0xae02121c  sw          $v0, 0x121C($s0)
    ctx->pc = 0x16f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
    // 0x16f2a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f2a4: 0xa2041219  sb          $a0, 0x1219($s0)
    ctx->pc = 0x16f2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x16f2a8: 0xa20011ee  sb          $zero, 0x11EE($s0)
    ctx->pc = 0x16f2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2ac: 0xa20009db  sb          $zero, 0x9DB($s0)
    ctx->pc = 0x16f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2523), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2b0: 0xa20009da  sb          $zero, 0x9DA($s0)
    ctx->pc = 0x16f2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2522), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2b4: 0xa60009d8  sh          $zero, 0x9D8($s0)
    ctx->pc = 0x16f2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2520), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f2b8: 0x260309d8  addiu       $v1, $s0, 0x9D8
    ctx->pc = 0x16f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2520));
    // 0x16f2bc: 0x260209dc  addiu       $v0, $s0, 0x9DC
    ctx->pc = 0x16f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2524));
    // 0x16f2c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f2c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x16f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x16f2c8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f2cc: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x16f2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f2d0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f2d4: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x16f2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f2d8: 0x97a200de  lhu         $v0, 0xDE($sp)
    ctx->pc = 0x16f2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x16f2dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F2DCu;
    {
        const bool branch_taken_0x16f2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2dc) {
            ctx->pc = 0x16F300u;
            return;
        }
    }
    ctx->pc = 0x16F2E4u;
    // 0x16f2e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f2e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f2e8: 0x8ee50a68  lw          $a1, 0xA68($s7)
    ctx->pc = 0x16f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f2ec: 0xc095228  jal         func_2548A0
    ctx->pc = 0x16F2ECu;
    SET_GPR_U32(ctx, 31, 0x16F2F4u);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x16F2ECu, 0x16F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F2F4u;
label_16f2f4:
    // 0x16f2f4: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f2f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F2F8u;
    {
        const bool branch_taken_0x16f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2f8) {
            ctx->pc = 0x16F318u;
            return;
        }
    }
    ctx->pc = 0x16F300u;
}
