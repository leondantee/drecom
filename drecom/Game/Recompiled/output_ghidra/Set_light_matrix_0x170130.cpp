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

// Function: Set_light_matrix
// Address: 0x170130 - 0x171024
void Set_light_matrix_0x170130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_light_matrix_0x170130");
#endif

    switch (ctx->pc) {
        case 0x1701c8u: goto label_1701c8;
        case 0x1701d4u: goto label_1701d4;
        case 0x1702bcu: goto label_1702bc;
        case 0x1702d8u: goto label_1702d8;
        case 0x170324u: goto label_170324;
        case 0x170458u: goto label_170458;
        case 0x170638u: goto label_170638;
        case 0x170654u: goto label_170654;
        case 0x170670u: goto label_170670;
        case 0x170748u: goto label_170748;
        case 0x17075cu: goto label_17075c;
        case 0x17078cu: goto label_17078c;
        case 0x1707a0u: goto label_1707a0;
        case 0x1707d0u: goto label_1707d0;
        case 0x1707e4u: goto label_1707e4;
        case 0x17083cu: goto label_17083c;
        case 0x1708d8u: goto label_1708d8;
        case 0x170970u: goto label_170970;
        case 0x1709acu: goto label_1709ac;
        case 0x1709d0u: goto label_1709d0;
        case 0x1709e0u: goto label_1709e0;
        case 0x170a48u: goto label_170a48;
        case 0x170b90u: goto label_170b90;
        case 0x170d84u: goto label_170d84;
        case 0x170dacu: goto label_170dac;
        case 0x170dd0u: goto label_170dd0;
        case 0x170e90u: goto label_170e90;
        case 0x170ea4u: goto label_170ea4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170f04u: goto label_170f04;
        case 0x170f34u: goto label_170f34;
        case 0x170f8cu: goto label_170f8c;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fc4u: goto label_170fc4;
        default: break;
    }

    ctx->pc = 0x170130u;

    // 0x170130: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x170130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x170134: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x170134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x170138: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x170138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17013c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x170140: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x170140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x170144: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x170144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x170148: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x170148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17014c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x170150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17015c: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x17015cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
    // 0x170160: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x170160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170164: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x170164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x170168: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x170168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
    // 0x17016c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x17016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x170170: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x170170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x170174: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x170174u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x170178: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x17017c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x17017cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x170180: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x170180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170184: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x170184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170188: 0x2e51021  addu        $v0, $s7, $a1
    ctx->pc = 0x170188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x17018c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x17018cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170198: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17019c: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x17019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x1701a0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1701a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1701a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1701a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1701ac: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x1701b0: 0x24a6e550  addiu       $a2, $a1, -0x1AB0
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
    // 0x1701b4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1701b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1701b8: 0x24470030  addiu       $a3, $v0, 0x30
    ctx->pc = 0x1701b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1701bc: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1701bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1701c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1701C0u;
    SET_GPR_U32(ctx, 31, 0x1701C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1701C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1701C8u) { return; }
    ctx->pc = 0x1701C8u;
label_1701c8:
    // 0x1701c8: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1701c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1701cc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1701CCu;
    SET_GPR_U32(ctx, 31, 0x1701D4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1701CCu, 0x1701D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701D4u;
label_1701d4:
    // 0x1701d4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1701d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1701d8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1701d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1701dc: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1701dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1701e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1701e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1701e4: 0x0  nop
    ctx->pc = 0x1701e4u;
    // NOP
    // 0x1701e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1701e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1701ec: 0x0  nop
    ctx->pc = 0x1701ecu;
    // NOP
    // 0x1701f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1701F0u;
    {
        const bool branch_taken_0x1701f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1701f0) {
            ctx->pc = 0x17020Cu;
            goto label_17020c;
        }
    }
    ctx->pc = 0x1701F8u;
    // 0x1701f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1701f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1701fc: 0x0  nop
    ctx->pc = 0x1701fcu;
    // NOP
    // 0x170200: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x170200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x170204: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170204u;
    {
        const bool branch_taken_0x170204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170204) {
            ctx->pc = 0x170214u;
            goto label_170214;
        }
    }
    ctx->pc = 0x17020Cu;
label_17020c:
    // 0x17020c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x17020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170210: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x170210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_170214:
    // 0x170214: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x170214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170218: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x170218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x17021c: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x17021cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x170220: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x170220u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170224: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x170224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170228: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x170228u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17022c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x17022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x170230: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170234: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x170234u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170238: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x170238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x17023c: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x17023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170240: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170244: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x170244u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170248: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x170248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17024c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17024cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170250: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x170250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x170254: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x170254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x170258: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x170258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17025c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17025cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170260: 0x0  nop
    ctx->pc = 0x170260u;
    // NOP
    // 0x170264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170268: 0x0  nop
    ctx->pc = 0x170268u;
    // NOP
    // 0x17026c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17026Cu;
    {
        const bool branch_taken_0x17026c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17026c) {
            ctx->pc = 0x170280u;
            goto label_170280;
        }
    }
    ctx->pc = 0x170274u;
    // 0x170274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170278: 0x0  nop
    ctx->pc = 0x170278u;
    // NOP
    // 0x17027c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x17027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_170280:
    // 0x170280: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x170280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170284: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x170284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x170288: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x170288u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17028c: 0x0  nop
    ctx->pc = 0x17028cu;
    // NOP
    // 0x170290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170294: 0x0  nop
    ctx->pc = 0x170294u;
    // NOP
    // 0x170298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x170298u;
    {
        const bool branch_taken_0x170298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170298) {
            ctx->pc = 0x1702B0u;
            goto label_1702b0;
        }
    }
    ctx->pc = 0x1702A0u;
    // 0x1702a0: 0x3c10437f  lui         $s0, 0x437F
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17279 << 16));
    // 0x1702a4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1702a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1702a8: 0x0  nop
    ctx->pc = 0x1702a8u;
    // NOP
    // 0x1702ac: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1702acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1702b0:
    // 0x1702b0: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1702b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1702b4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1702B4u;
    SET_GPR_U32(ctx, 31, 0x1702BCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1702B4u, 0x1702BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702BCu;
label_1702bc:
    // 0x1702bc: 0xa7a2017e  sh          $v0, 0x17E($sp)
    ctx->pc = 0x1702bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x1702c0: 0x97a8017e  lhu         $t0, 0x17E($sp)
    ctx->pc = 0x1702c0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1702c4: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1702c8: 0xa7a2017e  sh          $v0, 0x17E($sp)
    ctx->pc = 0x1702c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x1702cc: 0x8fb50188  lw          $s5, 0x188($sp)
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1702d0: 0x8ea80058  lw          $t0, 0x58($s5)
    ctx->pc = 0x1702d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1702d4: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x1702d4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1702d8:
    // 0x1702d8: 0x97a7017e  lhu         $a3, 0x17E($sp)
    ctx->pc = 0x1702d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1702dc: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1702dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1702e0: 0xaea3006c  sw          $v1, 0x6C($s5)
    ctx->pc = 0x1702e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 3));
    // 0x1702e4: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x1702e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1702e8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1702ec: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x1702ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1702f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1702F0u;
    {
        const bool branch_taken_0x1702f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1702f0) {
            ctx->pc = 0x1702D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1702d8;
        }
    }
    ctx->pc = 0x1702F8u;
    // 0x1702f8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1702fc: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1702fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x170300: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x170300u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x170304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170308: 0x0  nop
    ctx->pc = 0x170308u;
    // NOP
    // 0x17030c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x17030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170310: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170314: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170318: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x170318u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17031c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x17031Cu;
    {
        const bool branch_taken_0x17031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17031c) {
            ctx->pc = 0x170518u;
            goto label_170518;
        }
    }
    ctx->pc = 0x170324u;
label_170324:
    // 0x170324: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170328: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17032c: 0x9424cc88  lhu         $a0, -0x3378($at)
    ctx->pc = 0x17032cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x170330: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x170330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x170334: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x170334u;
    {
        const bool branch_taken_0x170334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x170334) {
            ctx->pc = 0x170360u;
            goto label_170360;
        }
    }
    ctx->pc = 0x17033Cu;
    // 0x17033c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170340: 0x9426cc8a  lhu         $a2, -0x3376($at)
    ctx->pc = 0x170340u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x170344: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x170348: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17034c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170350: 0x9424cc8e  lhu         $a0, -0x3372($at)
    ctx->pc = 0x170350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170354: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x170354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x170358: 0x10450077  beq         $v0, $a1, . + 4 + (0x77 << 2)
    ctx->pc = 0x170358u;
    {
        const bool branch_taken_0x170358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x170358) {
            ctx->pc = 0x170538u;
            goto label_170538;
        }
    }
    ctx->pc = 0x170360u;
label_170360:
    // 0x170360: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x170360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170364: 0x90c30012  lbu         $v1, 0x12($a2)
    ctx->pc = 0x170364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x170368: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x170368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17036c: 0x32a300a0  andi        $v1, $s5, 0xA0
    ctx->pc = 0x17036cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)160);
    // 0x170370: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x170370u;
    {
        const bool branch_taken_0x170370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170370) {
            ctx->pc = 0x1703A8u;
            goto label_1703a8;
        }
    }
    ctx->pc = 0x170378u;
    // 0x170378: 0x3217ffff  andi        $s7, $s0, 0xFFFF
    ctx->pc = 0x170378u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17037c: 0x17a840  sll         $s5, $s7, 1
    ctx->pc = 0x17037cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x170380: 0x2b7b821  addu        $s7, $s5, $s7
    ctx->pc = 0x170380u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x170384: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x170388: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x170388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x17038c: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x17038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x170390: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x170394: 0x8cc7007c  lw          $a3, 0x7C($a2)
    ctx->pc = 0x170394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x170398: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x170398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x17039c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x17039Cu;
    {
        const bool branch_taken_0x17039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17039c) {
            ctx->pc = 0x170508u;
            goto label_170508;
        }
    }
    ctx->pc = 0x1703A4u;
    // 0x1703a4: 0x0  nop
    ctx->pc = 0x1703a4u;
    // NOP
label_1703a8:
    // 0x1703a8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1703a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1703ac: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x1703acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1703b0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1703b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1703b4: 0x30a600a0  andi        $a2, $a1, 0xA0
    ctx->pc = 0x1703b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x1703b8: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1703B8u;
    {
        const bool branch_taken_0x1703b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1703b8) {
            ctx->pc = 0x1703F0u;
            goto label_1703f0;
        }
    }
    ctx->pc = 0x1703C0u;
    // 0x1703c0: 0x3207ffff  andi        $a3, $s0, 0xFFFF
    ctx->pc = 0x1703c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1703c4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1703c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1703c8: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1703cc: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1703d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1703d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1703d4: 0x2475bd00  addiu       $s5, $v1, -0x4300
    ctx->pc = 0x1703d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1703d8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1703d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1703dc: 0x8c77007c  lw          $s7, 0x7C($v1)
    ctx->pc = 0x1703dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1703e0: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x1703e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1703e4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1703E4u;
    {
        const bool branch_taken_0x1703e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1703e4) {
            ctx->pc = 0x170508u;
            goto label_170508;
        }
    }
    ctx->pc = 0x1703ECu;
    // 0x1703ec: 0x0  nop
    ctx->pc = 0x1703ecu;
    // NOP
label_1703f0:
    // 0x1703f0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1703f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1703f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1703f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1703f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1703f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1703fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1703fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170400: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170404: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17040c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x17040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170410: 0x78560000  lq          $s6, 0x0($v0)
    ctx->pc = 0x170410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170414: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170418: 0x7c560000  sq          $s6, 0x0($v0)
    ctx->pc = 0x170418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 22));
    // 0x17041c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170420: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170428: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17042c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170430: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170434: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170438: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x170438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17043c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x170440: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170444: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x170444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170448: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17044c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170450: 0xc05da44  jal         func_176910
    ctx->pc = 0x170450u;
    SET_GPR_U32(ctx, 31, 0x170458u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170450u, 0x170458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170458u;
label_170458:
    // 0x170458: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x17045c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x17045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170460: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170468: 0x0  nop
    ctx->pc = 0x170468u;
    // NOP
    // 0x17046c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17046Cu;
    {
        const bool branch_taken_0x17046c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17046c) {
            ctx->pc = 0x170488u;
            goto label_170488;
        }
    }
    ctx->pc = 0x170474u;
    // 0x170474: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170478: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17047c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170480: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x170480u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x170484: 0x0  nop
    ctx->pc = 0x170484u;
    // NOP
label_170488:
    // 0x170488: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x170488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17048c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x17048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170494: 0x0  nop
    ctx->pc = 0x170494u;
    // NOP
    // 0x170498: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170498u;
    {
        const bool branch_taken_0x170498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170498) {
            ctx->pc = 0x1704C8u;
            goto label_1704c8;
        }
    }
    ctx->pc = 0x1704A0u;
    // 0x1704a0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1704a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704a4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1704a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1704a8: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1704a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1704ac: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1704acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704b0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1704b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1704b4: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1704b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1704b8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1704b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704bc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1704bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1704c0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1704c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1704c4: 0x0  nop
    ctx->pc = 0x1704c4u;
    // NOP
label_1704c8:
    // 0x1704c8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1704c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1704cc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1704ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1704d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1704d4: 0x0  nop
    ctx->pc = 0x1704d4u;
    // NOP
    // 0x1704d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1704D8u;
    {
        const bool branch_taken_0x1704d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1704d8) {
            ctx->pc = 0x170508u;
            goto label_170508;
        }
    }
    ctx->pc = 0x1704E0u;
    // 0x1704e0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1704e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704e4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1704e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1704e8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1704e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1704ec: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1704ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704f0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1704f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1704f4: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1704f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1704f8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1704f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1704fc: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1704fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170500: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x170500u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x170504: 0x0  nop
    ctx->pc = 0x170504u;
    // NOP
label_170508:
    // 0x170508: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x170508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17050c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170510: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x170510u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170514: 0x0  nop
    ctx->pc = 0x170514u;
    // NOP
label_170518:
    // 0x170518: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x170518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17051c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170520: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x170520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170524: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170528: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17052c: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x17052Cu;
    {
        const bool branch_taken_0x17052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17052c) {
            ctx->pc = 0x170324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170324;
        }
    }
    ctx->pc = 0x170534u;
    // 0x170534: 0x0  nop
    ctx->pc = 0x170534u;
    // NOP
label_170538:
    // 0x170538: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x170538u;
    {
        const bool branch_taken_0x170538 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x170538) {
            ctx->pc = 0x170550u;
            goto label_170550;
        }
    }
    ctx->pc = 0x170540u;
    // 0x170540: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170544: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x170544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x170548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170548u;
    {
        const bool branch_taken_0x170548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170548) {
            ctx->pc = 0x170554u;
            goto label_170554;
        }
    }
    ctx->pc = 0x170550u;
label_170550:
    // 0x170550: 0xafb20164  sw          $s2, 0x164($sp)
    ctx->pc = 0x170550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 18));
label_170554:
    // 0x170554: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x170554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x170558: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x170558u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17055c: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17055Cu;
    {
        const bool branch_taken_0x17055c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17055c) {
            ctx->pc = 0x170574u;
            goto label_170574;
        }
    }
    ctx->pc = 0x170564u;
    // 0x170564: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170568: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x170568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x17056c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17056Cu;
    {
        const bool branch_taken_0x17056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17056c) {
            ctx->pc = 0x170578u;
            goto label_170578;
        }
    }
    ctx->pc = 0x170574u;
label_170574:
    // 0x170574: 0xafb10168  sw          $s1, 0x168($sp)
    ctx->pc = 0x170574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 17));
label_170578:
    // 0x170578: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x170578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x17057c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x17057cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x170580: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x170580u;
    {
        const bool branch_taken_0x170580 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x170580) {
            ctx->pc = 0x170598u;
            goto label_170598;
        }
    }
    ctx->pc = 0x170588u;
    // 0x170588: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17058c: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x17058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x170590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170590u;
    {
        const bool branch_taken_0x170590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170590) {
            ctx->pc = 0x17059Cu;
            goto label_17059c;
        }
    }
    ctx->pc = 0x170598u;
label_170598:
    // 0x170598: 0xafb4016c  sw          $s4, 0x16C($sp)
    ctx->pc = 0x170598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 20));
label_17059c:
    // 0x17059c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1705a0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1705a0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1705a4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1705a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1705a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1705ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1705acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1705b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1705b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1705b4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1705b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1705b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1705b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1705bc: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1705c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1705c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1705c4: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1705c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1705c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1705c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1705cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1705d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1705d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1705d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1705d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1705d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1705dc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1705dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1705e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1705e4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1705e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1705e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1705ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1705ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1705f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1705f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1705f4: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1705f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1705f8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1705f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1705fc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1705fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170600: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x170604: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x170604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x170608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17060c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x17060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170610: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170610u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170614: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170618: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17061c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x17061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170620: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x170620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x170624: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170628: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17062c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x17062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170630: 0xc040c80  jal         func_103200
    ctx->pc = 0x170630u;
    SET_GPR_U32(ctx, 31, 0x170638u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170638u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170638u) { return; }
    ctx->pc = 0x170638u;
label_170638:
    // 0x170638: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17063c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x17063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170640: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x170640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170644: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170648: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x170648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17064c: 0xc040c80  jal         func_103200
    ctx->pc = 0x17064Cu;
    SET_GPR_U32(ctx, 31, 0x170654u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170654u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170654u) { return; }
    ctx->pc = 0x170654u;
label_170654:
    // 0x170654: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170658: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x170658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x17065c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x17065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170660: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170664: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170668: 0xc040c80  jal         func_103200
    ctx->pc = 0x170668u;
    SET_GPR_U32(ctx, 31, 0x170670u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170670u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170670u) { return; }
    ctx->pc = 0x170670u;
label_170670:
    // 0x170670: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170678: 0x0  nop
    ctx->pc = 0x170678u;
    // NOP
    // 0x17067c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x170680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170688: 0x0  nop
    ctx->pc = 0x170688u;
    // NOP
    // 0x17068c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x17068cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x170690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170698: 0x0  nop
    ctx->pc = 0x170698u;
    // NOP
    // 0x17069c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17069cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1706a0: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1706a4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1706a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1706a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1706a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1706ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1706acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1706b0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1706b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1706b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1706b8: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x1706b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1706bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1706bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706c0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1706c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1706c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1706c8: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1706c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1706cc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1706d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1706d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1706d8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1706d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1706dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1706dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1706e0: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1706e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1706e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706e8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1706ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1706ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1706f0: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1706f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1706f4: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1706f8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1706f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1706fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170700: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170704: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x170704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170708: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x170708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x17070c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x17070cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170710: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x170710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170714: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x170714u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x170718: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17071c: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x17071cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170720: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x170720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x170724: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x170728: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x170728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17072c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170730: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170734: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170738: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x170738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x17073c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x17073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170740: 0xc05da44  jal         func_176910
    ctx->pc = 0x170740u;
    SET_GPR_U32(ctx, 31, 0x170748u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170740u, 0x170748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170748u;
label_170748:
    // 0x170748: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x170748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17074c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170750: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x170750u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x170754: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170754u;
    SET_GPR_U32(ctx, 31, 0x17075Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17075Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17075Cu) { return; }
    ctx->pc = 0x17075Cu;
label_17075c:
    // 0x17075c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x17075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170760: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170764: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x170768: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x170768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17076c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17076cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170770: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x170770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x170774: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x170774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x170778: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17077c: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x17077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x170780: 0x24c50060  addiu       $a1, $a2, 0x60
    ctx->pc = 0x170780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x170784: 0xc05da44  jal         func_176910
    ctx->pc = 0x170784u;
    SET_GPR_U32(ctx, 31, 0x17078Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170784u, 0x17078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17078Cu;
label_17078c:
    // 0x17078c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170790: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x170790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170794: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x170794u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x170798: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170798u;
    SET_GPR_U32(ctx, 31, 0x1707A0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1707A0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1707A0u) { return; }
    ctx->pc = 0x1707A0u;
label_1707a0:
    // 0x1707a0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1707a4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1707a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1707a8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1707a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1707ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1707b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1707b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1707b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1707b8: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1707bc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1707c0: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1707c4: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1707c8: 0xc05da44  jal         func_176910
    ctx->pc = 0x1707C8u;
    SET_GPR_U32(ctx, 31, 0x1707D0u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1707C8u, 0x1707D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707D0u;
label_1707d0:
    // 0x1707d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1707d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1707d4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1707d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1707d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1707d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1707dc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1707DCu;
    SET_GPR_U32(ctx, 31, 0x1707E4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1707E4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1707E4u) { return; }
    ctx->pc = 0x1707E4u;
label_1707e4:
    // 0x1707e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1707e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1707e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1707e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707ec: 0x0  nop
    ctx->pc = 0x1707ecu;
    // NOP
    // 0x1707f0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1707f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1707f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1707f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1707f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1707f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707fc: 0x0  nop
    ctx->pc = 0x1707fcu;
    // NOP
    // 0x170800: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x170804: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x170808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17080c: 0x0  nop
    ctx->pc = 0x17080cu;
    // NOP
    // 0x170810: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x170810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x170814: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170818: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x170818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x17081c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17081cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170824: 0x0  nop
    ctx->pc = 0x170824u;
    // NOP
    // 0x170828: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17082c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x170830: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x170830u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170834: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x170834u;
    {
        const bool branch_taken_0x170834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170834) {
            ctx->pc = 0x170908u;
            goto label_170908;
        }
    }
    ctx->pc = 0x17083Cu;
label_17083c:
    // 0x17083c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170840: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170848: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17084c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170850: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170858: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x17085c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17085cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170860: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170864: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170864u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170868: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x170868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17086c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x17086cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x170870: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x170870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170874: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170878: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17087c: 0x24a2bd00  addiu       $v0, $a1, -0x4300
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x170880: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170884: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x170884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170888: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x17088c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x17088cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170890: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x170890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x170894: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170898: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17089c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1708a0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1708a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1708a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1708a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1708a8: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x1708a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1708ac: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x1708acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1708b0: 0x14c00013  bnez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1708B0u;
    {
        const bool branch_taken_0x1708b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1708b0) {
            ctx->pc = 0x170900u;
            goto label_170900;
        }
    }
    ctx->pc = 0x1708B8u;
    // 0x1708b8: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x1708b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1708bc: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1708bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1708c0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1708c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1708c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1708c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1708c8: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1708cc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1708ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1708d0: 0xc05da44  jal         func_176910
    ctx->pc = 0x1708D0u;
    SET_GPR_U32(ctx, 31, 0x1708D8u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1708D0u, 0x1708D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708D8u;
label_1708d8:
    // 0x1708d8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1708d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1708dc: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1708dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1708e0: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1708e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1708e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1708e8: 0x0  nop
    ctx->pc = 0x1708e8u;
    // NOP
    // 0x1708ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1708ECu;
    {
        const bool branch_taken_0x1708ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1708ec) {
            ctx->pc = 0x170900u;
            goto label_170900;
        }
    }
    ctx->pc = 0x1708F4u;
    // 0x1708f4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1708f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708f8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1708f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1708fc: 0x3212ffff  andi        $s2, $s0, 0xFFFF
    ctx->pc = 0x1708fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_170900:
    // 0x170900: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x170904: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x170904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_170908:
    // 0x170908: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17090c: 0x2848003f  slti        $t0, $v0, 0x3F
    ctx->pc = 0x17090cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x170910: 0x1500ffca  bnez        $t0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x170910u;
    {
        const bool branch_taken_0x170910 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x170910) {
            ctx->pc = 0x17083Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17083c;
        }
    }
    ctx->pc = 0x170918u;
    // 0x170918: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x170918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17091c: 0x8fb50188  lw          $s5, 0x188($sp)
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170920: 0xa2a20013  sb          $v0, 0x13($s5)
    ctx->pc = 0x170920u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x170924: 0x8fa80188  lw          $t0, 0x188($sp)
    ctx->pc = 0x170924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170928: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x170928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17092c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x17092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170930: 0x90750013  lbu         $s5, 0x13($v1)
    ctx->pc = 0x170930u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x170934: 0x32b700ff  andi        $s7, $s5, 0xFF
    ctx->pc = 0x170934u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x170938: 0x171840  sll         $v1, $s7, 1
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x17093c: 0x77a021  addu        $s4, $v1, $s7
    ctx->pc = 0x17093cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x170940: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x170940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x170944: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x170944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x170948: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x170948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x17094c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x17094cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x170950: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x170954: 0x34503333  ori         $s0, $v0, 0x3333
    ctx->pc = 0x170954u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x170958: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x170958u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17095c: 0x25040020  addiu       $a0, $t0, 0x20
    ctx->pc = 0x17095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x170960: 0x24e50020  addiu       $a1, $a3, 0x20
    ctx->pc = 0x170960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x170964: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x170964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x170968: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x170968u;
    SET_GPR_U32(ctx, 31, 0x170970u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x170970u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170970u) { return; }
    ctx->pc = 0x170970u;
label_170970:
    // 0x170970: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x170970u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170974: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x170974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x170978: 0x8c350140  lw          $s5, 0x140($at)
    ctx->pc = 0x170978u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5D0140u));
    // 0x17097c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x17097cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x170980: 0x8fb70188  lw          $s7, 0x188($sp)
    ctx->pc = 0x170980u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170984: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x170984u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x170988: 0x8eb70064  lw          $s7, 0x64($s5)
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x17098c: 0xafb70154  sw          $s7, 0x154($sp)
    ctx->pc = 0x17098cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 23));
    // 0x170990: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x170994: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x170998: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17099c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x17099cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1709a0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1709a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1709a4: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1709A4u;
    SET_GPR_U32(ctx, 31, 0x1709ACu);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1709ACu;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1709ACu) { return; }
    ctx->pc = 0x1709ACu;
label_1709ac:
    // 0x1709ac: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1709b0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1709b4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1709b8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1709b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1709bc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1709c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1709c4: 0x2448bd50  addiu       $t0, $v0, -0x42B0
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x1709c8: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1709C8u;
    SET_GPR_U32(ctx, 31, 0x1709D0u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1709D0u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1709D0u) { return; }
    ctx->pc = 0x1709D0u;
label_1709d0:
    // 0x1709d0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1709d4: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x1709d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1709d8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1709dc: 0x24770008  addiu       $s7, $v1, 0x8
    ctx->pc = 0x1709dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1709e0:
    // 0x1709e0: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1709e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1709e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1709e8: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1709e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1709ec: 0x10600152  beqz        $v1, . + 4 + (0x152 << 2)
    ctx->pc = 0x1709ECu;
    {
        const bool branch_taken_0x1709ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1709ec) {
            ctx->pc = 0x170F38u;
            goto label_170f38;
        }
    }
    ctx->pc = 0x1709F4u;
    // 0x1709f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1709f8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1709fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1709fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170a00: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x170a04: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x170a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x170a08: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x170a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x170a0c: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x170a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x170a10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170a14: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x170a14u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x170a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x170a1c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x170a1cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a20: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x170a20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a24: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x170a24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a2c: 0x0  nop
    ctx->pc = 0x170a2cu;
    // NOP
    // 0x170a30: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x170a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170a34: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170a38: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170a3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x170a3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x170a40: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x170A40u;
    {
        const bool branch_taken_0x170a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170a40) {
            ctx->pc = 0x170C50u;
            goto label_170c50;
        }
    }
    ctx->pc = 0x170A48u;
label_170a48:
    // 0x170a48: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170a4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170a50: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x170a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x170a54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170a58: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170A58u;
    {
        const bool branch_taken_0x170a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x170a58) {
            ctx->pc = 0x170A88u;
            goto label_170a88;
        }
    }
    ctx->pc = 0x170A60u;
    // 0x170a60: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170a64: 0x9424cc8a  lhu         $a0, -0x3376($at)
    ctx->pc = 0x170a64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x170a68: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x170a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x170a6c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x170a6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a70: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170a74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170a78: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x170a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170a7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170a80: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x170A80u;
    {
        const bool branch_taken_0x170a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x170a80) {
            ctx->pc = 0x170C70u;
            goto label_170c70;
        }
    }
    ctx->pc = 0x170A88u;
label_170a88:
    // 0x170a88: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170a8c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x170a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x170a90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x170a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170a94: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x170a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x170a98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170a9c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170aa0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x170aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170aa4: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x170aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x170aa8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170aac: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170ab0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170ab4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170ab8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170ac0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170ac4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170ac8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170ad0: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x170ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170ad4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x170ad8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170adc: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x170adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x170ae0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x170ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x170ae4: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x170ae8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170AE8u;
    {
        const bool branch_taken_0x170ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ae8) {
            ctx->pc = 0x170B20u;
            goto label_170b20;
        }
    }
    ctx->pc = 0x170AF0u;
    // 0x170af0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170af4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170afc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170b00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170b04: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170b08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170b0c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x170b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x170b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x170b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x170b14: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x170B14u;
    {
        const bool branch_taken_0x170b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b14) {
            ctx->pc = 0x170C40u;
            goto label_170c40;
        }
    }
    ctx->pc = 0x170B1Cu;
    // 0x170b1c: 0x0  nop
    ctx->pc = 0x170b1cu;
    // NOP
label_170b20:
    // 0x170b20: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170b24: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x170b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x170b28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x170b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170b2c: 0x306200a0  andi        $v0, $v1, 0xA0
    ctx->pc = 0x170b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x170b30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170B30u;
    {
        const bool branch_taken_0x170b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b30) {
            ctx->pc = 0x170B68u;
            goto label_170b68;
        }
    }
    ctx->pc = 0x170B38u;
    // 0x170b38: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170b3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170b40: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x170b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170b44: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x170b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170b48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170b4c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170b50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170b54: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x170b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x170b58: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x170b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x170b5c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x170B5Cu;
    {
        const bool branch_taken_0x170b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b5c) {
            ctx->pc = 0x170C40u;
            goto label_170c40;
        }
    }
    ctx->pc = 0x170B64u;
    // 0x170b64: 0x0  nop
    ctx->pc = 0x170b64u;
    // NOP
label_170b68:
    // 0x170b68: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170b6c: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x170b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170b70: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x170b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x170b74: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170b78: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x170b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x170b7c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x170b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x170b80: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170b84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x170b84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170b88: 0xc05da44  jal         func_176910
    ctx->pc = 0x170B88u;
    SET_GPR_U32(ctx, 31, 0x170B90u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170B88u, 0x170B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B90u;
label_170b90:
    // 0x170b90: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x170b94: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x170b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170b98: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170ba0: 0x0  nop
    ctx->pc = 0x170ba0u;
    // NOP
    // 0x170ba4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x170BA4u;
    {
        const bool branch_taken_0x170ba4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170ba4) {
            ctx->pc = 0x170BC0u;
            goto label_170bc0;
        }
    }
    ctx->pc = 0x170BACu;
    // 0x170bac: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170bb0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170bb4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170bb8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x170bb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170bbc: 0x0  nop
    ctx->pc = 0x170bbcu;
    // NOP
label_170bc0:
    // 0x170bc0: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x170bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170bc4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x170bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170bc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170bcc: 0x0  nop
    ctx->pc = 0x170bccu;
    // NOP
    // 0x170bd0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170BD0u;
    {
        const bool branch_taken_0x170bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170bd0) {
            ctx->pc = 0x170C00u;
            goto label_170c00;
        }
    }
    ctx->pc = 0x170BD8u;
    // 0x170bd8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x170bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170bdc: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x170be0: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x170be0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x170be4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x170be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170be8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170bec: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x170becu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x170bf0: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170bf4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170bf8: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x170bf8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x170bfc: 0x0  nop
    ctx->pc = 0x170bfcu;
    // NOP
label_170c00:
    // 0x170c00: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x170c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170c04: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x170c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170c0c: 0x0  nop
    ctx->pc = 0x170c0cu;
    // NOP
    // 0x170c10: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x170C10u;
    {
        const bool branch_taken_0x170c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170c10) {
            ctx->pc = 0x170C40u;
            goto label_170c40;
        }
    }
    ctx->pc = 0x170C18u;
    // 0x170c18: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x170c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c1c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x170c20: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x170c20u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x170c24: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x170c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c28: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170c2c: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x170c2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x170c30: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170c34: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x170c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170c38: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x170c38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x170c3c: 0x0  nop
    ctx->pc = 0x170c3cu;
    // NOP
label_170c40:
    // 0x170c40: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x170c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x170c44: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x170c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170c48: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x170c48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x170c4c: 0x0  nop
    ctx->pc = 0x170c4cu;
    // NOP
label_170c50:
    // 0x170c50: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x170c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170c54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170c58: 0x9426cc8e  lhu         $a2, -0x3372($at)
    ctx->pc = 0x170c58u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x170c5c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x170c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x170c60: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170c64: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x170C64u;
    {
        const bool branch_taken_0x170c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170c64) {
            ctx->pc = 0x170A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170a48;
        }
    }
    ctx->pc = 0x170C6Cu;
    // 0x170c6c: 0x0  nop
    ctx->pc = 0x170c6cu;
    // NOP
label_170c70:
    // 0x170c70: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x170C70u;
    {
        const bool branch_taken_0x170c70 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x170c70) {
            ctx->pc = 0x170C88u;
            goto label_170c88;
        }
    }
    ctx->pc = 0x170C78u;
    // 0x170c78: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170c7c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x170c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x170c80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170C80u;
    {
        const bool branch_taken_0x170c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c80) {
            ctx->pc = 0x170C90u;
            goto label_170c90;
        }
    }
    ctx->pc = 0x170C88u;
label_170c88:
    // 0x170c88: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x170c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
    // 0x170c8c: 0x0  nop
    ctx->pc = 0x170c8cu;
    // NOP
label_170c90:
    // 0x170c90: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x170c94: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x170c94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x170c98: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x170C98u;
    {
        const bool branch_taken_0x170c98 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x170c98) {
            ctx->pc = 0x170CB0u;
            goto label_170cb0;
        }
    }
    ctx->pc = 0x170CA0u;
    // 0x170ca0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170ca4: 0xafa50174  sw          $a1, 0x174($sp)
    ctx->pc = 0x170ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 5));
    // 0x170ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170CA8u;
    {
        const bool branch_taken_0x170ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ca8) {
            ctx->pc = 0x170CB8u;
            goto label_170cb8;
        }
    }
    ctx->pc = 0x170CB0u;
label_170cb0:
    // 0x170cb0: 0xafb10174  sw          $s1, 0x174($sp)
    ctx->pc = 0x170cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 17));
    // 0x170cb4: 0x0  nop
    ctx->pc = 0x170cb4u;
    // NOP
label_170cb8:
    // 0x170cb8: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x170cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x170cbc: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x170cbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x170cc0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x170CC0u;
    {
        const bool branch_taken_0x170cc0 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x170cc0) {
            ctx->pc = 0x170CD8u;
            goto label_170cd8;
        }
    }
    ctx->pc = 0x170CC8u;
    // 0x170cc8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x170cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x170ccc: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x170cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x170cd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x170CD0u;
    {
        const bool branch_taken_0x170cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170cd0) {
            ctx->pc = 0x170CE0u;
            goto label_170ce0;
        }
    }
    ctx->pc = 0x170CD8u;
label_170cd8:
    // 0x170cd8: 0xafb40178  sw          $s4, 0x178($sp)
    ctx->pc = 0x170cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 20));
    // 0x170cdc: 0x0  nop
    ctx->pc = 0x170cdcu;
    // NOP
label_170ce0:
    // 0x170ce0: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x170ce4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x170ce4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170ce8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x170cec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170cf0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170cf4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170cf8: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170cfc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170d00: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170d04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170d04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d08: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170d0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170d10: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x170d14: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x170d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170d18: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170d1c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170d20: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170d24: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170d28: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170d2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170d2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d30: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x170d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170d34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170d34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170d38: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x170d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x170d3c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x170d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x170d40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170d44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170d48: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170d4c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170d50: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170d54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170d54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d58: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170d5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170d60: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170d64: 0x161980  sll         $v1, $s6, 6
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170d68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x170d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170d6c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x170d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170d70: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x170d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170d74: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x170d78: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170d7c: 0xc040c80  jal         func_103200
    ctx->pc = 0x170D7Cu;
    SET_GPR_U32(ctx, 31, 0x170D84u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170D84u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170D84u) { return; }
    ctx->pc = 0x170D84u;
label_170d84:
    // 0x170d84: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170d88: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x170d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170d8c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x170d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x170d90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170d94: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x170d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170d98: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x170d9c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170da0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x170da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170da4: 0xc040c80  jal         func_103200
    ctx->pc = 0x170DA4u;
    SET_GPR_U32(ctx, 31, 0x170DACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170DACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170DACu) { return; }
    ctx->pc = 0x170DACu;
label_170dac:
    // 0x170dac: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x170dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170db0: 0x161980  sll         $v1, $s6, 6
    ctx->pc = 0x170db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170db4: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x170db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x170db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170dbc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x170dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170dc0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170dc4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170dc8: 0xc040c80  jal         func_103200
    ctx->pc = 0x170DC8u;
    SET_GPR_U32(ctx, 31, 0x170DD0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170DD0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170DD0u) { return; }
    ctx->pc = 0x170DD0u;
label_170dd0:
    // 0x170dd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x170dd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170dd4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x170dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x170dd8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x170dd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ddc: 0x0  nop
    ctx->pc = 0x170ddcu;
    // NOP
    // 0x170de0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x170de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x170de4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x170de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x170de8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x170de8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170dec: 0x0  nop
    ctx->pc = 0x170decu;
    // NOP
    // 0x170df0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x170df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x170df4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x170df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x170df8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x170df8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170dfc: 0x0  nop
    ctx->pc = 0x170dfcu;
    // NOP
    // 0x170e00: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x170e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x170e04: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x170e08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170e0c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x170e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170e10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170e14: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170e18: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170e1c: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x170e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x170e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e24: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x170e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170e28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170e28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170e2c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x170e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x170e30: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x170e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x170e34: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x170e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x170e38: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x170e3c: 0x24a2bd00  addiu       $v0, $a1, -0x4300
    ctx->pc = 0x170e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x170e40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170e44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x170e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x170e48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e4c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170e50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170e50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170e54: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x170e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x170e58: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x170e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x170e5c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x170e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170e60: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x170e60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x170e64: 0x2603bd00  addiu       $v1, $s0, -0x4300
    ctx->pc = 0x170e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950144));
    // 0x170e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x170e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170e6c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x170e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x170e70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e74: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x170e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170e78: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170e78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170e7c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x170e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170e80: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170e84: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x170e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170e88: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170E88u;
    SET_GPR_U32(ctx, 31, 0x170E90u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x170E90u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170E90u) { return; }
    ctx->pc = 0x170E90u;
label_170e90:
    // 0x170e90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x170e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170e94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x170e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170e98: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x170e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170e9c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170E9Cu;
    SET_GPR_U32(ctx, 31, 0x170EA4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x170EA4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170EA4u) { return; }
    ctx->pc = 0x170EA4u;
label_170ea4:
    // 0x170ea4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170ea8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170eac: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x170eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170eb0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170EB0u;
    SET_GPR_U32(ctx, 31, 0x170EB8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x170EB8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170EB8u) { return; }
    ctx->pc = 0x170EB8u;
label_170eb8:
    // 0x170eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ec0: 0x0  nop
    ctx->pc = 0x170ec0u;
    // NOP
    // 0x170ec4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x170ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x170ec8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x170ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x170ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ed0: 0x0  nop
    ctx->pc = 0x170ed0u;
    // NOP
    // 0x170ed4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x170ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ee0: 0x0  nop
    ctx->pc = 0x170ee0u;
    // NOP
    // 0x170ee4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x170ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x170ee8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x170ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x170eec: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x170eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x170ef0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x170ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170ef4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x170ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170ef8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170efc: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x170EFCu;
    SET_GPR_U32(ctx, 31, 0x170F04u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x170F04u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170F04u) { return; }
    ctx->pc = 0x170F04u;
label_170f04:
    // 0x170f04: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x170f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x170f08: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170f0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x170f0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x170f10: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170f14: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x170f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x170f18: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x170f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170f1c: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170f20: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x170f20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x170f24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170f28: 0x2448bd50  addiu       $t0, $v0, -0x42B0
    ctx->pc = 0x170f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x170f2c: 0xc040ddc  jal         func_103770
    ctx->pc = 0x170F2Cu;
    SET_GPR_U32(ctx, 31, 0x170F34u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x170F34u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170F34u) { return; }
    ctx->pc = 0x170F34u;
label_170f34:
    // 0x170f34: 0x0  nop
    ctx->pc = 0x170f34u;
    // NOP
label_170f38:
    // 0x170f38: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x170f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x170f3c: 0x26e80010  addiu       $t0, $s7, 0x10
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x170f40: 0x7100be28  paddub      $s7, $t0, $zero
    ctx->pc = 0x170f40u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x170f44: 0x11e382b  sltu        $a3, $t0, $fp
    ctx->pc = 0x170f44u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x170f48: 0x14e0fea5  bnez        $a3, . + 4 + (-0x15B << 2)
    ctx->pc = 0x170F48u;
    {
        const bool branch_taken_0x170f48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x170f48) {
            ctx->pc = 0x1709E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1709e0;
        }
    }
    ctx->pc = 0x170F50u;
    // 0x170f50: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x170f54: 0x90750003  lbu         $s5, 0x3($v1)
    ctx->pc = 0x170f54u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x170f58: 0x32b700ff  andi        $s7, $s5, 0xFF
    ctx->pc = 0x170f58u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x170f5c: 0x32e30040  andi        $v1, $s7, 0x40
    ctx->pc = 0x170f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x170f60: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x170F60u;
    {
        const bool branch_taken_0x170f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f60) {
            ctx->pc = 0x170FF0u;
            goto label_170ff0;
        }
    }
    ctx->pc = 0x170F68u;
    // 0x170f68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x170f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x170f6c: 0x8c340af0  lw          $s4, 0xAF0($at)
    ctx->pc = 0x170f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x170f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x170f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x170f74: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x170f78: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x170f7c: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x170f80: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x170f84: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x170F84u;
    SET_GPR_U32(ctx, 31, 0x170F8Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x170F84u, 0x170F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F8Cu;
label_170f8c:
    // 0x170f8c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x170f8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170f98: 0x0  nop
    ctx->pc = 0x170f98u;
    // NOP
    // 0x170f9c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x170f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x170fa0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x170fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x170fa4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x170fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x170fa8: 0xc040c24  jal         func_103090
    ctx->pc = 0x170FA8u;
    SET_GPR_U32(ctx, 31, 0x170FB0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x170FB0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170FB0u) { return; }
    ctx->pc = 0x170FB0u;
label_170fb0:
    // 0x170fb0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x170fb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170fb4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170fb8: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x170fb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x170fbc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x170fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x170fc0: 0x24770008  addiu       $s7, $v1, 0x8
    ctx->pc = 0x170fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_170fc4:
    // 0x170fc4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x170fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fc8: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x170fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x170fcc: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x170fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fd0: 0xe6a00074  swc1        $f0, 0x74($s5)
    ctx->pc = 0x170fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    // 0x170fd4: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x170fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fd8: 0xe6a00078  swc1        $f0, 0x78($s5)
    ctx->pc = 0x170fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
    // 0x170fdc: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x170fe0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x170fe4: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x170fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x170fe8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x170FE8u;
    {
        const bool branch_taken_0x170fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170fe8) {
            ctx->pc = 0x170FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170fc4;
        }
    }
    ctx->pc = 0x170FF0u;
label_170ff0:
    // 0x170ff0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x170ff0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170ff4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x170ff4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170ff8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x170ff8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170ffc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x170ffcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171000: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x171000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171004: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x171008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17100c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17100cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171018: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x171018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x17101c: 0x3e00008  jr          $ra
    ctx->pc = 0x17101Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17101Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171024u;
}
