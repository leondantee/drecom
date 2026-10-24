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

// Function: entry_002101e4
// Address: 0x2101e4 - 0x2102e8
void entry_002101e4_0x2101e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002101e4_0x2101e4");
#endif

    switch (ctx->pc) {
        case 0x2101ecu: goto label_2101ec;
        case 0x21020cu: goto label_21020c;
        case 0x21023cu: goto label_21023c;
        case 0x210258u: goto label_210258;
        case 0x210274u: goto label_210274;
        case 0x2102e0u: goto label_2102e0;
        default: break;
    }

    ctx->pc = 0x2101e4u;

    // 0x2101e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2101E4u;
    SET_GPR_U32(ctx, 31, 0x2101ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2101E4u, 0x2101ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101ECu;
label_2101ec:
    // 0x2101ec: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x2101ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x2101f0: 0x34860fdb  ori         $a2, $a0, 0xFDB
    ctx->pc = 0x2101f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2101f4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2101f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2101f8: 0x0  nop
    ctx->pc = 0x2101f8u;
    // NOP
    // 0x2101fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2101fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210200: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x210200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x210204: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210204u;
    SET_GPR_U32(ctx, 31, 0x21020Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210204u, 0x21020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21020Cu;
label_21020c:
    // 0x21020c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x210210: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x210210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x210214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210218: 0x0  nop
    ctx->pc = 0x210218u;
    // NOP
    // 0x21021c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210220: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x210220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x210224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210228: 0x0  nop
    ctx->pc = 0x210228u;
    // NOP
    // 0x21022c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x21022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x210230: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x210234: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x210234u;
    SET_GPR_U32(ctx, 31, 0x21023Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x21023Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21023Cu) { return; }
    ctx->pc = 0x21023Cu;
label_21023c:
    // 0x21023c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21023cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210240: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x210244: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x210248: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x210248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x21024c: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x210250: 0xc040d62  jal         func_103588
    ctx->pc = 0x210250u;
    SET_GPR_U32(ctx, 31, 0x210258u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x210258u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210258u) { return; }
    ctx->pc = 0x210258u;
label_210258:
    // 0x210258: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210258u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21025c: 0x27a80230  addiu       $t0, $sp, 0x230
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x210260: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x210260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x210264: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x210264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x210268: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x210268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x21026c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x21026Cu;
    SET_GPR_U32(ctx, 31, 0x210274u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210274u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210274u) { return; }
    ctx->pc = 0x210274u;
label_210274:
    // 0x210274: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210274u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210278: 0x3c0a4496  lui         $t2, 0x4496
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17558 << 16));
    // 0x21027c: 0x448a6000  mtc1        $t2, $f12
    ctx->pc = 0x21027cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210280: 0x3c0b43fa  lui         $t3, 0x43FA
    ctx->pc = 0x210280u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17402 << 16));
    // 0x210284: 0x448b6800  mtc1        $t3, $f13
    ctx->pc = 0x210284u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x210288: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x210288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x21028c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x21028cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x210290: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x210290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210294: 0xffb20000  sd          $s2, 0x0($sp)
    ctx->pc = 0x210294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    // 0x210298: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21029c: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x21029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x2102a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2102a4: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2102a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2102a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2102ac: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2102acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2102b0: 0x8fb20528  lw          $s2, 0x528($sp)
    ctx->pc = 0x2102b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2102b4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2102b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2102b8: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x2102b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2102bc: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x2102bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2102c0: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2102c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2102c4: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x2102c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2102c8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2102cc: 0x27a90230  addiu       $t1, $sp, 0x230
    ctx->pc = 0x2102ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2102d0: 0x27aa0220  addiu       $t2, $sp, 0x220
    ctx->pc = 0x2102d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2102d4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2102d4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2102d8: 0xc0bb888  jal         func_2EE220
    ctx->pc = 0x2102D8u;
    SET_GPR_U32(ctx, 31, 0x2102E0u);
    ctx->pc = 0x2EE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE220u, 0x2102D8u, 0x2102E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102E0u;
label_2102e0:
    // 0x2102e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2102e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2102e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2102e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x2102e8u;
}
