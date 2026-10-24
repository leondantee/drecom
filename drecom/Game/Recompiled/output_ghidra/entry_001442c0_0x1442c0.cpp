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

// Function: entry_001442c0
// Address: 0x1442c0 - 0x1443d0
void entry_001442c0_0x1442c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001442c0_0x1442c0");
#endif

    switch (ctx->pc) {
        case 0x14439cu: goto label_14439c;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443c8u: goto label_1443c8;
        default: break;
    }

    ctx->pc = 0x1442c0u;

    // 0x1442c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442c4: 0x0  nop
    ctx->pc = 0x1442c4u;
    // NOP
    // 0x1442c8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1442c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1442cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442d0: 0x0  nop
    ctx->pc = 0x1442d0u;
    // NOP
    // 0x1442d4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1442d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1442d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442dc: 0x0  nop
    ctx->pc = 0x1442dcu;
    // NOP
    // 0x1442e0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x1442e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x1442e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1442e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1442e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442ec: 0x0  nop
    ctx->pc = 0x1442ecu;
    // NOP
    // 0x1442f0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x1442f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x1442f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1442f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1442f8: 0x0  nop
    ctx->pc = 0x1442f8u;
    // NOP
    // 0x1442fc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1442fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x144300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144304: 0x0  nop
    ctx->pc = 0x144304u;
    // NOP
    // 0x144308: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x144308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x14430c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14430cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144310: 0x0  nop
    ctx->pc = 0x144310u;
    // NOP
    // 0x144314: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x144314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x144318: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x144318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14431c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x14431cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x144320: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x144320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x144324: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x144324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x144328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14432c: 0x0  nop
    ctx->pc = 0x14432cu;
    // NOP
    // 0x144330: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x144330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x144334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144338: 0x0  nop
    ctx->pc = 0x144338u;
    // NOP
    // 0x14433c: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x14433cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x144340: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144344: 0x0  nop
    ctx->pc = 0x144344u;
    // NOP
    // 0x144348: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x144348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x14434c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144354: 0x0  nop
    ctx->pc = 0x144354u;
    // NOP
    // 0x144358: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x144358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x14435c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14435cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144360: 0x0  nop
    ctx->pc = 0x144360u;
    // NOP
    // 0x144364: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x144364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x144368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14436c: 0x0  nop
    ctx->pc = 0x14436cu;
    // NOP
    // 0x144370: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x144370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x144374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144378: 0x0  nop
    ctx->pc = 0x144378u;
    // NOP
    // 0x14437c: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x14437cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x144380: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x144380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x144384: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x144384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x144388: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x144388u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14438c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x14438cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x144390: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x144390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x144394: 0xc096558  jal         func_259560
    ctx->pc = 0x144394u;
    SET_GPR_U32(ctx, 31, 0x14439Cu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x144394u, 0x14439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14439Cu;
label_14439c:
    // 0x14439c: 0xc05d030  jal         func_1740C0
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x1740C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1740C0u, 0x14439Cu, 0x1443A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1443A4u;
    {
        const bool branch_taken_0x1443a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1443a4) {
            ctx->pc = 0x1443D0u;
            return;
        }
    }
    ctx->pc = 0x1443ACu;
    // 0x1443ac: 0x8e851364  lw          $a1, 0x1364($s4)
    ctx->pc = 0x1443acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4964)));
    // 0x1443b0: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1443b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1443b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1443b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1443bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1443c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1443C0u;
    SET_GPR_U32(ctx, 31, 0x1443C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1443C0u, 0x1443C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443C8u;
label_1443c8:
    // 0x1443c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1443C8u;
    {
        const bool branch_taken_0x1443c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1443c8) {
            ctx->pc = 0x1443ECu;
            return;
        }
    }
    ctx->pc = 0x1443D0u;
}
