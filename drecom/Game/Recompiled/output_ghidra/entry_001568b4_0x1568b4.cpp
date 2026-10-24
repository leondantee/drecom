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

// Function: entry_001568b4
// Address: 0x1568b4 - 0x1569a0
void entry_001568b4_0x1568b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001568b4_0x1568b4");
#endif

    ctx->pc = 0x1568b4u;

    // 0x1568b4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1568b8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1568bc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1568bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1568c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1568c4: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x1568c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1568c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1568cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1568ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1568d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1568d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1568d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1568d8: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x1568dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1568e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1568e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1568e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1568e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1568e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1568e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1568ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1568f0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1568f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1568f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1568f8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1568f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1568fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156900: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x156900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x156904: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x156904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156908: 0x0  nop
    ctx->pc = 0x156908u;
    // NOP
    // 0x15690c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15690cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156910: 0x3c0544e0  lui         $a1, 0x44E0
    ctx->pc = 0x156910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17632 << 16));
    // 0x156914: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x156914u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156918: 0x0  nop
    ctx->pc = 0x156918u;
    // NOP
    // 0x15691c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15691cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156920: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x156924: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x156924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x156928: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x156928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15692c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156934: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156938: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x15693c: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x156940: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x156940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156944: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x156944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x156948: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15694c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156950: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156954: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x156954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156958: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x156958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x15695c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x15695cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156960: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x156960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156964: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x156964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156968: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x15696c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15696cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156970: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156974: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156978: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x15697c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15697cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156980: 0x0  nop
    ctx->pc = 0x156980u;
    // NOP
    // 0x156984: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156988: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x15698c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156990: 0x0  nop
    ctx->pc = 0x156990u;
    // NOP
    // 0x156994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156998: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15699c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x15699cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x1569a0u;
}
