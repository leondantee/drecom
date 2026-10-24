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

// Function: entry_002756f0
// Address: 0x2756f0 - 0x275918
void entry_002756f0_0x2756f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002756f0_0x2756f0");
#endif

    switch (ctx->pc) {
        case 0x27571cu: goto label_27571c;
        case 0x2757e0u: goto label_2757e0;
        case 0x275824u: goto label_275824;
        case 0x275880u: goto label_275880;
        default: break;
    }

    ctx->pc = 0x2756f0u;

    // 0x2756f0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2756f4: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x2756f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2756f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2756f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2756fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2756fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275700: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275704: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275708: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x275708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27570c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x27570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x275710: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x275714: 0xc040c9e  jal         func_103278
    ctx->pc = 0x275714u;
    SET_GPR_U32(ctx, 31, 0x27571Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x27571Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27571Cu) { return; }
    ctx->pc = 0x27571Cu;
label_27571c:
    // 0x27571c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27571cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275724: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275728: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27572c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x27572cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275730: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x275730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x275734: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275738: 0x8e2402d0  lw          $a0, 0x2D0($s1)
    ctx->pc = 0x275738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27573c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275740: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x275740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x275744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275748: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27574c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x27574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275750: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x275750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x275754: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x275754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x275758: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27575c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x27575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275764: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x275764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x275768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27576c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x27576cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275770: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x275770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x275774: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275778: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27577c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27577cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275780: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275788: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x275788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x27578c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x27578cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275790: 0x3d0f021  addu        $fp, $fp, $s0
    ctx->pc = 0x275790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x275794: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x275794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x275798: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x275798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x27579c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27579cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2757a0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x2757a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2757a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2757a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2757a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2757a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2757ac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2757acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2757b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2757b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2757b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2757b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2757b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2757b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2757bc: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x2757bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2757c0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2757c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2757c4: 0x121240  sll         $v0, $s2, 9
    ctx->pc = 0x2757c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2757c8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2757c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2757cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2757ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2757d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2757d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2757d4: 0x24460c30  addiu       $a2, $v0, 0xC30
    ctx->pc = 0x2757d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
    // 0x2757d8: 0xc040d62  jal         func_103588
    ctx->pc = 0x2757D8u;
    SET_GPR_U32(ctx, 31, 0x2757E0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x2757E0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2757E0u) { return; }
    ctx->pc = 0x2757E0u;
label_2757e0:
    // 0x2757e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2757e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2757e4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2757e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2757e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2757e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2757ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2757ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2757f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2757f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2757f4: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x2757f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2757f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2757f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2757fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2757fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275800: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x275800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x275804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x275808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27580c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27580cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x275810: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x275810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275814: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x275814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275818: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x275818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27581c: 0xc040c92  jal         func_103248
    ctx->pc = 0x27581Cu;
    SET_GPR_U32(ctx, 31, 0x275824u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x275824u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x275824u) { return; }
    ctx->pc = 0x275824u;
label_275824:
    // 0x275824: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x275824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275828: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x275828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27582c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27582cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x275830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275834: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x275834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x275838: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x275838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27583c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275840: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275844: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275848: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27584c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275850: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275854: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275858: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x275858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27585c: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x27585cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x275860: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275864: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x275864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x275868: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27586c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x27586cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x275870: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x275874: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x275874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x275878: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x275878u;
    SET_GPR_U32(ctx, 31, 0x275880u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x275880u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x275880u) { return; }
    ctx->pc = 0x275880u;
label_275880:
    // 0x275880: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x275880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x275884: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275888: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27588c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275890: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x275890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275894: 0x3c033fae  lui         $v1, 0x3FAE
    ctx->pc = 0x275894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16302 << 16));
    // 0x275898: 0x34635727  ori         $v1, $v1, 0x5727
    ctx->pc = 0x275898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22311);
    // 0x27589c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27589cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2758a0: 0x0  nop
    ctx->pc = 0x2758a0u;
    // NOP
    // 0x2758a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2758a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2758a8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2758a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2758ac: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x2758acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2758b0: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2758b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2758b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2758b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2758b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2758b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2758bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2758bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2758c0: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x2758c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2758c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2758c8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2758c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2758cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2758ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2758d0: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2758d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2758d4: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x2758d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x2758d8: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2758d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2758dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2758e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2758e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2758e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2758e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2758e8: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x2758e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x2758ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2758ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2758f0: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x2758f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2758f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2758f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2758f8: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x2758f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2758fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2758fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275900: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x275900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x275904: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275904u;
    {
        const bool branch_taken_0x275904 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x275904) {
            ctx->pc = 0x275918u;
            return;
        }
    }
    ctx->pc = 0x27590Cu;
    // 0x27590c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27590Cu;
    {
        const bool branch_taken_0x27590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27590c) {
            ctx->pc = 0x275918u;
            return;
        }
    }
    ctx->pc = 0x275914u;
    // 0x275914: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x275914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    ctx->pc = 0x275918u;
}
