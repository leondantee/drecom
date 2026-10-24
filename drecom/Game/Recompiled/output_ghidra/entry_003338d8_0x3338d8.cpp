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

// Function: entry_003338d8
// Address: 0x3338d8 - 0x3339f0
void entry_003338d8_0x3338d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003338d8_0x3338d8");
#endif

    switch (ctx->pc) {
        case 0x333964u: goto label_333964;
        default: break;
    }

    ctx->pc = 0x3338d8u;

    // 0x3338d8: 0x26115e08  addiu       $s1, $s0, 0x5E08
    ctx->pc = 0x3338d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24072));
    // 0x3338dc: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x3338dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x3338e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3338e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3338e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3338e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3338e8: 0x0  nop
    ctx->pc = 0x3338e8u;
    // NOP
    // 0x3338ec: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x3338ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x3338f0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3338f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3338f4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3338f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3338f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3338f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3338fc: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x3338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x333900: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x333900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333908: 0x0  nop
    ctx->pc = 0x333908u;
    // NOP
    // 0x33390c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33390cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x333910: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x333910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x333914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333918: 0x0  nop
    ctx->pc = 0x333918u;
    // NOP
    // 0x33391c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x33391cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333920: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x333920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x333924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333928: 0x0  nop
    ctx->pc = 0x333928u;
    // NOP
    // 0x33392c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x33392cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x333930: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x333930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x333934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333938: 0x0  nop
    ctx->pc = 0x333938u;
    // NOP
    // 0x33393c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33393cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333940: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x333940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x333944: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x333944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333948: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x333948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x33394c: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x33394cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x333950: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x333950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x333954: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x333954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x333958: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x33395c: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x33395Cu;
    SET_GPR_U32(ctx, 31, 0x333964u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x33395Cu, 0x333964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333964u;
label_333964:
    // 0x333964: 0x26115f4c  addiu       $s1, $s0, 0x5F4C
    ctx->pc = 0x333964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24396));
    // 0x333968: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x333968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x33396c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x33396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x333970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333974: 0x0  nop
    ctx->pc = 0x333974u;
    // NOP
    // 0x333978: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x333978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x33397c: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x33397cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x333980: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333984: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x333984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333988: 0x8e026850  lw          $v0, 0x6850($s0)
    ctx->pc = 0x333988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x33398c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x33398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x333990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333994: 0x0  nop
    ctx->pc = 0x333994u;
    // NOP
    // 0x333998: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x333998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33399c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x33399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3339a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3339a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3339a4: 0x0  nop
    ctx->pc = 0x3339a4u;
    // NOP
    // 0x3339a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3339a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3339ac: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x3339acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x3339b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3339b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3339b4: 0x0  nop
    ctx->pc = 0x3339b4u;
    // NOP
    // 0x3339b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3339b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3339bc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3339c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3339c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3339c4: 0x0  nop
    ctx->pc = 0x3339c4u;
    // NOP
    // 0x3339c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3339c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3339cc: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x3339ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x3339d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3339d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3339d4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x3339d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3339d8: 0x26260044  addiu       $a2, $s1, 0x44
    ctx->pc = 0x3339d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x3339dc: 0x26270084  addiu       $a3, $s1, 0x84
    ctx->pc = 0x3339dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3339e0: 0x262800c4  addiu       $t0, $s1, 0xC4
    ctx->pc = 0x3339e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x3339e4: 0x26290104  addiu       $t1, $s1, 0x104
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x3339e8: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x3339E8u;
    SET_GPR_U32(ctx, 31, 0x3339F0u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x3339E8u, 0x3339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339F0u;
}
