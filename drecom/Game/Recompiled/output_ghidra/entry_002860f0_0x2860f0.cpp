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

// Function: entry_002860f0
// Address: 0x2860f0 - 0x286374
void entry_002860f0_0x2860f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002860f0_0x2860f0");
#endif

    switch (ctx->pc) {
        case 0x2861ecu: goto label_2861ec;
        case 0x28628cu: goto label_28628c;
        case 0x286368u: goto label_286368;
        default: break;
    }

    ctx->pc = 0x2860f0u;

    // 0x2860f0: 0x26305e08  addiu       $s0, $s1, 0x5E08
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24072));
    // 0x2860f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2860f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2860f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2860f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2860fc: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x2860fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x286100: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x286100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x286104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286108: 0x0  nop
    ctx->pc = 0x286108u;
    // NOP
    // 0x28610c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x28610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286110: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x286114: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x286114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x286118: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x286118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28611c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286124: 0x0  nop
    ctx->pc = 0x286124u;
    // NOP
    // 0x286128: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28612c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x286130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286134: 0x0  nop
    ctx->pc = 0x286134u;
    // NOP
    // 0x286138: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x286138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28613c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x286140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286144: 0x0  nop
    ctx->pc = 0x286144u;
    // NOP
    // 0x286148: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x286148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28614c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x28614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x286150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286154: 0x0  nop
    ctx->pc = 0x286154u;
    // NOP
    // 0x286158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28615c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x28615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x286160: 0x3c02434d  lui         $v0, 0x434D
    ctx->pc = 0x286160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17229 << 16));
    // 0x286164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286168: 0x0  nop
    ctx->pc = 0x286168u;
    // NOP
    // 0x28616c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28616cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286170: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x286174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286178: 0x0  nop
    ctx->pc = 0x286178u;
    // NOP
    // 0x28617c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x28617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286180: 0x3c0243ef  lui         $v0, 0x43EF
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17391 << 16));
    // 0x286184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286188: 0x0  nop
    ctx->pc = 0x286188u;
    // NOP
    // 0x28618c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x28618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286190: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x286194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286198: 0x0  nop
    ctx->pc = 0x286198u;
    // NOP
    // 0x28619c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x28619cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2861a0: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2861a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2861a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2861a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861a8: 0x0  nop
    ctx->pc = 0x2861a8u;
    // NOP
    // 0x2861ac: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2861acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2861b0: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2861b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2861b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861b8: 0x0  nop
    ctx->pc = 0x2861b8u;
    // NOP
    // 0x2861bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2861bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2861c0: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2861c4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x2861c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2861c8: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2861cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2861ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2861d0: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2861d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2861d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2861d8: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x2861d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2861dc: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x2861dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x2861e0: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x2861e4: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x2861E4u;
    SET_GPR_U32(ctx, 31, 0x2861ECu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x2861E4u, 0x2861ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861ECu;
label_2861ec:
    // 0x2861ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2861ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2861f0: 0x26246090  addiu       $a0, $s1, 0x6090
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24720));
    // 0x2861f4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2861f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2861f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2861fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2861fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x286200: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x286204: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x286204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286208: 0x0  nop
    ctx->pc = 0x286208u;
    // NOP
    // 0x28620c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x28620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286210: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x286210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x286214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286218: 0x0  nop
    ctx->pc = 0x286218u;
    // NOP
    // 0x28621c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x28621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x286220: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x286220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x286224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286228: 0x0  nop
    ctx->pc = 0x286228u;
    // NOP
    // 0x28622c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28622cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286230: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x286234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286238: 0x0  nop
    ctx->pc = 0x286238u;
    // NOP
    // 0x28623c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x28623cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286240: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x286240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x286244: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x286244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x286248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28624c: 0x0  nop
    ctx->pc = 0x28624cu;
    // NOP
    // 0x286250: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286254: 0x3c03438d  lui         $v1, 0x438D
    ctx->pc = 0x286254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17293 << 16));
    // 0x286258: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x286258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x28625c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28625cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286260: 0x0  nop
    ctx->pc = 0x286260u;
    // NOP
    // 0x286264: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x286264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286268: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28626c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x28626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286270: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286274: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286278: 0x261200c4  addiu       $s2, $s0, 0xC4
    ctx->pc = 0x286278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28627c: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x28627cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x286280: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x286280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286284: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286284u;
    SET_GPR_U32(ctx, 31, 0x28628Cu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286284u, 0x28628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28628Cu;
label_28628c:
    // 0x28628c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x28628cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286290: 0x26305f4c  addiu       $s0, $s1, 0x5F4C
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24396));
    // 0x286294: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286298: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x286298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28629c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x28629cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2862a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862a4: 0x0  nop
    ctx->pc = 0x2862a4u;
    // NOP
    // 0x2862a8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2862a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2862ac: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x2862acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x2862b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862b4: 0x0  nop
    ctx->pc = 0x2862b4u;
    // NOP
    // 0x2862b8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2862b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2862bc: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2862bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2862c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862c4: 0x0  nop
    ctx->pc = 0x2862c4u;
    // NOP
    // 0x2862c8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2862c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2862cc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2862ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2862d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862d4: 0x0  nop
    ctx->pc = 0x2862d4u;
    // NOP
    // 0x2862d8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2862d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x2862dc: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x2862e0: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x2862e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2862e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2862e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862e8: 0x0  nop
    ctx->pc = 0x2862e8u;
    // NOP
    // 0x2862ec: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2862ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2862f0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x2862f4: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2862f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2862f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2862fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2862fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286304: 0x0  nop
    ctx->pc = 0x286304u;
    // NOP
    // 0x286308: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28630c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x286310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286314: 0x0  nop
    ctx->pc = 0x286314u;
    // NOP
    // 0x286318: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x286318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28631c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x286320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286324: 0x0  nop
    ctx->pc = 0x286324u;
    // NOP
    // 0x286328: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x286328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28632c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x286330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286334: 0x0  nop
    ctx->pc = 0x286334u;
    // NOP
    // 0x286338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28633c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x28633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286344: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286348: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x286348u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28634c: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286350: 0x26020084  addiu       $v0, $s0, 0x84
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286354: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x286354u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286358: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28635c: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x28635cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286360: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286360u;
    SET_GPR_U32(ctx, 31, 0x286368u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286360u, 0x286368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286368u;
label_286368:
    // 0x286368: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x286368u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28636c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x28636Cu;
    {
        const bool branch_taken_0x28636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28636c) {
            ctx->pc = 0x286790u;
            return;
        }
    }
    ctx->pc = 0x286374u;
}
