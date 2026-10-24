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

// Function: entry_00247530
// Address: 0x247530 - 0x247668
void entry_00247530_0x247530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247530_0x247530");
#endif

    switch (ctx->pc) {
        case 0x24755cu: goto label_24755c;
        case 0x247648u: goto label_247648;
        default: break;
    }

    ctx->pc = 0x247530u;

    // 0x247530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247534: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247538: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x247538u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x24753c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247540: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247544: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x247544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x247548: 0x3406be02  ori         $a2, $zero, 0xBE02
    ctx->pc = 0x247548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48642);
    // 0x24754c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247554: 0xc0965d0  jal         func_259740
    ctx->pc = 0x247554u;
    SET_GPR_U32(ctx, 31, 0x24755Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x247554u, 0x24755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24755Cu;
label_24755c:
    // 0x24755c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24755cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247564: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247568: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x247568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24756c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x247570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247574: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247578: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24757c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x24757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247580: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x247584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247588: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24758c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x24758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247590: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x247590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x247594: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x247598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x247598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24759c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2475a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2475a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2475a8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2475ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2475acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2475b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2475b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2475b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2475bc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2475bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2475c0: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x2475c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2475c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2475c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475d0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2475d4: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2475d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2475d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2475d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475dc: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2475dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2475e0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2475e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2475e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2475e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2475e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2475e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2475ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2475f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2475f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2475f8: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x2475f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x2475fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2475fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247600: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247604: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247608: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x247608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x24760c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x24760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x247610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x247610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247618: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24761c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x24761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x247620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247624: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x247624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247628: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x247628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x24762c: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x24762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x247630: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x247630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x247634: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x247638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24763c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x24763cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x247640: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247640u;
    SET_GPR_U32(ctx, 31, 0x247648u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247640u, 0x247648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247648u;
label_247648:
    // 0x247648: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x247648u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24764c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x24764cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x247650: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x247650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x247654: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x247658: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x24765c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24765cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247664: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x247664u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x247668u;
}
