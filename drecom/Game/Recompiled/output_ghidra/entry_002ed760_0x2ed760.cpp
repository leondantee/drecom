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

// Function: entry_002ed760
// Address: 0x2ed760 - 0x2ed840
void entry_002ed760_0x2ed760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed760_0x2ed760");
#endif

    switch (ctx->pc) {
        case 0x2ed82cu: goto label_2ed82c;
        default: break;
    }

    ctx->pc = 0x2ed760u;

label_2ed760:
    // 0x2ed760: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed764:
    // 0x2ed764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed768:
    // 0x2ed768: 0x0  nop
    ctx->pc = 0x2ed768u;
    // NOP
label_2ed76c:
    // 0x2ed76c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ed76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ed770:
    // 0x2ed770: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed774:
    // 0x2ed774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed778:
    // 0x2ed778: 0x0  nop
    ctx->pc = 0x2ed778u;
    // NOP
label_2ed77c:
    // 0x2ed77c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ed77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ed780:
    // 0x2ed780: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ed784:
    // 0x2ed784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed788:
    // 0x2ed788: 0x0  nop
    ctx->pc = 0x2ed788u;
    // NOP
label_2ed78c:
    // 0x2ed78c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ed78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ed790:
    // 0x2ed790: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_2ed794:
    // 0x2ed794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed798:
    // 0x2ed798: 0x0  nop
    ctx->pc = 0x2ed798u;
    // NOP
label_2ed79c:
    // 0x2ed79c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ed79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2ed7a0:
    // 0x2ed7a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ed7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ed7a4:
    // 0x2ed7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ed7a8:
    // 0x2ed7a8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2ed7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7ac:
    // 0x2ed7ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ed7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ed7b0:
    // 0x2ed7b0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ed7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2ed7b4:
    // 0x2ed7b4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ed7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7b8:
    // 0x2ed7b8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ed7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2ed7bc:
    // 0x2ed7bc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ed7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7c0:
    // 0x2ed7c0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ed7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2ed7c4:
    // 0x2ed7c4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2ed7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7c8:
    // 0x2ed7c8: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ed7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2ed7cc:
    // 0x2ed7cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ed7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2ed7d0:
    // 0x2ed7d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ed7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7d4:
    // 0x2ed7d4: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ed7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2ed7d8:
    // 0x2ed7d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ed7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2ed7dc:
    // 0x2ed7dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ed7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7e0:
    // 0x2ed7e0: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ed7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2ed7e4:
    // 0x2ed7e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ed7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2ed7e8:
    // 0x2ed7e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ed7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7ec:
    // 0x2ed7ec: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ed7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2ed7f0:
    // 0x2ed7f0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2ed7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ed7f4:
    // 0x2ed7f4: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ed7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ed7f8:
    // 0x2ed7f8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ed7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ed7fc:
    // 0x2ed7fc: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ed7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ed800:
    // 0x2ed800: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2ed800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2ed804:
    // 0x2ed804: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ed804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ed808:
    // 0x2ed808: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ed808u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ed80c:
    // 0x2ed80c: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ed80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ed810:
    // 0x2ed810: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ed810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ed814:
    // 0x2ed814: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ed814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ed818:
    // 0x2ed818: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ed818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ed81c:
    // 0x2ed81c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ed820:
    // 0x2ed820: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ed820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed824:
    // 0x2ed824: 0x40f809  jalr        $v0
label_2ed828:
    if (ctx->pc == 0x2ED828u) {
        ctx->pc = 0x2ED82Cu;
        goto label_2ed82c;
    }
    ctx->pc = 0x2ED824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED82Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED824u, 0x2ED82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED82Cu;
label_2ed82c:
    // 0x2ed82c: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ed82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ed830:
    // 0x2ed830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ed830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ed834:
    // 0x2ed834: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ed834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ed838:
    // 0x2ed838: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ed83c:
    if (ctx->pc == 0x2ED83Cu) {
        ctx->pc = 0x2ED840u;
        goto label_fallthrough_0x2ed838;
    }
    ctx->pc = 0x2ED838u;
    {
        const bool branch_taken_0x2ed838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed838) {
            ctx->pc = 0x2ED848u;
            return;
        }
    }
label_fallthrough_0x2ed838:
    ctx->pc = 0x2ED840u;
}
