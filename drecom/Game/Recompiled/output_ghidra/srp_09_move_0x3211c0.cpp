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

// Function: srp_09_move
// Address: 0x3211c0 - 0x321ae0
void srp_09_move_0x3211c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_09_move_0x3211c0");
#endif

    switch (ctx->pc) {
        case 0x321234u: goto label_321234;
        case 0x321320u: goto label_321320;
        case 0x32133cu: goto label_32133c;
        case 0x321360u: goto label_321360;
        case 0x321390u: goto label_321390;
        case 0x3213bcu: goto label_3213bc;
        case 0x3214a4u: goto label_3214a4;
        case 0x3214f4u: goto label_3214f4;
        case 0x32151cu: goto label_32151c;
        case 0x321550u: goto label_321550;
        case 0x32156cu: goto label_32156c;
        case 0x3215a4u: goto label_3215a4;
        case 0x321698u: goto label_321698;
        case 0x32170cu: goto label_32170c;
        case 0x321724u: goto label_321724;
        case 0x321740u: goto label_321740;
        case 0x32174cu: goto label_32174c;
        case 0x321778u: goto label_321778;
        case 0x3217ecu: goto label_3217ec;
        case 0x3217fcu: goto label_3217fc;
        case 0x32180cu: goto label_32180c;
        case 0x321840u: goto label_321840;
        case 0x321894u: goto label_321894;
        case 0x3218bcu: goto label_3218bc;
        case 0x3218d8u: goto label_3218d8;
        case 0x321904u: goto label_321904;
        case 0x321910u: goto label_321910;
        case 0x321940u: goto label_321940;
        case 0x3219b4u: goto label_3219b4;
        case 0x3219c4u: goto label_3219c4;
        case 0x3219d4u: goto label_3219d4;
        case 0x321a08u: goto label_321a08;
        case 0x321a5cu: goto label_321a5c;
        default: break;
    }

    ctx->pc = 0x3211c0u;

    // 0x3211c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3211c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x3211c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3211c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3211c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3211c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3211cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3211ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3211d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3211d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3211d4: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x3211d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x3211d8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3211d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3211dc: 0xa0600348  sb          $zero, 0x348($v1)
    ctx->pc = 0x3211dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x3211e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3211e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3211e4: 0x90440344  lbu         $a0, 0x344($v0)
    ctx->pc = 0x3211e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3211e8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3211e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3211ec: 0xa0640345  sb          $a0, 0x345($v1)
    ctx->pc = 0x3211ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x3211f0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3211f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3211f4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3211f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3211f8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3211f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3211fc: 0xa0820346  sb          $v0, 0x346($a0)
    ctx->pc = 0x3211fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x321200: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321204: 0xc4a1027c  lwc1        $f1, 0x27C($a1)
    ctx->pc = 0x321204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x321208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32120c: 0x0  nop
    ctx->pc = 0x32120cu;
    // NOP
    // 0x321210: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321210u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321214: 0x0  nop
    ctx->pc = 0x321214u;
    // NOP
    // 0x321218: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x321218u;
    {
        const bool branch_taken_0x321218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x321218) {
            ctx->pc = 0x3213A8u;
            goto label_3213a8;
        }
    }
    ctx->pc = 0x321220u;
    // 0x321220: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321224: 0x90c20344  lbu         $v0, 0x344($a2)
    ctx->pc = 0x321224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 836)));
    // 0x321228: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x321228u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32122c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x32122Cu;
    {
        const bool branch_taken_0x32122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32122c) {
            ctx->pc = 0x321398u;
            goto label_321398;
        }
    }
    ctx->pc = 0x321234u;
label_321234:
    // 0x321234: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321238: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32123c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321240: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x321240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321244: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x321244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x321248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32124c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x32124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321250: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x321250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321254: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x321254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321258: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321258u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32125c: 0x0  nop
    ctx->pc = 0x32125cu;
    // NOP
    // 0x321260: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x321260u;
    {
        const bool branch_taken_0x321260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x321260) {
            ctx->pc = 0x3212D0u;
            goto label_3212d0;
        }
    }
    ctx->pc = 0x321268u;
    // 0x321268: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32126c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321270: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x321270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321274: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x321274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321278: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32127c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321280: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321288: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x321288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32128c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x32128cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321290: 0x0  nop
    ctx->pc = 0x321290u;
    // NOP
    // 0x321294: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x321294u;
    {
        const bool branch_taken_0x321294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x321294) {
            ctx->pc = 0x3212D0u;
            goto label_3212d0;
        }
    }
    ctx->pc = 0x32129Cu;
    // 0x32129c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32129cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3212a0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3212a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212a4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3212a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3212a8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3212a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3212ac: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3212acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3212b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3212b4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3212b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212b8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3212b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3212bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3212bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3212c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3212c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3212c4: 0x0  nop
    ctx->pc = 0x3212c4u;
    // NOP
    // 0x3212c8: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x3212C8u;
    {
        const bool branch_taken_0x3212c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3212c8) {
            ctx->pc = 0x321368u;
            goto label_321368;
        }
    }
    ctx->pc = 0x3212D0u;
label_3212d0:
    // 0x3212d0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x3212d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3212d4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3212d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212d8: 0xa0a40345  sb          $a0, 0x345($a1)
    ctx->pc = 0x3212d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x3212dc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3212dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212e0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3212e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3212e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3212e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3212e8: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x3212e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3212ec: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3212ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3212f0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3212f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212f4: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x3212f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x3212f8: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x3212f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3212fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x3212fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x321300: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321304: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x321304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x321308: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32130c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321310: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x321310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x321314: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x321314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321318: 0xc040c80  jal         func_103200
    ctx->pc = 0x321318u;
    SET_GPR_U32(ctx, 31, 0x321320u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x321320u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321320u) { return; }
    ctx->pc = 0x321320u;
label_321320:
    // 0x321320: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x321320u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321324: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321328: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x321328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32132c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321330: 0xc44c027c  lwc1        $f12, 0x27C($v0)
    ctx->pc = 0x321330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x321334: 0xc040c8c  jal         func_103230
    ctx->pc = 0x321334u;
    SET_GPR_U32(ctx, 31, 0x32133Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x32133Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32133Cu) { return; }
    ctx->pc = 0x32133Cu;
label_32133c:
    // 0x32133c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32133cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321340: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321344: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x321344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x321348: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x321348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32134c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321350: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x321350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321354: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x321354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321358: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x321358u;
    SET_GPR_U32(ctx, 31, 0x321360u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x321358u, 0x321360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321360u;
label_321360:
    // 0x321360: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x321360u;
    {
        const bool branch_taken_0x321360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321360) {
            ctx->pc = 0x321390u;
            goto label_321390;
        }
    }
    ctx->pc = 0x321368u;
label_321368:
    // 0x321368: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x321368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32136c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321370: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x321370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x321374: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x321374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321378: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x321378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32137c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321380: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x321380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321384: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x321384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x321388: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x321388u;
    SET_GPR_U32(ctx, 31, 0x321390u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x321390u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321390u) { return; }
    ctx->pc = 0x321390u;
label_321390:
    // 0x321390: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x321390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321394: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x321394u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_321398:
    // 0x321398: 0x1600ffa6  bnez        $s0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x321398u;
    {
        const bool branch_taken_0x321398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x321398) {
            ctx->pc = 0x321234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321234;
        }
    }
    ctx->pc = 0x3213A0u;
    // 0x3213a0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3213A0u;
    {
        const bool branch_taken_0x3213a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213a0) {
            ctx->pc = 0x321530u;
            goto label_321530;
        }
    }
    ctx->pc = 0x3213A8u;
label_3213a8:
    // 0x3213a8: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3213a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213ac: 0x90c20344  lbu         $v0, 0x344($a2)
    ctx->pc = 0x3213acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 836)));
    // 0x3213b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3213b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3213b4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3213B4u;
    {
        const bool branch_taken_0x3213b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213b4) {
            ctx->pc = 0x321528u;
            goto label_321528;
        }
    }
    ctx->pc = 0x3213BCu;
label_3213bc:
    // 0x3213bc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3213bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3213c0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3213c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3213c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3213c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3213c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3213cc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3213ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3213d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3213d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3213d4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3213d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3213d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3213dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3213dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3213e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3213e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3213e4: 0x0  nop
    ctx->pc = 0x3213e4u;
    // NOP
    // 0x3213e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3213E8u;
    {
        const bool branch_taken_0x3213e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3213e8) {
            ctx->pc = 0x321458u;
            goto label_321458;
        }
    }
    ctx->pc = 0x3213F0u;
    // 0x3213f0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3213f4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3213f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3213f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3213fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3213fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321400: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x321404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321408: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32140c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321410: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x321410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321414: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321418: 0x0  nop
    ctx->pc = 0x321418u;
    // NOP
    // 0x32141c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x32141Cu;
    {
        const bool branch_taken_0x32141c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32141c) {
            ctx->pc = 0x321458u;
            goto label_321458;
        }
    }
    ctx->pc = 0x321424u;
    // 0x321424: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321428: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32142c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x32142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x321430: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x321430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321434: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321438: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x321438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32143c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x32143cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321440: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x321440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x321444: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x321444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321448: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321448u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32144c: 0x0  nop
    ctx->pc = 0x32144cu;
    // NOP
    // 0x321450: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x321450u;
    {
        const bool branch_taken_0x321450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x321450) {
            ctx->pc = 0x3214B0u;
            goto label_3214b0;
        }
    }
    ctx->pc = 0x321458u;
label_321458:
    // 0x321458: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x321458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x32145c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x32145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321460: 0xa0a40345  sb          $a0, 0x345($a1)
    ctx->pc = 0x321460u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x321464: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321468: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x321468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x32146c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x321470: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x321470u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x321474: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x321474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x321478: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32147c: 0xa0c50348  sb          $a1, 0x348($a2)
    ctx->pc = 0x32147cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 840), (uint8_t)GPR_U32(ctx, 5));
    // 0x321480: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x321480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321484: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321488: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x321488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x32148c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321490: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321494: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321498: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x321498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32149c: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x32149Cu;
    SET_GPR_U32(ctx, 31, 0x3214A4u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x3214A4u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3214A4u) { return; }
    ctx->pc = 0x3214A4u;
label_3214a4:
    // 0x3214a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3214a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3214a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3214A8u;
    {
        const bool branch_taken_0x3214a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3214a8) {
            ctx->pc = 0x321520u;
            goto label_321520;
        }
    }
    ctx->pc = 0x3214B0u;
label_3214b0:
    // 0x3214b0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3214b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3214b4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3214b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3214b8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3214b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3214bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3214bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3214c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3214c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3214c4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3214c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3214c8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3214c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3214cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3214ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3214d0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3214d4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3214d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3214d8: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x3214d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3214dc: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x3214dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3214e0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3214e4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3214e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3214e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3214e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3214ec: 0xc040c80  jal         func_103200
    ctx->pc = 0x3214ECu;
    SET_GPR_U32(ctx, 31, 0x3214F4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x3214F4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3214F4u) { return; }
    ctx->pc = 0x3214F4u;
label_3214f4:
    // 0x3214f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3214f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3214f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3214f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3214fc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3214fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321500: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321504: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321508: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x321508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32150c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321510: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x321510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321514: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x321514u;
    SET_GPR_U32(ctx, 31, 0x32151Cu);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x32151Cu;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32151Cu) { return; }
    ctx->pc = 0x32151Cu;
label_32151c:
    // 0x32151c: 0x0  nop
    ctx->pc = 0x32151cu;
    // NOP
label_321520:
    // 0x321520: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x321520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321524: 0x0  nop
    ctx->pc = 0x321524u;
    // NOP
label_321528:
    // 0x321528: 0x1600ffa4  bnez        $s0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x321528u;
    {
        const bool branch_taken_0x321528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x321528) {
            ctx->pc = 0x3213BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3213bc;
        }
    }
    ctx->pc = 0x321530u;
label_321530:
    // 0x321530: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321534: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321538: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32153c: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x32153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x321540: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x321544: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x321544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x321548: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x321548u;
    SET_GPR_U32(ctx, 31, 0x321550u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x321548u, 0x321550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321550u;
label_321550:
    // 0x321550: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321554: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321558: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x321558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32155c: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x32155cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x321560: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x321560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x321564: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x321564u;
    SET_GPR_U32(ctx, 31, 0x32156Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x321564u, 0x32156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32156Cu;
label_32156c:
    // 0x32156c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x321570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321574: 0x0  nop
    ctx->pc = 0x321574u;
    // NOP
    // 0x321578: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x321578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x32157c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321580: 0x8c630270  lw          $v1, 0x270($v1)
    ctx->pc = 0x321580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x321584: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x321584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x321588: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x321588u;
    {
        const bool branch_taken_0x321588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321588) {
            ctx->pc = 0x321604u;
            goto label_321604;
        }
    }
    ctx->pc = 0x321590u;
    // 0x321590: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321594: 0x244402b0  addiu       $a0, $v0, 0x2B0
    ctx->pc = 0x321594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x321598: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x321598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32159c: 0xc0c802c  jal         func_3200B0
    ctx->pc = 0x32159Cu;
    SET_GPR_U32(ctx, 31, 0x3215A4u);
    ctx->pc = 0x3200B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3200B0u, 0x32159Cu, 0x3215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215A4u;
label_3215a4:
    // 0x3215a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3215A4u;
    {
        const bool branch_taken_0x3215a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3215a4) {
            ctx->pc = 0x3215E8u;
            goto label_3215e8;
        }
    }
    ctx->pc = 0x3215ACu;
    // 0x3215ac: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3215acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215b0: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x3215b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x3215b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3215b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3215b8: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x3215b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x3215bc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3215bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215c0: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x3215c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x3215c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3215c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3215c8: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x3215c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x3215cc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3215ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3215d0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3215d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3215d4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3215d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215d8: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x3215d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3215dc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3215dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3215e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3215E0u;
    {
        const bool branch_taken_0x3215e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3215e0) {
            ctx->pc = 0x321638u;
            goto label_321638;
        }
    }
    ctx->pc = 0x3215E8u;
label_3215e8:
    // 0x3215e8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3215ec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3215ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3215f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3215f4: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x3215f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3215f8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3215f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3215fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3215FCu;
    {
        const bool branch_taken_0x3215fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3215fc) {
            ctx->pc = 0x321638u;
            goto label_321638;
        }
    }
    ctx->pc = 0x321604u;
label_321604:
    // 0x321604: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321608: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x321608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x32160c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x321610: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x321610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x321614: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321618: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x321618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x32161c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321620: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x321620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x321624: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x321624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x321628: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x321628u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32162c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321630: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x321630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x321634: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x321634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_321638:
    // 0x321638: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32163c: 0x8c630270  lw          $v1, 0x270($v1)
    ctx->pc = 0x32163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x321640: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x321640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x321644: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x321644u;
    {
        const bool branch_taken_0x321644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321644) {
            ctx->pc = 0x321678u;
            goto label_321678;
        }
    }
    ctx->pc = 0x32164Cu;
    // 0x32164c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321650: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x321650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x321654: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321658: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x321658u;
    {
        const bool branch_taken_0x321658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321658) {
            ctx->pc = 0x321678u;
            goto label_321678;
        }
    }
    ctx->pc = 0x321660u;
    // 0x321660: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321664: 0x8c830358  lw          $v1, 0x358($a0)
    ctx->pc = 0x321664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 856)));
    // 0x321668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32166c: 0xac830358  sw          $v1, 0x358($a0)
    ctx->pc = 0x32166cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 3));
    // 0x321670: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x321670u;
    {
        const bool branch_taken_0x321670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321670) {
            ctx->pc = 0x321AC4u;
            goto label_321ac4;
        }
    }
    ctx->pc = 0x321678u;
label_321678:
    // 0x321678: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32167c: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x32167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x321680: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x321680u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321684: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321688: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x321688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x32168c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32168cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321690: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321690u;
    {
        const bool branch_taken_0x321690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321690) {
            ctx->pc = 0x3216D0u;
            goto label_3216d0;
        }
    }
    ctx->pc = 0x321698u;
label_321698:
    // 0x321698: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32169c: 0x90420345  lbu         $v0, 0x345($v0)
    ctx->pc = 0x32169cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 837)));
    // 0x3216a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3216a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3216a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3216a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3216a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3216a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3216ac: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3216b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3216b4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3216b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3216b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3216b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3216bc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3216c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3216c4: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x3216c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x3216c8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3216c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3216cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3216ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3216d0:
    // 0x3216d0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216d4: 0x90420348  lbu         $v0, 0x348($v0)
    ctx->pc = 0x3216d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x3216d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3216d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3216dc: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x3216dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3216e0: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3216E0u;
    {
        const bool branch_taken_0x3216e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3216e0) {
            ctx->pc = 0x321698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321698;
        }
    }
    ctx->pc = 0x3216E8u;
    // 0x3216e8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3216e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3216ec: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x3216ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x3216f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3216f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3216f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3216f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3216f8: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3216F8u;
    {
        const bool branch_taken_0x3216f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3216f8) {
            ctx->pc = 0x3218ACu;
            goto label_3218ac;
        }
    }
    ctx->pc = 0x321700u;
    // 0x321700: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x321700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x321704: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x321704u;
    SET_GPR_U32(ctx, 31, 0x32170Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x32170Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32170Cu) { return; }
    ctx->pc = 0x32170Cu;
label_32170c:
    // 0x32170c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321710: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321714: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x321714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x321718: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x321718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x32171c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x32171Cu;
    SET_GPR_U32(ctx, 31, 0x321724u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x321724u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321724u) { return; }
    ctx->pc = 0x321724u;
label_321724:
    // 0x321724: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321728: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32172c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x32172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x321730: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x321730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x321734: 0x24460310  addiu       $a2, $v0, 0x310
    ctx->pc = 0x321734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x321738: 0xc040d62  jal         func_103588
    ctx->pc = 0x321738u;
    SET_GPR_U32(ctx, 31, 0x321740u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x321740u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321740u) { return; }
    ctx->pc = 0x321740u;
label_321740:
    // 0x321740: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x321740u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321744: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x321744u;
    {
        const bool branch_taken_0x321744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321744) {
            ctx->pc = 0x321780u;
            goto label_321780;
        }
    }
    ctx->pc = 0x32174Cu;
label_32174c:
    // 0x32174c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321750: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321754: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x321754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321758: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x321758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32175c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321764: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x321764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x321768: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x321768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32176c: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x321770: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x321770u;
    SET_GPR_U32(ctx, 31, 0x321778u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x321778u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321778u) { return; }
    ctx->pc = 0x321778u;
label_321778:
    // 0x321778: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32177c: 0x0  nop
    ctx->pc = 0x32177cu;
    // NOP
label_321780:
    // 0x321780: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321784: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x321784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x321788: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32178c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x32178cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321790: 0x1020ffee  beqz        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x321790u;
    {
        const bool branch_taken_0x321790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321790) {
            ctx->pc = 0x32174Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32174c;
        }
    }
    ctx->pc = 0x321798u;
    // 0x321798: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32179c: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x32179cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x3217a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3217a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3217a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3217a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3217a8: 0x148300b0  bne         $a0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x3217A8u;
    {
        const bool branch_taken_0x3217a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3217a8) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x3217B0u;
    // 0x3217b0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3217b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3217b4: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x3217b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x3217b8: 0x146000ac  bnez        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x3217B8u;
    {
        const bool branch_taken_0x3217b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3217b8) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x3217C0u;
    // 0x3217c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3217c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3217c4: 0x24429db0  addiu       $v0, $v0, -0x6250
    ctx->pc = 0x3217c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
    // 0x3217c8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x3217c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3217cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3217ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399DB0u));
    // 0x3217d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3217d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3217d4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3217d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3217d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3217d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3217dc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3217dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3217e0: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x3217e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3217e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3217E4u;
    SET_GPR_U32(ctx, 31, 0x3217ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3217ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3217ECu) { return; }
    ctx->pc = 0x3217ECu;
label_3217ec:
    // 0x3217ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3217ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3217f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3217f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3217F4u;
    SET_GPR_U32(ctx, 31, 0x3217FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3217FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3217FCu) { return; }
    ctx->pc = 0x3217FCu;
label_3217fc:
    // 0x3217fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3217fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x321800: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x321800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x321804: 0xc040c9e  jal         func_103278
    ctx->pc = 0x321804u;
    SET_GPR_U32(ctx, 31, 0x32180Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x32180Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32180Cu) { return; }
    ctx->pc = 0x32180Cu;
label_32180c:
    // 0x32180c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x32180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321810: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x321810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x321814: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x321814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x321818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32181c: 0x0  nop
    ctx->pc = 0x32181cu;
    // NOP
    // 0x321820: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x321820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x321824: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x321824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x321828: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32182c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x32182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x321830: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x321830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x321834: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x321834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x321838: 0xc059e1c  jal         func_167870
    ctx->pc = 0x321838u;
    SET_GPR_U32(ctx, 31, 0x321840u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x321838u, 0x321840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321840u;
label_321840:
    // 0x321840: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x321840u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321844: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x321844u;
    {
        const bool branch_taken_0x321844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x321844) {
            ctx->pc = 0x321898u;
            goto label_321898;
        }
    }
    ctx->pc = 0x32184Cu;
    // 0x32184c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x32184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321850: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x321850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x321854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x321854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321858: 0x0  nop
    ctx->pc = 0x321858u;
    // NOP
    // 0x32185c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32185cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x321860: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x321860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x321864: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x321864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x321868: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x321868u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32186c: 0x0  nop
    ctx->pc = 0x32186cu;
    // NOP
    // 0x321870: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x321870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x321874: 0x24040117  addiu       $a0, $zero, 0x117
    ctx->pc = 0x321874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x321878: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x321878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x32187c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32187cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321880: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x321880u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321884: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321884u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321888: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x321888u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32188c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x32188Cu;
    SET_GPR_U32(ctx, 31, 0x321894u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x32188Cu, 0x321894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321894u;
label_321894:
    // 0x321894: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x321894u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_321898:
    // 0x321898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x321898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32189c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218a0: 0xac640280  sw          $a0, 0x280($v1)
    ctx->pc = 0x3218a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 4));
    // 0x3218a4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3218A4u;
    {
        const bool branch_taken_0x3218a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3218a4) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x3218ACu;
label_3218ac:
    // 0x3218ac: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3218acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3218b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3218b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218b4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3218B4u;
    SET_GPR_U32(ctx, 31, 0x3218BCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3218BCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3218BCu) { return; }
    ctx->pc = 0x3218BCu;
label_3218bc:
    // 0x3218bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3218bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218c0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3218c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3218c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218c8: 0x24a403c0  addiu       $a0, $a1, 0x3C0
    ctx->pc = 0x3218c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x3218cc: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x3218ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x3218d0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3218D0u;
    SET_GPR_U32(ctx, 31, 0x3218D8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3218D8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3218D8u) { return; }
    ctx->pc = 0x3218D8u;
label_3218d8:
    // 0x3218d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3218d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218dc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3218dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3218e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3218e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3218e8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3218e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3218ec: 0x246603c0  addiu       $a2, $v1, 0x3C0
    ctx->pc = 0x3218ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x3218f0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x3218f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3218f4: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x3218f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x3218f8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3218f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218fc: 0xc040d62  jal         func_103588
    ctx->pc = 0x3218FCu;
    SET_GPR_U32(ctx, 31, 0x321904u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x321904u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321904u) { return; }
    ctx->pc = 0x321904u;
label_321904:
    // 0x321904: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x321904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321908: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321908u;
    {
        const bool branch_taken_0x321908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321908) {
            ctx->pc = 0x321948u;
            goto label_321948;
        }
    }
    ctx->pc = 0x321910u;
label_321910:
    // 0x321910: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x321910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321914: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321918: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x321918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32191c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32191cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321920: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321924: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x321924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321928: 0x24a20480  addiu       $v0, $a1, 0x480
    ctx->pc = 0x321928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x32192c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32192cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321930: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x321934: 0x24660480  addiu       $a2, $v1, 0x480
    ctx->pc = 0x321934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x321938: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x321938u;
    SET_GPR_U32(ctx, 31, 0x321940u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x321940u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321940u) { return; }
    ctx->pc = 0x321940u;
label_321940:
    // 0x321940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x321944: 0x0  nop
    ctx->pc = 0x321944u;
    // NOP
label_321948:
    // 0x321948: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32194c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x32194cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x321950: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321954: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x321954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321958: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x321958u;
    {
        const bool branch_taken_0x321958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321958) {
            ctx->pc = 0x321910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321910;
        }
    }
    ctx->pc = 0x321960u;
    // 0x321960: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321964: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x321964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x321968: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x321968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32196c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x321970: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x321970u;
    {
        const bool branch_taken_0x321970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x321970) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x321978u;
    // 0x321978: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32197c: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x32197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x321980: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x321980u;
    {
        const bool branch_taken_0x321980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321980) {
            ctx->pc = 0x321A6Cu;
            goto label_321a6c;
        }
    }
    ctx->pc = 0x321988u;
    // 0x321988: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32198c: 0x24429dc0  addiu       $v0, $v0, -0x6240
    ctx->pc = 0x32198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
    // 0x321990: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x321990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x321994: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x321994u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399DC0u));
    // 0x321998: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x321998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x32199c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3219a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3219a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3219a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3219a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3219a8: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x3219a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3219ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3219ACu;
    SET_GPR_U32(ctx, 31, 0x3219B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3219B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3219B4u) { return; }
    ctx->pc = 0x3219B4u;
label_3219b4:
    // 0x3219b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3219b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3219b8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3219b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3219bc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3219BCu;
    SET_GPR_U32(ctx, 31, 0x3219C4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3219C4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3219C4u) { return; }
    ctx->pc = 0x3219C4u;
label_3219c4:
    // 0x3219c4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3219c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3219c8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3219c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3219cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3219CCu;
    SET_GPR_U32(ctx, 31, 0x3219D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3219D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3219D4u) { return; }
    ctx->pc = 0x3219D4u;
label_3219d4:
    // 0x3219d4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3219d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3219d8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3219d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x3219dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3219dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3219e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3219e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3219e4: 0x0  nop
    ctx->pc = 0x3219e4u;
    // NOP
    // 0x3219e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3219e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3219ec: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x3219ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3219f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3219f4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3219f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3219f8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3219f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3219fc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3219fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x321a00: 0xc059e1c  jal         func_167870
    ctx->pc = 0x321A00u;
    SET_GPR_U32(ctx, 31, 0x321A08u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x321A00u, 0x321A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A08u;
label_321a08:
    // 0x321a08: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x321a08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321a0c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x321A0Cu;
    {
        const bool branch_taken_0x321a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x321a0c) {
            ctx->pc = 0x321A60u;
            goto label_321a60;
        }
    }
    ctx->pc = 0x321A14u;
    // 0x321a14: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x321a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321a18: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x321a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x321a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x321a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321a20: 0x0  nop
    ctx->pc = 0x321a20u;
    // NOP
    // 0x321a24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x321a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x321a28: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x321a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x321a2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x321a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321a34: 0x0  nop
    ctx->pc = 0x321a34u;
    // NOP
    // 0x321a38: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x321a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x321a3c: 0x24020117  addiu       $v0, $zero, 0x117
    ctx->pc = 0x321a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x321a40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x321a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321a44: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x321a48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x321a48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321a4c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321a4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321a50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x321a50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321a54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x321A54u;
    SET_GPR_U32(ctx, 31, 0x321A5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x321A54u, 0x321A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A5Cu;
label_321a5c:
    // 0x321a5c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321a5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_321a60:
    // 0x321a60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x321a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321a64: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a68: 0xac640280  sw          $a0, 0x280($v1)
    ctx->pc = 0x321a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 4));
label_321a6c:
    // 0x321a6c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a70: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x321a74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x321a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x321a78: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x321A78u;
    {
        const bool branch_taken_0x321a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321a78) {
            ctx->pc = 0x321AB0u;
            goto label_321ab0;
        }
    }
    ctx->pc = 0x321A80u;
    // 0x321a80: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a84: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x321a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x321a88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x321a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321a8c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321a90: 0x8c650278  lw          $a1, 0x278($v1)
    ctx->pc = 0x321a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x321a94: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x321a94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x321a98: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x321A98u;
    {
        const bool branch_taken_0x321a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321a98) {
            ctx->pc = 0x321AB0u;
            goto label_321ab0;
        }
    }
    ctx->pc = 0x321AA0u;
    // 0x321aa0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321aa4: 0x8cc40b18  lw          $a0, 0xB18($a2)
    ctx->pc = 0x321aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2840)));
    // 0x321aa8: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x321aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x321aac: 0xacc30b18  sw          $v1, 0xB18($a2)
    ctx->pc = 0x321aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2840), GPR_U32(ctx, 3));
label_321ab0:
    // 0x321ab0: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x321ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321ab4: 0x90c40348  lbu         $a0, 0x348($a2)
    ctx->pc = 0x321ab4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x321ab8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x321abc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321ac0: 0xac640278  sw          $a0, 0x278($v1)
    ctx->pc = 0x321ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 4));
label_321ac4:
    // 0x321ac4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x321ac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321ac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ad4: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x321ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x321ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x321AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321AE0u;
}
